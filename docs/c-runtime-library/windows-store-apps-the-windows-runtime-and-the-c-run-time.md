---
title: "Applicazioni Windows Store, Windows Runtime e C Run-Time | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 356d6d8d-76ee-4181-9ad0-6f24b2fede38
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Applicazioni Windows Store, Windows Runtime e C Run-Time
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le applicazioni [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] sono programmi che vengono eseguiti in [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] eseguibile su [!INCLUDE[win8](../build/includes/win8_md.md)].  [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] è un ambiente attendibile che controlla le funzioni, le variabili e le risorse disponibili per un'applicazione [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)].  Tuttavia, per motivi legati alla progettazione, le restrizioni [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] impediscono l'utilizzo della maggior parte delle funzionalità della libreria di runtime C \(CRT\) nelle applicazioni [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)].  
  
 [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] non supporta le funzionalità CRT seguenti:  
  
-   La maggior parte delle funzioni CRT sono correlate a funzionalità non supportate.  
  
     Ad esempio, un'applicazione [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] non può creare un processo usando le famiglie di routine `exec` e `spawn`.  
  
     Quando una funzione CRT non è supportata in un'applicazione [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)], questo fatto è indicato nel relativo articolo di riferimento.  
  
-   La maggior parte delle funzioni di caratteri multibyte e di stringa.  
  
     Tuttavia, sia il testo ANSI che Unicode sono supportati.  
  
-   Applicazioni console e argomenti della riga di comando.  
  
     Tuttavia, le applicazioni desktop tradizionali supportano ancora la console e gli argomenti della riga di comando.  
  
-   Variabili di ambiente.  
  
-   Il concetto di una cartella di lavoro corrente.  
  
-   Applicazioni [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] e DLL che vengono staticamente collegate a CRT e compilate usando le opzioni del compilatore [\/MT](../build/reference/md-mt-ld-use-run-time-library.md) o `/MTd`.  
  
     Ovvero un'applicazione che usa una versione statica con multithreading di CRT.  
  
-   Un'applicazione compilata usando l'opzione del compilatore [\/MDd](../build/reference/md-mt-ld-use-run-time-library.md).  
  
     Ovvero, una versione di debug con multithreading specifica per DLL di CRT.  Tale applicazione non è supportata sul [!INCLUDE[win8_appstore_long](../build/reference/includes/win8_appstore_long_md.md)].  
  
 Per un elenco completo delle funzioni CRT che non sono disponibili in un'app [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] e per suggerimenti su funzioni alternative, vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Vedere anche  
 [Compatibilità](../c-runtime-library/compatibility.md)   
 [Funzioni CRT non supportate da Windows Runtime](../c-runtime-library/windows-runtime-unsupported-crt-functions.md)   
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)