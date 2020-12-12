---
description: "Altre informazioni su: fornire l'interazione del mouse mentre è inattiva"
title: Inserimento di interazione del mouse in stato di inattività
ms.date: 11/04/2016
helpviewer_keywords:
- MFC ActiveX controls [MFC], mouse interaction
ms.assetid: b09106bf-44c7-4b9b-a6d9-0d624f16f5b3
ms.openlocfilehash: bd3c069b052b58059de5f311e4ead795400d32fe
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97248736"
---
# <a name="providing-mouse-interaction-while-inactive"></a>Inserimento di interazione del mouse in stato di inattività

Se il controllo non è immediatamente attivato, è comunque possibile che si desideri elaborare WM_SETCURSOR e WM_MOUSEMOVE messaggi, anche se il controllo non ha una finestra propria. Questa operazione può essere eseguita abilitando `COleControl` l'implementazione dell' `IPointerInactive` interfaccia, che è disabilitata per impostazione predefinita. Per una descrizione di questa interfaccia, vedere *ActiveX SDK* . Per abilitarla, includere il flag pointerInactive nel set di flag restituiti da [COleControl:: GetControlFlags](../mfc/reference/colecontrol-class.md#getcontrolflags):

[!code-cpp[NVC_MFC_AxOpt#5](../mfc/codesnippet/cpp/providing-mouse-interaction-while-inactive_1.cpp)]
[!code-cpp[NVC_MFC_AxOpt#10](../mfc/codesnippet/cpp/providing-mouse-interaction-while-inactive_2.cpp)]
[!code-cpp[NVC_MFC_AxOpt#7](../mfc/codesnippet/cpp/providing-mouse-interaction-while-inactive_3.cpp)]

Il codice per includere questo flag viene generato automaticamente se si seleziona l'opzione **notifiche del puntatore del mouse quando inattivo** nella pagina [Impostazioni controllo](../mfc/reference/control-settings-mfc-activex-control-wizard.md) quando si crea il controllo con la **creazione guidata controllo ActiveX MFC**.

Quando l' `IPointerInactive` interfaccia è abilitata, il contenitore delega WM_SETCURSOR e WM_MOUSEMOVE messaggi. `COleControl`l'implementazione di `IPointerInactive` Invia i messaggi tramite la mappa messaggi del controllo dopo aver modificato le coordinate del mouse in modo appropriato. È possibile elaborare i messaggi esattamente come i normali messaggi della finestra aggiungendo le voci corrispondenti alla mappa messaggi. Nei gestori per questi messaggi evitare di usare la variabile membro *m_hWnd* (o qualsiasi funzione membro che lo USA) senza prima verificare che il valore non sia **null**.

Potrebbe anche essere necessario che un controllo inattivo sia la destinazione di un'operazione di trascinamento della selezione OLE. Questa operazione richiede l'attivazione del controllo nel momento in cui l'utente trascina un oggetto su di esso, in modo che la finestra del controllo possa essere registrata come destinazione di rilascio. Per far sì che si verifichi l'attivazione durante un trascinamento, eseguire l'override di [COleControl:: GetActivationPolicy](../mfc/reference/colecontrol-class.md#getactivationpolicy)e restituire il flag di POINTERINACTIVE_ACTIVATEONDRAG:

[!code-cpp[NVC_MFC_AxOpt#11](../mfc/codesnippet/cpp/providing-mouse-interaction-while-inactive_4.cpp)]

L'abilitazione dell' `IPointerInactive` interfaccia in genere significa che si desidera che il controllo sia in grado di elaborare i messaggi del mouse in qualsiasi momento. Per ottenere questo comportamento in un contenitore che non supporta l' `IPointerInactive` interfaccia, è necessario che il controllo venga sempre attivato quando è visibile, il che significa che il controllo deve includere il flag di OLEMISC_ACTIVATEWHENVISIBLE tra i flag varie. Tuttavia, per impedire che questo flag venga applicato in un contenitore che supporta `IPointerInactive` , è anche possibile specificare il flag di OLEMISC_IGNOREACTIVATEWHENVISIBLE:

[!code-cpp[NVC_MFC_AxOpt#12](../mfc/codesnippet/cpp/providing-mouse-interaction-while-inactive_5.cpp)]

## <a name="see-also"></a>Vedi anche

[Controlli ActiveX MFC: ottimizzazione](../mfc/mfc-activex-controls-optimization.md)
