---
title: Dichiaratore di riferimento lvalue:&amp;
ms.date: 11/04/2016
f1_keywords:
- '&'
helpviewer_keywords:
- reference operator
- '& operator [C++], reference operator'
ms.assetid: edf0513d-3dcc-4663-b276-1269795dda51
ms.openlocfilehash: 30dd6ba9cb91395f72124cad71908a4e6bcdf7dd
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87225982"
---
# <a name="lvalue-reference-declarator-amp"></a>Dichiaratore di riferimento lvalue:&amp;

Contiene l'indirizzo di un oggetto, ma sintatticamente si comporta come un oggetto.

## <a name="syntax"></a>Sintassi

```
type-id & cast-expression
```

## <a name="remarks"></a>Osservazioni

È possibile considerare un riferimento lvalue come nome alternativo per un oggetto. Una dichiarazione di riferimento lvalue è costituita da un elenco facoltativo di identificatori seguiti da un dichiaratore di riferimento. Un riferimento deve essere inizializzato e non può essere modificato.

Qualsiasi oggetto il cui l'indirizzo può essere convertito in un dato tipo di puntatore, può anche essere convertito in un tipo di riferimento simile. Ad esempio, qualsiasi oggetto il cui l'indirizzo può essere convertito in un tipo `char *`, può anche essere convertito in un tipo `char &`.

Non confondere le dichiarazioni di riferimento con l'uso dell' [operatore address-of](../cpp/address-of-operator-amp.md). Quando l' `&` *identificatore* è preceduto da un tipo, ad esempio **`int`** o **`char`** , l' *identificatore* viene dichiarato come un riferimento al tipo. Quando `&` l' *identificatore* non è preceduto da un tipo, l'utilizzo è quello dell'operatore address-of.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato il dichiaratore di riferimento dichiarando un oggetto `Person` e un riferimento a tale oggetto. Poiché `rFriend` è un riferimento a `myFriend`, l'aggiornamento delle variabili modifica lo stesso oggetto.

```cpp
// reference_declarator.cpp
// compile with: /EHsc
// Demonstrates the reference declarator.
#include <iostream>
using namespace std;

struct Person
{
    char* Name;
    short Age;
};

int main()
{
   // Declare a Person object.
   Person myFriend;

   // Declare a reference to the Person object.
   Person& rFriend = myFriend;

   // Set the fields of the Person object.
   // Updating either variable changes the same object.
   myFriend.Name = "Bill";
   rFriend.Age = 40;

   // Print the fields of the Person object to the console.
   cout << rFriend.Name << " is " << myFriend.Age << endl;
}
```

```Output
Bill is 40
```

## <a name="see-also"></a>Vedere anche

[Riferimenti](../cpp/references-cpp.md)<br/>
[Argomenti della funzione di tipo riferimento](../cpp/reference-type-function-arguments.md)<br/>
[La funzione di tipo riferimento restituisce](../cpp/reference-type-function-returns.md)<br/>
[Riferimenti a puntatori](../cpp/references-to-pointers.md)
