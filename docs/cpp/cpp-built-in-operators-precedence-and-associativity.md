---
title: "Operatori C++, precedenza e associazione | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "associazione di operatori"
  - "ordine di valutazione"
  - "gerarchia, operatore"
  - "operatori multipli"
  - "precedenza tra operatori"
  - "operatori (C++), associazione"
  - "operatori (C++), gerarchia"
  - "operatori [C++], precedenza"
  - "precedenza, operatori"
ms.assetid: 95c1f0ba-dad8-4034-b039-f79a904f112f
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatori C++, precedenza e associazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il linguaggio C\+\+ include tutti gli operatori C e ne aggiunge molti nuovi.  Gli operatori specificano una valutazione da eseguire su uno o più operandi.  
  
 La precedenza degli operatori specifica l'ordine delle operazioni nelle espressioni che contengono più di un operatore.  L'associatività degli operatori specifica se, in un'espressione che contiene più operatori con la stessa precedenza, un operando è raggruppato con quello alla sua sinistra o con quello alla sua destra.  La tabella seguente illustra la precedenza e l'associatività degli operatori C\+\+ \(dalla precedenza più alta a quella più bassa\).  Gli operatori con lo stesso numero di precedenza hanno precedenza uguale, a meno che non venga imposta in modo esplicito con parentesi un'altra relazione.  
  
### Precedenza e associatività degli operatori C\+\+  
  
|Descrizione dell'operatore|Operatore|  
|--------------------------------|---------------|  
|`Group 1 precedence, no associativity`|  
|[Risoluzione ambito](../cpp/scope-resolution-operator.md)|`::`|  
|`Group 2 precedence, left to right associativity`|  
|[Selezione del membro \(oggetto o puntatore\)](../cpp/member-access-operators-dot-and.md)|`. or –>`|  
|[Indice di matrice](../cpp/subscript-operator.md)|`[ ]`|  
|[Chiamata di funzione](../cpp/function-call-operator-parens.md)|`( )`|  
|[Incremento suffisso](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md)|`++`|  
|[Decremento suffisso](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md)|`––`|  
|[Nome del tipo](../cpp/typeid-operator.md)|`typeid( )`|  
|[Conversione di tipi costanti](../cpp/const-cast-operator.md)|`const_cast`|  
|[Conversioni di tipi dinamici](../cpp/dynamic-cast-operator.md)|`dynamic_cast`|  
|[Conversione di tipi reinterpretati](../cpp/reinterpret-cast-operator.md)|`reinterpret_cast`|  
|[Conversioni di tipi statici](../cpp/static-cast-operator.md)|`static_cast`|  
|`Group 3 precedence, right to left associativity`|  
|[Dimensione dell'oggetto o del tipo](../cpp/sizeof-operator.md)|`sizeof`|  
|[Incremento prefisso](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)|`++`|  
|[Decremento prefisso](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md)|`––`|  
|[Complemento di uno](../cpp/one-s-complement-operator-tilde.md)|`~`|  
|[NOT logico](../cpp/logical-negation-operator-exclpt.md)|`!`|  
|[Negazione unaria](../misc/unary-negation-operator.md)|`-`|  
|[Più unario](../cpp/unary-plus-and-negation-operators-plus-and.md)|`+`|  
|[Address\-of](../cpp/lvalue-reference-declarator-amp.md)|`&`|  
|[Riferimento indiretto](../cpp/indirection-operator-star.md)|`*`|  
|[Creare oggetto](../cpp/new-operator-cpp.md)|`new`|  
|[Eliminare oggetto](../cpp/delete-operator-cpp.md)|`delete`|  
|[Cast](../cpp/cast-operator-parens.md)|`Cast: ()`|  
|`Group 4 precedence, left to right associativity`|  
|[Puntatore a membro \(oggetti o puntatori\)](../cpp/pointer-to-member-operators-dot-star-and-star.md)|`.* or –>*`|  
|`Group 5 precedence, left to right associativity`|  
|[Moltiplicazione](../cpp/multiplicative-operators-and-the-modulus-operator.md)|`*`|  
|[Divisione](../cpp/multiplicative-operators-and-the-modulus-operator.md)|`/`|  
|[Modulo](../cpp/multiplicative-operators-and-the-modulus-operator.md)|`%`|  
|`Group 6 precedence, left to right associativity`|  
|[Addizione](../cpp/additive-operators-plus-and.md)|`+`|  
|[Sottrazione](../cpp/additive-operators-plus-and.md)|`–`|  
|`Group 7 precedence, left to right associativity`|  
|[Spostamento a sinistra](../cpp/left-shift-and-right-shift-operators-input-and-output.md)|`<<`|  
|[Spostamento a destra](../cpp/left-shift-and-right-shift-operators-input-and-output.md)|`>>`|  
|`Group 8 precedence, left to right associativity`|  
|[Minore di](../cpp/relational-operators-equal-and-equal.md)|`<`|  
|[Maggiore di](../cpp/relational-operators-equal-and-equal.md)|`>`|  
|[Minore o uguale a](../cpp/relational-operators-equal-and-equal.md)|`<=`|  
|[Maggiore o uguale a](../cpp/relational-operators-equal-and-equal.md)|`>=`|  
|`Group 9 precedence, left to right associativity`|  
|[Uguaglianza](../cpp/equality-operators-equal-equal-and-exclpt-equal.md)|`==`|  
|[Disuguaglianza](../cpp/equality-operators-equal-equal-and-exclpt-equal.md)|`!=`|  
|`Group 10 precedence left to right associativity`|  
|[AND bit per bit](../cpp/bitwise-and-operator-amp.md)|`&`|  
|`Group 11 precedence, left to right associativity`|  
|[OR esclusivo bit per bit](../cpp/bitwise-exclusive-or-operator-hat.md)|`^`|  
|`Group 12 precedence, left to right associativity`|  
|[OR inclusivo bit per bit](../cpp/bitwise-inclusive-or-operator-pipe.md)|`&#124;`|  
|`Group 13 precedence, left to right associativity`|  
|[AND logico](../cpp/logical-and-operator-amp-amp.md)|`&&`|  
|`Group 14 precedence, left to right associativity`|  
|[OR logico](../cpp/logical-or-operator-pipe-pipe.md)|`&#124;&#124;`|  
|`Group 15 precedence, right to left associativity`|  
|[Condizionale](../cpp/conditional-operator-q.md)|`? :`|  
|`Group 16 precedence, right to left associativity`|  
|[Assegnazione](../cpp/assignment-operators.md)|`=`|  
|[Assegnazione di moltiplicazione](../cpp/assignment-operators.md)|`*=`|  
|[Assegnazione di divisione](../cpp/assignment-operators.md)|`/=`|  
|[Assegnazione modulo](../cpp/assignment-operators.md)|`%=`|  
|[Assegnazione di addizione](../cpp/assignment-operators.md)|`+=`|  
|[Assegnazione di sottrazione](../cpp/assignment-operators.md)|`–=`|  
|[Assegnazione di spostamento a sinistra](../cpp/assignment-operators.md)|`<<=`|  
|[Assegnazione di spostamento a destra](../cpp/assignment-operators.md)|`>>=`|  
|[Assegnazione AND bit per bit](../cpp/assignment-operators.md)|`&=`|  
|[Assegnazione OR inclusivo bit per bit](../cpp/assignment-operators.md)|`&#124;=`|  
|[Assegnazione OR esclusivo bit per bit](../cpp/assignment-operators.md)|`^=`|  
|`Group 17 precedence, right to left associativity`|  
|[espressione throw](../cpp/try-throw-and-catch-statements-cpp.md)|`throw`|  
|`Group 18 precedence, left to right associativity`|  
|[Virgola](../cpp/comma-operator.md)|`,`|  
  
## Vedere anche  
 [Operatori C\+\+](../misc/cpp-operators.md)   
 [Overload degli operatori](../cpp/operator-overloading.md)