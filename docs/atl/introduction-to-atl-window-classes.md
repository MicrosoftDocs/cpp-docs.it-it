---
title: "Introduction to ATL Window Classes | Microsoft Docs"
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
  - "window classes"
ms.assetid: 503efc2c-a269-495d-97cf-3fb300d52f3d
caps.latest.revision: 11
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Introduction to ATL Window Classes
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le seguenti classi ATL sono progettate per implementare e modificare le finestre:  
  
-   [CWindow](../atl/reference/cwindow-class.md) sarà possibile collegarla l'handle della finestraoggetto `CWindow`.  Chiamare i metodi `CWindow` per modificare la finestra.  
  
-   [CWindowImpl](../atl/reference/cwindowimpl-class.md) consente di distribuire una nuova finestra e messaggi considerati con una mappa messaggi.  È possibile creare una finestra basata su una nuova classe, superclasse una classe esistente, o sottoclasse di Windows una finestra esistente.  
  
-   [CDialogImpl](../atl/reference/cdialogimpl-class.md) consente di distribuire i messaggi modali o finestra di dialogo non modale e di processo con una mappa messaggi.  
  
-   [CContainedWindowT](../atl/reference/ccontainedwindowt-class.md) è una classe esistente che implementa una finestra di cui la mappa messaggi è contenuta in un'altra classe.  Utilizzando `CContainedWindowT` consente di gestire centralmente l'elaborazione dei messaggi in una classe.  
  
-   [CAxDialogImpl](../atl/reference/caxdialogimpl-class.md) consente di distribuire una finestra di dialogo \(modale o non modale\) che ospitano controlli ActiveX.  
  
-   [CSimpleDialog](../atl/reference/csimpledialog-class.md) consente di distribuire una finestra di dialogo modale con funzionalità di base.  
  
-   [CAxWindow](../atl/reference/caxwindow-class.md) consente di distribuire una finestra che ospita un controllo ActiveX.  
  
-   [CAxWindow2T](../atl/reference/caxwindow2t-class.md) consente di distribuire una finestra che ospita un controllo ActiveX con licenza.  
  
 Oltre alle classi di finestre specifiche, ATL fornisce diverse classi progettate per semplificare l'implementazione di un oggetto window ATL più semplice.  Esse sono:  
  
-   [CWndClassInfo](../atl/reference/cwndclassinfo-class.md) gestisce le informazioni della nuova classe della finestra.  
  
-   [CWinTraits](../atl/reference/cwintraits-class.md) e [CWinTraitsOR](../atl/reference/cwintraitsor-class.md) forniscono un metodo semplice di standardizzazione dei tratti di un oggetto window ATL.  
  
## Vedere anche  
 [Classi di finestra](../atl/atl-window-classes.md)