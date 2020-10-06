---
title: 'Espressioni principali:'
description: Espressioni primarie nel linguaggio di programmazione C++.
ms.date: 10/02/2020
helpviewer_keywords:
- primary expressions
- expressions [C++], name
- expressions [C++], literal
- expressions [C++], primary
- expressions [C++], qualified names
ms.assetid: 8ef9a814-6058-4b93-9b6e-e8eb8350b1ca
ms.openlocfilehash: 4c52992071453bc189a3078db9592b02dfb8ba9b
ms.sourcegitcommit: 30792632548d1c71894f9fecbe2f554294b86020
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/06/2020
ms.locfileid: "91765321"
---
# <a name="primary-expressions"></a>Espressioni primarie

Le espressioni primarie sono i blocchi predefiniti di espressioni più complesse. Possono essere valori letterali, nomi e nomi qualificati dall'operatore di risoluzione dell'ambito ( `::` ). Un'espressione primaria può avere uno dei seguenti formati:

*`primary-expression`*\
&emsp;*`literal`*\
&emsp;**`this`**\
&emsp;*`name`*\
&emsp;**`::`** *`name`* **`(`** *`expression`* **`)`**

Un *`literal`* è un'espressione primaria costante. Il tipo di tale valore letterale dipende dal formato della specifica. Per informazioni complete su come specificare i valori letterali, vedere [valori letterali](../cpp/numeric-boolean-and-pointer-literals-cpp.md) .

La **`this`** parola chiave è un puntatore a un oggetto classe. È disponibile all'interno di funzioni membro non statiche. Punta all'istanza della classe per la quale è stata richiamata la funzione. La **`this`** parola chiave non può essere utilizzata all'esterno del corpo di una funzione membro di classe.

Il tipo di **`this`** puntatore è `type * const` (dove `type` è il nome della classe) all'interno di funzioni che non modificano in modo specifico il **`this`** puntatore. Nell'esempio seguente vengono illustrate le dichiarazioni di funzione membro e i tipi di **`this`** :

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

Per ulteriori informazioni sulla modifica del tipo di **`this`** puntatore, vedere [ `this` pointer](this-pointer.md).

L'operatore di risoluzione dell'ambito ( **`::`** ) seguito da un nome è un'espressione primaria.  Tali nomi devono essere nomi in ambito globale e non nomi di membri. Il tipo dell'espressione è determinato dalla dichiarazione del nome. Si tratta di un l-value (ovvero può essere visualizzato sul lato sinistro di un'espressione di assegnazione) se il nome dichiarante è un l-value. L'operatore di risoluzione dell'ambito consente di fare riferimento a un nome globale, anche se il nome è nascosto nell'ambito corrente. Vedere [ambito](../cpp/scope-visual-cpp.md) per un esempio di come usare l'operatore di risoluzione dell'ambito.

Un'espressione racchiusa tra parentesi è un'espressione primaria. Il tipo e il valore sono identici al tipo e al valore dell'espressione non racchiusa tra parentesi. Si tratta di un l-value se l'espressione non racchiusa tra parentesi è un l-value.

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

Questi esempi sono tutti considerati *nomi*e, di conseguenza, espressioni primarie, in diverse forme:

```cpp
MyClass // an identifier
MyClass::f // a qualified name
operator = // an operator function name
operator char* // a conversion operator function name
~MyClass // a destructor name
A::B   // a qualified name
A<int> // a template id
```

## <a name="see-also"></a>Vedere anche

[Tipi di espressioni](../cpp/types-of-expressions.md)
