---
title: CReBar vs. CReBarCtrl | Documenti Microsoft
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
ms.openlocfilehash: c98b2fd9baf97d351c812f2c442d408ff6221d82
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36932260"
---
# <a name="crebar-vs-crebarctrl"></a>CReBar vs. CReBarCtrl
MFC fornisce due classi per creare Rebar: [CReBar](../mfc/reference/crebar-class.md) e [CReBarCtrl](../mfc/reference/crebarctrl-class.md) (che esegue il wrapping di controlli comuni di Windows API). `CReBar` fornisce tutte le funzionalità del controllo comune rebar, e consente di gestire molte strutture e le impostazioni di controllo comuni necessarie per l'utente.  
  
 `CReBarCtrl` è una classe wrapper per il controllo rebar Win32 e pertanto potrebbe essere più facili da implementare se non si intende integrare il controllo rebar nell'architettura MFC. Se si prevede di utilizzare `CReBarCtrl` e integrare il controllo rebar nell'architettura MFC, è necessario che vengano comunicate controllo rebar a MFC. Questa comunicazione non è difficile; Tuttavia, è un lavoro aggiuntivo che è quindi necessario quando si utilizza `CReBar`.  
  
 Visual C++ fornisce due modi per sfruttare il controllo comune rebar.  
  
-   Crea un controllo rebar utilizzando `CReBar`, quindi chiamare [CReBar:: GetReBarCtrl](../mfc/reference/crebar-class.md#getrebarctrl) ottenere l'accesso al `CReBarCtrl` funzioni membro.  
  
    > [!NOTE]
    >  `CReBar::GetReBarCtrl` è una funzione membro inline che esegue il cast di **ciò** puntatore dell'oggetto controllo rebar. Ciò significa che, in fase di esecuzione, la chiamata di funzione non dispone di alcun overhead.  
  
-   Crea un controllo rebar utilizzando [CReBarCtrl](../mfc/reference/crebarctrl-class.md)del costruttore.  
  
 Dei metodi forniscono l'accesso alle funzioni membro del controllo rebar. Quando si chiama `CReBar::GetReBarCtrl`, viene restituito un riferimento a un `CReBarCtrl` pertanto è possibile utilizzare uno dei due set di funzioni membro dell'oggetto. Vedere [CReBar](../mfc/reference/crebar-class.md) per informazioni sulla costruzione e creazione di un controllo rebar tramite `CReBar`.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CReBarCtrl](../mfc/using-crebarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

