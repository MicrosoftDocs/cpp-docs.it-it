---
title: Utilizzo di controlli Slider | Documenti Microsoft
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
- CSliderCtrl class [MFC], using
- slider controls
- slider controls [MFC], using
ms.assetid: 2b1a8ac8-2b17-41e1-aa24-83c1fd737049
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4fdab6a7fae25845da81ee7263e045e50951f557
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="using-slider-controls"></a>Utilizzo di controlli Slider
L'utilizzo tipico di un controllo dispositivo di scorrimento segue il modello descritto di seguito:  
  
-   Viene creato il controllo. Se il controllo è specificato nel modello di una finestra di dialogo, la creazione avviene automaticamente quando viene creata la finestra di dialogo. (È necessario disporre di un [CSliderCtrl](../mfc/reference/csliderctrl-class.md) membro nella classe della finestra che corrisponde al controllo dispositivo di scorrimento.) In alternativa, è possibile utilizzare il [crea](../mfc/reference/csliderctrl-class.md#create) funzione membro per creare il controllo come finestra figlio di qualsiasi finestra.  
  
-   Chiamare le varie funzioni membro Set per impostare i valori per il controllo. Le modifiche effettuabili includono l'impostazione delle posizioni minima e massima per il dispositivo di scorrimento, il disegno di segni di graduazione, l'impostazione di un intervallo di selezione e il riposizionamento del dispositivo di scorrimento. Per i controlli in una finestra di dialogo, il momento migliore per eseguire questa operazione è nella finestra di dialogo [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) (funzione).  
  
-   Mentre l'utente interagisce con il controllo, questo invierà vari messaggi di notifica. È possibile estrarre il valore del dispositivo di scorrimento dal controllo chiamando la [GetPos](../mfc/reference/csliderctrl-class.md#getpos) funzione membro.  
  
-   Una volta impostato il controllo, è necessario assicurarsi che venga eliminato definitivamente in modo corretto. Se il controllo dispositivo di scorrimento si trova in una finestra di dialogo, sia il controllo sia l'oggetto `CSliderCtrl` verranno eliminati automaticamente in modo permanente. In caso contrario, è necessario assicurarsi che sia il controllo che l'oggetto `CSliderCtrl` vengono eliminati correttamente.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CSliderCtrl](../mfc/using-csliderctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

