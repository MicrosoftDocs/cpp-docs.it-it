---
title: Grammatica del preprocessore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- preprocessor
- grammar, preprocessor
- preprocessor, grammar
ms.assetid: 6cd33fad-0b08-4592-9be8-7359c43e24e9
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 797d4bf4274a92ca4f265d01579698c0f9c6a4a3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="preprocessor-grammar"></a>Grammatica del preprocessore
**#define***identificatore* *token-string*consenso esplicito    
  
 *#***definire***identificatore*[**(** *identificatore*opt**,** *...*  **,** *identificatore*opt **)**] *token-string*consenso esplicito    
  
 **definito (***identificatore* **)**   
  
 **definito***identificatore*   
  
 `#include`**"***path-spec***"**  
  
 `#include` **\<**  *path-spec***>**  
  
 **#line***sequenza di cifre***"** *filename* **"**consenso esplicito      
  
 *#***undef***identificatore*   
  
 **#error***token di stringa*   
  
 **#pragma***token di stringa*   
  
 *condizionale* :  
 *Se parte elif-parti*opt*parte else*opt*endif riga*  
  
 *Se parte* :  
 *Se linetext*  
  
 *Se-line* :  
 **#if***espressione costante*   
  
 **#ifdef***identificatore*   
  
 **#ifndef***identificatore*   
  
 *elif parti* :  
 *testo della riga di elif*  
  
 *testo della riga di elif elif parti*  
  
 *elif riga* :  
 **#elif***espressione costante*   
  
 *parte else* :  
 *Else linetext*  
  
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