---
title: C++Operatori predefiniti, precedenza e associatività
ms.date: 11/04/2016
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
ms.openlocfilehash: 36e7ce77e24366be10b75f5bb4f8830363594301
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80180407"
---
# <a name="c-built-in-operators-precedence-and-associativity"></a>C++Operatori predefiniti, precedenza e associatività

Il linguaggio C++ include tutti gli operatori C e ne aggiunge molti nuovi. Gli operatori specificano una valutazione da eseguire su uno o più operandi.

La *precedenza* degli operatori specifica l'ordine delle operazioni nelle espressioni che contengono più di un operatore. Operator *associativity* specifica se, in un'espressione che contiene più operatori con la stessa precedenza, un operando viene raggruppato con quello a sinistra o con quello a destra. La tabella seguente illustra la precedenza e l'associatività degli operatori C++ (dalla precedenza più alta a quella più bassa). Gli operatori con lo stesso numero di precedenza hanno precedenza uguale, a meno che non venga imposta in modo esplicito con parentesi un'altra relazione.

### <a name="c-operator-precedence-and-associativity"></a>Precedenza e associatività degli operatori C++

|Descrizione dell'operatore|Operatore|
|--------------------------|--------------|
|**Precedenza gruppo 1, nessuna associatività**|
|[Risoluzione dell'ambito](../cpp/scope-resolution-operator.md)|[::](../cpp/scope-resolution-operator.md)|
|**Precedenza gruppo 2, associatività da sinistra a destra**|
|[Selezione del membro (oggetto o puntatore)](../cpp/member-access-operators-dot-and.md)|[. o->](../cpp/member-access-operators-dot-and.md)|
|[Indice di matrice](../cpp/subscript-operator.md)|[&#91;&#93;](../cpp/subscript-operator.md)|
|[Chiamata di funzione](../cpp/function-call-operator-parens.md)|[()](../cpp/function-call-operator-parens.md)|
|[Incremento suffisso](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md)|[++](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md)|
|[Decremento suffisso](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md)|[--](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md)|
|[Nome tipo](../cpp/typeid-operator.md)|[typeid](../cpp/typeid-operator.md)|
|[Conversione di tipi costanti](../cpp/const-cast-operator.md)|[const_cast](../cpp/const-cast-operator.md)|
|[Conversione dinamica di tipi](../cpp/dynamic-cast-operator.md)|[dynamic_cast](../cpp/dynamic-cast-operator.md)|
|[Conversione di tipi riinterpretati](../cpp/reinterpret-cast-operator.md)|[reinterpret_cast](../cpp/reinterpret-cast-operator.md)|
|[Conversione di tipi statici](../cpp/static-cast-operator.md)|[static_cast](../cpp/static-cast-operator.md)|
|**Precedenza gruppo 3, associazione da destra a sinistra**|
|[Dimensione dell'oggetto o del tipo](../cpp/sizeof-operator.md)|[sizeof](../cpp/sizeof-operator.md)|
|[Incremento prefisso](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)|[++](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)|
|[Decremento prefisso](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)|[--](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)|
|[Complemento a uno](../cpp/one-s-complement-operator-tilde.md)|[~](../cpp/one-s-complement-operator-tilde.md)|
|[Not logico](../cpp/logical-negation-operator-exclpt.md)|[!](../cpp/logical-negation-operator-exclpt.md)|
|[Negazione unaria](../cpp/unary-plus-and-negation-operators-plus-and.md)|[-](../cpp/unary-plus-and-negation-operators-plus-and.md)|
|[Più unario](../cpp/unary-plus-and-negation-operators-plus-and.md)|[+](../cpp/unary-plus-and-negation-operators-plus-and.md)|
|[Indirizzo-di](../cpp/address-of-operator-amp.md)|[&amp;](../cpp/address-of-operator-amp.md)|
|[Indirezione](../cpp/indirection-operator-star.md)|[&#42;](../cpp/indirection-operator-star.md)|
|[Crea oggetto](../cpp/new-operator-cpp.md)|[Nuovo](../cpp/new-operator-cpp.md)|
|[Elimina oggetto](../cpp/delete-operator-cpp.md)|[delete](../cpp/delete-operator-cpp.md)|
|[Cast](../cpp/cast-operator-parens.md)|[()](../cpp/cast-operator-parens.md)|
|**Precedenza gruppo 4, associatività da sinistra a destra**|
|[Puntatore a membro (oggetti o puntatori)](../cpp/pointer-to-member-operators-dot-star-and-star.md)|[. &#42; o->&#42;](../cpp/pointer-to-member-operators-dot-star-and-star.md)|
|**Precedenza gruppo 5, associatività da sinistra a destra**|
|[Moltiplicazione](../cpp/multiplicative-operators-and-the-modulus-operator.md)|[&#42;](../cpp/multiplicative-operators-and-the-modulus-operator.md)|
|[Divisione](../cpp/multiplicative-operators-and-the-modulus-operator.md)|[/](../cpp/multiplicative-operators-and-the-modulus-operator.md)|
|[Modulo](../cpp/multiplicative-operators-and-the-modulus-operator.md)|[%](../cpp/multiplicative-operators-and-the-modulus-operator.md)|
|**Precedenza gruppo 6, associatività da sinistra a destra**|
|[Addizione](../cpp/additive-operators-plus-and.md)|[+](../cpp/additive-operators-plus-and.md)|
|[Sottrazione](../cpp/additive-operators-plus-and.md)|[-](../cpp/additive-operators-plus-and.md)|
|**Precedenza gruppo 7, associatività da sinistra a destra**|
|[Spostamento a sinistra](../cpp/left-shift-and-right-shift-operators-input-and-output.md)|[<<](../cpp/left-shift-and-right-shift-operators-input-and-output.md)|
|[Spostamento a destra](../cpp/left-shift-and-right-shift-operators-input-and-output.md)|[>>](../cpp/left-shift-and-right-shift-operators-input-and-output.md)|
|**Precedenza gruppo 8, associatività da sinistra a destra**|
|[Minore di](../cpp/relational-operators-equal-and-equal.md)|[<](../cpp/relational-operators-equal-and-equal.md)|
|[Maggiore di](../cpp/relational-operators-equal-and-equal.md)|[>](../cpp/relational-operators-equal-and-equal.md)|
|[Minore o uguale a](../cpp/relational-operators-equal-and-equal.md)|[<=](../cpp/relational-operators-equal-and-equal.md)|
|[Maggiore o uguale a](../cpp/relational-operators-equal-and-equal.md)|[>=](../cpp/relational-operators-equal-and-equal.md)|
|**Precedenza gruppo 9, associatività da sinistra a destra**|
|[Uguaglianza](../cpp/equality-operators-equal-equal-and-exclpt-equal.md)|[==](../cpp/equality-operators-equal-equal-and-exclpt-equal.md)|
|[Disuguaglianza](../cpp/equality-operators-equal-equal-and-exclpt-equal.md)|[!=](../cpp/equality-operators-equal-equal-and-exclpt-equal.md)|
|**Associazione precedenza da sinistra a destra del gruppo 10**|
|[AND bit per bit](../cpp/bitwise-and-operator-amp.md)|[&amp;](../cpp/bitwise-and-operator-amp.md)|
|**Precedenza gruppo 11, dall'associatività da sinistra a destra**|
|[OR esclusivo bit per bit](../cpp/bitwise-exclusive-or-operator-hat.md)|[^](../cpp/bitwise-exclusive-or-operator-hat.md)|
|**Precedenza gruppo 12, associazione da sinistra a destra**|
|[OR inclusivo bit per bit](../cpp/bitwise-inclusive-or-operator-pipe.md)|[&#124;](../cpp/bitwise-inclusive-or-operator-pipe.md)|
|**Precedenza gruppo 13, associatività da sinistra a destra**|
|[AND logico](../cpp/logical-and-operator-amp-amp.md)|[&amp;&amp;](../cpp/logical-and-operator-amp-amp.md)|
|**Precedenza gruppo 14, associazione da sinistra a destra**|
|[OR logico](../cpp/logical-or-operator-pipe-pipe.md)|[&#124;&#124;](../cpp/logical-or-operator-pipe-pipe.md)|
|**Precedenza del gruppo 15, associazione da destra a sinistra**|
|[Condizionale](../cpp/conditional-operator-q.md)|[? :](../cpp/conditional-operator-q.md)|
|**Precedenza del gruppo 16, associazione da destra a sinistra**|
|[Assegnazione](../cpp/assignment-operators.md)|[=](../cpp/assignment-operators.md)|
|[Assegnazione di moltiplicazione](../cpp/assignment-operators.md)|[&#42;=](../cpp/assignment-operators.md)|
|[Assegnazione di divisione](../cpp/assignment-operators.md)|[/=](../cpp/assignment-operators.md)|
|[Assegnazione di modulo](../cpp/assignment-operators.md)|[%=](../cpp/assignment-operators.md)|
|[Assegnazione di addizione](../cpp/assignment-operators.md)|[+=](../cpp/assignment-operators.md)|
|[Assegnazione di sottrazione](../cpp/assignment-operators.md)|[-=](../cpp/assignment-operators.md)|
|[Assegnazione di spostamento a sinistra](../cpp/assignment-operators.md)|[<<=](../cpp/assignment-operators.md)|
|[Assegnazione di spostamento a destra](../cpp/assignment-operators.md)|[>>=](../cpp/assignment-operators.md)|
|[Assegnazione AND bit per bit](../cpp/assignment-operators.md)|[&amp;=](../cpp/assignment-operators.md)|
|[Assegnazione OR inclusivo bit per bit](../cpp/assignment-operators.md)|[&#124;=](../cpp/assignment-operators.md)|
|[Assegnazione OR esclusivo bit per bit](../cpp/assignment-operators.md)|[^=](../cpp/assignment-operators.md)|
|**Gruppo di precedenza 17, da destra a sinistra**|
|[espressione throw](../cpp/try-throw-and-catch-statements-cpp.md)|[throw](../cpp/try-throw-and-catch-statements-cpp.md)|
|**Precedenza gruppo 18, associatività da sinistra a destra**|
|[Virgola](../cpp/comma-operator.md)|[,](../cpp/comma-operator.md)|

## <a name="see-also"></a>Vedere anche

[Overload degli operatori](operator-overloading.md)
