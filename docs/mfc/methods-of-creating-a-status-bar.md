---
title: Metodi di creazione di una barra di stato | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- CStatusBar class [MFC], vs. CStatusBarCtrl
- methods [MFC], creating status bars
- CStatusBarCtrl class [MFC], vs. CStatusBar
- CStatusBarCtrl class [MFC], creating
- methods [MFC]
- status bars [MFC], creating
ms.assetid: 9aeaf290-7099-4762-a5ba-9c26705333c9
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ce14870db466727f93daea15b60c99d975783e87
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="methods-of-creating-a-status-bar"></a>Metodi di creazione di una barra di stato
MFC fornisce due classi per la creazione di barre di stato: [CStatusBar](../mfc/reference/cstatusbar-class.md) e [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md) (che esegue il wrapping di controlli comuni di Windows API). `CStatusBar`fornisce tutte le funzionalità dello stato del controllo comune barra, interagisce automaticamente con i menu e barre degli strumenti e gestisce molti necessarie impostazioni di controllo comune e strutture. Tuttavia, il file eseguibile risultante in genere essere maggiore di quelle create tramite `CStatusBarCtrl`.  
  
 `CStatusBarCtrl`in genere risultati in un file eseguibile più piccolo ed è preferibile utilizzare `CStatusBarCtrl` se non si intende integrare la barra di stato nell'architettura MFC. Se si prevede di utilizzare `CStatusBarCtrl` e integrare la barra di stato nell'architettura MFC, è necessario prestare maggiore attenzione per comunicare le modifiche di controllo a MFC della barra di stato. Questa comunicazione non è difficile; Tuttavia, è un lavoro aggiuntivo che è quindi necessario quando si utilizza `CStatusBar`.  
  
 Visual C++ fornisce due modi per sfruttare il controllo comune barra di stato.  
  
-   Creare il barra di stato tramite `CStatusBar`e quindi chiamare [CStatusBar:: GetStatusBarCtrl](../mfc/reference/cstatusbar-class.md#getstatusbarctrl) per ottenere l'accesso per il `CStatusBarCtrl` funzioni membro.  
  
-   Creare il barra di stato tramite [CStatusBarCtrl](../mfc/reference/cstatusbarctrl-class.md)del costruttore.  
  
 Dei metodi forniscono l'accesso alle funzioni membro della barra di stato. Quando si chiama `CStatusBar::GetStatusBarCtrl`, viene restituito un riferimento a un `CStatusBarCtrl` pertanto è possibile utilizzare uno dei due set di funzioni membro dell'oggetto. Vedere [CStatusBar](../mfc/reference/cstatusbar-class.md) per informazioni sulla costruzione e creazione di un barra di stato tramite `CStatusBar`.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CStatusBarCtrl](../mfc/using-cstatusbarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

