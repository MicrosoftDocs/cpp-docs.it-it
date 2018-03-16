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
ms.sourcegitcommit: 9239c52c05e5cd19b6a72005372179587a47a8e4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2018
---
# <a name="29-directive-nesting"></a>2.9 Annidamento di direttive
Dinamica annidamento delle direttive deve essere conformi alle regole seguenti:  
  
-   A **parallela** direttiva in modo dinamico all'interno di un altro **parallela** logicamente stabilisce un nuovo team, è costituito dal solo il thread corrente, a meno che non annidati di parallelismo è abilitato.  
  
-   **per**, **sezioni**, e **singolo** direttive associati allo stesso **parallela** non possono essere annidati l'altro.  
  
-   **critico** direttive con lo stesso nome non possono essere annidati l'altro. Si noti di che questa restrizione non è sufficiente per impedire un deadlock.  
  
-   **per**, **sezioni**, e **singolo** direttive non consentite in quanto dinamica di **critici**, **ordinati**, e **master** aree se le direttive associati allo stesso **parallela** come le regioni.  
  
-   **barriera** direttive non consentite in quanto dinamica di **per**, **ordinati**, **sezioni**, **singolo**, **master**, e **critici** aree se le direttive associati allo stesso **parallela** come le regioni.  
  
-   **master** direttive non consentite in quanto dinamica di **per**, **sezioni**, e **singolo** direttive se il **master** direttive associati allo stesso **parallel** come direttive di condivisione del lavoro.  
  
-   **ordinati** direttive non sono consentite nella portata dinamica della **critici** aree se le direttive associati allo stesso **parallela** come le regioni.  
  
-   Una direttiva è consentito quando eseguita in modo dinamico all'interno di un'area parallela è consentita anche quando eseguita all'esterno di un'area parallela. Quando viene eseguita in modo dinamico all'esterno di un'area parallela specificato dall'utente, la direttiva viene eseguita da un team composto solo il thread principale.