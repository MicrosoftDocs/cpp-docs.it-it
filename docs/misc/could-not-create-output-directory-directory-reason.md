---
title: "Could not create output directory &#39;directory&#39;. &lt;reason&gt; | Microsoft Docs"
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
  - "vs.tasklisterror.cannot_create_output_dir"
ms.assetid: b4d1d19f-f582-49d0-a9a9-d3f4ce0a447b
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Could not create output directory &#39;directory&#39;. &lt;reason&gt;
Non è stato possibile creare una directory del progetto.  
  
 Il sistema del progetto tenterà di creare tutte le directory di output all'apertura del progetto.  Di seguito viene riportato un elenco delle directory di output create dal sistema del progetto:  
  
 *projectfolder*\\obj\\`configname`  
 Directory di output temporanea specifica della configurazione.  
  
 *projectfolder*\\obj\\`configname`\\temp  
 Area di lavoro utilizzata dal compilatore.  
  
 *projectfolder*\\obj\\`configname`\\temppe  
 Gli assembly temporanei utilizzati dalle finestre di progettazione in fase di progettazione vengono creati in questa directory.  
  
 outputdir  
 La directory specificata dalla proprietà Output Path.  Per ulteriori informazioni, vedere [Pagina Compilazione, Progettazione progetti \(C\#\)](../Topic/Build%20Page,%20Project%20Designer%20\(C%23\).md).  
  
 La causa più comune del verificarsi di errori durante la creazione di una delle directory nella cartella obj è il superamento del limite MAX\_PATH per i nomi di directory.  
  
 Le cause meno comuni sono rappresentate da autorizzazioni o spazio su disco insufficienti.  
  
 **Per correggere l'errore**  
  
-   Se il percorso è troppo lungo, modificare il percorso del progetto o abbreviare il nome della configurazione del progetto.  
  
     Se si verifica questo errore, il processo di compilazione non verrà completato.  
  
## Vedere anche  
 [NIB How to: Modify Project Properties and Configuration Settings](http://msdn.microsoft.com/it-it/e7184bc5-2f2b-4b4f-aa9a-3ecfcbc48b67)