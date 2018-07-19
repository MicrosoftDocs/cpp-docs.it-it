---
title: Utilizzare una finestra (ATL) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- ATL, windows
- CWindow class, about CWindow class
- windows [C++], ATL
ms.assetid: b3b9cc8e-4287-486b-b080-38852bc2943a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 44b9988c0ecde4d0aee917fea686ec6511473318
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/05/2018
ms.locfileid: "37847924"
---
# <a name="using-a-window"></a>Utilizzare una finestra
Classe [CWindow](../atl/reference/cwindow-class.md) consente di usare una finestra. Dopo aver collegato a una finestra un' `CWindow` dell'oggetto, è quindi possibile chiamare `CWindow` metodi per la modifica della finestra. `CWindow` contiene anche un operatore HWND per convertire un `CWindow` oggetto a un oggetto HWND. In questo modo è possibile passare un `CWindow` oggetto a qualsiasi funzione che richiede un handle a una finestra. È possibile combinare facilmente `CWindow` chiamate ai metodi e le chiamate di funzione Win32, senza creare eventuali oggetti temporanei.  
  
 Poiché `CWindow` ha solo due membri dati (un handle di finestra e le dimensioni predefinite), ciò non impone un sovraccarico nel codice. Inoltre, molte del `CWindow` metodi semplicemente il wrapping di funzioni API Win32 corrispondenti. Usando `CWindow`, il membro HWND viene automaticamente passato alla funzione Win32.  
  
 Oltre a usare `CWindow` direttamente, è anche possibile derivare da esso per aggiungere dati o il codice alla classe. ATL stesso deriva le tre classi da `CWindow`: [CWindowImpl](../atl/implementing-a-window.md), [CDialogImpl](../atl/implementing-a-dialog-box.md), e [CContainedWindowT](../atl/using-contained-windows.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Classi di finestre](../atl/atl-window-classes.md)

