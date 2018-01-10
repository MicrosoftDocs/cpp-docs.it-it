---
title: Errore irreversibile U1051 di NMAKE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: U1051
dev_langs: C++
helpviewer_keywords: U1051
ms.assetid: fede5cd5-dac3-47b7-b86d-e1acfb78699f
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 93c109bf723b3c4cf08e998a715fe8f6f33be466
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="nmake-fatal-error-u1051"></a>Errore irreversibile U1051 di NMAKE 
Memoria insufficiente  
  
 NMAKE ha esaurito la memoria, inclusa la memoria virtuale, perché il file di progetto è troppo grande o complesso.  
  
### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili  
  
1.  Liberare spazio su disco.  
  
2.  Aumentare le dimensioni del file di paging di Windows NT o il file di scambio di Windows.  
  
3.  Se solo parte del makefile è in uso, dividere il file di progetto in file separati o utilizzare **! Se** per limitare la quantità che deve essere elaborato da NMAKE le direttive di pre-elaborazione. Il **! Se** direttive includono **! Se**, `!IFDEF`, **! IFNDEF**, **! ELSE IF**, **! ELSE** `IFDEF`, e **! ELSE** `IFNDEF`.