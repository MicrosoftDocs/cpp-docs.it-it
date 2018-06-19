---
title: Errore irreversibile C1002 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1002
dev_langs:
- C++
helpviewer_keywords:
- C1002
ms.assetid: bd6d274a-c7b4-43af-8bf2-23c5e442aa22
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c63a8d399b3e8c781694d89825e7898fd1db4639
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33225051"
---
# <a name="fatal-error-c1002"></a>Errore irreversibile C1002
Il compilatore ha esaurito lo spazio dell'heap durante il passaggio 2  
  
 Il compilatore ha esaurito lo spazio di memoria dinamica durante la seconda fase, probabilmente a causa di un programma con un numero eccessivo di simboli o espressioni complesse.  
  
### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili  
  
1.  Dividere il file di origine in diversi file più piccoli.  
  
2.  Suddividere le espressioni in sottoespressioni più piccole.  
  
3.  Rimuovere altri programmi o driver che utilizzano memoria.