---
description: 'Altre informazioni su: uso dei controlli dispositivo di scorrimento'
title: Utilizzo di controlli Slider
ms.date: 11/04/2016
helpviewer_keywords:
- CSliderCtrl class [MFC], using
- slider controls
- slider controls [MFC], using
ms.assetid: 2b1a8ac8-2b17-41e1-aa24-83c1fd737049
ms.openlocfilehash: b9134d76261bf5c15bfef90260394ee6a4c760e1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97322661"
---
# <a name="using-slider-controls"></a>Utilizzo di controlli Slider

L'utilizzo tipico di un controllo dispositivo di scorrimento segue il modello descritto di seguito:

- Viene creato il controllo. Se il controllo è specificato nel modello di una finestra di dialogo, la creazione avviene automaticamente quando viene creata la finestra di dialogo. È necessario disporre di un membro [CSliderCtrl](../mfc/reference/csliderctrl-class.md) nella classe della finestra di dialogo che corrisponde al controllo dispositivo di scorrimento. In alternativa, è possibile usare la funzione membro [create](../mfc/reference/csliderctrl-class.md#create) per creare il controllo come finestra figlio di qualsiasi finestra.

- Chiamare le varie funzioni membro Set per impostare i valori per il controllo. Le modifiche effettuabili includono l'impostazione delle posizioni minima e massima per il dispositivo di scorrimento, il disegno di segni di graduazione, l'impostazione di un intervallo di selezione e il riposizionamento del dispositivo di scorrimento. Per i controlli in una finestra di dialogo, è opportuno eseguire questa operazione nella funzione [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) della finestra di dialogo.

- Mentre l'utente interagisce con il controllo, questo invierà vari messaggi di notifica. È possibile estrarre il valore del dispositivo di scorrimento dal controllo chiamando la funzione membro [GetPos](../mfc/reference/csliderctrl-class.md#getpos) .

- Una volta impostato il controllo, è necessario assicurarsi che venga eliminato definitivamente in modo corretto. Se il controllo dispositivo di scorrimento si trova in una finestra di dialogo, sia il controllo sia l'oggetto `CSliderCtrl` verranno eliminati automaticamente in modo permanente. In caso contrario, è necessario assicurarsi che sia il controllo che l'oggetto `CSliderCtrl` vengono eliminati correttamente.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CSliderCtrl](../mfc/using-csliderctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
