---
title: "Controls: General Support Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.atl.controls"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "controlli [ATL]"
  - "general support classes"
ms.assetid: cf73f1d2-7542-48e3-b8c8-9d3abf29f85b
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Controls: General Support Classes
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le classi forniscono supporto generale ai controlli ATL:  
  
-   [CComControl](../atl/reference/ccomcontrol-class.md) costituita da funzioni di supporto e i membri dati essenziali ai controlli ATL.  
  
-   [IOleControlImpl](../atl/reference/iolecontrolimpl-class.md) fornisce i metodi necessari per i controlli.  
  
-   [IOleObjectImpl](../atl/reference/ioleobjectimpl-class.md) fornisce metodi principali con cui un contenitore comunica con un controllo.  Gestisce l'attivazione e la disattivazione dei controlli sul posto.  
  
-   Inizializzazione di associazioni di[IQuickActivateImpl](../atl/reference/iquickactivateimpl-class.md) in un'unica chiamata per i contenitori per evitare ritardi quando controlli di caricamento.  
  
-   [IPointerInactiveImpl](../atl/reference/ipointerinactiveimpl-class.md) fornisce le interazioni con il mouse minima per un controllo inattiva.  
  
## Il programma di esempio  
 [ATLFire](../top/visual-cpp-samples.md)  
  
## Articoli correlati  
 [L'esercitazione ATL](../atl/active-template-library-atl-tutorial.md)  
  
## Vedere anche  
 [Class Overview](../atl/atl-class-overview.md)