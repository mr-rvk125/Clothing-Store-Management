                                                      /*clothing store management*/

#include<stdio.h>
struct clothing
{
char fabric[50],size[50],color[50],features[55];
float price;
}western,indian;
int main()
{
int choice;
printf("choose ur category of clothing:");
printf("\n1-women:2-men:\n");
scanf("%d",&choice);
if(choice==1)
{
printf("enter ur choice in women category::");
printf("\n1-western:2-indian\n");
scanf("%d",&choice);
if(choice==1)
{
struct clothing dearcase={"cotton","L,XL","grey,armygreen,light blue","streched,fitted,supersoft,not lined",18.99};
struct clothing newdow={"cotton","L,XL,XXL","black,green","fitted,soft",24.88};
struct clothing ruhaan={"chiffon","S,M,L,XL","black,beige","fit and streched",40};
struct clothing maisha={"wool","S,M,L,XL","purple(martiniqque)","fit",25.55};
struct clothing my_style={"cotton","L,XL","snowywhite","gud looking,fit,soft",58.99};
printf("choose ur fashion:");
printf("\n1-dearcase;\n2-newdow;\n3-ruhaan;\n4-maisha;\n5-my_style:\n");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("**specifications of dearcase are:\n");
	printf("fabric::  %s",dearcase.fabric);
	printf("\nsize::  %s",dearcase.size);
	printf("\ncolor::  %s",dearcase.color);
	printf("\nfeatures::  %s",dearcase.features);
	printf("\nprice in $::  %f\n",dearcase.price);
	break;
case 2: printf("**specifications of newdow are:\n");
	printf("fabric::  %s",newdow.fabric);
	printf("\nsize::  %s",newdow.size);
	printf("\ncolor::  %s",newdow.color);
	printf("\nfeatures::  %s",newdow.features);
	printf("\nprice in $::  %f\n",newdow.price);
	break;
case 3: printf("**specifications of ruhaan are:\n");
	printf("fabric::  %s",ruhaan.fabric);
	printf("\nsize::  %s",ruhaan.size);
	printf("\ncolor::  %s",ruhaan.color);
	printf("\nfeatures::  %s",ruhaan.features);
	printf("\nprice in $::  %f\n",ruhaan.price);
	break;
case 4: printf("**specifications of maisha are:\n");
	printf("fabric::  %s",maisha.fabric);
	printf("\nsize::  %s",maisha.size);
	printf("\ncolor::  %s",maisha.color);
	printf("\nfeatures::  %s",maisha.features);
	printf("\nprice in $::  %f\n",maisha.price);
	break;
case 5: printf("**specifications of my_style are:\n");
	printf("fabric::  %s",my_style.fabric);
	printf("\nsize::  %s",my_style.size);
	printf("\ncolor::  %s",my_style.color);
	printf("\nfeatures::  %s",my_style.features);
	printf("\nprice in $::  %f\n",my_style.price);
	break;
default:printf("invalid choice");
	break;
}
}
else if(choice==2)
{
struct clothing kanjivaram={"art silk","XL,XXL","red,light blue","sari,hand embroidary,wedding & festive wear,woven",2500};
struct clothing kurti={"faux creepe","S,L,XL,XXL","black,grey","printed style,ethnic wear,dry clean only",3400};
struct clothing satin_sari={"satin","M,L,XL","blue,beige","half sari,embroidered,attractive colour,dry clean only",1500};
struct clothing salwar_kameez={"silk","S,M,L,XL","orange","semi stitched,casual wear,floral print",1599};
struct clothing lehenga_kameez={"silk","L,XL","maroon","gujrati,embroidered,wedding wear",3000};
printf("choose ur fashion:");
printf("\n1-kanjivaram;\n2-kurti;\n3-satin_sari;\n4-salwar_kameez;\n5-lahenga_kameez:\n");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("**specifications of kanjivaram are:\n");
	printf("fabric::  %s",kanjivaram.fabric);
	printf("\nsize::  %s",kanjivaram.size);
	printf("\ncolor::  %s",kanjivaram.color);
	printf("\nfeatures::  %s",kanjivaram.features);
	printf("\nprice in rupees::  %f\n",kanjivaram.price);
	break;
case 2: printf("**specifications of kurti are:\n");
	printf("fabric::  %s",kurti.fabric);
	printf("\nsize::  %s",kurti.size);
	printf("\ncolor::  %s",kurti.color);
	printf("\nfeatures::  %s",kurti.features);
	printf("\nprice in rupees::  %f\n",kurti.price);
	break;
case 3: printf("**specifications of satin_sari are:\n");
	printf("fabric::  %s",satin_sari.fabric);
	printf("\nsize::  %s",satin_sari.size);
	printf("\ncolor::  %s",satin_sari.color);
	printf("\nfeatures::  %s",satin_sari.features);
	printf("\nprice in rupees::  %f\n",satin_sari.price);
	break;
case 4: printf("**specifications of salwar_kameez are:\n");
	printf("fabric::  %s",salwar_kameez.fabric);
	printf("\nsize::  %s",salwar_kameez.size);
	printf("\ncolor::  %s",salwar_kameez.color);
	printf("\nfeatures::  %s",salwar_kameez.features);
	printf("\nprice in rupees::  %f\n",salwar_kameez.price);
	break;
case 5: printf("**specifications of lehenga_kameez are:\n");
	printf("fabric::  %s",lehenga_kameez.fabric);
	printf("\nsize::  %s",lehenga_kameez.size);
	printf("\ncolor::  %s",lehenga_kameez.color);
	printf("\nfeatures::  %s",lehenga_kameez.features);
	printf("\nprice in rupees::  %f\n",lehenga_kameez.price);
	break;
default:printf("invalid choice");
	break;
}
}
else
printf("invalid choice");
}
else if(choice==2)
{
printf("enter ur choice in men category::");
printf("\n1-western:2-indian\n");
scanf("%d",&choice);
if(choice==1)
{
struct clothing blazer={"polyester","M,L,XL,XXL","grey,black shade","regular fit,party wear,tumble dry",2159};
struct clothing fab_wear={"cotton","M,L,XL","black,blue,mint green","regular fit",999};
struct clothing dennislingo={"cotton","S,M,L,XL","black,brown,orange","slim fit,full sleeve",568};
struct clothing benetton_suit={"cotton+poly","S,M,XL","dark blue","slim",1394};
struct clothing GAS_wear={"cotton","XS","blue shade","printed,do not bleach",6135};
printf("choose ur fashion:");
printf("\n1-blazer;\n2-fab_wear;\n3-dennislingo;\n4-benetton_suit;\n5-GAS_wear:\n");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("**specifications of blazer are:\n");
	printf("fabric::  %s",blazer.fabric);
	printf("\nsize::  %s",blazer.size);
	printf("\ncolor::  %s",blazer.color);
	printf("\nfeatures::  %s",blazer.features);
	printf("\nprice in rupees::  %f\n",blazer.price);
	break;
case 2: printf("**specifications of fab_wear are:\n");
	printf("fabric::  %s",fab_wear.fabric);
	printf("\nsize::  %s",fab_wear.size);
	printf("\ncolor::  %s",fab_wear.color);	
	printf("\nfeatures::  %s",fab_wear.features);
	printf("\nprice in rupees::  %f\n",fab_wear.price);
	break;
case 3: printf("**specifications of dennislingo are:\n");
	printf("fabric::  %s",dennislingo.fabric);	
	printf("\nsize::  %s",dennislingo.size);	
	printf("\ncolor::  %s",dennislingo.color);
	printf("\nfeatures::  %s",dennislingo.features);
	printf("\nprice in rupees::  %f\n",dennislingo.price);
	break;
case 4: printf("**specifications of benetton_suit are:\n");
	printf("fabric::  %s",benetton_suit.fabric);
	printf("\nsize::  %s",benetton_suit.size);
	printf("\ncolor::  %s",benetton_suit.color);
	printf("\nfeatures::  %s",benetton_suit.features);
	printf("\nprice in rupees::  %f\n",benetton_suit.price);
	break;
case 5: printf("**specifications of GAS_wear are:\n");
	printf("fabric::  %s",GAS_wear.fabric);
	printf("\nsize::  %s",GAS_wear.size);
	printf("\ncolor::  %s",GAS_wear.color);
	printf("\nfeatures::  %s",GAS_wear.features);
	printf("\nprice in rupees::  %f\n",GAS_wear.price);
	break;
default: printf("invalid choice");
	break;
}
}
else if(choice==2)
{
struct clothing pathani_kurtha={"denim,cotton","M,XL,XXL","light blue,blue","solid casual wear,full sleeve",999};
struct clothing shaurya={"silk jacquard","S,L,XL","beige,maroon","regular fit,embroidered",8999};
struct clothing dhoti={"cotton","L,XL,XXL","maroon","formal wedding and festive wear",525};
struct clothing sets={"jacquard","L,XL","blue","full sleeve",2299};
struct clothing sherwani={"jacquard","L","gold","wedding wear",7555};
printf("choose ur fashion:");
printf("\n1-pathani_kurtha;\n2-shaurya;\n3-dhoti;\n4-sets;\n5-sherwani:\n");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("**specifications of pathani_kurtha are:\n");
	printf("fabric::  %s",pathani_kurtha.fabric);
	printf("\nsize::  %s",pathani_kurtha.size);
	printf("\ncolor::  %s",pathani_kurtha.color);
	printf("\nfeatures::  %s",pathani_kurtha.features);
	printf("\nprice in rupees::  %f\n",pathani_kurtha.price);
	break;
case 2: printf("**specifications of shaurya are:\n");
	printf("fabric::  %s",shaurya.fabric);
	printf("\nsize::  %s",shaurya.size);
	printf("\ncolor::  %s",shaurya.color);
	printf("\nfeatures::  %s",shaurya.features);
	printf("\nprice in rupees::  %f\n",shaurya.price);
	break;
case 3: printf("**specifications of dhoti are:\n");
	printf("fabric::  %s",dhoti.fabric);
	printf("\nsize::  %s",dhoti.size);
	printf("\ncolor::  %s",dhoti.color);
	printf("\nfeatures::  %s",dhoti.features);
	printf("\nprice in rupees::  %f\n",dhoti.price);
	break;
case 4: printf("**specifications of sets are:\n");
	printf("fabric::  %s",sets.fabric);
	printf("\nsize::  %s",sets.size);
	printf("\ncolor::  %s",sets.color);
	printf("\nfeatures::  %s",sets.features);
	printf("\nprice in rupees::  %f\n",sets.price);
	break;
case 5: printf("**specifications of sherwani are:\n");
	printf("fabric::  %s",sherwani.fabric);
	printf("\nsize::  %s",sherwani.size);
	printf("\ncolor::  %s",sherwani.color);
	printf("\nfeatures::  %s",sherwani.features);
	printf("\nprice in rupees::  %f\n",sherwani.price);
	break;
default:printf("invalid choice");
	break;
}
}
else
printf("invalid choice");
}
else
printf("invalid choice");
}

