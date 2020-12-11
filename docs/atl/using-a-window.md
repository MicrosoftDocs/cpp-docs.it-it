---
description: 'Altre informazioni su: uso di una finestra'
title: Utilizzo di una finestra (ATL)
ms.date: 11/04/2016
helpviewer_keywords:
- ATL, windows
- CWindow class, about CWindow class
- windows [C++], ATL
ms.assetid: b3b9cc8e-4287-486b-b080-38852bc2943a
ms.openlocfilehash: fb9f1e03a27ad8b637da30eacbd100daf920cdb4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97157280"
---
# <a name="using-a-window"></a>Uso di una finestra

La classe [CWindow](../atl/reference/cwindow-class.md) consente di usare una finestra. Una volta collegata una finestra a un `CWindow` oggetto, è possibile chiamare `CWindow` i metodi per modificare la finestra. `CWindow` contiene inoltre un operatore HWND per convertire un `CWindow` oggetto in un HWND. In questo modo è possibile passare un `CWindow` oggetto a qualsiasi funzione che richiede un handle a una finestra. È possibile combinare facilmente `CWindow` le chiamate al metodo e le chiamate di funzione Win32 senza creare oggetti temporanei.

Poiché `CWindow` dispone solo di due membri dati (un handle di finestra e le dimensioni predefinite), non impone un sovraccarico sul codice. Inoltre, molti dei `CWindow` metodi semplicemente incapsulano le funzioni API Win32 corrispondenti. Utilizzando `CWindow` , il membro HWND viene passato automaticamente alla funzione Win32.

Oltre a usare `CWindow` direttamente, è anche possibile derivare da esso per aggiungere dati o codice alla classe. ATL deriva tre classi da `CWindow` : [CWindowImpl](../atl/implementing-a-window.md), [CDialogImpl](../atl/implementing-a-dialog-box.md)e [CContainedWindowT](../atl/using-contained-windows.md).

## <a name="see-also"></a>Vedi anche

[Classi finestra](../atl/atl-window-classes.md)
