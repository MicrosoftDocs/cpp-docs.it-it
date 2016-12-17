---
title: "The user options settings file for this project is missing the &#39;section&#39; section | Microsoft Docs"
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
  - "vs.tasklisterror.peruserfile_sectionerr"
ms.assetid: 576070f5-76b6-46e4-8aba-83442521027f
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# The user options settings file for this project is missing the &#39;section&#39; section
Manca il nodo Build nel file VBPROJ.USER o CSPROJ.USER.  
  
 La sezione Build include le impostazioni di debug.  Se questa sezione risulta mancante, le impostazioni di debug non verranno caricate e verranno ripristinati i valori predefiniti.  
  
 Questa situazione viene in genere causata dalla modifica manuale del file di progetto.  
  
 Il file di progetto per ciascun utente verrà riscritto automaticamente alla chiusura del progetto.  
  
 Si tratta di un avviso informativo.  
  
## Vedere anche  
 [File di progetto](../ide/project-files.md)   
 [NIB: Project Properties \(Visual Studio\)](http://msdn.microsoft.com/it-it/eb4c97ed-f667-4850-98d0-6e2a4d21bbca)