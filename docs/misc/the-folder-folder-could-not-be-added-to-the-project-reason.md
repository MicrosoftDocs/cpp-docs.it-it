---
title: "The folder &#39;folder&#39; could not be added to the project. &lt;reason&gt; | Microsoft Docs"
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
  - "vs.tasklisterror.projfile_no_add_folder"
ms.assetid: 3f6a5aa7-17cc-4e78-93b7-96e0970e111e
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# The folder &#39;folder&#39; could not be added to the project. &lt;reason&gt;
Non è possibile aggiungere al progetto una cartella letta dal file VBPROJ o CSPROJ.  Di seguito sono elencati alcuni motivi.  
  
-   Nome non valido.  
  
-   File all'interno di un percorso,  nel caso, ad esempio, in cui esista un percorso relativo Cartella1\\Cartella2\\Cartella3 per un progetto, ma sia presente anche un file con percorso relativo Cartella1\\Cartella2.  
  
-   Elemento già esistente.  Questo errore si verifica quando una cartella viene elencata due volte nel file di progetto.  
  
 L'errore è solitamente dovuto alla modifica manuale del file di progetto.  
  
 **Per correggere l'errore**  
  
-   Rimuovere il nodo della cartella interessata dal file di progetto.  
  
     Tutte le cartelle e tutti i file nella cartella per i quali viene visualizzato questo messaggio diagnostico non verranno aggiunti al progetto.  
  
## Vedere anche  
 [File di progetto](../ide/project-files.md)   
 [NIB: Project Properties \(Visual Studio\)](http://msdn.microsoft.com/it-it/eb4c97ed-f667-4850-98d0-6e2a4d21bbca)