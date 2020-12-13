---
description: 'Altre informazioni su: Introduzione alle classi di finestra ATL'
title: Introduzione alle classi di finestra ATL
ms.date: 11/04/2016
helpviewer_keywords:
- window classes
ms.assetid: 503efc2c-a269-495d-97cf-3fb300d52f3d
ms.openlocfilehash: 54a9d9764450025e51f9fac368a3434ca786fe09
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97152724"
---
# <a name="introduction-to-atl-window-classes"></a>Introduzione alle classi di finestra ATL

Le classi ATL seguenti sono progettate per implementare e modificare le finestre:

- [CWindow](../atl/reference/cwindow-class.md) consente di aggiungere un handle di finestra all' `CWindow` oggetto. Si chiamano quindi `CWindow` i metodi per modificare la finestra.

- [CWindowImpl](../atl/reference/cwindowimpl-class.md) consente di implementare una nuova finestra ed elaborare i messaggi con una mappa messaggi. È possibile creare una finestra basata su una nuova classe di Windows, superclasse una classe esistente o una sottoclasse di una finestra esistente.

- [CDialogImpl](../atl/reference/cdialogimpl-class.md) consente di implementare una finestra di dialogo modale o non modale ed elaborare i messaggi con una mappa messaggi.

- [CContainedWindowT](../atl/reference/ccontainedwindowt-class.md) è una classe predefinita che implementa una finestra la cui mappa messaggi è contenuta in un'altra classe. L'utilizzo `CContainedWindowT` di consente di centralizzare l'elaborazione dei messaggi in una classe.

- [CAxDialogImpl](../atl/reference/caxdialogimpl-class.md) consente di implementare una finestra di dialogo (modale o non modale) che ospita i controlli ActiveX.

- [CSimpleDialog](../atl/reference/csimpledialog-class.md) consente di implementare una finestra di dialogo modale con funzionalità di base.

- [CAxWindow](../atl/reference/caxwindow-class.md) consente di implementare una finestra che ospita un controllo ActiveX.

- [CAxWindow2T](../atl/reference/caxwindow2t-class.md) consente di implementare una finestra che ospita un controllo ActiveX concesso in licenza.

Oltre alle classi finestra specifiche, in ATL sono disponibili diverse classi progettate per semplificare l'implementazione di un oggetto finestra ATL. Ecco quali sono:

- [CWndClassInfo](../atl/reference/cwndclassinfo-class.md) gestisce le informazioni di una nuova classe di finestra.

- [CWinTraits](../atl/reference/cwintraits-class.md) e [CWinTraitsOR](../atl/reference/cwintraitsor-class.md) forniscono un metodo semplice per standardizzare i tratti di un oggetto finestra ATL.

## <a name="see-also"></a>Vedi anche

[Classi finestra](../atl/atl-window-classes.md)
