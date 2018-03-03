---
title: 2.9 annidamento di direttive | Documenti Microsoft
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
ms.assetid: 6565a43c-fd2d-4366-8322-8d75e1b06600
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: bd3c4f790681b1b044f435c03d185585b565eb62
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="29-directive-nesting"></a>2.9 Annidamento di direttive
Dinamica annidamento delle direttive deve essere conformi alle regole seguenti:  
  
-   A **parallela** direttiva in modo dinamico all'interno di un altro **parallela** logicamente stabilisce un nuovo team, è costituito dal solo il thread corrente, a meno che non annidati di parallelismo è abilitato.  
  
-   **per**, **sezioni**, e **singolo** direttive che associati allo stesso **parallela** non possono essere nidificati uno in altro.  
  
-   **critico** non possono essere nidificati uno in altro direttive con lo stesso nome. Si noti di che questa restrizione non è sufficiente per impedire un deadlock.  
  
-   **per**, **sezioni**, e **singolo** direttive non consentite in quanto dinamico di **critico**, **ordinati**, e **master** aree se le direttive associati allo stesso **parallela** come le regioni.  
  
-   **barriera** direttive non consentite in quanto dinamico di **per**, **ordinati**, **sezioni**, **singolo**, **master**, e **critico** aree se le direttive associati allo stesso **parallela** come le regioni.  
  
-   **master** direttive non consentite in quanto dinamico di **per**, **sezioni**, e **singolo** direttive se il **master** direttive associati allo stesso **parallela** come le direttive di condivisione del lavoro.  
  
-   **ordinati** direttive non sono consentite in quanto dinamico di **critico** aree se le direttive associati allo stesso **parallela** come le regioni.  
  
-   Una direttiva è consentito quando eseguita in modo dinamico all'interno di un'area parallela è consentita anche quando eseguita all'esterno di un'area parallela. Quando viene eseguita in modo dinamico all'esterno di un'area parallela specificato dall'utente, la direttiva viene eseguita da un team composto solo il thread principale.