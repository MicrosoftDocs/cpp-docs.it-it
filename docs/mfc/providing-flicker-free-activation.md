---
title: Fornitura di attivazione senza sfarfallio
ms.date: 11/04/2016
helpviewer_keywords:
- MFC ActiveX controls [MFC], flicker-free
- flicker, MFC ActiveX controls
- activation [MFC], flicker-free
ms.assetid: bcb24b77-31d8-44a0-8c58-2ea6213b4c43
ms.openlocfilehash: d979a6f633926bed1ad59de86829b9ac27b0d0cb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50438142"
---
# <a name="providing-flicker-free-activation"></a>Fornitura di attivazione senza sfarfallio

Se il controllo disegna se stesso in modo identico negli stati attivi e inattivi e non utilizza attivazione senza finestra, è possibile eliminare le operazioni di disegno e lo sfarfallio che in genere si verificano quando si effettua la transizione tra l'inattivo e di stato attivo. A tale scopo, includere il **noFlickerActivate** flag nel set di flag restituiti dal [COleControl:: GetControlFlags](../mfc/reference/colecontrol-class.md#getcontrolflags). Ad esempio:

[!code-cpp[NVC_MFC_AxOpt#5](../mfc/codesnippet/cpp/providing-flicker-free-activation_1.cpp)]
[!code-cpp[NVC_MFC_AxOpt#13](../mfc/codesnippet/cpp/providing-flicker-free-activation_2.cpp)]
[!code-cpp[NVC_MFC_AxOpt#7](../mfc/codesnippet/cpp/providing-flicker-free-activation_3.cpp)]

Il codice per includere questo flag viene generato automaticamente se si seleziona il **attivazione senza sfarfallio** opzione il [le impostazioni di controllo](../mfc/reference/control-settings-mfc-activex-control-wizard.md) pagina quando si crea il controllo con la creazione guidata controllo ActiveX MFC.

Se si utilizza l'attivazione senza finestra, questa ottimizzazione non ha alcun effetto.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC: ottimizzazione](../mfc/mfc-activex-controls-optimization.md)

