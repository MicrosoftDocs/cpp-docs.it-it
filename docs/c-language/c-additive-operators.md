---
title: Operatori additivi C | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- usual arithmetic conversions
- operators [C], addition
- + operator, additive operators
- additive operators
- arithmetic operators [C++], additive operators
ms.assetid: bb8ac205-b061-41fc-8dd4-dab87c8b900c
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
translationtype: Human Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: 885967baa9a7e3651dde02bb5cfb1d6b9783f42b
ms.lasthandoff: 04/01/2017

---
# <a name="c-additive-operators"></a>Operatori di addizione C
Gli operatori additivi eseguono l'addizione (**+**) e la sottrazione (**-**).  
  
## <a name="syntax"></a>Sintassi  
 *additive-expression*:  
 *multiplicative-expression*  
  
 *additive-expression*  **+**  *multiplicative-expression*  
  
 *additive-expression*  **-**  *multiplicative-expression*  
  
> [!NOTE]
>  Sebbene la sintassi per *additive-expression* includa *multiplicative-expression*, ciò non implica che siano richieste le espressioni che usano la moltiplicazione. Vedere la sintassi in [Riepilogo della sintassi del linguaggio C](../c-language/c-language-syntax-summary.md) per *multiplicative-expression*, *cast-expression* e *unary-expression*.  
  
 Gli operandi possono essere valori integrali o a virgola mobile. Alcune operazioni additive possono essere eseguite sui valori di puntatore, come descritto nella discussione di ciascun operatore.  
  
 Gli operatori additivi eseguono conversioni aritmetiche consuete su operandi di tipo integrale e a virgola mobile. Il tipo del risultato è il tipo degli operandi in seguito alla conversione. Poiché le conversioni eseguite dagli operatori additivi non consentono condizioni di overflow o di underflow, è possibile che le informazioni vengano perse se il risultato di un'operazione additiva non può essere rappresentato nel tipo degli operandi dopo la conversione.  
  
## <a name="see-also"></a>Vedere anche  
 [Operatori di addizione: + e -](../cpp/additive-operators-plus-and.md)
