#include<graphics.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int dy = 100;
int tx = 500;
int front = 6 , back = 12;
void frame1()
{
    int i = 0;
    int head[14] = {186, 181, 167, 134, 153, 133, 137, 146, 130, 139, 161, 109, 202, 144};
    int body[10] = {187, 144, 186, 197, 308, 197, 307, 146, 187, 144};
    int l1[6] = {186, 197, 162, 207, 187, 242};
    int l2[4] = {196, 197, 201, 271};
    int l3[4] = {293, 197, 287, 271};
    int l4[6] = {308, 197, 323, 206, 294, 245};
    for (i = 0; i < 14; i = i + 2)
    {
        head[i] = head[i] + tx;
    }
    for (i = 0; i < 10; i = i + 2)
    {
        body[i] = body[i] + tx;
    }
    for (i = 0; i < 6; i = i + 2)
    {
        l1[i] = l1[i] + tx;
        l4[i] = l4[i] + tx;
    }
    for (i = 0; i < 4; i = i + 2)
    {
        l2[i] = l2[i] + tx;
        l3[i] = l3[i] + tx;
    }
    line(0, 272, getmaxx(), 272);
    setcolor(front);
    drawpoly(7, head);
    drawpoly(5, body);
    drawpoly(2, l2);
    drawpoly(3, l4);
    setcolor(back);
    drawpoly(3, l1);
    drawpoly(2, l3);
    delay(dy);
}
void frame2() // 10
{
    int i = 0;
    int head[14] = {187, 178, 168, 132, 155, 130, 138, 145, 131, 138, 163, 105, 202, 140};
    int body[10] = {186, 140, 187, 193, 307, 193, 307, 141, 186, 140};
    int l1[6] = {187, 193, 159, 202, 174, 239};
    int l2[4] = {199, 193, 210, 272};
    int l3[4] = {297, 193, 302, 271};
    int l4[6] = {302, 193, 314, 210, 286, 245};
    for (i = 0; i < 14; i = i + 2)
    {
        head[i] = head[i] + tx;
    }
    for (i = 0; i < 10; i = i + 2)
    {
        body[i] = body[i] + tx;
    }
    for (i = 0; i < 6; i = i + 2)
    {
        l1[i] = l1[i] + tx;
        l4[i] = l4[i] + tx;
    }
    for (i = 0; i < 4; i = i + 2)
    {
        l2[i] = l2[i] + tx;
        l3[i] = l3[i] + tx;
    }
    line(0, 272, getmaxx(), 272);
    setcolor(front);
    drawpoly(7, head);
    drawpoly(5, body);
    drawpoly(2, l2);
    drawpoly(3, l4);
    setcolor(back);
    drawpoly(3, l1);
    drawpoly(2, l3);
    delay(dy);
}
void frame4()

{
    int i = 0;
    int head[14] = {187, 176, 169, 129, 158, 127, 141, 144, 133, 136, 162, 103, 202, 135};
    int body[10] = {186, 135, 187, 188, 307, 187, 307, 135, 186, 135};
    int l1[6] = {187, 188, 156, 197, 161, 234};
    int l2[4] = {202, 189, 218, 271};
    int l3[4] = {302, 187, 315, 273};
    int l4[6] = {295, 187, 305, 209, 274, 247};
    for (i = 0; i < 14; i = i + 2)
    {
        head[i] = head[i] + tx;
    }
    for (i = 0; i < 10; i = i + 2)
    {
        body[i] = body[i] + tx;
    }
    for (i = 0; i < 6; i = i + 2)
    {
        l1[i] = l1[i] + tx;
        l4[i] = l4[i] + tx;
    }
    for (i = 0; i < 4; i = i + 2)
    {
        l2[i] = l2[i] + tx;
        l3[i] = l3[i] + tx;
    }
    line(0, 272, getmaxx(), 272);
    setcolor(front);
    drawpoly(7, head);
    drawpoly(5, body);
    drawpoly(2, l2);
    drawpoly(3, l4);
    setcolor(back);
    drawpoly(3, l1);
    drawpoly(2, l3);
    delay(dy);
}
void frame5() // 12
{
    int i = 0;
    int head[14] = {187, 173, 169, 126, 158, 125, 142, 142, 134, 135, 164, 100, 200, 132};
    int body[10] = {187, 133, 186, 185, 308, 184, 306, 132, 187, 133};
    int l1[6] = {187, 186, 164, 204, 148, 244};
    int l2[6] = {206, 185, 210, 225, 229, 266};
    int l3[4] = {303, 185, 331, 262};
    int l4[6] = {293, 185, 294, 216, 261, 254};
    for (i = 0; i < 14; i = i + 2)
    {
        head[i] = head[i] + tx;
    }
    for (i = 0; i < 10; i = i + 2)
    {
        body[i] = body[i] + tx;
    }
    for (i = 0; i < 6; i = i + 2)
    {
        l1[i] = l1[i] + tx;
        l2[i] = l2[i] + tx;
        l4[i] = l4[i] + tx;
    }
    for (i = 0; i < 4; i = i + 2)
    {
        l3[i] = l3[i] + tx;
    }
    line(0, 272, getmaxx(), 272);
    setcolor(front);
    drawpoly(7, head);
    drawpoly(5, body);
    drawpoly(3, l2);
    drawpoly(3, l4);
    setcolor(back);
    drawpoly(3, l1);
    drawpoly(2, l3);
    delay(dy);
}
void frame6() // 13
{
    int i = 0;
    int head[14] = {186, 169, 170, 124, 158, 124, 143, 141, 135, 133, 164, 98, 200, 130};
    int body[10] = {186, 183, 308, 182, 306, 130, 186, 129, 186, 183};
    int l1[4] = {187, 183, 137, 255};
    int l2[6] = {208, 183, 212, 222, 237, 259};
    int l3[4] = {305, 182, 347, 256};
    int l4[6] = {291, 182, 282, 223, 251, 260};
    for (i = 0; i < 14; i = i + 2)
    {
        head[i] = head[i] + tx;
    }
    for (i = 0; i < 10; i = i + 2)
    {
        body[i] = body[i] + tx;
    }
    for (i = 0; i < 6; i = i + 2)
    {
        l2[i] = l2[i] + tx;
        l4[i] = l4[i] + tx;
    }
    for (i = 0; i < 4; i = i + 2)
    {
        l1[i] = l1[i] + tx;
        l3[i] = l3[i] + tx;
    }
    line(0, 272, getmaxx(), 272);
    setcolor(front);
    drawpoly(7, head);
    drawpoly(5, body);
    drawpoly(3, l2);
    drawpoly(3, l4);
    setcolor(back);
    drawpoly(2, l1);
    drawpoly(2, l3);
    delay(dy);
}
void frame7() // 14
{
    int i = 0;
    int head[14] = {200, 133, 164, 99, 134, 135, 141, 141, 159, 126, 169, 127, 187, 173};
    int body[10] = {187, 133, 187, 186, 308, 185, 307, 134, 187, 133};
    int l1[4] = {186, 186, 159, 261};
    int l2[6] = {206, 185, 201, 224, 228, 255};
    int l3[6] = {303, 185, 320, 204, 334, 249};
    int l4[4] = {294, 185, 253, 262};
    for (i = 0; i < 14; i = i + 2)
    {
        head[i] = head[i] + tx;
    }
    for (i = 0; i < 10; i = i + 2)
    {
        body[i] = body[i] + tx;
    }
    for (i = 0; i < 4; i = i + 2)
    {
        l1[i] = l1[i] + tx;
        l4[i] = l4[i] + tx;
    }
    for (i = 0; i < 6; i = i + 2)
    {
        l2[i] = l2[i] + tx;
        l3[i] = l3[i] + tx;
    }
    line(0, 272, getmaxx(), 272);
    setcolor(front);
    drawpoly(7, head);
    drawpoly(5, body);
    drawpoly(3, l2);
    drawpoly(2, l4);
    setcolor(back);
    drawpoly(2, l1);
    drawpoly(3, l3);
    delay(dy);
}
void frame9()
{
    int i = 0;
    int head[14] = {187, 179, 167, 130, 156, 130, 140, 144, 132, 137, 162, 105, 201, 139};
    int body[10] = {187, 141, 187, 193, 307, 193, 307, 140, 187, 141};
    int l1[6] = {192, 193, 172, 214, 196, 243};
    int l2[4] = {192, 192, 189, 270};
    int l3[4] = {294, 192, 274, 271};
    int l4[6] = {306, 192, 322, 206, 308, 244};
    for (i = 0; i < 14; i = i + 2)
    {
        head[i] = head[i] + tx;
    }
    for (i = 0; i < 10; i = i + 2)
    {
        body[i] = body[i] + tx;
    }
    for (i = 0; i < 6; i = i + 2)
    {
        l1[i] = l1[i] + tx;
        l4[i] = l4[i] + tx;
    }
    for (i = 0; i < 4; i = i + 2)
    {
        l2[i] = l2[i] + tx;
        l3[i] = l3[i] + tx;
    }
    line(0, 272, getmaxx(), 272);
    setcolor(front);
    drawpoly(7, head);
    drawpoly(5, body);
    drawpoly(3, l1);
    drawpoly(2, l3);
    setcolor(back);
    drawpoly(2, l2);
    drawpoly(3, l4);
    delay(dy);
}
void frame10()
{
    int i;
    int head[14] = {187, 178, 168, 132, 155, 130, 138, 145, 131, 138, 163, 105, 202, 140};
    int body[10] = {186, 140, 187, 193, 307, 193, 307, 141, 186, 140};
    int l1[6] = {187, 193, 159, 202, 174, 239};
    int l2[4] = {199, 193, 210, 272};
    int l3[4] = {297, 193, 302, 271};
    int l4[6] = {302, 193, 314, 210, 286, 245};
    for (i = 0; i < 14; i = i + 2)
    {
        head[i] = head[i] + tx;
    }
    for (i = 0; i < 10; i = i + 2)
    {
        body[i] = body[i] + tx;
    }
    for (i = 0; i < 6; i = i + 2)
    {
        l1[i] = l1[i] + tx;
        l4[i] = l4[i] + tx;
    }
    for (i = 0; i < 4; i = i + 2)
    {
        l2[i] = l2[i] + tx;
        l3[i] = l3[i] + tx;
    }
    line(0, 272, getmaxx(), 272);
    setcolor(front);
    drawpoly(7, head);
    drawpoly(5, body);
    drawpoly(3, l1);
    drawpoly(2, l3);
    setcolor(back);
    drawpoly(2, l2);
    drawpoly(3, l4);
    delay(dy);
}
void frame12()
{
    int i;
    int head[14] = {186, 171, 169, 126, 158, 125, 142, 142, 135, 134, 163, 100, 199, 133};
    int body[10] = {186, 133, 187, 185, 307, 184, 307, 133, 186, 133};
    int l1[6] = {187, 185, 162, 206, 149, 242};
    int l2[6] = {205, 186, 210, 221, 229, 264};
    int l3[4] = {304, 165, 331, 260};
    int l4[6] = {292, 185, 295, 213, 265, 251};
    for (i = 0; i < 14; i = i + 2)
    {
        head[i] = head[i] + tx;
    }
    for (i = 0; i < 10; i = i + 2)
    {
        body[i] = body[i] + tx;
    }
    for (i = 0; i < 6; i = i + 2)
    {
        l1[i] = l1[i] + tx;
        l2[i] = l2[i] + tx;
        l4[i] = l4[i] + tx;
    }
    for (i = 0; i < 4; i = i + 2)
    {
        l3[i] = l3[i] + tx;
    }
    line(0, 272, getmaxx(), 272);
    setcolor(front);
    drawpoly(7, head);
    drawpoly(5, body);
    drawpoly(3, l1);
    drawpoly(2, l3);
    setcolor(back);
    drawpoly(3, l2);
    drawpoly(3, l4);
    delay(dy);
}
void frame13()
{
    int i;
    int head[14] = {186, 169, 170, 124, 158, 124, 143, 141, 135, 133, 164, 98, 200, 130};
    int body[10] = {186, 183, 308, 182, 306, 130, 186, 129, 186, 183};
    int l1[4] = {187, 183, 137, 255};
    int l2[6] = {208, 183, 212, 222, 237, 259};
    int l3[4] = {305, 182, 347, 256};
    int l4[6] = {291, 182, 282, 223, 251, 260};
    for (i = 0; i < 14; i = i + 2)
    {
        head[i] = head[i] + tx;
    }
    for (i = 0; i < 10; i = i + 2)
    {
        body[i] = body[i] + tx;
    }
    for (i = 0; i < 6; i = i + 2)
    {
        l2[i] = l2[i] + tx;
        l4[i] = l4[i] + tx;
    }
    for (i = 0; i < 4; i = i + 2)
    {
        l1[i] = l1[i] + tx;
        l3[i] = l3[i] + tx;
    }
    line(0, 272, getmaxx(), 272);
    setcolor(front);
    drawpoly(7, head);
    drawpoly(5, body);
    drawpoly(2, l1);
    drawpoly(2, l3);
    setcolor(back);
    drawpoly(3, l2);
    drawpoly(3, l4);
    delay(dy);
}
void frame14()
{
    int i;
    int head[14] = {200, 133, 164, 99, 134, 135, 141, 141, 159, 126, 169, 127, 187, 173};
    int body[10] = {187, 133, 187, 186, 308, 185, 307, 134, 187, 133};
    int l1[4] = {186, 186, 159, 261};
    int l2[6] = {206, 185, 201, 224, 228, 255};
    int l3[6] = {303, 185, 320, 204, 334, 249};
    int l4[4] = {294, 185, 253, 262};
    for (i = 0; i < 14; i = i + 2)
    {
        head[i] = head[i] + tx;
    }
    for (i = 0; i < 10; i = i + 2)
    {
        body[i] = body[i] + tx;
    }
    for (i = 0; i < 4; i = i + 2)
    {
        l1[i] = l1[i] + tx;
        l4[i] = l4[i] + tx;
    }
    for (i = 0; i < 6; i = i + 2)
    {
        l2[i] = l2[i] + tx;
        l3[i] = l3[i] + tx;
    }
    line(0, 272, getmaxx(), 272);
    setcolor(front);
    drawpoly(7, head);
    drawpoly(5, body);
    drawpoly(2, l1);
    drawpoly(3, l3);
    setcolor(back);
    drawpoly(3, l2);
    drawpoly(2, l4);
    delay(dy);
}
void frame15()
{
    int i;
    int head[14] = {187, 175, 169, 128, 159, 127, 141, 143, 135, 135, 164, 103, 201, 136};
    int body[10] = {187, 136, 186, 188, 307, 189, 307, 135, 187, 136};
    int l1[4] = {190, 190, 175, 270};
    int l2[6] = {201, 188, 183, 220, 212, 252};
    int l3[6] = {305, 188, 320, 202, 320, 248};
    int l4[4] = {294, 189, 261, 268};
    for (i = 0; i < 14; i = i + 2)
    {
        head[i] = head[i] + tx;
    }
    for (i = 0; i < 10; i = i + 2)
    {
        body[i] = body[i] + tx;
    }
    for (i = 0; i < 4; i = i + 2)
    {
        l1[i] = l1[i] + tx;
        l4[i] = l4[i] + tx;
    }
    for (i = 0; i < 6; i = i + 2)
    {
        l2[i] = l2[i] + tx;
        l3[i] = l3[i] + tx;
    }
    line(0, 272, getmaxx(), 272);
    setcolor(front);
    drawpoly(7, head);
    drawpoly(5, body);
    drawpoly(2, l1);
    drawpoly(3, l3);
    setcolor(back);
    drawpoly(3, l2);
    drawpoly(2, l4);
    delay(dy);
}
void repeat()
{
    int tf = 3;
    setbkcolor(WHITE);
    cleardevice();
    setcolor(2);
    tx = tx - tf;
}
void walk()
{
    while (1)
    {
        frame1();
        repeat();
        frame2();
        repeat();
        frame4();
        repeat();
        frame5();
        repeat();
        frame6();
        repeat();
        frame7();
        repeat();
        frame9();
        repeat();
        frame10();
        repeat();
        frame12();
        repeat();
        frame13();
        repeat();
        frame14();
        repeat();
        frame15();
        repeat();
    }
}
void main()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    walk();
    getch();
}