---
title: "Item cannot be added to the Toolbox. | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.message.VB_E_NOTSUPPORTEDDATA"
  - "vs.message.0x800A0065"
ms.assetid: 69fa5e73-bbc6-462c-95ca-bf2ee32d43ff
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Item cannot be added to the Toolbox.
Questo errore si verifica in genere quando si tenta di aggiungere un elemento per cui non può essere visualizzata un'icona di collegamento nella Casella degli strumenti.  
  
 Gli elementi visualizzabili nella Casella degli strumenti includono:  
  
-   Controlli e componenti .NET Framework installati sul computer locale.  
  
 **Nota** Per consentirne la visualizzazione nella Casella degli strumenti, la [proprietà AspNetHostingPermission.Level](https://msdn.microsoft.com/en-us/library/system.web.aspnethostingpermission.level.aspx) dei controlli e dei componenti per Web Form [!INCLUDE[vstecasp](../misc/includes/vstecasp_md.md)] deve essere impostata su "Unlimited".  
  
-   Testo selezionato trascinato o incollato da un editor di Visual Studio, ad esempio frammenti di codice.  
  
 Gli elementi non visualizzabili nella Casella degli strumenti includono:  
  
-   File di cartelle di lavoro di Excel.  
  
-   Assembly .NET Framework installati su server di rete condivisi.  
  
    > [!NOTE]
    >  Poiché un assembly aggiunto da un percorso UNC non è completamente attendibile, non possono essere concesse autorizzazioni sufficienti per la visualizzazione nella Casella degli strumenti.  
  
### Per correggere l'errore  
  
1.  Utilizzare la finestra di dialogo **Personalizza Casella degli strumenti** per aggiungere un controllo o un componente installato sul computer locale alla scheda Casella degli strumenti attiva.  
  
     \- oppure \-  
  
2.  Trascinare o incollare testo selezionato da un editor di Visual Studio alla Casella degli strumenti.  
  
## Vedere anche  
 [Choose Toolbox Items Dialog Box \(Visual Studio\)](http://msdn.microsoft.com/it-it/bd07835f-18a8-433e-bccc-7141f65263bb)   
 [How to: Manipulate Toolbox Tabs](http://msdn.microsoft.com/it-it/21285050-cadd-455a-b1f5-a2289a89c4db)   
 [Casella degli strumenti](../Topic/Toolbox.md)