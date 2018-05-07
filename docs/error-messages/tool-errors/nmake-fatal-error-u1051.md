---
title: Errore irreversibile U1051 di NMAKE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- U1051
dev_langs:
- C++
helpviewer_keywords:
- U1051
ms.assetid: fede5cd5-dac3-47b7-b86d-e1acfb78699f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 570c7e5d8e6e8250a67e4f032ac26b04388cfd00
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="nmake-fatal-error-u1051"></a>Errore irreversibile U1051 di NMAKE 
Memoria insufficiente  
  
 NMAKE ha esaurito la memoria, inclusa la memoria virtuale, perché il file di progetto è troppo grande o complesso.  
  
### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili  
  
1.  Liberare spazio su disco.  
  
2.  Aumentare le dimensioni del file di paging di Windows NT o il file di scambio di Windows.  
  
3.  Se solo parte del makefile è in uso, dividere il file di progetto in file separati o utilizzare **! Se** per limitare la quantità che deve essere elaborato da NMAKE le direttive di pre-elaborazione. Il **! Se** direttive includono **! Se**, `!IFDEF`, **! IFNDEF**, **! ELSE IF**, **! ELSE** `IFDEF`, e **! ELSE** `IFNDEF`.