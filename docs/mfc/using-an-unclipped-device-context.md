---
title: Utilizzo di un contesto di dispositivo integro
ms.date: 11/04/2016
helpviewer_keywords:
- MFC ActiveX controls [MFC], unclipped device context
ms.assetid: 9c020063-73da-4803-bf7b-2e1fd950c9ed
ms.openlocfilehash: 0f129c0bfa5bd76df4ba34b117e7ed8aa08c2ecb
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62411812"
---
# <a name="using-an-unclipped-device-context"></a>Utilizzo di un contesto di dispositivo integro

Se si è assolutamente certi che il controllo disegnato di fuori del rettangolo del client, è possibile realizzare un aumento della velocità di piccole dimensioni ma rilevabili disabilitando la chiamata a `IntersectClipRect` resa dai `COleControl`. A tale scopo, rimuovere il *clipPaintDC* flag nel set di flag restituiti dal [COleControl:: GetControlFlags](../mfc/reference/colecontrol-class.md#getcontrolflags). Ad esempio:

[!code-cpp[NVC_MFC_AxOpt#5](../mfc/codesnippet/cpp/using-an-unclipped-device-context_1.cpp)]
[!code-cpp[NVC_MFC_AxOpt#14](../mfc/codesnippet/cpp/using-an-unclipped-device-context_2.cpp)]
[!code-cpp[NVC_MFC_AxOpt#7](../mfc/codesnippet/cpp/using-an-unclipped-device-context_3.cpp)]

Il codice per rimuovere questo flag viene generato automaticamente se si seleziona il **contesto di periferica integro** opzione il [le impostazioni di controllo](../mfc/reference/control-settings-mfc-activex-control-wizard.md) pagina, quando si crea il controllo con la creazione guidata controllo ActiveX MFC.

Se si utilizza l'attivazione senza finestra, questa ottimizzazione non ha alcun effetto.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC: ottimizzazione](../mfc/mfc-activex-controls-optimization.md)
