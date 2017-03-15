---
title: "Tipi di classe anonimi | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tipi di classe anonimi"
  - "tipi di classi, anonimi"
ms.assetid: 9ba667b2-8c2a-4c29-82a6-fa120b9233c8
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Tipi di classe anonimi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le classi possono essere anonime, ovvero possono essere dichiarate senza *identifier*.  Ciò si rivela utile quando si sostituisce il nome di una classe con un nome `typedef`, come illustrato di seguito:  
  
```  
typedef struct  
{  
    unsigned x;  
    unsigned y;  
} POINT;  
```  
  
> [!NOTE]
>  L'utilizzo di classi anonime illustrato con l'esempio precedente è utile per preservare la compatibilità con il codice C esistente.  Il alcuni codici C, è diffuso l'utilizzo di `typedef` insieme alle strutture anonime.  
  
 Le classi anonime sono utili anche quando si desidera che un riferimento al membro di classe venga visualizzato come se non fosse contenuto in una classe separata, come illustrato di seguito:  
  
```  
struct PTValue  
{  
    POINT ptLoc;  
    union  
    {  
        int  iValue;  
        long lValue;  
    };  
};  
  
PTValue ptv;  
```  
  
 Nel codice precedente, è possibile accedere a `iValue` usando l'operatore di selezione dei membri dell'oggetto \(**.**\) come descritto di seguito:  
  
```  
int i = ptv.iValue;  
```  
  
 Le classi anonime sono soggette a determinate restrizioni.  Per altre informazioni sulle unioni anonime, vedere [Unioni](../cpp/unions.md). Le classi anonime:  
  
-   Non possono avere un costruttore o un distruttore.  
  
-   Non possono essere passate come argomenti alle funzioni \(a meno che il controllo dei tipi non venga aggirato usando i puntini di sospensione\).  
  
-   Non possono essere restituite dalle funzioni come valori restituiti.  
  
## Struct anonimi  
  
### Sezione specifica Microsoft  
 Un'estensione C Microsoft consente di dichiarare una variabile di struttura in un'altra struttura senza assegnarle un nome.  Queste strutture annidate vengono chiamate strutture anonime.  Il linguaggio C\+\+ non consente strutture anonime.  
  
 È possibile accedere ai membri di una struttura anonima come se fossero membri della struttura contenitore.  
  
```  
// anonymous_structures.c  
#include <stdio.h>  
  
struct phone  
{  
    int  areacode;  
    long number;  
};  
  
struct person  
{  
    char   name[30];  
    char   gender;  
    int    age;  
    int    weight;  
    struct phone;    // Anonymous structure; no name needed  
} Jim;  
  
int main()  
{  
    Jim.number = 1234567;  
    printf_s("%d\n", Jim.number);     
}  
//Output: 1234567  
```  
  
### Fine sezione specifica Microsoft  
  
## Vedere anche  
 [\(NOTINBUILD\) Defining Class Types](http://msdn.microsoft.com/it-it/e8c65425-0f3a-4dca-afc2-418c3b1e57da)