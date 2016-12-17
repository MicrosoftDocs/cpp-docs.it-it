---
title: "Resources processor error/warning: &lt;reason&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.resx_generator_task"
ms.assetid: eb9a1bd0-7e63-4a2b-ad37-54f6e67d9b5a
caps.latest.revision: 7
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Resources processor error/warning: &lt;reason&gt;
Viene visualizzato un messaggio di errore o di avviso nel caso in cui uno strumento restituisca un messaggio di errore o di avviso durante l'elaborazione di un file RESX.  Come parte del processo di compilazione, ogni file RESX viene convertito in un file binario riconosciuto dalla gestione risorse di [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)].  La conversione viene eseguita tramite l'utilizzo di strumenti in\-process.  
  
 L'errore, o l'avviso, è provocato in genere da un file RESX danneggiato.  Un file RESX potrebbe essere danneggiato se viene modificato al di fuori di Visual Studio o in Visual Studio utilizzando un editor di testo.  
  
 Questi file vengono infatti solitamente gestiti da Windows Form o da Progettazione Web Form.  
  
### Per correggere l'errore  
  
1.  Correggere il formato del file RESX.  
  
     L'errore indica che il file binario non è stato generato e che il processo di compilazione non verrà completato.  L'avviso serve solo a scopo illustrativo.  
  
## Vedere anche  
 [Resources in .Resx File Format](http://msdn.microsoft.com/it-it/0c476133-87e4-47e8-b0ef-4b88f4ef3dc5)