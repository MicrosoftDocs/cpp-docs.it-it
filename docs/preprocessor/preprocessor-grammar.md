---
title: Grammatica del preprocessore | Microsoft Docs
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
ms.openlocfilehash: 1871d1b8281f4dd74733133ede70ed80430246b3
ms.sourcegitcommit: d4c803bd3a684d7951bf88dcecf1f14af43ae411
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/10/2018
ms.locfileid: "42541414"
---
# <a name="preprocessor-grammar"></a>Grammatica del preprocessore
**#define***identificatore* *token-string*opt    
  
*#* **definire***identificatore*[**(** *identificatore*opt **,** *...*  **,** *identificatore*opt **)**] *token-string*opt    
  
**definita (***identificatore* **)**   
  
**definite***identificatore*   
  
`#include` **"***path-spec***"**  
  
`#include` **\<***Path-spec***>**  
  
**#line***digit-sequence***"** *filename* **"** opt      
  
*#* **undef***identificatore*   
  
**#error***token-string*   
  
**#pragma**  *token-string*  
  
*condizionale* :  
*Se parti elif-part*opt*parte else*opt*endif-line*  
  
*Se parti* :  
*if-linetext*  
  
*Se-line* :  
**#if**  *constant-expression*  
  
**#ifdef***identificatore*   
  
**#ifndef***identificatore*   
  
*elif parti* :  
*testo a riga singola elif*  
  
*testo a riga singola elif elif parti*  
  
*elif-line* :  
**#elif**  *constant-expression*  
  
*parte else* :  
*else-linetext*  
  
*Else-line* :  
`#else`  
  
*endif-line* :  
`#endif`  
  
*Digit-sequence* :  
*digit*  
  
*digit-sequence digit*  
  
*cifra* : uno dei  
**0 1 2 3 4 5 6 7 8 9**  
  
*token-string* :  
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
> I non terminal seguenti vengono espanse nel [convenzioni lessicali](../cpp/lexical-conventions.md) sezione il *riferimenti al linguaggio C++*: `constant`, `constant` - *espressione* , *identificatore*, *parola chiave*, `operator`, e `punctuator`.  
  
## <a name="see-also"></a>Vedere anche  
 
[Riepilogo grammatica (C/C++)](../preprocessor/grammar-summary-c-cpp.md)