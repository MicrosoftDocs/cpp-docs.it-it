---
title: "Adding Functionality to the Composite Control | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX (controlli) [C++], eventi"
  - "controlli composti, gestione eventi"
  - "event handlers [C++], controlli ActiveX"
ms.assetid: 98f85681-9564-480d-af38-03f9733fe58b
caps.latest.revision: 10
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Adding Functionality to the Composite Control
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una volta aggiunto tutti i controlli necessari nel controllo composito, il passaggio successivo consiste nell'aggiungere nuove funzionalità.  Questa nuova funzionalità generalmente rientra in due categorie:  
  
-   Interfacce aggiuntive di supporto e personalizzare il comportamento del controllo composito con funzionalità aggiuntive e specifiche.  
  
-   Gestione di eventi dal controllo ActiveX contenuto \(o dai controlli.  
  
 Per l'ambito e l'ambito di questo articolo, il resto di questa sezione vengono illustrate unicamente su gestione di eventi da controlli ActiveX.  
  
> [!NOTE]
>  Se è necessario gestire i messaggi da controlli Windows, vedere [Implementazione di una finestra](../atl/implementing-a-window.md) per ulteriori informazioni sulla gestione dei messaggi in ATL.  
  
 Dopo l'inserimento di controlli ActiveX nella finestra di dialogo, fare clic con il pulsante destro del mouse sul controllo e scegliere **Aggiungere il gestore eventi**.  Selezionare l'evento che si desidera gestire e fare clic **Add and Edit**.  Il codice del gestore eventi viene aggiunto al file con estensione h del controllo.  
  
 I punti di connessione per i controlli ActiveX il controllo composito automaticamente connessi e disconnessi tramite le chiamate a [CComCompositeControl::AdviseSinkMap](../Topic/CComCompositeControl::AdviseSinkMap.md).  
  
## Vedere anche  
 [Nozioni fondamentali sul controllo composito](../atl/atl-composite-control-fundamentals.md)