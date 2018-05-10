---
title: Costanti C a virgola mobile | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- types [C], constants
- floating-point numbers, floating-point constants
- constants, floating-point
- floating-point constants
- floating-point constants, about floating-point constants
- double data type, floating-point constants
ms.assetid: e1bd9b44-d6ab-470c-93e5-07142c7a2062
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3608e40db2aa3eb0c49942de278c1d428e26689f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="c-floating-point-constants"></a>Costanti C a virgola mobile
Una costante a virgola mobile è un numero decimale che rappresenta un numero reale con segno. La rappresentazione di un numero reale con segno include una parte intera, una parte frazionaria e un esponente. Usare le costanti a virgola mobile per rappresentare valori a virgola mobile non modificabili.  
  
## <a name="syntax"></a>Sintassi  
 *floating-point-constant*:  
 &nbsp;&nbsp; *fractional-constant exponent-part*<sub>opz</sub> *floating-suffix*<sub>opz</sub>  
 &nbsp;&nbsp; *digit-sequence exponent-part floating-suffix*<sub>opz</sub>  
  
 *fractional-constant*:  
 &nbsp;&nbsp; *digit-sequence*<sub>opz</sub> **.** *digit-sequence*  
 &nbsp;&nbsp; *digit-sequence*  **.**  
  
 *exponent-part*:  
 &nbsp;&nbsp; **e**  *sign*<sub>opz</sub> *digit-sequence*  
 &nbsp;&nbsp; **E**  *sign*<sub>opz</sub> *digit-sequence*  
  
 *sign* : uno tra  
 &nbsp;&nbsp; **+ -**  
  
 *digit-sequence*:  
 &nbsp;&nbsp; *digit*  
 &nbsp;&nbsp; *digit-sequence digit*  
  
 *floating-suffix* : uno tra  
 &nbsp;&nbsp; **f l F L**  
  
 È possibile omettere le cifre prima del punto decimale (parte del valore intero) o le cifre dopo il punto decimale (la parte frazionaria), ma non entrambe. È possibile omettere il punto decimale solo se si include un esponente. Non possono essere presenti spazi vuoti tra le cifre o i caratteri della costante.  
  
 Gli esempi seguenti illustrano alcune forme delle espressioni e delle costanti a virgola mobile:  
  
```  
15.75  
1.575E1   /* = 15.75   */  
1575e-2   /* = 15.75   */  
-2.5e-3   /* = -0.0025 */  
25E-4     /* =  0.0025 */  
```  
  
 Le costanti a virgola mobile sono positive a meno che non siano precedute da un segno meno (**-**). In questo caso, il segno di sottrazione viene considerato come operatore di negazione unario aritmetico. Le costanti a virgola mobile sono di tipo `float`, `double` o `long double`.  
  
 Una costante a virgola mobile senza suffisso **f**, **F**, **l** o **L** è di tipo `double`. Se il suffisso è costituito dalla lettera **f** o **F**, la costante è di tipo `float`. Se il suffisso è costituito dalla lettera **l** o **L**, la costante è di tipo `long double`. Ad esempio:  
  
```  
100L  /* Has type long double  */  
100F  /* Has type float        */  
```  
  
 Si noti che a livello interno il compilatore Microsoft C rappresenta `long double` allo stesso modo del tipo `double`. Vedere [Archiviazione di tipi di base](../c-language/storage-of-basic-types.md) per informazioni sui tipi `double`, `float` e `long double`.  
  
 È possibile omettere la parte intera della costante a virgola mobile, come illustrato negli esempi seguenti. Il numero .75 può essere rappresentato in diversi modi, inclusi i seguenti:  
  
```  
.0075e2  
0.075e1  
.075e1  
75e-2  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Costanti C](../c-language/c-constants.md)