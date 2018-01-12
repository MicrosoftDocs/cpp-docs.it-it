---
title: Introduzione alle classi di finestra ATL | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: window classes
ms.assetid: 503efc2c-a269-495d-97cf-3fb300d52f3d
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 636fe8aa87b6880f5cda77fb46fc481d99d78a81
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="introduction-to-atl-window-classes"></a>Introduzione alle classi di finestra ATL
Le seguenti classi ATL sono progettate per l'implementazione e la modifica di windows:  
  
-   [CWindow](../atl/reference/cwindow-class.md) consente di associare un handle di finestra per il `CWindow` oggetto. Chiamare quindi `CWindow` metodi per modificare la finestra.  
  
-   [CWindowImpl](../atl/reference/cwindowimpl-class.md) consente di implementare una nuova finestra ed elaborare i messaggi con una mappa messaggi. È possibile creare una finestra in base a una nuova classe, una classe esistente superclasse o sottoclasse Windows una finestra esistente.  
  
-   [CDialogImpl](../atl/reference/cdialogimpl-class.md) consente di implementare modale o una finestra di dialogo non modale ed elaborare messaggi con una mappa messaggi.  
  
-   [CContainedWindowT](../atl/reference/ccontainedwindowt-class.md) è una classe che implementa una finestra che mappa il cui messaggio è contenuto in un'altra classe. Utilizzando `CContainedWindowT` consente di centralizzare l'elaborazione dei messaggi in una classe.  
  
-   [CAxDialogImpl](../atl/reference/caxdialogimpl-class.md) consente di implementare una finestra di dialogo (modale o non modale) che ospita controlli ActiveX.  
  
-   [CSimpleDialog](../atl/reference/csimpledialog-class.md) consente di implementare una finestra di dialogo modale con funzionalità di base.  
  
-   [CAxWindow](../atl/reference/caxwindow-class.md) consente di implementare una finestra che ospita un controllo ActiveX.  
  
-   [CAxWindow2T](../atl/reference/caxwindow2t-class.md) consente di implementare una finestra che ospita un controllo ActiveX con licenza.  
  
 Oltre alle classi di finestra specifica, ATL fornisce molte classi progettate per semplificare l'implementazione di un oggetto finestra ATL. Le visualizzazioni sono le seguenti:  
  
-   [CWndClassInfo](../atl/reference/cwndclassinfo-class.md) gestisce le informazioni di una nuova classe di finestra.  
  
-   [CWinTraits](../atl/reference/cwintraits-class.md) e [CWinTraitsOR](../atl/reference/cwintraitsor-class.md) offrono un metodo semplice di standardizzare i tratti di un oggetto finestra ATL.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi di finestra](../atl/atl-window-classes.md)

