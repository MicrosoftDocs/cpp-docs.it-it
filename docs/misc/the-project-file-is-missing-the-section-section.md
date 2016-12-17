---
title: "The project file is missing the &#39;section&#39; section | Microsoft Docs"
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
  - "vs.tasklisterror.projfile_sectionerr"
ms.assetid: 516ab410-1b73-4539-9654-6323af6135b2
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# The project file is missing the &#39;section&#39; section
Il file VBPROJ o CSPROJ è danneggiato.  Manca una delle sezioni seguenti:  
  
-   Compila  
  
-   File  
  
-   VisualStudio  
  
-   VisualBasic o CSHARP  
  
 Se manca la sezione VisualStudio, VisualBasic o CSHARP, il progetto non verrà caricato.  Se manca la sezione Build o Files, il file di progetto verrà caricato nel modo seguente:  
  
-   Se manca la sezione Build, tutte le impostazioni di generazione e quelle relative alla configurazione andranno perse.  
  
-   Se manca la sezione Files, nel progetto non sarà presente alcun file.  
  
 **Per correggere l'errore**  
  
-   Ricreare il progetto.  
  
## Vedere anche  
 [File di progetto](../ide/project-files.md)   
 [NIB: Project Properties \(Visual Studio\)](http://msdn.microsoft.com/it-it/eb4c97ed-f667-4850-98d0-6e2a4d21bbca)