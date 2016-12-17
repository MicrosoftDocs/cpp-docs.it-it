---
title: "struct (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "struct"
  - "struct_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "costruttori struct"
ms.assetid: 3c6ba273-e248-4ff1-8c69-d2abcf1263c6
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# struct (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La parola chiave `struct` definisce un tipo di struttura e\/o una variabile di un tipo di struttura.  
  
## Sintassi  
  
```  
[template-spec] struct [ms-decl-spec] [tag [: base-list ]]  
{   
   member-list   
} [declarators];  
[struct] tag declarators;  
```  
  
#### Parametri  
 `template-spec`  
 Specifiche facoltative del modello.  Per ulteriori informazioni, vedere [Specifiche dei modelli](../Topic/Template%20Specifications.md).  
  
 `struct`  
 Parola chiave `struct`.  
  
 `ms-decl-spec`  
 Specifica della classe di archiviazione facoltativa.  Per ulteriori informazioni, fare riferimento alla parola chiave [\_\_declspec](../cpp/declspec.md).  
  
 `tag`  
 Nome del tipo assegnato alla struttura.  Il tag diventa una parola riservata nell'ambito della struttura.  Il tag è facoltativo.  Se omesso, viene definita una struttura anonima.  Per ulteriori informazioni, vedere [Tipi di classe anonima](../cpp/anonymous-class-types.md).  
  
 `base-list`  
 Elenco facoltativo delle classi o delle strutture da cui questa struttura deriverà i relativi membri.  Per ulteriori informazioni, vedere [Classi base](../cpp/base-classes.md).  Ogni classe base o nome di struttura può essere preceduto da un indicatore di accesso \([Public](../cpp/public-cpp.md), [Private](../cpp/private-cpp.md), [Protected](../cpp/protected-cpp.md)\) e dalla parola chiave [virtual](../cpp/virtual-cpp.md).  Per ulteriori informazioni, vedere la tabella di accesso ai membri in [Controllo accessi ai membri della classe](../misc/controlling-access-to-class-members.md).  
  
 `member-list`  
 Elenco dei membri della struttura.  Per ulteriori informazioni, fare riferimento a [Panoramica dei membri di classe](../cpp/class-member-overview.md).  L'unica differenza qui consiste nel fatto che viene utilizzato `struct` anziché `class`.  
  
 `declarators`  
 Elenco dei dichiaratori in cui sono specificati i nomi della classe.  Gli elenchi dei dichiaratori dichiarano una o più istanze del tipo di struttura.  I dichiaratori possono includere gli elenchi degli inizializzatori se tutti i membri dati della classe sono `public`.  Gli elenchi degli inizializzatori sono comuni nelle strutture poiché i membri dati sono `public` per impostazione predefinita.  Per ulteriori informazioni, vedere [Cenni preliminari sui dichiaratori](../cpp/overview-of-declarators.md).  
  
## Note  
 Un tipo di struttura è un tipo composto definito dall'utente.  È composto da campi o membri che possono avere tipi diversi.  
  
 In C\+\+, una struttura è la stessa di una classe a parte il fatto che i relativi membri sono `public` per impostazione predefinita.  
  
 Per informazioni sulle classi gestite e gli struct, vedere [Classi e struct](../windows/classes-and-structs-cpp-component-extensions.md).\<  
  
## Utilizzo di una struttura  
 In C, è necessario utilizzare in modo esplicito la parola chiave `struct` per dichiarare una struttura.  In C\+\+ non è necessario utilizzare la parola chiave `struct` dopo la definizione del tipo.  
  
 È possibile dichiarare delle variabili quando il tipo di struttura viene definito inserendo uno o più nomi di variabili delimitati da virgole tra la parentesi graffa di chiusura e il punto e virgola.  
  
 Le variabili di struttura possono essere inizializzate.  L'inizializzazione per ogni variabile deve essere racchiusa in parentesi graffe.  
  
 Per informazioni correlate, vedere [class](../cpp/class-cpp.md), [union](../cpp/unions.md) e [enum](../cpp/enumerations-cpp.md).  
  
## Esempio  
  
```  
#include <iostream>  
using namespace std;  
  
struct PERSON {   // Declare PERSON struct type  
    int age;   // Declare member types  
    long ss;  
    float weight;  
    char name[25];  
} family_member;   // Define object of type PERSON  
  
struct CELL {   // Declare CELL bit field  
    unsigned short character  : 8;  // 00000000 ????????  
    unsigned short foreground : 3;  // 00000??? 00000000  
    unsigned short intensity  : 1;  // 0000?000 00000000  
    unsigned short background : 3;  // 0???0000 00000000  
    unsigned short blink      : 1;  // ?0000000 00000000  
} screen[25][80];       // Array of bit fields   
  
int main() {  
    struct PERSON sister;   // C style structure declaration  
    PERSON brother;   // C++ style structure declaration  
    sister.age = 13;   // assign values to members  
    brother.age = 7;  
    cout << "sister.age = " << sister.age << '\n';  
    cout << "brother.age = " << brother.age << '\n';  
  
    CELL my_cell;  
    my_cell.character = 1;  
    cout << "my_cell.character = " << my_cell.character;  
}  
// Output:  
// sister.age = 13  
// brother.age = 7  
// my_cell.character = 1  
```  
  
## Vedere anche  
 [\(NOTINBUILD\) Defining Class Types](http://msdn.microsoft.com/it-it/e8c65425-0f3a-4dca-afc2-418c3b1e57da)