---
title: "Errore di compilazione progetto PRJ0006 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "PRJ0006"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0006"
ms.assetid: ce092be4-1652-414f-8cb5-b97ef5841f89
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore di compilazione progetto PRJ0006
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Impossibile aprire il file temporaneo "file".Accertarsi che il file esista e che la directory non sia protetta da scrittura.  
  
 Non è stato possibile creare un file temporaneo durante il processo di compilazione.  Di seguito sono indicate alcune delle possibili cause:  
  
-   Non è presente una directory temp.  
  
-   La directory temp è di sola lettura.  
  
-   Lo spazio disponibile su disco è insufficiente.  
  
-   La cartella $\(IntDir\) è di sola lettura o contiene file temporanei di sola lettura.  
  
 Questo errore si verifica anche in seguito all'errore PRJ0007: Impossibile creare la directory di output "directory".  L'errore PRJ0007 indica che non è possibile creare la directory $\(IntDir\) e pertanto non sarà possibile la creazione di file temporanei.  
  
 I file temporanei vengono creati ogni volta che si specifica:  
  
-   Un file di risposta  
  
-   Un'istruzione di compilazione personalizzata  
  
-   Un evento di compilazione