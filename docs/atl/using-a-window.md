---
title: "Using a Window | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL, finestre"
  - "CWindow class, about CWindow class"
  - "windows [C++], ATL"
ms.assetid: b3b9cc8e-4287-486b-b080-38852bc2943a
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Using a Window
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe [CWindow](../atl/reference/cwindow-class.md) consente di utilizzare una finestra.  Una volta che si associa una finestra a un oggetto `CWindow`, è possibile chiamare i metodi `CWindow` per modificare la finestra.  `CWindow` contiene anche un operatore `HWND` per convertire un oggetto `CWindow` a `HWND`.  È possibile passare un oggetto `CWindow` a qualsiasi funzione che richiede un handle a una finestra.  È possibile combinare chiamate al metodo `CWindow` e le chiamate di funzione Win32, senza creare oggetti temporanei.  
  
 Poiché `CWindow` dispone di due membri dati \(un handle di finestra e le dimensioni di impostazione predefinita\), non richiedono un sovraccarico al codice.  Inoltre, molti dei metodi `CWindow` eseguono il wrapping con le corrispondenti funzioni API Win32.  Utilizzando `CWindow`, il membro `HWND` viene passato automaticamente alla funzione Win32.  
  
 Oltre a utilizzare `CWindow` direttamente, è anche possibile derivare da per aggiungere dati o il codice alla classe.  ATL stesso deriva da tre classi `CWindow`: [CWindowImpl](../atl/implementing-a-window.md), [CDialogImpl](../atl/implementing-a-dialog-box.md)e [CContainedWindowT](../atl/using-contained-windows.md).  
  
## Vedere anche  
 [Classi di finestra](../atl/atl-window-classes.md)