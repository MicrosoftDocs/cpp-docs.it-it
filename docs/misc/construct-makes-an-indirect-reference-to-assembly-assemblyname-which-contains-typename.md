---
title: "Il costrutto contiene un riferimento indiretto al progetto &#39;&lt;nomeassembly&gt;&#39;, che contiene &#39;&lt;nometipo&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc31528"
  - "vbc31528"
helpviewer_keywords: 
  - "BC31528"
ms.assetid: 33459c3f-8615-492e-b6ae-531ed597999e
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il costrutto contiene un riferimento indiretto al progetto &#39;&lt;nomeassembly&gt;&#39;, che contiene &#39;&lt;nometipo&gt;&#39;
Il costrutto contiene un riferimento indiretto al progetto '\<nomeassembly\>', che contiene \<nometipo\>. Aggiungere un riferimento a \<nomefile\> nel progetto.  
  
 Un'espressione usa un tipo, ad esempio una classe, una struttura, un'interfaccia, un'enumerazione o un delegato, ma l'assembly non ha un riferimento di progetto all'assembly che definisce il tipo.  
  
 **ID errore:** BC31528  
  
### Per correggere l'errore  
  
-   Nelle proprietà del progetto aggiungere un riferimento al file contenente l'assembly che definisce il tipo in uso.  
  
## Vedere anche  
 [NOTINBUILD: Risoluzione di un riferimento quando più variabili hanno lo stesso nome](http://msdn.microsoft.com/it-it/9601e39f-1911-44e1-ace5-3f6e090408b9)   
 [NIB Procedura: Modificare le proprietà e le impostazioni di configurazione dei progetti](http://msdn.microsoft.com/it-it/e7184bc5-2f2b-4b4f-aa9a-3ecfcbc48b67)   
 [NIB Procedura: Aggiungere o rimuovere riferimenti utilizzando la finestra di dialogo Aggiungi riferimento](http://msdn.microsoft.com/it-it/3bd75d61-f00c-47c0-86a2-dd1f20e231c9)