---
title: Errore irreversibile C1055 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1055
dev_langs:
- C++
helpviewer_keywords:
- C1055
ms.assetid: a9fb9190-d7eb-4d5f-b1a2-a41e584a28c1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 07f0dc0e8dca08e8b0de47b73516d3fdfa21435b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="fatal-error-c1055"></a>Errore irreversibile C1055
limite del compilatore: chiavi insufficienti  
  
 Il file di origine contiene un numero eccessivo di simboli. Il compilatore ha esaurito la chiavi hash per la tabella dei simboli.  
  
### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili  
  
1.  Suddividere il file di origine in file più piccoli.  
  
2.  Eliminare i file di intestazione non necessari.  
  
3.  Riutilizzare le variabili temporanee e globali anziché crearne di nuovi.