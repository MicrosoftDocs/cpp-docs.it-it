---
title: "Contenitori di controlli ActiveX: attivazione manuale del contenimento dei controlli ActiveX | Microsoft Docs"
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
  - "contenitori dei controlli ActiveX [C++], abilitazione"
  - "ActiveX (controlli) [C++], abilitazione di contenitori"
  - "AfxEnableControlContainer (metodo)"
ms.assetid: 833bcde9-c9ad-4709-ad12-2fc2150fb6a5
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Contenitori di controlli ActiveX: attivazione manuale del contenimento dei controlli ActiveX
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se non attivato il supporto dei controlli ActiveX quando si utilizza la Creazione guidata applicazione MFC per generare l'applicazione, sarà necessario aggiungere manualmente questo supporto.  In questo articolo viene illustrato per l'aggiunta manuale del contenimento dei controlli ActiveX a un'applicazione esistente del contenitore OLE.  Se si conosce in anticipo quale si desidera aggiungere il supporto del controllo ActiveX nel contenitore OLE, vedere l'articolo [Creare un contenitore di controlli ActiveX MFC](../mfc/reference/creating-an-mfc-activex-control-container.md).  
  
> [!NOTE]
>  In questo articolo viene utilizzato un progetto a finestre contenitore di controlli ActiveX denominato Container e un controllo incorporato denominato Circ ad esempio nelle procedure e nel codice.  
  
 Per supportare i controlli ActiveX, è necessario aggiungere una riga di codice a due dei file di progetto.  
  
-   Modificare la funzione di `InitInstance` della finestra di dialogo principale \(contenuta in CONTAINER.CPP\) dalla Creazione guidata applicazione MFC che effettua una chiamata a [AfxEnableControlContainer](../Topic/AfxEnableControlContainer.md), come nel seguente esempio:  
  
     [!code-cpp[NVC_MFCOleContainer#34](../mfc/codesnippet/CPP/activex-control-containers-manually-enabling-activex-control-containment_1.cpp)]  
    [!code-cpp[NVC_MFCOleContainer#35](../mfc/codesnippet/CPP/activex-control-containers-manually-enabling-activex-control-containment_2.cpp)]  
  
-   Aggiungere quanto segue al file di intestazione di STDAFX.H del progetto:  
  
     [!code-cpp[NVC_MFCOleContainer#36](../mfc/codesnippet/CPP/activex-control-containers-manually-enabling-activex-control-containment_3.h)]  
  
 Dopo avere completato questa procedura, ricompilare il progetto facendo clic **Compilazione** dal menu di **Compilazione**.  
  
## Vedere anche  
 [Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)