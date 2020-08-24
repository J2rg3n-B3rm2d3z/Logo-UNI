#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>

void logo()
{
	int i;
	clrscr();

	/*Bordes con parpadeo*/
	textcolor(WHITE + BLINK);
	for(i=1;i<80;i++)
	{
		gotoxy(i,2);
		cprintf("%c",177);
		gotoxy(i,24);
		cprintf("%c",177);
	}
	for(i=2;i<25;i++)
	{
		gotoxy(1,i);
		cprintf("%c",177);
		gotoxy(80,i);
		cprintf("%c",177);
	}

	/*       Logo UNI       */

	/*=== DIBUJO DE LA U ===*/
	/*Primera linea vertical*/
	textcolor(BLUE);
	textbackground(BLUE);
	for(i=4;i<23;i++)
	{
		gotoxy(9,i);
		cprintf("    %c    ",219);
		delay(20);
	}
	/*Primera linea horizontal*/
	for(i=9;i<36;i++)
	{
		gotoxy(i,19);
		cprintf("          ");
		gotoxy(i,20);
		cprintf("          ");
		gotoxy(i,21);
		cprintf("          ");
		gotoxy(i,22);
		cprintf("          ");
		delay(20);
	}
	/*Segunda fila vertical*/
	for(i=19;i>10;i--)
	{
		gotoxy(35,i);
		cprintf("          ");
		delay(20);
	}

	/*=== DIBUJO DE LA N ===*/
	/*  PRIMERA FILA VERTICAL*/
	for(i=16;i>3;i--)
	{
		gotoxy(21,i);
		cprintf("           ");
		delay(20);
	}
	/* SEGUNDA FILA HORIZONTAL */
	for(i=21;i<38;i++)
	{
		gotoxy(i,4);
		cprintf("           ");
		gotoxy(i,5);
		cprintf("           ");
		gotoxy(i,6);
		cprintf("           ");
		gotoxy(i,7);
		cprintf("           ");
		gotoxy(i,8);
		cprintf("           ");
		delay(20);
	}
	/* SEGUNDA FILA VERTICAL */
	for(i=4;i<23;i++)
	{
		gotoxy(48,i);
		cprintf("           ");
		delay(20);
	}

	/*=== DIBUJO DE LA I ===*/
	/* PRIMERA LINEA HORIZONTAL*/
	for(i=50;i<53;i++)
	{
		gotoxy(i,22);
		cprintf("           ");
		gotoxy(i,21);
		cprintf("           ");
		gotoxy(i,20);
		cprintf("           ");
		delay(20);
	}
	/* PRIMERA LINEA VERTICAL */
	for(i=22;i>10;i--)
	{
		gotoxy(63,i);
		cprintf("           ");
		delay(20);
	}
	/* CUADRADO FINAL */
	for(i=8;i>3;i--)
	{
		gotoxy(63,i);
		cprintf("           ");
		delay(20);
	}
	delay(100);
}