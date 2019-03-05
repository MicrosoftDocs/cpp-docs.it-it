---
title: Introduzione alle classi di finestra ATL
ms.date: 11/04/2016
helpviewer_keywords:
- window classes
ms.assetid: 503efc2c-a269-495d-97cf-3fb300d52f3d
ms.openlocfilehash: 0c3bc70b5edfb089a6276003625b876d8c553dcb
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57301649"
---
# <a name="introduction-to-atl-window-classes"></a>Introduzione alle classi di finestra ATL

Le classi ATL seguenti sono progettate per implementare e modifica delle finestre:

- [CWindow](../atl/reference/cwindow-class.md) consente di associare un handle di finestra di `CWindow` oggetto. È quindi possibile chiamare `CWindow` metodi per la modifica della finestra.

- [CWindowImpl](../atl/reference/cwindowimpl-class.md) consente di implementare una nuova finestra ed elaborare i messaggi con una mappa messaggi. È possibile creare una finestra basata su una nuova classe, superclasse una classe esistente o sottoclasse Windows una finestra esistente.

- [CDialogImpl](../atl/reference/cdialogimpl-class.md) consente di implementare una finestra modale o una finestra di dialogo non modale ed elaborare messaggi con una mappa messaggi.

- [CContainedWindowT](../atl/reference/ccontainedwindowt-class.md) è una classe che implementa una finestra con mappa dei messaggi è contenuta in un'altra classe. Usando `CContainedWindowT` consente di centralizzare l'elaborazione dei messaggi in una classe.

- [CAxDialogImpl](../atl/reference/caxdialogimpl-class.md) consente di implementare una finestra di dialogo (modale o non modale) che ospita i controlli ActiveX.

- [CSimpleDialog](../atl/reference/csimpledialog-class.md) consente di implementare una finestra di dialogo modale con funzionalità di base.

- [CAxWindow](../atl/reference/caxwindow-class.md) consente di implementare una finestra che ospita un controllo ActiveX.

- [CAxWindow2T](../atl/reference/caxwindow2t-class.md) consente di implementare una finestra che ospita un controllo ActiveX con licenza.

Oltre alle classi di finestra specifica, ATL fornisce molte classi progettate per semplificare l'implementazione di un oggetto di finestra ATL. Le visualizzazioni sono le seguenti:

- [CWndClassInfo](../atl/reference/cwndclassinfo-class.md) gestisce le informazioni di una nuova classe di finestra.

- [CWinTraits](../atl/reference/cwintraits-class.md) e [CWinTraitsOR](../atl/reference/cwintraitsor-class.md) offrono un metodo semplice per standardizzare i tratti di un oggetto di finestra ATL.

## <a name="see-also"></a>Vedere anche

[Classi di finestre](../atl/atl-window-classes.md)
