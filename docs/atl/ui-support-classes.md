---
title: "UI Support Classes | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.atl.ui"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "interfacce utente, ATL classes"
  - "interfacce utente, support classes"
ms.assetid: 313dfc95-308a-4118-b919-5a3c3673b865
caps.latest.revision: 10
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# UI Support Classes
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le classi forniscono supporto generale dell'interfaccia utente:  
  
-   [IDocHostUIHandlerDispatch](../atl/reference/idochostuihandlerdispatch-interface.md) un'interfaccia all'analisi e al motore di rendering di HTML Microsoft.  
  
-   [IOleObjectImpl](../atl/reference/ioleobjectimpl-class.md) fornisce metodi principali con cui un contenitore comunica con un controllo.  Gestisce l'attivazione e la disattivazione dei controlli sul posto.  
  
-   [IOleInPlaceObjectWindowlessImpl](../atl/reference/ioleinplaceobjectwindowlessimpl-class.md) gestisce la riattivazione dei controlli sul posto.  Consente a un controllo senza finestra per ricevere i messaggi e per partecipare alle operazioni di trascinamento.  
  
-   [IOleInPlaceActiveObjectImpl](../atl/reference/ioleinplaceactiveobjectimpl-class.md) gestisce la comunicazione tra un controllo sul posto e il relativo contenitore.  
  
-   [IViewObjectExImpl](../atl/reference/iviewobjecteximpl-class.md) consente a un controllo per visualizzare direttamente e per notificare al contenitore delle modifiche nella visualizzazione.  Fornisce supporto per il disegno senza sfarfallio, controlli non rettangolari e trasparenti e hit testing.  
  
## Articoli correlati  
 [L'esercitazione ATL](../atl/active-template-library-atl-tutorial.md)  
  
## Vedere anche  
 [Class Overview](../atl/atl-class-overview.md)