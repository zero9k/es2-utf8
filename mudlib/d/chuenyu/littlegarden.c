inherit ROOM;

void create()
{
        set("short", "花园");
        set("long", @LONG
这是刘老汉的小花园。花园里有很多美丽的花朵。刘老汉
就是靠卖花来维持生计的。现在正是花开的大好季节，有很多
人在剪花。
LONG
        );
        set("exits", ([ /* sizeof() == 1 */
        "south" : __DIR__"home",
        ]));
        set("objects", ([
        __DIR__"npc/flowergirl" : 5,
        ]) );
        set("outdoors", "chuenyu");
        setup();
}
                