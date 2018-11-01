---
title: Utilizzo di controlli Slider
ms.date: 11/04/2016
helpviewer_keywords:
- CSliderCtrl class [MFC], using
- slider controls
- slider controls [MFC], using
ms.assetid: 2b1a8ac8-2b17-41e1-aa24-83c1fd737049
ms.openlocfilehash: 7bb5bda4a7b85ea8bb852649b20f10f0c4693188
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50533563"
---
# <a name="using-slider-controls"></a>Utilizzo di controlli Slider

L'utilizzo tipico di un controllo dispositivo di scorrimento segue il modello descritto di seguito:

- Viene creato il controllo. Se il controllo è specificato nel modello di una finestra di dialogo, la creazione avviene automaticamente quando viene creata la finestra di dialogo. (È necessario disporre di un [CSliderCtrl](../mfc/reference/csliderctrl-class.md) membro nella classe della finestra che corrisponde a controllo dispositivo di scorrimento.) In alternativa, è possibile usare la [Create](../mfc/reference/csliderctrl-class.md#create) funzione membro per creare il controllo come finestra figlio di tutte le finestre.

- Chiamare le varie funzioni membro Set per impostare i valori per il controllo. Le modifiche effettuabili includono l'impostazione delle posizioni minima e massima per il dispositivo di scorrimento, il disegno di segni di graduazione, l'impostazione di un intervallo di selezione e il riposizionamento del dispositivo di scorrimento. Per i controlli in una finestra di dialogo, è il momento giusto per eseguire questa operazione nella finestra di dialogo [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) (funzione).

- Mentre l'utente interagisce con il controllo, questo invierà vari messaggi di notifica. È possibile estrarre il valore di dispositivo di scorrimento dal controllo chiamando il [GetPos](../mfc/reference/csliderctrl-class.md#getpos) funzione membro.

- Una volta impostato il controllo, è necessario assicurarsi che venga eliminato definitivamente in modo corretto. Se il controllo dispositivo di scorrimento si trova in una finestra di dialogo, sia il controllo sia l'oggetto `CSliderCtrl` verranno eliminati definitivamente in modo automatico. In caso contrario, è necessario assicurarsi che sia il controllo che l'oggetto `CSliderCtrl` vengono eliminati definitivamente in modo corretto.

## <a name="see-also"></a>Vedere anche

[Uso di CSliderCtrl](../mfc/using-csliderctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

