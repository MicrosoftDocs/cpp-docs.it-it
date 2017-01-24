---
title: "Visual Studio is waiting for an operation to complete. If you regularly encounter this delay during normal usage please report this problem to Microsoft. Please include a description of the work you’re doing in Visual Studio and when possible instruction | Microsoft Docs"
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
  - "vs.message.VB_E_IDWOLEBUSY"
  - "vs.message.0x800A002B"
ms.assetid: 688fdf7e-c3ef-41f1-bc22-9f88f8f5b353
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Visual Studio is waiting for an operation to complete. If you regularly encounter this delay during normal usage please report this problem to Microsoft. Please include a description of the work you’re doing in Visual Studio and when possible instruction
L'applicazione server è occupata e non è in grado di completare la richiesta corrente.  
  
 Questo errore potrebbe essere causato, inoltre, dal software antivirus che blocca alcuni processi di devenv.exe.  Numerose funzioni del prodotto utilizzano script, che potrebbero venire bloccati dal software antivirus.  Per informazioni su questo argomento, vedere l'articolo online "PRB: Visual IDE does not open when started or application cannot start error message" sul sito [http:\/\/support.microsoft.com\/default.aspx?scid\=kb;en\-us;306905&Product\=vsnet](http://support.microsoft.com/default.aspx?scid=kb;en-us;306905&Product=vsnet).  
  
### Per correggere gli errori correlati all'applicazione server  
  
1.  Scegliere Passa a per avviare l'applicazione ed esaminare il problema.  
  
     \-oppure\-  
  
     Scegliere Riprova per attendere che l'applicazione server finisca di elaborare la richiesta.  
  
     \-oppure\-  
  
     Scegliere Annulla per terminare la richiesta.  
  
### Per correggere gli errori correlati al software antivirus  
  
-   All'interno dell'applicazione antivirus, specificare che il software deve consentire gli script originati dall'esecuzione di devenv.exe.  Per le istruzioni dettagliate, consultare la documentazione del prodotto relativa al software antivirus.