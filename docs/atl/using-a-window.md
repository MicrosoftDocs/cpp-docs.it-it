---
title: Utilizzare una finestra (ATL)
ms.date: 11/04/2016
helpviewer_keywords:
- ATL, windows
- CWindow class, about CWindow class
- windows [C++], ATL
ms.assetid: b3b9cc8e-4287-486b-b080-38852bc2943a
ms.openlocfilehash: 3a1843bfedc30e7d3b47c2916af08c8b53aaa965
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57268864"
---
# <a name="using-a-window"></a>Utilizzare una finestra

Classe [CWindow](../atl/reference/cwindow-class.md) consente di usare una finestra. Dopo aver collegato a una finestra un' `CWindow` dell'oggetto, è quindi possibile chiamare `CWindow` metodi per la modifica della finestra. `CWindow` contiene anche un operatore HWND per convertire un `CWindow` oggetto a un oggetto HWND. In questo modo è possibile passare un `CWindow` oggetto a qualsiasi funzione che richiede un handle a una finestra. È possibile combinare facilmente `CWindow` chiamate ai metodi e le chiamate di funzione Win32, senza creare eventuali oggetti temporanei.

Poiché `CWindow` ha solo due membri dati (un handle di finestra e le dimensioni predefinite), ciò non impone un sovraccarico nel codice. Inoltre, molte del `CWindow` metodi semplicemente il wrapping di funzioni API Win32 corrispondenti. Usando `CWindow`, il membro HWND viene automaticamente passato alla funzione Win32.

Oltre a usare `CWindow` direttamente, è anche possibile derivare da esso per aggiungere dati o il codice alla classe. ATL stesso deriva le tre classi da `CWindow`: [CWindowImpl](../atl/implementing-a-window.md), [CDialogImpl](../atl/implementing-a-dialog-box.md), e [CContainedWindowT](../atl/using-contained-windows.md).

## <a name="see-also"></a>Vedere anche

[Classi di finestre](../atl/atl-window-classes.md)
