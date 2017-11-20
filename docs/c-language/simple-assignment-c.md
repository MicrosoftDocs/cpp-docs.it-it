---
title: Assegnazione semplice (C) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- type conversion [C++], simple assignment
- data type conversion [C++], simple assignment
- operators [C], simple assignment
- assignment operators [C++], simple
- simple assignment operator
- equal sign
ms.assetid: e7140a0a-7104-4b3a-b293-7adcc1fdd52b
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: c6f81732b4fccdac6ae0912b7617c28318da3e55
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="simple-assignment-c"></a>Assegnazione semplice (C)
L'operatore di assegnazione semplice assegna l'operando destro all'operando sinistro. Il valore dell'operando destro è convertito nel tipo dell'espressione di assegnazione e sostituisce il valore archiviato nell'oggetto definito dall'operando sinistro. Si applicano le regole di conversione per l'assegnazione. Vedere [Conversioni di assegnazione](../c-language/assignment-conversions.md).  
  
```  
double x;  
int y;  
  
x = y;  
```  
  
 In questo esempio, il valore di `y` viene convertito nel tipo **double** e viene assegnato a `x`.  
  
## <a name="see-also"></a>Vedere anche  
 [Operatori di assegnazione C](../c-language/c-assignment-operators.md)