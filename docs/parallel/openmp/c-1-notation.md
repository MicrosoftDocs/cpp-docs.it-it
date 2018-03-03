---
title: C. 1 notazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: a23b2631-8096-4bf3-ac23-ba4f4bd7a52a
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e9772b2a4b27521c7aa256f9ee7760a4687152b9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="c1-notation"></a>C.1 Notazione
Il nome di un non terminale, costituiti da regole grammaticali seguita da due punti, seguiti da alternative di sostituzione su righe separate.  
  
 Termopt l'espressione sintattica indica che il termine è facoltativo all'interno della sostituzione.  
  
 L'espressione sintattica *termine*optseq equivale a *termine-seq*opt con le regole aggiuntive seguenti:  
  
 *termine-seq* :  
  
 *termine*  
  
 *termine-seq termine*  
  
 *termine-seq* , *termine*