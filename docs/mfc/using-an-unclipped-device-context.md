---
description: 'Altre informazioni su: uso di un contesto di dispositivo non ritagliato'
title: Utilizzo di un contesto di dispositivo integro
ms.date: 11/04/2016
helpviewer_keywords:
- MFC ActiveX controls [MFC], unclipped device context
ms.assetid: 9c020063-73da-4803-bf7b-2e1fd950c9ed
ms.openlocfilehash: 76131d35b108b04caf0b07be8c46e250120f9f62
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97202639"
---
# <a name="using-an-unclipped-device-context"></a>Utilizzo di un contesto di dispositivo integro

Se si è certi che il controllo non viene disegnato all'esterno del relativo rettangolo client, è possibile realizzare un piccolo, ma rilevabile miglioramento della velocità disabilitando la chiamata a `IntersectClipRect` effettuata da `COleControl` . A tale scopo, rimuovere il flag *clipPaintDC* dal set di flag restituiti da [COleControl:: GetControlFlags](../mfc/reference/colecontrol-class.md#getcontrolflags). Ad esempio:

[!code-cpp[NVC_MFC_AxOpt#5](../mfc/codesnippet/cpp/using-an-unclipped-device-context_1.cpp)]
[!code-cpp[NVC_MFC_AxOpt#14](../mfc/codesnippet/cpp/using-an-unclipped-device-context_2.cpp)]
[!code-cpp[NVC_MFC_AxOpt#7](../mfc/codesnippet/cpp/using-an-unclipped-device-context_3.cpp)]

Il codice per rimuovere questo flag viene generato automaticamente se si seleziona l'opzione **contesto dispositivo non ritagliato** nella pagina [Impostazioni controllo](../mfc/reference/control-settings-mfc-activex-control-wizard.md) , quando si crea il controllo con la creazione guidata controllo ActiveX MFC.

Se si usa l'attivazione senza finestra, questa ottimizzazione non ha alcun effetto.

## <a name="see-also"></a>Vedi anche

[Controlli ActiveX MFC: ottimizzazione](../mfc/mfc-activex-controls-optimization.md)
