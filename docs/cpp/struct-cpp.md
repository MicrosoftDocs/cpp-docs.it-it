---
title: struct (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- struct_cpp
dev_langs:
- C++
helpviewer_keywords:
- struct constructors
ms.assetid: 3c6ba273-e248-4ff1-8c69-d2abcf1263c6
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 331244a7f9c8e719756c8cf691946f3babc594cf
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="struct-c"></a>struct (C++)
La parola chiave `struct` definisce un tipo di struttura e/o una variabile di un tipo di struttura.  
  
## <a name="syntax"></a>Sintassi  
  
```  
[template-spec] struct[ms-decl-spec] [tag [: base-list ]]  
{   
   member-list   
} [declarators];  
[struct] tag declarators;  
```  
  
#### <a name="parameters"></a>Parametri  
 `template-spec`  
 Specifiche facoltative del modello. Per ulteriori informazioni, vedere [specifiche del modello](templates-cpp.md).  
  
 `struct`  
 Parola chiave `struct`.  
  
 `ms-decl-spec`  
 Specifica della classe di archiviazione facoltativa. Per ulteriori informazioni, vedere il [declspec](../cpp/declspec.md) (parola chiave).  
  
 `tag`  
 Nome del tipo assegnato alla struttura. Il tag diventa una parola riservata nell'ambito della struttura. Il tag è facoltativo. Se omesso, viene definita una struttura anonima. Per ulteriori informazioni, vedere [tipi di classe anonima](../cpp/anonymous-class-types.md).  
  
 `base-list`  
 Elenco facoltativo delle classi o delle strutture da cui questa struttura deriverà i relativi membri. Vedere [le classi di Base](../cpp/base-classes.md) per ulteriori informazioni. Ogni nome di classe o struttura di base può essere preceduto da un identificatore di accesso ([pubblica](../cpp/public-cpp.md), [privata](../cpp/private-cpp.md), [protetti](../cpp/protected-cpp.md)) e [virtuale](../cpp/virtual-cpp.md) parola chiave. Vedere la tabella di accesso ai membri in [controllo dell'accesso ai membri della classe](member-access-control-cpp.md) per ulteriori informazioni.  
  
 `member-list`  
 Elenco dei membri della struttura. Fare riferimento a [Panoramica membro della classe](../cpp/class-member-overview.md) per ulteriori informazioni. L'unica differenza qui consiste nel fatto che viene utilizzato `struct` anziché `class`.  
  
 `declarators`  
 Elenco dei dichiaratori in cui sono specificati i nomi della classe. Gli elenchi dei dichiaratori dichiarano una o più istanze del tipo di struttura. I dichiaratori possono includere gli elenchi degli inizializzatori se tutti i membri dati della classe sono `public`. Gli elenchi degli inizializzatori sono comuni nelle strutture poiché i membri dati sono `public` per impostazione predefinita.  Vedere [Panoramica di dichiaratori](../cpp/overview-of-declarators.md) per ulteriori informazioni.  
  
## <a name="remarks"></a>Note  
 Un tipo di struttura è un tipo composto definito dall'utente. È composto da campi o membri che possono avere tipi diversi.  
  
 In C++, una struttura è la stessa di una classe a parte il fatto che i relativi membri sono `public` per impostazione predefinita.  
  
 Per informazioni sulle classi gestite e gli struct, vedere [classi e struct](../windows/classes-and-structs-cpp-component-extensions.md).  
  
## <a name="using-a-structure"></a>Utilizzo di una struttura  
 In C, è necessario utilizzare in modo esplicito la parola chiave `struct` per dichiarare una struttura. In C++ non è necessario utilizzare la parola chiave `struct` dopo la definizione del tipo.  
  
 È possibile dichiarare delle variabili quando il tipo di struttura viene definito inserendo uno o più nomi di variabili delimitati da virgole tra la parentesi graffa di chiusura e il punto e virgola.  
  
 Le variabili di struttura possono essere inizializzate. L'inizializzazione per ogni variabile deve essere racchiusa in parentesi graffe.  
  
 Per informazioni correlate, vedere [classe](../cpp/class-cpp.md), [unione](../cpp/unions.md), e [enum](../cpp/enumerations-cpp.md).  
  
## <a name="example"></a>Esempio  
  
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
  
