---
title: "The selected Add-In has not been confirmed to be &#39;Command Line Safe&#39;, and may require some user intervention (possible UI). | Microsoft Docs"
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
  - "vs.message.0x800A0031"
  - "vs.message.VB_E_IDWADDINCMDLINE"
ms.assetid: 19dd24d4-b0f5-4c92-9005-aad48ffda7d9
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# The selected Add-In has not been confirmed to be &#39;Command Line Safe&#39;, and may require some user intervention (possible UI).
Generalmente questo errore si verifica quando è stato selezionato per l'utilizzo dal prompt dei comandi \(prompt di DOS\) un componente aggiuntivo non incluso tra i componenti eseguibili dalla riga di comando.  Il componente aggiuntivo potrebbe visualizzare l'interfaccia utente che può interferire con l'utilizzo dalla riga di comando.  
  
### Per correggere l'errore  
  
1.  Scegliere **Gestione componenti aggiuntivi** dal menu **Strumenti**.  
  
2.  Nella finestra di dialogo **Gestione componenti aggiuntivi** deselezionare l'opzione **Riga di comando** per il componente aggiuntivo.  
  
## Vedere anche  
 [Procedura: controllare i componenti aggiuntivi tramite Gestione componenti aggiuntivi](../Topic/How%20to:%20Control%20Add-Ins%20By%20Using%20the%20Add-In%20Manager.md)   
 [Procedura: creare un componente aggiuntivo](../Topic/How%20to:%20Create%20an%20Add-In.md)