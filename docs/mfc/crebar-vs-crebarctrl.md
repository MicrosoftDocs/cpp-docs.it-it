---
title: CReBar e. CReBarCtrl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CReBar
- CReBarCtrl
dev_langs:
- C++
helpviewer_keywords:
- CReBar class [MFC], vs. CReBarCtrl
- rebar controls [MFC], CReBarCtrl class [MFC]
- GetReBarCtrl class [MFC]
ms.assetid: 7f9c1d7e-5d5f-4956-843c-69ed3df688d0
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 68cd21e21c14a34122f1b26345fab767728ac6a7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="crebar-vs-crebarctrl"></a>CReBar e. CReBarCtrl
MFC fornisce due classi per creare Rebar: [CReBar](../mfc/reference/crebar-class.md) e [CReBarCtrl](../mfc/reference/crebarctrl-class.md) (che esegue il wrapping di controlli comuni di Windows API). **CReBar** fornisce tutte le funzionalità del controllo comune rebar, e consente di gestire molte strutture e le impostazioni di controllo comuni necessarie per l'utente.  
  
 `CReBarCtrl`è una classe wrapper per il controllo rebar Win32 e pertanto potrebbe essere più facili da implementare se non si intende integrare il controllo rebar nell'architettura MFC. Se si prevede di utilizzare `CReBarCtrl` e integrare il controllo rebar nell'architettura MFC, è necessario che vengano comunicate controllo rebar a MFC. Questa comunicazione non è difficile; Tuttavia, è un lavoro aggiuntivo che è quindi necessario quando si utilizza **CReBar**.  
  
 Visual C++ fornisce due modi per sfruttare il controllo comune rebar.  
  
-   Creare il controllo rebar mediante **CReBar**e quindi chiamare [CReBar:: GetReBarCtrl](../mfc/reference/crebar-class.md#getrebarctrl) per ottenere l'accesso per il `CReBarCtrl` funzioni membro.  
  
    > [!NOTE]
    >  `CReBar::GetReBarCtrl`è una funzione membro inline che esegue il cast di **questo** puntatore dell'oggetto controllo rebar. Ciò significa che, in fase di esecuzione, la chiamata di funzione non dispone di alcun overhead.  
  
-   Creare il controllo rebar mediante [CReBarCtrl](../mfc/reference/crebarctrl-class.md)del costruttore.  
  
 Dei metodi forniscono l'accesso alle funzioni membro del controllo rebar. Quando si chiama `CReBar::GetReBarCtrl`, viene restituito un riferimento a un `CReBarCtrl` pertanto è possibile utilizzare uno dei due set di funzioni membro dell'oggetto. Vedere [CReBar](../mfc/reference/crebar-class.md) per informazioni sulla costruzione e creazione di un controllo rebar tramite **CReBar**.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CReBarCtrl](../mfc/using-crebarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

