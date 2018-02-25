---
title: Grammatica del preprocessore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- preprocessor
- grammar, preprocessor
- preprocessor, grammar
ms.assetid: 6cd33fad-0b08-4592-9be8-7359c43e24e9
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 02b3597b035e3ea4bfa1670aa405109f4c01a077
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="preprocessor-grammar"></a>Grammatica del preprocessore
**#define***identificatore* *token-string*consenso esplicito    
  
 *#* **definire***identificatore*[**(** *identificatore*opt**,** *...*  **,** *identificatore*opt **)**] *token-string*consenso esplicito    
  
 **defined(**  *identifier* **)**  
  
 **defined**  *identifier*  
  
 `#include` **"***path-spec***"**  
  
 `#include` **\<***path-spec***>**  
  
 **#line**  *digit-sequence*  **"** *filename* **"**opt  
  
 *#* **undef***identificatore*   
  
 **#error**  *token-string*  
  
 **#pragma**  *token-string*  
  
 *condizionale* :  
 *Se parte elif-parti*opt*parte else*opt*endif riga*  
  
 *Se parte* :  
 *if-linetext*  
  
 *Se-line* :  
 **#if**  *constant-expression*  
  
 **#ifdef**  *identifier*  
  
 **#ifndef**  *identifier*  
  
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