---
title: "Windows Support Classes | Microsoft Docs"
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
  - "vc.atl.windows"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL, finestre"
  - "windows [C++], ATL"
ms.assetid: 750b14d5-d787-4d2b-9728-ac199ccad489
caps.latest.revision: 10
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Windows Support Classes
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le classi forniscono il supporto per le finestre:  
  
-   [\_U\_MENUorID](../atl/reference/u-menuorid-class.md) Fornisce wrapper per **CreateWindow** e **CreateWindowEx**.  
  
-   [CWindow](../atl/reference/cwindow-class.md) contiene metodi per modificare una finestra.  `CWindow` rappresenta la classe base per `CWindowImpl`, `CDialogImpl` e `CContainedWindow`.  
  
-   [CWindowImpl](../atl/reference/cwindowimpl-class.md) implementa una finestra basata su una nuova classe della finestra.  Consente anche alla sottoclasse o di una superclasse la finestra.  
  
-   [CDialogImpl](../atl/reference/cdialogimpl-class.md) implementa una finestra di dialogo.  
  
-   [CAxDialogImpl](../atl/reference/caxdialogimpl-class.md) implementa una finestra di dialogo \(modale o non modale\) che ospitano controlli ActiveX.  
  
-   [CSimpleDialog](../atl/reference/csimpledialog-class.md) implementa una finestra di dialogo \(modale o non modale\) con funzionalità di base.  
  
-   [CAxWindow](../atl/reference/caxwindow-class.md) modifica una finestra che ospita un controllo ActiveX.  
  
-   [CAxWindow2T](../atl/reference/caxwindow2t-class.md) fornisce metodi per modificare una finestra che ospita un controllo ActiveX e dispone anche di supporto per ospitare controlli ActiveX con licenza.  
  
-   [CContainedWindowT](../atl/reference/ccontainedwindowt-class.md) implementa una finestra contenuta in un altro oggetto.  
  
-   [CWndClassInfo](../atl/reference/cwndclassinfo-class.md) gestisce le informazioni della nuova classe della finestra.  
  
-   Concatenare dinamico di supportare di[CDynamicChain](../atl/reference/cdynamicchain-class.md) delle mappe dei messaggi.  
  
-   [CMessageMap](../atl/reference/cmessagemap-class.md) consente a un oggetto di esporre le mappe dei messaggi ad altri oggetti.  
  
-   [CWinTraits](../atl/reference/cwintraits-class.md) fornisce un metodo semplice di standardizzazione dei tratti di un oggetto window ATL.  
  
-   [CWinTraitsOR](../atl/reference/cwintraitsor-class.md) fornisce i valori predefiniti per gli stili della finestra e gli stili estesi utilizzati per creare una finestra.  Questi valori vengono aggiunti, utilizzando l'operatore OR logico, i valori forniti durante la creazione di una finestra.  
  
## Articoli correlati  
 [Classi di finestre ATL](../atl/atl-window-classes.md)  
  
 [L'esercitazione ATL](../atl/active-template-library-atl-tutorial.md)  
  
## Vedere anche  
 [Class Overview](../atl/atl-class-overview.md)   
 [Message Map Macros](../atl/reference/message-map-macros-atl.md)   
 [Window Class Macros](../atl/reference/window-class-macros.md)