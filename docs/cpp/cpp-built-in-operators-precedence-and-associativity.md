---
title: Operatori C++ predefiniti, precedenza e associatività | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-language
ms.tgt_pltfrm: ''
ms.topic: language-reference
dev_langs:
- C++
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
caps.latest.revision: 13
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 95cbb68740fe43fa8a76624abb57284cb68e7805
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="c-built-in-operators-precedence-and-associativity"></a>Operatori C++ predefiniti, precedenza e associazione

Il linguaggio C++ include tutti gli operatori C e ne aggiunge molti nuovi. Gli operatori specificano una valutazione da eseguire su uno o più operandi.

Operatore *precedenza* specifica l'ordine delle operazioni nelle espressioni che contengono più di un operatore. Operatore *associatività* specifica se, in un'espressione che contiene più operatori con la stessa precedenza, un operando è raggruppato con quello alla sua sinistra o con quello alla sua destra. La tabella seguente illustra la precedenza e l'associatività degli operatori C++ (dalla precedenza più alta a quella più bassa). Gli operatori con lo stesso numero di precedenza hanno precedenza uguale, a meno che non venga imposta in modo esplicito con parentesi un'altra relazione.

### <a name="c-operator-precedence-and-associativity"></a>Precedenza e associatività degli operatori C++

|Descrizione dell'operatore|Operatore|
|--------------------------|--------------|
|**Gruppo 1 precedenza, non associatività**|
|[Risoluzione ambito](../cpp/scope-resolution-operator.md)|[::](../cpp/scope-resolution-operator.md)|
|**Precedenza gruppo 2, per un'associatività da destra a sinistra**|
|[Selezione membro (oggetto o puntatore)](../cpp/member-access-operators-dot-and.md)|[. - >](../cpp/member-access-operators-dot-and.md)|
|[Indice di matrice](../cpp/subscript-operator.md)|[&#91;&#93;](../cpp/subscript-operator.md)|
|[Chiamata di funzione](../cpp/function-call-operator-parens.md)|[()](../cpp/function-call-operator-parens.md)|
|[Incremento suffisso](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md)|[++](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md)|
|[Decremento suffisso](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md)|[--](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md)|
|[Nome del tipo](../cpp/typeid-operator.md)|[typeid](../cpp/typeid-operator.md)|
|[Conversione di tipi costanti](../cpp/const-cast-operator.md)|[const_cast](../cpp/const-cast-operator.md)|
|[Conversione di tipo dinamico](../cpp/dynamic-cast-operator.md)|[dynamic_cast](../cpp/dynamic-cast-operator.md)|
|[Conversione di tipi reinterpretati](../cpp/reinterpret-cast-operator.md)|[reinterpret_cast](../cpp/reinterpret-cast-operator.md)|
|[Conversione di tipo statico](../cpp/static-cast-operator.md)|[static_cast](../cpp/static-cast-operator.md)|
|**Precedenza gruppo 3, da destra a sinistra associatività**|
|[Dimensione dell'oggetto o tipo](../cpp/sizeof-operator.md)|[sizeof](../cpp/sizeof-operator.md)|
|[Incremento prefisso](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)|[++](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)|
|[Decremento prefisso](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)|[--](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)|
|[Complemento a uno](../cpp/one-s-complement-operator-tilde.md)|[~](../cpp/one-s-complement-operator-tilde.md)|
|[Not logico](../cpp/logical-negation-operator-exclpt.md)|[!](../cpp/logical-negation-operator-exclpt.md)|
|[Negazione unaria](../cpp/unary-plus-and-negation-operators-plus-and.md)|[-](../cpp/unary-plus-and-negation-operators-plus-and.md)|
|[Operatore più unario](../cpp/unary-plus-and-negation-operators-plus-and.md)|[+](../cpp/unary-plus-and-negation-operators-plus-and.md)|
|[AddressOf](../cpp/address-of-operator-amp.md)|[&amp;](../cpp/address-of-operator-amp.md)|
|[Riferimento indiretto](../cpp/indirection-operator-star.md)|[&#42;](../cpp/indirection-operator-star.md)|
|[Creare l'oggetto](../cpp/new-operator-cpp.md)|[new](../cpp/new-operator-cpp.md)|
|[Eliminare oggetto](../cpp/delete-operator-cpp.md)|[delete](../cpp/delete-operator-cpp.md)|
|[Cast](../cpp/cast-operator-parens.md)|[()](../cpp/cast-operator-parens.md)|
|**Precedenza di gruppo, 4, per un'associatività da destra a sinistra**|
|[Puntatore a membro (oggetti o puntatori)](../cpp/pointer-to-member-operators-dot-star-and-star.md)|[. &#42; - > &#42;](../cpp/pointer-to-member-operators-dot-star-and-star.md)|
|**Precedenza gruppo 5, per un'associatività da destra a sinistra**|
|[Moltiplicazione](../cpp/multiplicative-operators-and-the-modulus-operator.md)|[&#42;](../cpp/multiplicative-operators-and-the-modulus-operator.md)|
|[Divisione](../cpp/multiplicative-operators-and-the-modulus-operator.md)|[/](../cpp/multiplicative-operators-and-the-modulus-operator.md)|
|[Modulo](../cpp/multiplicative-operators-and-the-modulus-operator.md)|[%](../cpp/multiplicative-operators-and-the-modulus-operator.md)|
|**Precedenza gruppo 6, per un'associatività da destra a sinistra**|
|[Addizione](../cpp/additive-operators-plus-and.md)|[+](../cpp/additive-operators-plus-and.md)|
|[Sottrazione](../cpp/additive-operators-plus-and.md)|[-](../cpp/additive-operators-plus-and.md)|
|**Precedenza gruppo 7, a un'associatività da destra a sinistra**|
|[Spostamento a sinistra](../cpp/left-shift-and-right-shift-operators-input-and-output.md)|[<<](../cpp/left-shift-and-right-shift-operators-input-and-output.md)|
|[Spostamento a destra](../cpp/left-shift-and-right-shift-operators-input-and-output.md)|[>>](../cpp/left-shift-and-right-shift-operators-input-and-output.md)|
|**Precedenza gruppo 8, a un'associatività da destra a sinistra**|
|[Minore di](../cpp/relational-operators-equal-and-equal.md)|[<](../cpp/relational-operators-equal-and-equal.md)|
|[Maggiore di](../cpp/relational-operators-equal-and-equal.md)|[>](../cpp/relational-operators-equal-and-equal.md)|
|[Minore o uguale a](../cpp/relational-operators-equal-and-equal.md)|[<=](../cpp/relational-operators-equal-and-equal.md)|
|[Maggiore o uguale a](../cpp/relational-operators-equal-and-equal.md)|[>=](../cpp/relational-operators-equal-and-equal.md)|
|**Precedenza gruppo 9, da sinistra a destra associatività**|
|[Uguaglianza](../cpp/equality-operators-equal-equal-and-exclpt-equal.md)|[==](../cpp/equality-operators-equal-equal-and-exclpt-equal.md)|
|[Disuguaglianza](../cpp/equality-operators-equal-equal-and-exclpt-equal.md)|[!=](../cpp/equality-operators-equal-equal-and-exclpt-equal.md)|
|**Precedenza gruppo 10 a un'associatività da destra a sinistra**|
|[AND bit per bit](../cpp/bitwise-and-operator-amp.md)|[&amp;](../cpp/bitwise-and-operator-amp.md)|
|**Precedenza gruppo 11, per un'associatività da destra a sinistra**|
|[OR esclusivo](../cpp/bitwise-exclusive-or-operator-hat.md)|[^](../cpp/bitwise-exclusive-or-operator-hat.md)|
|**Precedenza gruppo 12, per un'associatività da destra a sinistra**|
|[Bit per bit Inclusivo](../cpp/bitwise-inclusive-or-operator-pipe.md)|[&#124;](../cpp/bitwise-inclusive-or-operator-pipe.md)|
|**Precedenza gruppo 13, per un'associatività da destra a sinistra**|
|[AND logico](../cpp/logical-and-operator-amp-amp.md)|[&amp;&amp;](../cpp/logical-and-operator-amp-amp.md)|
|**Precedenza gruppo 14, per un'associatività da destra a sinistra**|
|[OR logico](../cpp/logical-or-operator-pipe-pipe.md)|[&#124;&#124;](../cpp/logical-or-operator-pipe-pipe.md)|
|**Precedenza gruppo 15, da destra a sinistra associatività**|
|[Condizionale](../cpp/conditional-operator-q.md)|[? :](../cpp/conditional-operator-q.md)|
|**Precedenza gruppo 16, da destra a sinistra associatività**|
|[Assegnazione](../cpp/assignment-operators.md)|[=](../cpp/assignment-operators.md)|
|[Assegnazione di moltiplicazione](../cpp/assignment-operators.md)|[&#42;=](../cpp/assignment-operators.md)|
|[Assegnazione di divisione](../cpp/assignment-operators.md)|[/=](../cpp/assignment-operators.md)|
|[Assegnazione modulo](../cpp/assignment-operators.md)|[%=](../cpp/assignment-operators.md)|
|[Assegnazione di addizione](../cpp/assignment-operators.md)|[+=](../cpp/assignment-operators.md)|
|[Assegnazione di sottrazione](../cpp/assignment-operators.md)|[-=](../cpp/assignment-operators.md)|
|[Assegnazione di spostamento a sinistra](../cpp/assignment-operators.md)|[<<=](../cpp/assignment-operators.md)|
|[Assegnazione di spostamento a destra](../cpp/assignment-operators.md)|[>>=](../cpp/assignment-operators.md)|
|[Assegnazione AND bit per bit](../cpp/assignment-operators.md)|[&amp;=](../cpp/assignment-operators.md)|
|[Bit per bit inclusivo assegnazione](../cpp/assignment-operators.md)|[&#124;=](../cpp/assignment-operators.md)|
|[Bit per bit assegnazione OR esclusivo](../cpp/assignment-operators.md)|[^=](../cpp/assignment-operators.md)|
|**Precedenza gruppo 17, da destra a sinistra associatività**|
|[espressione throw](../cpp/try-throw-and-catch-statements-cpp.md)|[throw](../cpp/try-throw-and-catch-statements-cpp.md)|
|**Precedenza gruppo 18, per un'associatività da destra a sinistra**|
|[Virgola](../cpp/comma-operator.md)|[,](../cpp/comma-operator.md)|

## <a name="see-also"></a>Vedere anche

[Overload degli operatori](operator-overloading.md)


