---
title: Riepilogo di istruzioni | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: ce45d2fe-ec0e-459f-afb1-80ab6a7f0239
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4b2d3b27149344151f891e23c39bbecb8e4c1102
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="summary-of-statements"></a>Riepilogo di istruzioni
*istruzione*:  
 *labeled-statement*  
  
 *compound-statement*  
  
 *expression-statement*  
  
 *selection-statement*  
  
 *iteration-statement*  
  
 *jump-statement*  
  
 *try-except-statement* /* Specifica di Microsoft \*/  
  
 *try-finally-statement* /* Specifica di Microsoft \*/  
  
 *jump-statement*:  
 **goto**  *identificatore*  **;**  
  
 **continue ;**  
  
 **break ;**  
  
 **return**  *espressione*opt **;**  
  
 *compound-statement*:  
 **{**  *declaration-list*opt*statement-list*opt **}**  
  
 *declaration-list*:  
 *declaration*  
  
 *declaration-list dichiarazione*  
  
 *statement-list*:  
 *istruzione*  
  
 *statement-list statement*  
  
 *expression-statement*:  
 *espressione*opt **;**  
  
 *iteration-statement*:  
 **while (**  *espressione*  **)**  *istruzione*  
  
 **do**  *istruzione*  **while (**  *espressione*  **) ;**  
  
 **for (**  *espressione*opt **;** *espressione*opt **;** *espressione*opt **)** *istruzione*  
  
 *selection-statement*:  
 **if (**  *espressione*  **)**  *istruzione*  
  
 **if (**  *espressione*  **)**  *istruzione*  **else**  *istruzione*  
  
 **switch (**  *espressione*  **)**  *istruzione*  
  
 *labeled-statement*:  
 *identificatore*  **:**  *istruzione*  
  
 **case**  *constant-expression*  **:**  *statement*  
  
 **default :**  *statement*  
  
 *try-except-statement*:   /\* Specifico di Microsoft \*/  
 **__try**  *compound-statement*  
  
 **__except (**  *espressione*  **)**  *compound-statement*  
  
 *try-finally-statement*:   /\* Specifico di Microsoft \*/  
 **__try**  *compound-statement*  
  
 **__finally**  *compound-statement*  
  
## <a name="see-also"></a>Vedere anche  
 [Grammatica di struttura della frase](../c-language/phrase-structure-grammar.md)