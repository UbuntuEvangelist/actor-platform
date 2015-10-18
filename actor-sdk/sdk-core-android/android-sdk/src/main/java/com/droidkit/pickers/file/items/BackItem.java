package com.droidkit.pickers.file.items;

import com.droidkit.pickers.file.ExploreItemViewHolder;

import java.io.File;

import im.actor.messenger.R;

/**
 * Created by kiolt_000 on 01/10/2014.
 */
public class BackItem extends ExplorerItem {

    public BackItem() {
        super(new File(""), false, "build/intermediates/exploded-aar/com.droidkit/progress/0.5", R.drawable.picker_folder, true);
    }

    @Override
    public String getTitle() {
        return "build/intermediates/exploded-aar/com.droidkit/progress/0.5";
    }

    @Override
    public boolean isDirectory() {
        return true;
    }

    @Override
    public boolean isEnabled() {
        return true;
    }

    @Override
    public void bindData(ExploreItemViewHolder holder) {
        holder.setTitle(getTitle());
        holder.disableSubtitle();
        holder.enableDivider();
    }
}