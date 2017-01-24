---
title: "System DLL &lt;name&gt; could not be loaded. | Microsoft Docs"
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
  - "vs.message.VB_E_TERRSYSDLLNOTLOADED"
  - "vs.message.0x800A0085"
ms.assetid: d4ccb3b1-fbc3-4395-a9b1-be50a4d7bf44
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# System DLL &lt;name&gt; could not be loaded.
Non è possibile trovare un file DLL fornito dal sistema operativo, ad esempio DDEML.DLL, VERSION.DLL o WINSPOOL.DRV.  Generalmente questo errore si verifica quando è vera una delle seguenti condizioni: il file non si trova nel percorso corretto, la DLL è stata danneggiata o eliminata oppure la memoria è insufficiente.  
  
### Per correggere l'errore  
  
1.  Verificare che la DLL si trovi nel percorso del sistema Windows.  
  
     \-oppure\-  
  
     Ricaricare la DLL.  
  
     \-oppure\-  
  
     Provare a liberare memoria chiudendo altre applicazioni aperte.