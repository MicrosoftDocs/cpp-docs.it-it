---
title: Selezione di un oggetto grafico in un contesto di dispositivo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- graphic objects [MFC], selecting into device context
- SelectObject method [MFC]
- GDI objects [MFC], device contexts
- lifetime, graphic objects [MFC]
- device contexts, selecting graphic objects into
- device contexts, graphic objects [MFC]
ms.assetid: cf54a330-63ef-421f-83eb-90ec7bd82eef
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 406c4e7cd87b350f9317022dcf1821fa92ddf4af
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46427667"
---
# <a name="selecting-a-graphic-object-into-a-device-context"></a>Selezione di un oggetto grafico in un contesto di dispositivo

Questo argomento si applica all'utilizzo di oggetti grafici nel contesto di dispositivo di una finestra. Dopo aver [creare un oggetto drawing](../mfc/one-stage-and-two-stage-construction-of-objects.md), è necessario selezionarlo nel contesto di dispositivo anziché l'oggetto predefinito archiviato vengono eliminati:

[!code-cpp[NVC_MFCDocViewSDI#7](../mfc/codesnippet/cpp/selecting-a-graphic-object-into-a-device-context_1.cpp)]

## <a name="lifetime-of-graphic-objects"></a>Durata degli oggetti grafici

L'oggetto grafico restituito da [SelectObject](../mfc/reference/cdc-class.md#selectobject) è "temporaneo". Vale a dire, verranno eliminato entro il [OnIdle](../mfc/reference/cwinapp-class.md#onidle) funzione membro di classe `CWinApp` la volta successiva che il programma ottiene inattivo ora. Purché si utilizzino l'oggetto restituito da `SelectObject` in una singola funzione senza restituire il controllo al ciclo di messaggi principale, non si otterrà alcun problema.

### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Oggetti grafici](../mfc/graphic-objects.md)

- [Costruzione di oggetti grafici in una fase e in due fasi](../mfc/one-stage-and-two-stage-construction-of-objects.md)

- [Contesti di dispositivo](../mfc/device-contexts.md)

- [Disegno in una visualizzazione](../mfc/drawing-in-a-view.md)

## <a name="see-also"></a>Vedere anche

[Oggetti grafici](../mfc/graphic-objects.md)

