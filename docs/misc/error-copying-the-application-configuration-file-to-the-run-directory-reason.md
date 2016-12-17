---
title: "Error copying the application configuration file to the run directory. &lt;reason&gt; | Microsoft Docs"
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
  - "vs.tasklisterror.cant_copy_appcfg_file"
ms.assetid: 15699a76-16ef-40a8-8ed4-5eef4d2c0e72
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Error copying the application configuration file to the run directory. &lt;reason&gt;
Non è possibile copiare un file app.config nella directory da cui il progetto viene eseguito.  Se si verifica questo errore, il processo di compilazione non verrà completato.  
  
 Questo errore si verifica solo durante la compilazione di un file EXE.  
  
 Il sistema di compilazione tenterà di trovare un file denominato app.config nella cartella radice del progetto.  Il file verrà quindi copiato nella directory di output del progetto e verrà denominato *outputfile.*config.  
  
 Di seguito sono indicate alcune delle possibili cause dell'errore:  
  
-   Spazio disponibile su disco insufficiente  
  
-   Superamento del limite MAX\_PAT  
  
 È inoltre consigliabile assicurarsi che non sia in esecuzione un'altra copia dell'applicazione.  
  
## Vedere anche  
 [NIB How to: Modify Project Properties and Configuration Settings](http://msdn.microsoft.com/it-it/e7184bc5-2f2b-4b4f-aa9a-3ecfcbc48b67)