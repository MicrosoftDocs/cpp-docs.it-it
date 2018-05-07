---
title: Progetto PRJ0006 errore di compilazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- PRJ0006
dev_langs:
- C++
helpviewer_keywords:
- PRJ0006
ms.assetid: ce092be4-1652-414f-8cb5-b97ef5841f89
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 151c22bf13c13de21e89a5c96185cf1c4c1ca349
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="project-build-error-prj0006"></a>Errore di compilazione progetto PRJ0006
Impossibile aprire il file temporaneo 'file'. Verificare che il file esista e che la directory non sia protetto da scrittura.  
  
 Visual C++ non può creare un file temporaneo durante il processo di compilazione. Motivi sono:  
  
-   Nessuna directory temporanea.  
  
-   Directory temporanea di sola lettura.  
  
-   Spazio su disco.  
  
-   La cartella $ (IntDir) è in sola lettura o contiene i file temporanei che sono di sola lettura.  
  
 Questo errore si verifica anche in seguito all'errore PRJ0007: Impossibile creare la directory di output 'directory'. L'errore PRJ0007 indica che non è stato possibile creare la directory di $ (IntDir), la creazione di file temporanei non sarà possibile eseguire.  
  
 File temporanei vengono creati ogni volta che specifica:  
  
-   Un file di risposta.  
  
-   Un'istruzione di compilazione personalizzata.  
  
-   Un evento di compilazione.