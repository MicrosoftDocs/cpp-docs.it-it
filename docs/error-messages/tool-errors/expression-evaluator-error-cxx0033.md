---
title: Errore dell'analizzatore di espressioni CXX0033 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: CXX0033
dev_langs: C++
helpviewer_keywords:
- CAN0033
- CXX0033
ms.assetid: 0bd62c5b-de89-481f-9b12-88fe84805afe
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 618dbe464adc64f36e35b9c329eb476166b8b5e1
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="expression-evaluator-error-cxx0033"></a>Errore dell‘analizzatore di espressioni CXX0033
Errore nelle informazioni di tipo OMF  
  
 Il file eseguibile non ha un formato di modulo di oggetto valido (OMF) per il debug.  
  
 Questo errore è identico all'errore CAN0033.  
  
### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili  
  
1.  Il file eseguibile non è stato creato con il linker rilasciato con questa versione di Visual C++. Ricollegare il codice oggetto utilizzando la versione corrente di LINK.exe.  
  
2.  Il file .exe potrebbe essere stato danneggiato. Ricompilare e ricollegare il programma.