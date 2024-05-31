#include "shell_main.h"

#include "command.h"
#include "../libc/boolean.h"
#include "../libc/ending.h"
#include "../libc/init.h"
#include "../libc/io.h"
#include "../libc/memory.h"
#include "../libc/string.h"
#include "../libc/video.h"

void shell_main(void)
{
    cls();

    println("Executing the shell...", OUTPUT_COLOR);

    if (get_video_type() == VIDEO_TYPE_COLOR)
    {
        println("Your video card is colored!", OUTPUT_COLOR);
    }
    else
    {
        end();
    }

    init();

    print("\n", OUTPUT_COLOR);

    println("Welcome to Orlan and Adilzhan OS!", OUTPUT_COLOR);
    println("Type HELP for help.", OUTPUT_COLOR);

    while(TRUE)
    {
        show_prompt();
        char * str = input();
        command_execute(str);
    }
}

void show_prompt(void)
{
    print(">", PROMPT_COLOR);
}
