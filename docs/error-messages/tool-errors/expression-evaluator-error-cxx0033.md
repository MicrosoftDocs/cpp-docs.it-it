---
title: Errore dell'analizzatore di espressioni CXX0033 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- CXX0033
dev_langs:
- C++
helpviewer_keywords:
- CAN0033
- CXX0033
ms.assetid: 0bd62c5b-de89-481f-9b12-88fe84805afe
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 720b1aec6c9be16879119bc0e8148a301507577a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="expression-evaluator-error-cxx0033"></a>Errore dell‘analizzatore di espressioni CXX0033
Errore nelle informazioni di tipo OMF  
  
 Il file eseguibile non ha un formato di modulo di oggetto valido (OMF) per il debug.  
  
 Questo errore è identico all'errore CAN0033.  
  
### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili  
  
1.  Il file eseguibile non è stato creato con il linker rilasciato con questa versione di Visual C++. Ricollegare il codice oggetto utilizzando la versione corrente di LINK.exe.  
  
2.  Il file .exe potrebbe essere stato danneggiato. Ricompilare e ricollegare il programma.