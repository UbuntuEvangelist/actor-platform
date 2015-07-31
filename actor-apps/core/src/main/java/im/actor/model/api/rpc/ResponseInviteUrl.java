package im.actor.model.api.rpc;
/*
 *  Generated by the Actor API Scheme generator.  DO NOT EDIT!
 */

import im.actor.model.droidkit.bser.Bser;
import im.actor.model.droidkit.bser.BserValues;
import im.actor.model.droidkit.bser.BserWriter;

import org.jetbrains.annotations.Nullable;
import org.jetbrains.annotations.NotNull;

import java.io.IOException;
import im.actor.model.network.parser.*;

public class ResponseInviteUrl extends Response {

    public static final int HEADER = 0xb2;
    public static ResponseInviteUrl fromBytes(byte[] data) throws IOException {
        return Bser.parse(new ResponseInviteUrl(), data);
    }

    private String url;

    public ResponseInviteUrl(@NotNull String url) {
        this.url = url;
    }

    public ResponseInviteUrl() {

    }

    @NotNull
    public String getUrl() {
        return this.url;
    }

    @Override
    public void parse(BserValues values) throws IOException {
        this.url = values.getString(1);
    }

    @Override
    public void serialize(BserWriter writer) throws IOException {
        if (this.url == null) {
            throw new IOException();
        }
        writer.writeString(1, this.url);
    }

    @Override
    public String toString() {
        String res = "response InviteUrl{";
        res += "}";
        return res;
    }

    @Override
    public int getHeaderKey() {
        return HEADER;
    }
}
