---
title: Forma suffissa degli operatori | Microsoft Docs
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
- operators [C], postfix
- postfix operators
ms.assetid: 76260011-1624-484e-8bef-72ae7ab556cc
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5aa82ded9bf53a00efe33f589c832550da967c96
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="postfix-operators"></a>Operatori di suffisso
Gli operatori di suffisso hanno la precedenza più elevata (l'associazione più stretta) nella valutazione di un'espressione.  
  
## <a name="syntax"></a>Sintassi  
 *postfix-expression*:  
 *primary-expression*  
  
 *postfix-expression*  **[**  *expression*  **]**  
  
 *postfix-expression*  **(**  *argument-expression-list* opt**)**  
  
 *postfix-expression*  **.**  *identifier*  
  
 *postfix-expression*  **->**  *identifier*  
  
 *postfix-expression*  **++**  
  
 *postfix-expression*  **--**  
  
 Gli operatori in questo livello di precedenza sono gli indici di matrice, le chiamate di funzione, la struttura e i membri di unione, nonché gli operatori di incremento e decremento in forma suffissa.  
  
## <a name="see-also"></a>Vedere anche  
 [Operatori C](../c-language/c-operators.md)