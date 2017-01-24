---
title: "Licenses processor error/warning: &lt;reason&gt; | Microsoft Docs"
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
  - "vs.tasklisterror.licx_generator_task"
ms.assetid: 85750198-7bd3-4936-b1eb-954dcc3ff573
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Licenses processor error/warning: &lt;reason&gt;
Viene visualizzato un messaggio di errore o di avviso nel caso in cui uno strumento restituisca un messaggio di errore o di avviso durante l'elaborazione di un file LICX.  Come parte del processo di compilazione, il file delle licenze Licenses.licx, se presente, viene convertito in un file binario riconosciuto dal gestore delle licenze di [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)] La conversione viene eseguita tramite l'utilizzo di strumenti in\-process.  
  
 L'errore, o l'avviso, è provocato in genere da un file LICX danneggiato.  Un file LICX potrebbe essere danneggiato se viene modificato al di fuori di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] o in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] utilizzando un editor di testo.  
  
 Questi file vengono infatti solitamente gestiti da Windows Form o da Progettazione Web Form.  
  
### Per correggere l'errore  
  
1.  Correggere il formato del file LICX.  
  
     L'errore indica che il file binario non è stato generato e che il processo di compilazione non verrà completato.  L'avviso serve solo a scopo illustrativo.  
  
## Vedere anche  
 [File Types and File Extensions in Visual Basic and Visual C\#](http://msdn.microsoft.com/it-it/f793852c-da06-4d52-a826-65f635844772)