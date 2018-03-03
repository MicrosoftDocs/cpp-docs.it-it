---
title: Errore irreversibile C1002 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C1002
dev_langs:
- C++
helpviewer_keywords:
- C1002
ms.assetid: bd6d274a-c7b4-43af-8bf2-23c5e442aa22
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d299c6793e106ce516a81a9a81312ef0a09c25bf
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fatal-error-c1002"></a>Errore irreversibile C1002
Il compilatore ha esaurito lo spazio dell'heap durante il passaggio 2  
  
 Il compilatore ha esaurito lo spazio di memoria dinamica durante la seconda fase, probabilmente a causa di un programma con un numero eccessivo di simboli o espressioni complesse.  
  
### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili  
  
1.  Dividere il file di origine in diversi file più piccoli.  
  
2.  Suddividere le espressioni in sottoespressioni più piccole.  
  
3.  Rimuovere altri programmi o driver che utilizzano memoria.