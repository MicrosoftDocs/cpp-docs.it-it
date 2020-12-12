---
description: 'Altre informazioni su: struct (C++)'
title: struct (C++)
ms.date: 11/04/2016
f1_keywords:
- struct_cpp
helpviewer_keywords:
- struct constructors
ms.assetid: 3c6ba273-e248-4ff1-8c69-d2abcf1263c6
ms.openlocfilehash: 4c7f8ab04bec2f161e303c3fed93414332fddeb6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97246253"
---
# <a name="struct-c"></a>struct (C++)

La **`struct`** parola chiave definisce un tipo di struttura e/o una variabile di un tipo di struttura.

## <a name="syntax"></a>Sintassi

```
[template-spec] struct [ms-decl-spec] [tag [: base-list ]]
{
   member-list
} [declarators];
[struct] tag declarators;
```

#### <a name="parameters"></a>Parametri

*Template-spec*<br/>
Specifiche facoltative del modello. Per ulteriori informazioni, vedere le [specifiche del modello](templates-cpp.md).

*struct*<br/>
**`struct`** Parola chiave.

*MS-decl-spec*<br/>
Specifica della classe di archiviazione facoltativa. Per ulteriori informazioni, fare riferimento alla parola chiave [__declspec](../cpp/declspec.md) .

*tag*<br/>
Nome del tipo assegnato alla struttura. Il tag diventa una parola riservata nell'ambito della struttura. Il tag è facoltativo. Se omesso, viene definita una struttura anonima. Per ulteriori informazioni, vedere [tipi di classe anonimi](../cpp/anonymous-class-types.md).

*base-list*<br/>
Elenco facoltativo delle classi o delle strutture da cui questa struttura deriverà i relativi membri. Per ulteriori informazioni, vedere [classi di base](../cpp/base-classes.md) . Ogni classe base o nome di struttura può essere preceduto da un identificatore di accesso ([public](../cpp/public-cpp.md), [private](../cpp/private-cpp.md), [protected](../cpp/protected-cpp.md)) e dalla parola chiave [Virtual](../cpp/virtual-cpp.md) . Per ulteriori informazioni, vedere la tabella di accesso ai membri in [controllo dell'accesso ai membri della classe](member-access-control-cpp.md) .

*elenco membri*<br/>
Elenco dei membri della struttura. Per ulteriori informazioni, vedere [Cenni preliminari sui membri della classe](../cpp/class-member-overview.md) . L'unica differenza è che **`struct`** viene usato al posto di **`class`** .

*declarators*<br/>
Elenco di dichiaratori che specificano i nomi della struttura. Gli elenchi dei dichiaratori dichiarano una o più istanze del tipo di struttura. I dichiaratori possono includere elenchi di inizializzatori se tutti i membri dati della struttura sono **`public`** . Gli elenchi di inizializzatori sono comuni nelle strutture perché i membri dati sono **`public`** per impostazione predefinita.  Per ulteriori informazioni, vedere [Cenni preliminari sui dichiaratori](./declarations-and-definitions-cpp.md) .

## <a name="remarks"></a>Commenti

Un tipo di struttura è un tipo composto definito dall'utente. È composto da campi o membri che possono avere tipi diversi.

In C++, una struttura è la stessa di una classe, ad eccezione del fatto che i relativi membri sono **`public`** per impostazione predefinita.

Per informazioni sulle classi gestite e sugli struct in C++/CLI, vedere [classi e struct](../extensions/classes-and-structs-cpp-component-extensions.md).

## <a name="using-a-structure"></a>Utilizzo di una struttura

In C, è necessario usare in modo esplicito la **`struct`** parola chiave per dichiarare una struttura. In C++ non è necessario usare la **`struct`** parola chiave dopo che il tipo è stato definito.

È possibile dichiarare delle variabili quando il tipo di struttura viene definito inserendo uno o più nomi di variabili delimitati da virgole tra la parentesi graffa di chiusura e il punto e virgola.

Le variabili di struttura possono essere inizializzate. L'inizializzazione per ogni variabile deve essere racchiusa in parentesi graffe.

Per informazioni correlate, vedere [Class](../cpp/class-cpp.md), [Union](../cpp/unions.md)e [enum](../cpp/enumerations-cpp.md).

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
