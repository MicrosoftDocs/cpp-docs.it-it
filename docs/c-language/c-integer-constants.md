---
title: Costanti Integer C | Microsoft Docs
ms.custom: 
ms.date: 02/01/2018
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- integer constants
ms.assetid: fcf6b83c-2038-49ec-91ca-3d5ca1f83037
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6c23e90d235e1ad2a8cca577c5cfbf2be55b52b6
ms.sourcegitcommit: 30ab99c775d99371ed22d1a46598e542012ed8c6
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/03/2018
---
# <a name="c-integer-constants"></a>Costanti Integer C

Un "costante Integer" è un numero decimale (base 10), ottale (base 8) o esadecimale (base 16) che rappresenta un valore integrale. Utilizzare le costanti Integer per rappresentare i valori interi non modificabili.

## <a name="syntax"></a>Sintassi

*integer-constant*:  
&nbsp;&nbsp;*decimal-constant* *integer-suffix*<sub>opt</sub>  
&nbsp;&nbsp;*octal-constant* *integer-suffix*<sub>opt</sub>  
&nbsp;&nbsp;*hexadecimal-constant* *integer-suffix*<sub>opt</sub>  

*decimal-constant*:  
&nbsp;&nbsp;*nonzero-digit*  
&nbsp;&nbsp;*decimal-constant* *digit*  

*octal-constant*:  
&nbsp;&nbsp;**0**  
&nbsp;&nbsp;*octal-constant* *octal-digit*  

*hexadecimal-constant*:  
&nbsp;&nbsp;**0x**  *hexadecimal-digit*  
&nbsp;&nbsp;**0X**  *hexadecimal-digit*  
&nbsp;&nbsp;*hexadecimal-constant* *hexadecimal-digit*  

*nonzero-digit*: uno tra  
&nbsp;&nbsp;**1 2 3 4 5 6 7 8 9**  

*octal-digit*: uno tra  
&nbsp;&nbsp;**0 1 2 3 4 5 6 7**  

*hexadecimal-digit*: uno tra  
&nbsp;&nbsp;**0 1 2 3 4 5 6 7 8 9**  
&nbsp;&nbsp;**a b c d e f**  
&nbsp;&nbsp;**A B C D E F**  
  
*integer-suffix*:  
&nbsp;&nbsp;*unsigned-suffix* *long-suffix*<sub>opt</sub>  
&nbsp;&nbsp;*long-suffix* *unsigned-suffix*<sub>opt</sub>  
&nbsp;&nbsp;*unsigned-suffix* *64-bit-integer-suffix*<sub>opt</sub>

*unsigned-suffix*: uno tra  
&nbsp;&nbsp;**u U**  

*long-suffix*: uno tra  
&nbsp;&nbsp;**l L**  
  
*64-bit-integer-suffix*: uno tra &nbsp;&nbsp;**i64 I64**  

Le costanti Integer sono positive a meno che non siano precedute da un segno meno (**-**). Il segno meno viene interpretato come operatore di negazione aritmetico unario. Per informazioni su questo operatore, vedere [Operatori aritmetici unari](../c-language/unary-arithmetic-operators.md).

Se una costante Integer inizia con **0x** o **0X**, è esadecimale. Se inizia con la cifra **0**, è ottale. In caso contrario, si presume che sia decimale.

Le righe seguenti sono equivalenti:

```C
0x1C   /* = Hexadecimal representation for decimal 28 */
034    /* = Octal representation for decimal 28 */
```

Nessuno spazio vuoto può separare le cifre di una costante Integer. In questi esempi vengono illustrate le costanti decimali, ottali ed esadecimali valide.

```C
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

## <a name="see-also"></a>Vedere anche

[Costanti C](../c-language/c-constants.md)  
