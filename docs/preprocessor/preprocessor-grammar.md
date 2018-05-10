---
title: Grammatica del preprocessore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- preprocessor
- grammar, preprocessor
- preprocessor, grammar
ms.assetid: 6cd33fad-0b08-4592-9be8-7359c43e24e9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d14a3e00e18a2d3ac69dd472ac4056a379ada224
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="preprocessor-grammar"></a>Grammatica del preprocessore
**#define***identificatore* *token-string*consenso esplicito  
  
 *#* **definire***identificatore*[**(** *identificatore*opt **,** *...*  **,** *identificatore*opt **)**] *token-string*consenso esplicito  
  
 **definita (***identificatore* **)**   
  
 **definita***identificatore*   
  
 `#include` **"***path-spec***"**  
  
 `#include` **\<***Path-spec***>**  
  
 **#line***sequenza di cifre***"** *filename* **"** opt      
  
 *#* **undef***identificatore*  
  
 **#error***token-string*   
  
 **#pragma**  *token-string*  
  
 *condizionale* :  
 *Se parte elif-parti*opt*parte else*opt*endif riga*  
  
 *Se parte* :  
 *if-linetext*  
  
 *Se-line* :  
 **#if**  *constant-expression*  
  
 **#ifdef***identificatore*   
  
 **#ifndef***identificatore*   
  
 *elif parti* :  
 *testo della riga di elif*  
  
 *testo della riga di elif elif parti*  
  
 *elif riga* :  
 **#elif**  *constant-expression*  
  
 *parte else* :  
 *else-linetext*  
  
 *riga else* :  
 `#else`  
  
 *endif riga* :  
 `#endif`  
  
 *sequenza di cifre* :  
 *digit*  
  
 *digit-sequence digit*  
  
 *cifra* : uno dei  
 **0 1 2 3 4 5 6 7 8 9**  
  
 *stringa di token* :  
 Stringa di token  
  
 *token* :  
 *keyword*  
  
 *identifier*  
  
 *constant*  
  
 *operator*  
  
 `punctuator`  
  
 *nome del file* :  
 Nome file del sistema operativo valido  
  
 *Path-spec* :  
 Percorso file valido  
  
 *testo* :  
 Qualsiasi sequenza di testo  
  
> [!NOTE]
>  I seguenti non terminal vengono espanse nel [convenzioni lessicali](../cpp/lexical-conventions.md) sezione la *riferimenti al linguaggio C++*: `constant`, `constant` - *espressione* , *identificatore*, *(parola chiave)*, `operator`, e `punctuator`.  
  
## <a name="see-also"></a>Vedere anche  
 [Riepilogo grammatica (C/C++)](../preprocessor/grammar-summary-c-cpp.md)