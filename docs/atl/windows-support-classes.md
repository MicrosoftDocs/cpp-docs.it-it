---
title: Classi di supporto di Windows (ATL)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- vc.atl.windows
helpviewer_keywords:
- ATL, windows
- windows [C++], ATL
ms.assetid: 750b14d5-d787-4d2b-9728-ac199ccad489
ms.openlocfilehash: 9a33136c63c5bdc32dfc882e8c53ab2f5c27eb46
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50665413"
---
# <a name="windows-support-classes"></a>Classi di supporto di Windows

Le classi seguenti forniscono supporto per windows:

- [U_menuorid](../atl/reference/u-menuorid-class.md) sono disponibili wrapper per `CreateWindow` e `CreateWindowEx`.

- [CWindow](../atl/reference/cwindow-class.md) contiene metodi per la modifica di una finestra. `CWindow` è la classe base per `CWindowImpl`, `CDialogImpl` e `CContainedWindow`.

- [CWindowImpl](../atl/reference/cwindowimpl-class.md) implementa una finestra basata su una nuova classe della finestra. Consente inoltre alla sottoclasse o superclasse la finestra.

- [CDialogImpl](../atl/reference/cdialogimpl-class.md) implementa una finestra di dialogo.

- [CAxDialogImpl](../atl/reference/caxdialogimpl-class.md) implementa una finestra di dialogo (modale o non modale) che ospita i controlli ActiveX.

- [CSimpleDialog](../atl/reference/csimpledialog-class.md) implementa una finestra di dialogo (modale o non modale) con funzionalità di base.

- [CAxWindow](../atl/reference/caxwindow-class.md) gestisce una finestra che ospita un controllo ActiveX.

- [CAxWindow2T](../atl/reference/caxwindow2t-class.md) fornisce metodi per la modifica di una finestra che ospita un controllo ActiveX e include anche il supporto per l'hosting di controlli ActiveX con licenza.

- [CContainedWindowT](../atl/reference/ccontainedwindowt-class.md) implementa una finestra contenuta all'interno di un altro oggetto.

- [CWndClassInfo](../atl/reference/cwndclassinfo-class.md) gestisce le informazioni di una nuova classe di finestra.

- [CDynamicChain](../atl/reference/cdynamicchain-class.md) supporta la concatenazione dinamica di mappe messaggi.

- [CMessageMap](../atl/reference/cmessagemap-class.md) consente a un oggetto di esporre il messaggio viene eseguito il mapping ad altri oggetti.

- [CWinTraits](../atl/reference/cwintraits-class.md) offre un metodo semplice di standardizzare i tratti di un oggetto di finestra ATL.

- [CWinTraitsOR](../atl/reference/cwintraitsor-class.md) fornisce i valori predefiniti per gli stili di finestra e stili estesi considerati di creare una finestra. Questi valori vengono aggiunti, usando l'operatore OR logico, ai valori forniti durante la creazione di una finestra.

## <a name="related-articles"></a>Articoli correlati

[Classi di finestra ATL](../atl/atl-window-classes.md)

[Esercitazione ATL](../atl/active-template-library-atl-tutorial.md)

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../atl/atl-class-overview.md)<br/>
[Macro della mappa messaggi](../atl/reference/message-map-macros-atl.md)<br/>
[Macro di classi di finestre](../atl/reference/window-class-macros.md)

