/*
 * Copyright (C) 2015-2016 Actor LLC. <https://actor.im>
 */

import { Store } from 'flux/utils';
import Dispatcher from '../dispatcher/ActorAppDispatcher';
import { ActionTypes } from '../constants/ActorAppConstants';

let _isOpen = false;
let _isOutgoing = false;
let _id, _members, _peer, _state;

class CallStore extends Store {
  constructor(dispatcher) {
    super(dispatcher);
  }

  isOpen() {
    return _isOpen;
  }

  isOutgoing() {
    return _isOutgoing
  }

  getId() {
    return _id;
  }

  getMembers() {
    return _members;
  }

  getPeer() {
    return _peer;
  }

  getState() {
    return _state;
  }

  __onDispatch(action) {
    switch(action.type) {
      case ActionTypes.CALL_MODAL_OPEN:
        _isOpen = true;
        _id  = action.id;
        this.__emitChange();
        break;
      case ActionTypes.CALL_MODAL_HIDE:
        _isOpen = false;
        this.__emitChange();
        break;
      case ActionTypes.CALL_CHANGED:
        const { members, peer, state, isOutgoing } = action.call;
        _isOutgoing = isOutgoing;
        _members = members;
        _peer = peer;
        _state = state;
        this.__emitChange();
        break;
      case ActionTypes.CALL:
        // console.debug('ActionTypes.CALL', action);
        break;
      default:
    }
  };
}

export default new CallStore(Dispatcher);
