---
title: "An error has been encountered that prevents reference &#39;reference&#39; from loading. &lt;reason&gt; | Microsoft Docs"
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
  - "vs.tasklisterror.reference_load_error"
ms.assetid: 0e922611-197b-4607-bc31-03f80bd3e7e1
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# An error has been encountered that prevents reference &#39;reference&#39; from loading. &lt;reason&gt;
Si è verificato un errore irreversibile durante la rimozione di un riferimento dal file di progetto.  Le possibili cause di questo errore, descritte in \<Motivo\>, sono indicate di seguito:  
  
-   GUID per un riferimento in formato non valido.  Questa causa è applicabile solo a riferimenti COM.  
  
-   Strumento wrapper danneggiato.  Attualmente la proprietà dello strumento wrapper può essere una proprietà tlbimp, aximp o primaria.  Questa causa è applicabile solo a riferimenti COM.  
  
-   Stringa di riferimento al progetto non valida.  Questa causa è applicabile solo a riferimenti da progetto a progetto.  
  
 **Per correggere l'errore**  
  
-   Per correggere questo errore, aggiungere il riferimento al progetto.  
  
     Tutti i riferimenti per i quali viene visualizzato questo messaggio diagnostico non verranno caricati nel progetto.  
  
## Vedere anche  
 [NIB: Project Properties \(Visual Studio\)](http://msdn.microsoft.com/it-it/eb4c97ed-f667-4850-98d0-6e2a4d21bbca)