---
title: Riepilogo di istruzioni | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: ce45d2fe-ec0e-459f-afb1-80ab6a7f0239
caps.latest.revision: 8
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: a3c8b013995688df7647493a5a7be8554da22586
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

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
  
 **return**  *espressione*opt**;**  
  
 *compound-statement*:  
 **{**  *declaration-list*opt*statement-list*opt**}**  
  
 *declaration-list*:  
 *declaration*  
  
 *declaration-list dichiarazione*  
  
 *statement-list*:  
 *istruzione*  
  
 *statement-list statement*  
  
 *expression-statement*:  
 *espressione*opt**;**  
  
 *iteration-statement*:  
 **while (**  *espressione*  **)**  *istruzione*  
  
 **do**  *istruzione*  **while (**  *espressione*  **) ;**  
  
 **for (**  *espressione*opt**;** *espressione*opt**;** *espressione*opt**)** *istruzione*  
  
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
