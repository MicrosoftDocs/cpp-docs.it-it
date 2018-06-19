---
title: CReBar e. CReBarCtrl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a6d0b8df40676cc64c97a6bdef013321c404899f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33344974"
---
# <a name="crebar-vs-crebarctrl"></a>CReBar e. CReBarCtrl
MFC fornisce due classi per creare Rebar: [CReBar](../mfc/reference/crebar-class.md) e [CReBarCtrl](../mfc/reference/crebarctrl-class.md) (che esegue il wrapping di controlli comuni di Windows API). **CReBar** fornisce tutte le funzionalità del controllo comune rebar, e consente di gestire molte strutture e le impostazioni di controllo comuni necessarie per l'utente.  
  
 `CReBarCtrl` è una classe wrapper per il controllo rebar Win32 e pertanto potrebbe essere più facili da implementare se non si intende integrare il controllo rebar nell'architettura MFC. Se si prevede di utilizzare `CReBarCtrl` e integrare il controllo rebar nell'architettura MFC, è necessario che vengano comunicate controllo rebar a MFC. Questa comunicazione non è difficile; Tuttavia, è un lavoro aggiuntivo che è quindi necessario quando si utilizza **CReBar**.  
  
 Visual C++ fornisce due modi per sfruttare il controllo comune rebar.  
  
-   Creare il controllo rebar mediante **CReBar**e quindi chiamare [CReBar:: GetReBarCtrl](../mfc/reference/crebar-class.md#getrebarctrl) per ottenere l'accesso per il `CReBarCtrl` funzioni membro.  
  
    > [!NOTE]
    >  `CReBar::GetReBarCtrl` è una funzione membro inline che esegue il cast di **ciò** puntatore dell'oggetto controllo rebar. Ciò significa che, in fase di esecuzione, la chiamata di funzione non dispone di alcun overhead.  
  
-   Creare il controllo rebar mediante [CReBarCtrl](../mfc/reference/crebarctrl-class.md)del costruttore.  
  
 Dei metodi forniscono l'accesso alle funzioni membro del controllo rebar. Quando si chiama `CReBar::GetReBarCtrl`, viene restituito un riferimento a un `CReBarCtrl` pertanto è possibile utilizzare uno dei due set di funzioni membro dell'oggetto. Vedere [CReBar](../mfc/reference/crebar-class.md) per informazioni sulla costruzione e creazione di un controllo rebar tramite **CReBar**.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CReBarCtrl](../mfc/using-crebarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

