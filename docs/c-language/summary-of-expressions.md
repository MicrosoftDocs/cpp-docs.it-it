---
title: Riepilogo di espressioni | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: ed448953-687a-4b57-a1cb-12967bd770ea
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 456a9b98c260107f07c302174e4d9f95d6a62aa6
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="summary-of-expressions"></a>Riepilogo di espressioni
*primary-expression*:  
 *identifier*  
  
 *constant*  
  
 *string-literal*  
  
 **(**  *expression*  **)**  
  
 *expression*:  
 *assignment-expression*  
  
 *expression*  **,**  *assignment-expression*  
  
 *constant-expression*:  
 *conditional-expression*  
  
 *conditional-expression*:  
 *logical-OR-expression*  
  
 *logical-OR-expression*  **?**  *expression*  **:**  *conditional-expression*  
  
 *assignment-expression*:  
 *conditional-expression*  
  
 *unary-expression assignment-operator assignment-expression*  
  
 *postfix-expression*:  
 *primary-expression*  
  
 *postfix-expression*  **[**  *expression*  **]**  
  
 *postfix-expression*  **(**  *argument-expression-list* opt **)**  
  
 *postfix-expression*  **.**  *identifier*  
  
 *postfix-expression*  **->**  *identifier*  
  
 *postfix-expression*  **++**  
  
 *postfix-expression*  **--**  
  
 *argument-expression-list*:  
 *assignment-expression*  
  
 *argument-expression-list*  **,**  *assignment-expression*  
  
 *unary-expression*:  
 *postfix-expression*  
  
 **++**  *unary-expression*  
  
 **--**  *unary-expression*  
  
 *unary-operator*  
  
 *cast-expression*  
  
 **sizeof**  *unary-expression*  
  
 **sizeof (**  *type-name*  **)**  
  
 *unary-operator*: uno tra  
 **& \* + - ~ !**  
  
 *cast-expression*:  
 *unary-expression*  
  
 **(**  *type-name*  **)**  *cast-expression*  
  
 *multiplicative-expression*:  
 *cast-expression*  
  
 *multiplicative-expression*  **\***  *cast-expression*  
  
 *multiplicative-expression*  **/**  *cast-expression*  
  
 *multiplicative-expression*  **%**  *cast-expression*  
  
 *additive-expression*:  
 *multiplicative-expression*  
  
 *additive-expression*  **+**  *multiplicative-expression*  
  
 *additive-expression*  **-**  *multiplicative-expression*  
  
 *shift-expression*:  
 *additive-expression*  
  
 *shift-expression*  **<\<**  *additive-expression*  
  
 *shift-expression*  **>>**  *additive-expression*  
  
 *relational-expression*:  
 *shift-expression*  
  
 *relational-expression*  **\<**  *shift-expression*  
  
 *relational-expression*  **>**  *shift-expression relational-expression*  **\<=**  *shift-expression*  
  
 *relational-expression*  **>=**  *shift-expression*  
  
 *equality-expression*:  
 *relational-expression*  
  
 *equality-expression*  **==**  *relational-expression*  
  
 *equality-expression*  **!=**  *relational-expression*  
  
 *AND-expression*:  
 *equality-expression*  
  
 *AND-expression*  **&**  *equality-expression*  
  
 *exclusive-OR-expression*:  
 *AND-expression*  
  
 *exclusive-OR-expression*  **^**  *AND-expression*  
  
 *inclusive-OR-expression*:  
 *exclusive-OR-expression*  
  
 *inclusive-OR-expression*  **&#124;**  *exclusive-OR-expression*  
  
 *logical-AND-expression*:  
 *inclusive-OR-expression*  
  
 *logical-AND-expression*  **&&**  *inclusive-OR-expression*  
  
 *logical-OR-expression*:  
 *logical-AND-expression*  
  
 *logical-OR-expression*  **&#124;&#124;**  *logical-AND-expression*  
  
## <a name="see-also"></a>Vedere anche  
 [Grammatica di struttura della frase](../c-language/phrase-structure-grammar.md)