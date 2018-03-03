---
title: Conversioni di tipi (C) | Microsoft Docs
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
- conversions, type
- type conversion
- converting types
- integral promotions
- type casts, when performed
ms.assetid: d130ee7c-03c3-48f4-af7b-1fdba0d3b086
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b1e4dede1dab1fcaf9ae4de5846539924d0095e4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="type-conversions-c"></a>Conversioni di tipi (C)
Le conversioni di tipo dipendono dall'operatore specificato e dal tipo dell'operando o degli operatori. Le conversioni di tipo sono effettuate nei casi seguenti:  
  
-   Quando un valore di un tipo viene assegnato a una variabile di un tipo differente o quando un operatore converte il tipo del relativo operando o operandi prima di eseguire un'operazione  
  
-   Quando viene eseguito il cast esplicito di un valore di un tipo su un tipo diverso  
  
-   Quando un valore viene passato come argomento a una funzione o quando un tipo viene restituito da una funzione  
  
 Un carattere, uno short integer o un campo di bit intero, tutti signed o meno o un oggetto di tipo di enumerazione possono essere utilizzati in un'espressione ovunque un Integer possa essere utilizzato. Se `int` può rappresentare tutti i valori del tipo originale, allora il valore viene convertito in `int`; in caso contrario, viene convertito in `unsigned int`. Questo processo è noto come "promozione a intero". Le promozioni a intero mantengono il valore. Ovvero il valore dopo la promozione è sempre garantito come uguale a prima della promozione. Per altre informazioni, vedere [Conversioni aritmetiche comuni](../c-language/usual-arithmetic-conversions.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni e assegnazioni](../c-language/expressions-and-assignments.md)