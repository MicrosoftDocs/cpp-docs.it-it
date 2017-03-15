---
title: "Creazione di un contenitore di controlli ActiveX MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.activex.container"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "contenitori dei controlli ActiveX [C++], creazione"
  - "contenitori [C++], creazione"
  - "controlli ActiveX MFC [C++], contenitori"
  - "controlli OLE [C++], contenitori"
ms.assetid: ec70e137-7c14-4940-bd0e-fd4edcc63ea5
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Creazione di un contenitore di controlli ActiveX MFC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un contenitore di controlli ActiveX rappresenta un programma padre che fornisce l'ambiente per l'esecuzione di un controllo ActiveX \(in precedenza OLE\).  È possibile creare un'applicazione in grado di contenere i controlli ActiveX con o senza MFC, ma MFC consente di semplificare le operazioni.  
  
 La creazione di un programma contenitore MFC mediante la [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md) consente di accedere alle numerose funzionalità dei controlli ActiveX e di automazione implementate dalle classi MFC e ActiveX  e comprendenti modifica visiva, automazione, creazione di file compositi e supporto dei controlli.  Le opzioni di modifica visiva della Creazione guidata applicazione MFC supportate dal programma padre includono la creazione di un contenitore, di un server ridotto, di un server completo e di un programma che funge sia da contenitore sia da server.  
  
-   **Nuova applicazione MFC**.  Per creare un nuovo programma MFC comprendente automazione, modifica visiva, file compositi o supporto dei controlli, utilizzare la Creazione guidata applicazione MFC e selezionare le opzioni di automazione appropriate.  
  
-   **Applicazione MFC esistente**.  Per aggiungere funzionalità di contenimento di controlli a un'applicazione MFC esistente, vedere [Contenitori di controlli OLE: attivazione manuale del contenimento dei controlli OLE](../../mfc/activex-control-containers-manually-enabling-activex-control-containment.md).  
  
### Per creare un contenitore ActiveX per uno dei seguenti tipi di applicazioni  
  
1.  [Contenitori](../../mfc/containers.md)  
  
2.  [Modifica visiva](../../mfc/ole-mfc.md)  
  
3.  [Controlli ActiveX MFC](../../mfc/mfc-activex-controls.md)  
  
## Vedere anche  
 [Tipi di progetto Visual C\+\+](../../ide/visual-cpp-project-types.md)