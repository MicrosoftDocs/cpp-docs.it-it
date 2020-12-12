---
description: 'Altre informazioni su: fornire Flicker-Free attivazione'
title: Fornitura di attivazione senza sfarfallio
ms.date: 11/04/2016
helpviewer_keywords:
- MFC ActiveX controls [MFC], flicker-free
- flicker, MFC ActiveX controls
- activation [MFC], flicker-free
ms.assetid: bcb24b77-31d8-44a0-8c58-2ea6213b4c43
ms.openlocfilehash: c0af1ccdd4795f55296ff38e0e74bc6492f79eb1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97248827"
---
# <a name="providing-flicker-free-activation"></a>Fornitura di attivazione senza sfarfallio

Se il controllo viene disegnato in modo identico negli stati inattivi e attivi (e non utilizza l'attivazione senza finestra), è possibile eliminare le operazioni di disegno e lo sfarfallio visivo associato che in genere si verificano quando si esegue la transizione tra gli stati inattivi e attivi. A tale scopo, includere il flag **noFlickerActivate** nel set di flag restituiti da [COleControl:: GetControlFlags](../mfc/reference/colecontrol-class.md#getcontrolflags). Ad esempio:

[!code-cpp[NVC_MFC_AxOpt#5](../mfc/codesnippet/cpp/providing-flicker-free-activation_1.cpp)]
[!code-cpp[NVC_MFC_AxOpt#13](../mfc/codesnippet/cpp/providing-flicker-free-activation_2.cpp)]
[!code-cpp[NVC_MFC_AxOpt#7](../mfc/codesnippet/cpp/providing-flicker-free-activation_3.cpp)]

Il codice per includere questo flag viene generato automaticamente se si seleziona l'opzione di **attivazione senza sfarfallio** nella pagina [Impostazioni controllo](../mfc/reference/control-settings-mfc-activex-control-wizard.md) quando si crea il controllo con la creazione guidata controllo ActiveX MFC.

Se si usa l'attivazione senza finestra, questa ottimizzazione non ha alcun effetto.

## <a name="see-also"></a>Vedi anche

[Controlli ActiveX MFC: ottimizzazione](../mfc/mfc-activex-controls-optimization.md)
