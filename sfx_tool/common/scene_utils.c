
struct SCENE {
    void (*init) (void);
    void (*show) (void);
    void (*mainloop) (void);
    void (*hide) (void);
};

struct SCENE_TREE {
    byte active_scene_id;
    struct SCENE scene[ SCENES_COUNT ];
    struct SCENE active_scene;
};

extern struct SCENE_TREE scene_tree;

// scene_tree.change_scene( SOUNDS_WINDOW );
void change_scene_to( byte SCENE_ID ) {

    scene_tree.active_scene.hide();

    scene_tree.active_scene.init      = scene_tree.scene[ SCENE_ID ].init;
    scene_tree.active_scene.show      = scene_tree.scene[ SCENE_ID ].show;
    scene_tree.active_scene.mainloop  = scene_tree.scene[ SCENE_ID ].mainloop;
    scene_tree.active_scene.hide      = scene_tree.scene[ SCENE_ID ].hide;

    scene_tree.active_scene_id = SCENE_ID;

    scene_tree.active_scene.show();

}

