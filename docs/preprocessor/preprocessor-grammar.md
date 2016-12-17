---
title: "Grammatica del preprocessore | Microsoft Docs"
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
  - "grammatica, preprocessore"
  - "preprocessore"
  - "preprocessore, grammatica"
ms.assetid: 6cd33fad-0b08-4592-9be8-7359c43e24e9
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Grammatica del preprocessore
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**\#define**  *identifier* *token\-string*opt  
  
 *\#* **define**  *identifier*\[**\(** *identifier*opt**,** *...* **,** *identifier*opt **\)**\] *token\-string*opt  
  
 **defined\(**  *identifier* **\)**  
  
 **defined**  *identifier*  
  
 `#include` **"***path\-spec***"**  
  
 `#include` **\<***path\-spec***\>**  
  
 **\#line**  *digit\-sequence*  **"** *filename* **"** opt  
  
 *\#* **undef**  *identifier*  
  
 **\#error**  *token\-string*  
  
 **\#pragma**  *token\-string*  
  
 *conditional* :  
 *if\-part elif\-parts* opt *else\-part*opt *endif\-line*  
  
 *if\-part* :  
 *if\-linetext*  
  
 *if\-line* :  
 **\#if**  *constant\-expression*  
  
 **\#ifdef**  *identifier*  
  
 **\#ifndef**  *identifier*  
  
 *elif\-parts* :  
 *elif\-line text*  
  
 *elif\-parts elif\-line text*  
  
 *elif\-line* :  
 **\#elif**  *constant\-expression*  
  
 *else\-part* :  
 *else\-linetext*  
  
 *else\-line* :  
 `#else`  
  
 *endif\-line* :  
 `#endif`  
  
 *digit\-sequence* :  
 *digit*  
  
 *digit\-sequence digit*  
  
 *digit* : uno tra  
 **0 1 2 3 4 5 6 7 8 9**  
  
 *token\-string* :  
 Stringa di token  
  
 *token* :  
 *keyword*  
  
 *identifier*  
  
 *constant*  
  
 *operator*  
  
 `punctuator`  
  
 *filename* :  
 Nome file del sistema operativo valido  
  
 *path\-spec* :  
 Percorso file valido  
  
 *text* :  
 Qualsiasi sequenza di testo  
  
> [!NOTE]
>  I seguenti non terminal sono descritti in modo dettagliato nell'Appendice A, [Riepilogo di grammatica](../misc/grammar-summary-cpp.md), di *Riferimenti al linguaggio C\+\+*: `constant`, `constant`\-*expression*, *identifier*, *keyword*, `operator` e `punctuator`.  
  
## Vedere anche  
 [Riepilogo grammatica](../preprocessor/grammar-summary-c-cpp.md)