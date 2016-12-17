---
title: "No files were found to look in. | Microsoft Docs"
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
  - "vs.message.VS_E_FRLookInEmpty"
  - "vs.message.0x800A00DE"
ms.assetid: d560aef3-7a55-4fbb-a541-1a43fc13c18b
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# No files were found to look in.
Generalmente questo errore si verifica quando nell'elenco Cerca in è stato specificato un nome di file o una directory che non esiste o che non è possibile trovare.  Questo errore viene inoltre visualizzato se si specifica una directory valida che tuttavia non contiene l'estensione di file riportata nell'elenco Tipi di file oppure non contiene alcun file.  L'errore può verificarsi anche quando si esegue una ricerca in una directory con il set di attributi `Hidden` o `System`.  
  
### Per correggere l'errore  
  
1.  Utilizzare la finestra di dialogo **Impostazione directory personalizzata** per trovare la directory o il nome di file in cui si desidera effettuare la ricerca, anziché immettere il percorso o il nome di file.  Per accedere alla finestra di dialogo **Impostazione directory personalizzata**, scegliere il pulsante con i puntini di sospensione accanto all'elenco **Cerca in**.  
  
2.  Modificare l'estensione di file riportata nell'elenco **Tipi di file** impostando \*.\* in modo da effettuare la ricerca in tutti i file inclusi nella directory specificata.  
  
### Per ignorare l'errore  
  
1.  Tenere premuto CTRL e premere BLOC SCORR.  
  
     Annulla la finestra di dialogo.  
  
## Vedere anche  
 [Ricerca e sostituzione di testo](../Topic/Finding%20and%20Replacing%20Text.md)   
 [Cerca nei file](../Topic/Find%20in%20Files.md)   
 [Choose Search Folders](http://msdn.microsoft.com/it-it/85af6458-dcde-4a84-9ea4-f5cc6550dc80)