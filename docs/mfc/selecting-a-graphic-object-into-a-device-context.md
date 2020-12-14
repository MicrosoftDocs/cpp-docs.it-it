---
description: 'Altre informazioni su: selezione di un oggetto grafico in un contesto di dispositivo'
title: Selezione di un oggetto grafico in un contesto di dispositivo
ms.date: 11/04/2016
helpviewer_keywords:
- graphic objects [MFC], selecting into device context
- SelectObject method [MFC]
- GDI objects [MFC], device contexts
- lifetime, graphic objects [MFC]
- device contexts, selecting graphic objects into
- device contexts, graphic objects [MFC]
ms.assetid: cf54a330-63ef-421f-83eb-90ec7bd82eef
ms.openlocfilehash: cc2aabbcb1614fc77e5eadf9e6fba13ba377a4c7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97217679"
---
# <a name="selecting-a-graphic-object-into-a-device-context"></a>Selezione di un oggetto grafico in un contesto di dispositivo

Questo argomento si applica all'uso di oggetti grafici nel contesto di dispositivo di una finestra. Dopo aver [creato un oggetto Drawing](../mfc/one-stage-and-two-stage-construction-of-objects.md), è necessario selezionarlo nel contesto di dispositivo al posto dell'oggetto predefinito archiviato:

[!code-cpp[NVC_MFCDocViewSDI#7](../mfc/codesnippet/cpp/selecting-a-graphic-object-into-a-device-context_1.cpp)]

## <a name="lifetime-of-graphic-objects"></a>Durata degli oggetti grafici

L'oggetto grafico restituito da [SelezionaOggetto](../mfc/reference/cdc-class.md#selectobject) è "Temporary". Ovvero verrà eliminato dalla funzione membro [OnIdle](../mfc/reference/cwinapp-class.md#onidle) della classe `CWinApp` la volta successiva che il programma otterrà il tempo di inattività. Fino a quando si utilizza l'oggetto restituito da `SelectObject` in una singola funzione senza restituire il controllo al ciclo di messaggi principale, non si verifica alcun problema.

### <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Oggetti grafici](../mfc/graphic-objects.md)

- [Costruzione di oggetti grafici in una fase e in due fasi](../mfc/one-stage-and-two-stage-construction-of-objects.md)

- [Contesti di dispositivo](../mfc/device-contexts.md)

- [Disegno in una visualizzazione](../mfc/drawing-in-a-view.md)

## <a name="see-also"></a>Vedi anche

[Oggetti grafici](../mfc/graphic-objects.md)
