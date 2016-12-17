---
title: "Costanti Integer C | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "costanti Integer"
ms.assetid: fcf6b83c-2038-49ec-91ca-3d5ca1f83037
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Costanti Integer C
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un "costante Integer" è un numero decimale \(base 10\), ottale \(base 8\) o esadecimale \(base 16\) che rappresenta un valore integrale.  Utilizzare le costanti Integer per rappresentare i valori interi non modificabili.  
  
## Sintassi  
 *integer\-constant*:  
 *decimal\-constant integer\-suffix*  opt  
  
 *octal\-constant integer\-suffix*  opt  
  
 *hexadecimal\-constant integer\-suffix*  opt  
  
 *decimal\-constant*:  
 *nonzero\-digit*  
  
 *decimal\-constant digit*  
  
 *octal\-constant*:  
 **0**  
  
 *octal\-constant octal\-digit*  
  
 *hexadecimal\-constant*:  
 **0x**  *hexadecimal\-digit*  
  
 **0X**  *hexadecimal\-digit*  
  
 *hexadecimal\-constant hexadecimal\-digit*  
  
 *nonzero\-digit*: uno tra  
 **1 2 3 4 5 6 7 8 9**  
  
 *octal\-digit*: uno tra  
 **0 1 2 3 4 5 6 7**  
  
 *hexadecimal\-digit*: uno tra  
 **0 1 2 3 4 5 6 7 8 9**  
  
 **a b c d e f**  
  
 **A B C D E F**  
  
 *integer\-suffix*:  
 *unsigned\-suffix long\-suffix*  opt  
  
 *long\-suffix unsigned\-suffix*  opt  
  
 *unsigned\-suffix*: uno tra  
 **u U**  
  
 *long\-suffix*: uno tra  
 **l L**  
  
 *64\-bit integer\-suffix*:  
 **i64**  
  
 Le costanti Integer sono positive a meno che non siano precedute da un segno meno \(**–**\).  Il segno meno viene interpretato come operatore di negazione aritmetico unario. \(Vedere [Operatori aritmetici unari](../c-language/unary-arithmetic-operators.md) per informazioni su questo operatore\).  
  
 Se una costante Integer inizia con **0x** o **0X**, è esadecimale.  Se inizia con la cifra **0**, è ottale.  In caso contrario, si presume che sia decimale.  
  
 Le righe seguenti sono equivalenti:  
  
```  
0x1C   /* = Hexadecimal representation for decimal 28 */  
034    /* = Octal representation for decimal 28 */  
```  
  
 Nessuno spazio vuoto può separare le cifre di una costante Integer.  In questi esempi vengono illustrate le costanti decimali, ottali ed esadecimali valide.  
  
```  
/* Decimal Constants */  
10  
132  
32179  
  
/* Octal Constants */  
012  
0204  
076663  
  
/* Hexadecimal Constants */  
0xa or 0xA  
0x84  
0x7dB3 or 0X7DB3  
```  
  
## Vedere anche  
 [Costanti C](../c-language/c-constants.md)