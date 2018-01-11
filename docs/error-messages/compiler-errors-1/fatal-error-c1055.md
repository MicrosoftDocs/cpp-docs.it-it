---
title: Errore irreversibile C1055 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C1055
dev_langs: C++
helpviewer_keywords: C1055
ms.assetid: a9fb9190-d7eb-4d5f-b1a2-a41e584a28c1
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: bfdd971dfcb5c762346a8d1f59452f31826db296
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fatal-error-c1055"></a>Errore irreversibile C1055
limite del compilatore: chiavi insufficienti  
  
 Il file di origine contiene un numero eccessivo di simboli. Il compilatore ha esaurito la chiavi hash per la tabella dei simboli.  
  
### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili  
  
1.  Suddividere il file di origine in file più piccoli.  
  
2.  Eliminare i file di intestazione non necessari.  
  
3.  Riutilizzare le variabili temporanee e globali anziché crearne di nuovi.