---
title: "At least one folder is missing the &#39;attribute&#39; attribute | Microsoft Docs"
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
  - "vs.tasklisterror.projfile_missing_fold_attrib"
ms.assetid: 3a0498a9-df61-47d8-a228-f88f4f138df8
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# At least one folder is missing the &#39;attribute&#39; attribute
Per un nodo di cartelle letto dal file VBPROJ o CSPROJ mancano determinati attributi considerati obbligatori dal sistema del progetto.  Attualmente l'unico attributo di questo tipo è **RelPath**, che specifica il percorso della cartella nella cartella del progetto.  
  
 L'errore è solitamente dovuto alla modifica manuale del file di progetto.  
  
 **Per correggere l'errore**  
  
-   Rimuovere il nodo della cartella interessata dal file di progetto.  Inoltre, se la cartella è ancora sul disco, è possibile passare alla modalità Mostra tutti i file, accessibile scegliendo l'apposito pulsante dalla barra degli strumenti di Esplora soluzioni, fare clic con il pulsante destro del mouse sulla cartella interessata e scegliere **Includi nel progetto**.  
  
     Tutte le cartelle per le quali manca un attributo non verranno aggiunte al progetto.  
  
## Vedere anche  
 [File di progetto](../ide/project-files.md)   
 [NIB: Project Properties \(Visual Studio\)](http://msdn.microsoft.com/it-it/eb4c97ed-f667-4850-98d0-6e2a4d21bbca)