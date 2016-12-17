---
title: "The parent file, &#39;file1&#39;, for file &#39;file2&#39; cannot be found in the project file | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.projfile_missing_dependency"
ms.assetid: 1902c0b5-d09d-49b9-8f71-e325f7b9cfd7
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# The parent file, &#39;file1&#39;, for file &#39;file2&#39; cannot be found in the project file
Non è possibile trovare un nodo corrispondente a un file.  
  
 I file dipendenti vengono mantenuti nel file di progetto tramite l'aggiunta di un attributo `DependentUpon` al nodo `<File>`.  Di seguito è riportato un esempio:  
  
```  
<File  
    RelPath = "Form1.resx"  
    SubType = "Code"  
    BuildAction = "EmbeddedResource"  
    DependentUpon="Form1.vb"  
/>  
```  
  
 In tal modo, Form1.resx verrà visualizzato sotto Form1.vb nella gerarchia del progetto.  
  
 L'errore è solitamente dovuto alla modifica manuale del file di progetto.  
  
### Per correggere l'errore  
  
-   Modificare e aggiornare il file di progetto.  
  
     I file modificati verranno aggiunti al progetto, ma la dipendenza non verrà mantenuta.  
  
## Vedere anche  
 [NIB: Project Properties \(Visual Studio\)](http://msdn.microsoft.com/it-it/eb4c97ed-f667-4850-98d0-6e2a4d21bbca)