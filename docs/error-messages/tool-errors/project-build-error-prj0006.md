---
title: Progetto PRJ0006 errore di compilazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- PRJ0006
dev_langs:
- C++
helpviewer_keywords:
- PRJ0006
ms.assetid: ce092be4-1652-414f-8cb5-b97ef5841f89
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 817450fb6b72f985d7ff49f7e65f9dfa0933b4d6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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