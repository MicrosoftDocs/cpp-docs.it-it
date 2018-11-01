---
title: struct (C++)
ms.date: 11/04/2016
f1_keywords:
- struct_cpp
helpviewer_keywords:
- struct constructors
ms.assetid: 3c6ba273-e248-4ff1-8c69-d2abcf1263c6
ms.openlocfilehash: 4fb08d02f3d939e6757c41519a2afabc8caa862c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50551294"
---
# <a name="struct-c"></a>struct (C++)

Il **struct** (parola chiave) definisce un tipo di struttura e/o una variabile di un tipo di struttura.

## <a name="syntax"></a>Sintassi

```
[template-spec] struct[ms-decl-spec] [tag [: base-list ]]
{ 
   member-list 
} [declarators];
[struct] tag declarators;
```

#### <a name="parameters"></a>Parametri

*modello-spec*<br/>
Specifiche facoltative del modello. Per altre informazioni, consultare [specifiche del modello](templates-cpp.md).

*struct*<br/>
Il **struct** (parola chiave).

*MS-decl-spec*<br/>
Specifica della classe di archiviazione facoltativa. Per altre informazioni, vedere la [declspec](../cpp/declspec.md) (parola chiave).

*Tag*<br/>
Nome del tipo assegnato alla struttura. Il tag diventa una parola riservata nell'ambito della struttura. Il tag è facoltativo. Se omesso, viene definita una struttura anonima. Per altre informazioni, vedere [tipi di classe anonimi](../cpp/anonymous-class-types.md).

*base-list*<br/>
Elenco facoltativo delle classi o delle strutture da cui questa struttura deriverà i relativi membri. Visualizzare [le classi di Base](../cpp/base-classes.md) per altre informazioni. Ogni nome di classe o struttura di base può essere preceduto da un identificatore di accesso ([pubbliche](../cpp/public-cpp.md), [privato](../cpp/private-cpp.md), [protette](../cpp/protected-cpp.md)) e il [virtuale](../cpp/virtual-cpp.md) parola chiave. Vedere la tabella di accesso ai membri nella [controllo dell'accesso ai membri della classe](member-access-control-cpp.md) per altre informazioni.

*elenco di membri*<br/>
Elenco dei membri della struttura. Fare riferimento a [Panoramica della classe membro](../cpp/class-member-overview.md) per altre informazioni. L'unica differenza è che **struct** viene usato al posto di **classe**.

*dichiaratori*<br/>
Elenco dei dichiaratori in cui sono specificati i nomi della classe. Gli elenchi dei dichiaratori dichiarano una o più istanze del tipo di struttura. I dichiaratori possono includere gli elenchi di inizializzatori se tutti i membri dati della classe vengono **pubblica**. Gli elenchi di inizializzatori sono comuni nelle strutture poiché i membri dati sono **pubblica** per impostazione predefinita.  Visualizzare [panoramica dei dichiaratori](../cpp/overview-of-declarators.md) per altre informazioni.

## <a name="remarks"></a>Note

Un tipo di struttura è un tipo composto definito dall'utente. È composto da campi o membri che possono avere tipi diversi.

In C++, una struttura è uguale a una classe ad eccezione del fatto che i relativi membri siano **pubblica** per impostazione predefinita.

Per informazioni sulle classi gestite e gli struct, vedere [classi e struct](../windows/classes-and-structs-cpp-component-extensions.md).

## <a name="using-a-structure"></a>Utilizzo di una struttura

In C, è necessario usare in modo esplicito il **struct** una parola chiave per dichiarare una struttura. In C++, non è necessario usare il **struct** (parola chiave) dopo aver definito il tipo.

È possibile dichiarare delle variabili quando il tipo di struttura viene definito inserendo uno o più nomi di variabili delimitati da virgole tra la parentesi graffa di chiusura e il punto e virgola.

Le variabili di struttura possono essere inizializzate. L'inizializzazione per ogni variabile deve essere racchiusa in parentesi graffe.

Per informazioni correlate, vedere [classe](../cpp/class-cpp.md), [union](../cpp/unions.md), e [enum](../cpp/enumerations-cpp.md).

## <a name="example"></a>Esempio

```cpp
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