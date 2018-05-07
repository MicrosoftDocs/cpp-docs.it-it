---
title: Utilizzo di controlli Slider | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CSliderCtrl class [MFC], using
- slider controls
- slider controls [MFC], using
ms.assetid: 2b1a8ac8-2b17-41e1-aa24-83c1fd737049
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9180d792f38652b22f430e497ef0e42dc54f6d73
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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

