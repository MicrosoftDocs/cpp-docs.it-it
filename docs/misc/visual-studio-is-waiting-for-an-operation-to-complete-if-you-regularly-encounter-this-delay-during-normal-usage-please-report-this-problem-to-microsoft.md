---
title: "Visual Studio is waiting for an operation to complete. If you regularly encounter this delay during normal usage please report this problem to Microsoft. | Microsoft Docs"
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
  - "vs.message.0x800A002A"
  - "vs.message.VB_E_IDWOLENOTRESPONDING"
ms.assetid: 0a4efbb7-72de-43a8-a51a-4a7a24ec743a
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Visual Studio is waiting for an operation to complete. If you regularly encounter this delay during normal usage please report this problem to Microsoft.
L'applicazione server non ha completato la richiesta corrente.  
  
 Questo errore potrebbe essere causato, inoltre, dal software antivirus che blocca alcuni processi di devenv.exe.  Numerose funzioni del prodotto utilizzano script, che potrebbero venire bloccati dal software antivirus.  Per informazioni su questo argomento, vedere l'articolo online "PRB: Visual IDE does not open when started or application cannot start error message" sul sito [http:\/\/support.microsoft.com\/default.aspx?scid\=kb;en\-us;306905&Product\=vsnet](http://support.microsoft.com/default.aspx?scid=kb;en-us;306905&Product=vsnet).  
  
### Per correggere l'errore  
  
-   Scegliere Passa a per avviare l'applicazione ed esaminare il problema.  
  
     \-oppure\-  
  
     Scegliere Riprova per attendere che l'applicazione server finisca di elaborare la richiesta.  
  
### Per correggere gli errori correlati al software antivirus  
  
-   All'interno dell'applicazione antivirus, specificare che il software deve consentire gli script originati dall'esecuzione di devenv.exe.  Per le istruzioni dettagliate, consultare la documentazione del prodotto relativa al software antivirus.