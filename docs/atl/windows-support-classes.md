---
title: Windows supporta le classi (ATL) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.atl.windows
dev_langs: C++
helpviewer_keywords:
- ATL, windows
- windows [C++], ATL
ms.assetid: 750b14d5-d787-4d2b-9728-ac199ccad489
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 308f9deada47998c2f639d01ea5b9fdc9d04faa5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="windows-support-classes"></a>Classi di supporto di Windows
Le classi seguenti offrono il supporto per windows:  
  
-   [_U_MENUorID](../atl/reference/u-menuorid-class.md) fornisce wrapper per **CreateWindow** e **CreateWindowEx**.  
  
-   [CWindow](../atl/reference/cwindow-class.md) contiene metodi per la modifica di una finestra. `CWindow` è la classe base per `CWindowImpl`, `CDialogImpl` e `CContainedWindow`.  
  
-   [CWindowImpl](../atl/reference/cwindowimpl-class.md) implementa una finestra in base a una nuova classe della finestra. Consente inoltre di sottoclasse o superclasse la finestra.  
  
-   [CDialogImpl](../atl/reference/cdialogimpl-class.md) implementa una finestra di dialogo.  
  
-   [CAxDialogImpl](../atl/reference/caxdialogimpl-class.md) implementa una finestra di dialogo (modale o non modale) che ospita controlli ActiveX.  
  
-   [CSimpleDialog](../atl/reference/csimpledialog-class.md) implementa una finestra di dialogo (modale o non modale) con funzionalità di base.  
  
-   [CAxWindow](../atl/reference/caxwindow-class.md) la modifica di una finestra che ospita un controllo ActiveX.  
  
-   [CAxWindow2T](../atl/reference/caxwindow2t-class.md) fornisce metodi per la modifica di una finestra che ospita un controllo ActiveX e offre supporto per l'hosting di controlli ActiveX con licenza.  
  
-   [CContainedWindowT](../atl/reference/ccontainedwindowt-class.md) implementa una finestra contenuta all'interno di un altro oggetto.  
  
-   [CWndClassInfo](../atl/reference/cwndclassinfo-class.md) gestisce le informazioni di una nuova classe di finestra.  
  
-   [CDynamicChain](../atl/reference/cdynamicchain-class.md) supporta la concatenazione dinamica delle mappe messaggi.  
  
-   [CMessageMap](../atl/reference/cmessagemap-class.md) consente a un oggetto di esporre il messaggio viene eseguito il mapping ad altri oggetti.  
  
-   [CWinTraits](../atl/reference/cwintraits-class.md) offre un metodo semplice di standardizzare i tratti di un oggetto finestra ATL.  
  
-   [CWinTraitsOR](../atl/reference/cwintraitsor-class.md) fornisce valori predefiniti per gli stili di finestra e degli stili estesi utilizzati per creare una finestra. Questi valori vengono aggiunti utilizzando l'operatore OR logico, per i valori forniti durante la creazione di una finestra.  
  
## <a name="related-articles"></a>Articoli correlati  
 [Classi di finestra ATL](../atl/atl-window-classes.md)  
  
 [Esercitazione ATL](../atl/active-template-library-atl-tutorial.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../atl/atl-class-overview.md)   
 [Macro della mappa messaggi](../atl/reference/message-map-macros-atl.md)   
 [Macro di classi di finestre](../atl/reference/window-class-macros.md)

