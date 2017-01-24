---
title: "MSBuild Error MSB3152 | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.GenerateBootstrapper.PackageFileNotFound"
helpviewer_keywords: 
  - "MSB3152"
ms.assetid: 5a3859d4-4107-4e46-bb42-04de92b551de
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3152
**MSB3152: il percorso di installazione per i prerequisiti non è stato impostato sul sito Web del produttore di componenti e il file '\<file\>' nell'elemento '\<package\>' non è stato trovato nel disco.  Per ulteriori informazioni, vedere la Guida.**  
  
 Questo errore si verifica quando manca un file richiesto per il programma di installazione che costituisce un prerequisito.  I file del programma di installazione vengono inseriti in una cartella speciale riservata da Visual Studio per i pacchetti ridistribuibili.  La cartella varia in base alla versione di Visual Studio utilizzata per lo sviluppo.  Per ulteriori informazioni sulla posizione specifica della cartella, vedere [Creazione di programmi di avvio automatico](../Topic/Creating%20Bootstrapper%20Packages.md).  
  
### Per correggere l'errore  
  
-   Determinare se il file esiste sul disco.  
  
-   Per provare a risolvere il problema del package, utilizzare HomeSite.  
  
-   Impostare `CopyComponents` su `false` nel file di progetto.  
  
-   Non utilizzare il package del programma di avvio automatico danneggiato.  
  
## Vedere anche  
 [Creazione di programmi di avvio automatico](../Topic/Creating%20Bootstrapper%20Packages.md)