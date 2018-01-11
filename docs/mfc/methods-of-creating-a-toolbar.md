---
title: Metodi di creazione di una barra degli strumenti | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- CToolBarCtrl class [MFC], and CToolBar class [MFC]
- CToolBar class [MFC], creating toolbars
- MFC toolbars
- toolbar controls [MFC]
- toolbar controls [MFC], creating
- CToolBarCtrl class [MFC], creating toolbars
ms.assetid: f19d8d65-d49f-445c-abe8-d47d3e4101c8
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6d93f8e43c933e9c8054e798c11754cc48bf54a5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="methods-of-creating-a-toolbar"></a>Metodi di creazione di una barra degli strumenti
MFC fornisce due classi per creare barre degli strumenti: [CToolBar](../mfc/reference/ctoolbar-class.md) e [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) (che esegue il wrapping di controlli comuni di Windows API). `CToolBar`fornisce tutte le funzionalità del controllo comune barra degli strumenti, e consente di gestire molte impostazioni di controllo comuni necessarie e strutture. Tuttavia, il file eseguibile risultante in genere essere maggiore di quelle create tramite `CToolBarCtrl`.  
  
 `CToolBarCtrl`in genere risultati in un file eseguibile più piccolo ed è preferibile utilizzare `CToolBarCtrl` se non si intende integrare la barra degli strumenti nell'architettura MFC. Se si prevede di utilizzare `CToolBarCtrl` e integrare la barra degli strumenti nell'architettura MFC, è necessario che vengano comunicate di controllo della barra degli strumenti a MFC. Questa comunicazione non è difficile; Tuttavia, è un lavoro aggiuntivo che è quindi necessario quando si utilizza `CToolBar`.  
  
 Visual C++ fornisce due modi per sfruttare il controllo comune barra degli strumenti.  
  
-   Creare la barra degli strumenti utilizzando `CToolBar`e quindi chiamare [CToolBar:: GetToolBarCtrl](../mfc/reference/ctoolbar-class.md#gettoolbarctrl) per ottenere l'accesso per il `CToolBarCtrl` funzioni membro.  
  
-   Creare la barra degli strumenti utilizzando [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md)del costruttore.  
  
 Dei metodi forniscono l'accesso alle funzioni membro del controllo barra degli strumenti. Quando si chiama `CToolBar::GetToolBarCtrl`, viene restituito un riferimento a un `CToolBarCtrl` pertanto è possibile utilizzare uno dei due set di funzioni membro dell'oggetto. Vedere [CToolBar](../mfc/reference/ctoolbar-class.md) per informazioni sulla costruzione e creazione di una barra degli strumenti tramite `CToolBar`.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CToolBarCtrl](../mfc/using-ctoolbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

