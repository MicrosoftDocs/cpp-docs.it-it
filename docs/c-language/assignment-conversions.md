---
title: Conversioni di assegnazione | Microsoft Docs
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
helpviewer_keywords:
- conversions, assignment
- assignment conversions
ms.assetid: 4ee01013-de32-4aae-b12e-0051d0cde927
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 16d1bf59dfd4b3ef5f037aed9c0f6febfdf1a2e8
ms.openlocfilehash: e51b6af4006ad3d8b35f9167e4db4e3ea84a89f0
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="assignment-conversions"></a>Conversioni di assegnazione
Nelle operazioni di assegnazione, il tipo del valore assegnato viene convertito nel tipo della variabile che riceve l'assegnazione. C consente le conversioni per assegnazione tra i tipi integrali e mobili, anche se le informazioni vengono perse nella conversione. Il metodo di conversione usato dipende dai tipi interessati nell'assegnazione, come descritto in [Conversioni aritmetiche comuni](../c-language/usual-arithmetic-conversions.md) e nelle sezioni seguenti:  
  
-   [Conversioni dai tipi integrali con segno](../c-language/conversions-from-signed-integral-types.md)  
  
-   [Conversioni dai tipi integrali senza segno](../c-language/conversions-from-unsigned-integral-types.md)  
  
-   [Conversioni dai tipi a virgola mobile](../c-language/conversions-from-floating-point-types.md)  
  
-   [Conversioni da e verso tipi di puntatore](../c-language/conversions-to-and-from-pointer-types.md)  
  
-   [Conversioni da altri tipi](../c-language/conversions-from-other-types.md)  
  
 I qualificatori del tipo non influiscono sulla possibilità di eseguire la conversione, tuttavia non è possibile usare un l-value **const** a sinistra dell'assegnazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Conversioni di tipi](../c-language/type-conversions-c.md)
