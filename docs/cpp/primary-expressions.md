---
title: Espressioni primarie
ms.date: 11/04/2016
helpviewer_keywords:
- primary expressions
- expressions [C++], name
- expressions [C++], literal
- expressions [C++], primary
- expressions [C++], qualified names
ms.assetid: 8ef9a814-6058-4b93-9b6e-e8eb8350b1ca
ms.openlocfilehash: c827f811813091abc62d07f12ac387bc2a0a0cc5
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87231143"
---
# <a name="primary-expressions"></a>Espressioni primarie

Le espressioni primarie sono i blocchi predefiniti di espressioni più complesse. Sono valori letterali, nomi e nomi qualificati dall'operatore di risoluzione dell'ambito (`::`).  Un'espressione primaria può avere uno dei seguenti formati:

```
literal
this
name
::name ( expression )
```

Un *valore letterale* è un'espressione primaria costante. Il tipo di tale valore letterale dipende dal formato della specifica. Per informazioni complete su come specificare i valori letterali, vedere [valori letterali](../cpp/numeric-boolean-and-pointer-literals-cpp.md) .

La **`this`** parola chiave è un puntatore a un oggetto classe. È disponibile all'interno delle funzioni membro non statiche e fa riferimento all'istanza della classe per cui è stata richiamata la funzione. La **`this`** parola chiave non può essere utilizzata all'esterno del corpo di una funzione membro di classe.

Il tipo di **`this`** puntatore è `type` ** \* const** (dove `type` è il nome della classe) all'interno di funzioni che non modificano in modo specifico il **`this`** puntatore. Nell'esempio seguente vengono illustrate le dichiarazioni di funzione membro e i tipi di **`this`** :

```cpp
// expre_Primary_Expressions.cpp
// compile with: /LD
class Example
{
public:
    void Func();          //  * const this
    void Func() const;    //  const * const this
    void Func() volatile; //  volatile * const this
};
```

Per ulteriori informazioni sulla modifica del tipo di puntatore, vedere [questo puntatore](this-pointer.md) **`this`** .

L'operatore di risoluzione dell'ambito (`::`) seguito da un nome costituisce un'espressione primaria.  Tali nomi devono essere nomi in ambito globale e non nomi di membri.  Il tipo di questa espressione è determinato dalla dichiarazione del nome. È un l-value, ovvero può essere visualizzato a sinistra di un'espressione dell'operatore di assegnazione, se il nome dichiarante è un l-value. L'operatore di risoluzione dell'ambito consente di fare riferimento a un nome globale, anche se il nome è nascosto nell'ambito corrente. Vedere [ambito](../cpp/scope-visual-cpp.md) per un esempio di come usare l'operatore di risoluzione dell'ambito.

Un'espressione racchiusa tra parentesi è un'espressione primaria il cui tipo e il cui valore sono identici a quelli dell'espressione non racchiusa tra parentesi. Si tratta di un l-value se l'espressione non racchiusa tra parentesi è un l-value.

Gli esempi di espressioni primarie includono:

```cpp
100 // literal
'c' // literal
this // in a member function, a pointer to the class instance
::func // a global function
::operator + // a global operator function
::A::B // a global qualified name
( i + 1 ) // a parenthesized expression
```

Gli esempi seguenti sono tutti considerati *nomi*e pertanto espressioni primarie, in diverse forme:

```cpp
MyClass // a identifier
MyClass::f // a qualified name
operator = // an operator function name
operator char* // a conversion operator function name
~MyClass // a destructor name
A::B   // a qualified name
A<int> // a template id
```

## <a name="see-also"></a>Vedere anche

[Tipi di espressioni](../cpp/types-of-expressions.md)
