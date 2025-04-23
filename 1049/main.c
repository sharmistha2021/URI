//#INCLUDE <STDIO.H>
//
//
//INT MAIN()
//{
//    CHAR N1[20], N2[20], N3[20];
//    SCANF("%S%S%S", &N1[20], &N2[20], &N3[20]);
//    IF(N1 == "VERTEBRADO")
//    {
//        IF(N2 == "MAMIFERO")
//        {
//            IF(N3 == "ONIVORO")
//                PRINTF("HOMEM\N");
//            ELSE
//                PRINTF("VACA\N");
//        }
//        ELSE
//        {
//            IF(N3 == "CARNIVORO")
//                PRINTF("AGUIA\N");
//            ELSE
//                PRINTF("POMBA\N");
//        }
//    }
//
//    ELSE
//    {
//        if(N2 == "inseto")
//        {
//            if(N3 == "hematofago")
//                printf("pulga\n");
//            else
//                printf("lagarta\n");
//        }
//        else
//        {
//            if(N3 == "hematofago")
//                printf("sanguessuga\n");
//            else
//                printf("minhoca\n");
//        }
//    }
//    return 0;
//}
#include<stdio.h>

main()
{
	char N[10],N1[10],N2[10];
	scanf("%s %s %s",&N[10],&N1[10],&N2[10]);
		if(N=="invertebrado"){
			if(N1=="inseto"){
				if(N2=="hematofago") printf("pulga\n");
				else printf("largarta\n");
					}
						else if(N1=="anelideo") {
								if(N2=="hematofago") printf("sanguessuga\n");
								else printf("minhoca\n");
							}
		}
			else if(N=="vertebrado"){
					if(N1=="ave"){
						if(N2=="carnivoro") printf("aguia\n");
						else printf("pomba\n");
						}
							else if(N1=="mamifero") {
									if(N2=="onivoro") printf("homem\n");
									else printf("vaca\n");
							}

				}
}
