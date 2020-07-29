---
title: Operatori, precedenza e associatività predefiniti di C++
ms.date: 07/23/2020
helpviewer_keywords:
- operators (C++), hierarchy
- operator precedence
- precedence, operators
- operators (C++), associativity
- multiple operators [C++]
- associativity of operators [C++]
- operators [C++], precedence
- evaluation order
- hierarchy, operator
ms.assetid: 95c1f0ba-dad8-4034-b039-f79a904f112f
ms.openlocfilehash: 10c9e5db569ba211ed8d42386816b4f6bb71ee29
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87221770"
---
# <a name="c-built-in-operators-precedence-and-associativity"></a>Operatori, precedenza e associatività predefiniti di C++

Il linguaggio C++ include tutti gli operatori C e ne aggiunge molti nuovi. Gli operatori specificano una valutazione da eseguire su uno o più operandi.

## <a name="precedence-and-associativity"></a>Precedenza e associatività

La *precedenza* degli operatori specifica l'ordine delle operazioni nelle espressioni che contengono più di un operatore. Operator *associativity* specifica se, in un'espressione che contiene più operatori con la stessa precedenza, un operando viene raggruppato con quello a sinistra o con quello a destra.

## <a name="alternative-spellings"></a>Ortografie alternative

C++ specifica le ortografie alternative per alcuni operatori. In C, le ortografie alternative vengono fornite come macro nell' \<iso646.h> intestazione. In C++, queste alternative sono parole chiave e l'uso di \<iso646.h> o dell'equivalente C++ \<ciso646> è deprecato. In Microsoft C++, l' [`/permissive-`](../build/reference/permissive-standards-conformance.md) [`/Za`](../build/reference/za-ze-disable-language-extensions.md) opzione del compilatore o è necessaria per abilitare le ortografie alternative.

## <a name="c-operator-precedence-and-associativity-table"></a>Precedenza degli operatori C++ e tabella associatività

La tabella seguente illustra la precedenza e l'associatività degli operatori C++ (dalla precedenza più alta a quella più bassa). Gli operatori con lo stesso numero di precedenza hanno precedenza uguale, a meno che non venga imposta in modo esplicito con parentesi un'altra relazione.

| Descrizione dell'operatore | Operatore | Alternativa |
|--|--|--|
| **Precedenza gruppo 1, nessuna associatività** |
| [Risoluzione dell'ambito](../cpp/scope-resolution-operator.md) | [`::`](../cpp/scope-resolution-operator.md) |
| **Precedenza gruppo 2, associatività da sinistra a destra** |
| [Selezione del membro (oggetto o puntatore)](../cpp/member-access-operators-dot-and.md) | [`.`o`->`](../cpp/member-access-operators-dot-and.md) |
| [Indice inferiore di matrice](../cpp/subscript-operator.md) | [`[]`](../cpp/subscript-operator.md) |
| [Chiamata di funzione](../cpp/function-call-operator-parens.md) | [`()`](../cpp/function-call-operator-parens.md) |
| [Incremento suffisso](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md) | [`++`](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md) |
| [Decremento suffisso](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md) | [`--`](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md) |
| [Nome tipo](../cpp/typeid-operator.md) | [`typeid`](../cpp/typeid-operator.md) |
| [Conversione di tipi costanti](../cpp/const-cast-operator.md) | [`const_cast`](../cpp/const-cast-operator.md) |
| [Conversioni di tipi dinamici](../cpp/dynamic-cast-operator.md) | [`dynamic_cast`](../cpp/dynamic-cast-operator.md) |
| [Conversione di tipi reinterpretati](../cpp/reinterpret-cast-operator.md) | [`reinterpret_cast`](../cpp/reinterpret-cast-operator.md) |
| [Conversioni di tipi statici](../cpp/static-cast-operator.md) | [`static_cast`](../cpp/static-cast-operator.md) |
| **Precedenza gruppo 3, associazione da destra a sinistra** |
| [Dimensione dell'oggetto o del tipo](../cpp/sizeof-operator.md) | [`sizeof`](../cpp/sizeof-operator.md) |
| [Incremento prefisso](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md) | [`++`](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md) |
| [Decremento prefisso](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md) | [`--`](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md) |
| [Complemento a uno](../cpp/one-s-complement-operator-tilde.md) | [`~`](../cpp/one-s-complement-operator-tilde.md) | **`compl`** |
| [Not logico](../cpp/logical-negation-operator-exclpt.md) | [`!`](../cpp/logical-negation-operator-exclpt.md) | **`not`** |
| [Negazione unaria](../cpp/unary-plus-and-negation-operators-plus-and.md) | [`-`](../cpp/unary-plus-and-negation-operators-plus-and.md) |
| [Più unario](../cpp/unary-plus-and-negation-operators-plus-and.md) | [`+`](../cpp/unary-plus-and-negation-operators-plus-and.md) |
| [Address-of](../cpp/address-of-operator-amp.md) | [`&`](../cpp/address-of-operator-amp.md) |
| [Riferimento indiretto](../cpp/indirection-operator-star.md) | [`*`](../cpp/indirection-operator-star.md) |
| [Crea oggetto](../cpp/new-operator-cpp.md) | [`new`](../cpp/new-operator-cpp.md) |
| [Destroy, oggetto](../cpp/delete-operator-cpp.md) | [`delete`](../cpp/delete-operator-cpp.md) |
| [Cast](../cpp/cast-operator-parens.md) | [`()`](../cpp/cast-operator-parens.md) |
| **Precedenza gruppo 4, associatività da sinistra a destra** |
| [Puntatore a membro (oggetti o puntatori)](../cpp/pointer-to-member-operators-dot-star-and-star.md) | [`.*`o`->*`](../cpp/pointer-to-member-operators-dot-star-and-star.md) |
| **Precedenza gruppo 5, associatività da sinistra a destra** |
| [Moltiplicazione](../cpp/multiplicative-operators-and-the-modulus-operator.md) | [`*`](../cpp/multiplicative-operators-and-the-modulus-operator.md) |
| [Divisione](../cpp/multiplicative-operators-and-the-modulus-operator.md) | [`/`](../cpp/multiplicative-operators-and-the-modulus-operator.md) |
| [Modulus](../cpp/multiplicative-operators-and-the-modulus-operator.md) | [`%`](../cpp/multiplicative-operators-and-the-modulus-operator.md) |
| **Precedenza gruppo 6, associatività da sinistra a destra** |
| [Addizione](../cpp/additive-operators-plus-and.md) | [`+`](../cpp/additive-operators-plus-and.md) |
| [Sottrazione](../cpp/additive-operators-plus-and.md) | [`-`](../cpp/additive-operators-plus-and.md) |
| **Precedenza gruppo 7, associatività da sinistra a destra** |
| [Spostamento a sinistra](../cpp/left-shift-and-right-shift-operators-input-and-output.md) | [`<<`](../cpp/left-shift-and-right-shift-operators-input-and-output.md) |
| [Spostamento a destra](../cpp/left-shift-and-right-shift-operators-input-and-output.md) | [`>>`](../cpp/left-shift-and-right-shift-operators-input-and-output.md) |
| **Precedenza gruppo 8, associatività da sinistra a destra** |
| [Minore di](../cpp/relational-operators-equal-and-equal.md) | [`<`](../cpp/relational-operators-equal-and-equal.md) |
| [Maggiore di](../cpp/relational-operators-equal-and-equal.md) | [`>`](../cpp/relational-operators-equal-and-equal.md) |
| [Minore o uguale a](../cpp/relational-operators-equal-and-equal.md) | [`<=`](../cpp/relational-operators-equal-and-equal.md) |
| [Maggiore o uguale a](../cpp/relational-operators-equal-and-equal.md) | [`>=`](../cpp/relational-operators-equal-and-equal.md) |
| **Precedenza gruppo 9, associatività da sinistra a destra** |
| [Uguaglianza](../cpp/equality-operators-equal-equal-and-exclpt-equal.md) | [`==`](../cpp/equality-operators-equal-equal-and-exclpt-equal.md) |
| [Disuguaglianza](../cpp/equality-operators-equal-equal-and-exclpt-equal.md) | [`!=`](../cpp/equality-operators-equal-equal-and-exclpt-equal.md) | **`not_eq`** |
| **Associazione precedenza da sinistra a destra del gruppo 10** |
| [AND bit per bit](../cpp/bitwise-and-operator-amp.md) | [`&`](../cpp/bitwise-and-operator-amp.md) | **`bitand`** |
| **Precedenza gruppo 11, dall'associatività da sinistra a destra** |
| [OR esclusivo bit per bit](../cpp/bitwise-exclusive-or-operator-hat.md) | [`^`](../cpp/bitwise-exclusive-or-operator-hat.md) | **`xor`** |
| **Precedenza gruppo 12, associazione da sinistra a destra** |
| [OR inclusivo bit per bit](../cpp/bitwise-inclusive-or-operator-pipe.md) | [`|`](../cpp/bitwise-inclusive-or-operator-pipe.md) | **`bitor`** |
| **Precedenza gruppo 13, associatività da sinistra a destra** |
| [AND logico](../cpp/logical-and-operator-amp-amp.md) | [`&&`](../cpp/logical-and-operator-amp-amp.md) | **`and`** |
| **Precedenza gruppo 14, associazione da sinistra a destra** |
| [OR logico](../cpp/logical-or-operator-pipe-pipe.md) | [`||`](../cpp/logical-or-operator-pipe-pipe.md) | **`or`** |
| **Precedenza del gruppo 15, associazione da destra a sinistra** |
| [Condizionale](../cpp/conditional-operator-q.md) | [`? :`](../cpp/conditional-operator-q.md) |
| **Precedenza del gruppo 16, associazione da destra a sinistra** |
| [Assegnazione](../cpp/assignment-operators.md) | [`=`](../cpp/assignment-operators.md) |
| [Assegnazione di moltiplicazione](../cpp/assignment-operators.md) | [`*=`](../cpp/assignment-operators.md) |
| [Assegnazione di divisione](../cpp/assignment-operators.md) | [`/=`](../cpp/assignment-operators.md) |
| [Assegnazione modulo](../cpp/assignment-operators.md) | [`%=`](../cpp/assignment-operators.md) |
| [Assegnazione di addizione](../cpp/assignment-operators.md) | [`+=`](../cpp/assignment-operators.md) |
| [Assegnazione di sottrazione](../cpp/assignment-operators.md) | [`-=`](../cpp/assignment-operators.md) |
| [Assegnazione di spostamento a sinistra](../cpp/assignment-operators.md) | [`<<=`](../cpp/assignment-operators.md) |
| [Assegnazione di spostamento a destra](../cpp/assignment-operators.md) | [`>>=`](../cpp/assignment-operators.md) |
| [Assegnazione AND bit per bit](../cpp/assignment-operators.md) | [`&=`](../cpp/assignment-operators.md) | **`and_eq`** |
| [Assegnazione OR inclusivo bit per bit](../cpp/assignment-operators.md) | [`|=`](../cpp/assignment-operators.md) | **`or_eq`** |
| [Assegnazione OR esclusivo bit per bit](../cpp/assignment-operators.md) | [`^=`](../cpp/assignment-operators.md) | **`xor_eq`** |
| **Gruppo di precedenza 17, da destra a sinistra** |
| [espressione throw](../cpp/try-throw-and-catch-statements-cpp.md) | [`throw`](../cpp/try-throw-and-catch-statements-cpp.md) |
| **Precedenza gruppo 18, associatività da sinistra a destra** |
| [Virgola](../cpp/comma-operator.md) | [,](../cpp/comma-operator.md) |

## <a name="see-also"></a>Vedere anche

[Overload degli operatori](operator-overloading.md)
