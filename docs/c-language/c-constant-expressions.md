---
title: Espressioni costanti C | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- constant expressions, syntax
- constant expressions
- expressions [C++], constant
ms.assetid: d48a6c47-e44c-4be2-9c8b-7944c7ef8de7
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 596f558ea5c22f1850800d95b0d4ad0b5edd6a8b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="c-constant-expressions"></a>Espressioni costanti C
Un'espressione costante viene valutata in fase di compilazione, non in fase di esecuzione; e può essere utilizzata in qualsiasi punto in cui può essere utilizzata una costante. L'espressione costante deve restituire una costante che rientri nell'intervallo di valori rappresentabili per quel tipo. Gli operandi di un'espressione costante possono essere costanti Integer, costanti carattere, costanti a virgola mobile, costanti di enumerazione, cast di tipo, espressioni `sizeof` e altre espressioni costanti.  
  
## <a name="syntax"></a>Sintassi  
 *constant-expression*:  
 *conditional-expression*  
  
 *conditional-expression*:  
 *logical-OR-expression*  
  
 *logical-OR-expression* **?**  *expression* **:**  *conditional-expression*  
  
 *expression*:  
 *assignment-expression*  
  
 *expression* **,**  *assignment-expression*  
  
 *assignment-expression*:  
 *conditional-expression*  
  
 *unary-expression assignment-operator assignment-expression*  
  
 *assignment-operator*: uno tra  
 **= \*= /= %= += -= <\<= >>= &= ^= &#124;=**  
  
 I non terminal per il dichiaratore di struct, l'enumeratore, il dichiaratore diretto, il dichiaratore astratto diretto e l'istruzione etichettata contengono il non terminal *constant-expression*.  
  
 Un'espressione costante integrale deve essere usata per specificare la dimensione di un membro del campo di bit di una struttura, il valore di una costante di enumerazione, la dimensione di una matrice o il valore di una costante **case**.  
  
 Le espressioni costanti utilizzate nelle direttive per il preprocessore sono soggette a restrizioni aggiuntive. Di conseguenza, sono note come "espressioni costanti limitate". Un'espressione costante limitata non può contenere espressioni `sizeof`, costanti di enumerazione, i cast di tipo su un tipo qualsiasi o costanti di tipo mobile. È tuttavia possibile che contenga l'espressione costante speciale `defined (`*identifier*`)`.  
  
## <a name="see-also"></a>Vedere anche  
 [Operandi ed espressioni](../c-language/operands-and-expressions.md)