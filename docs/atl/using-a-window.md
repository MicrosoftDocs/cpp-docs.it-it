---
title: Utilizzare una finestra (ATL) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-windows
ms.tgt_pltfrm: ''
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- ATL, windows
- CWindow class, about CWindow class
- windows [C++], ATL
ms.assetid: b3b9cc8e-4287-486b-b080-38852bc2943a
caps.latest.revision: 10
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a2be573e10190b385274de9afab498c77a094550
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="using-a-window"></a>Utilizzare una finestra
Classe [CWindow](../atl/reference/cwindow-class.md) consente di utilizzare una finestra. Dopo aver collegato una finestra per un `CWindow` dell'oggetto, è quindi possibile chiamare `CWindow` metodi per modificare la finestra. `CWindow`contiene inoltre un `HWND` per convertire un `CWindow` l'oggetto in un `HWND`. È quindi possibile passare un `CWindow` oggetto a qualsiasi funzione che richiede un handle a una finestra. È possibile combinare facilmente `CWindow` chiamate al metodo e chiamate di funzione Win32, senza creare oggetti temporanei.  
  
 Poiché `CWindow` ha solo due membri dati, un handle di finestra e le dimensioni predefinite, non è previsto un overhead nel codice. Inoltre, molte del `CWindow` semplicemente eseguono il wrapping di funzioni API Win32 corrispondenti. Utilizzando `CWindow`, `HWND` membro automaticamente è passato alla funzione Win32.  
  
 Oltre a utilizzare `CWindow` direttamente, è anche possibile derivare da esso per aggiungere dati o codice alla classe. ATL stesso deriva tre classi da `CWindow`: [CWindowImpl](../atl/implementing-a-window.md), [CDialogImpl](../atl/implementing-a-dialog-box.md), e [CContainedWindowT](../atl/using-contained-windows.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Classi di finestra](../atl/atl-window-classes.md)

