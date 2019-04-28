---
title: Inserimento di interazione del mouse in stato di inattività
ms.date: 11/04/2016
helpviewer_keywords:
- MFC ActiveX controls [MFC], mouse interaction
ms.assetid: b09106bf-44c7-4b9b-a6d9-0d624f16f5b3
ms.openlocfilehash: d37deeec06551ae8bf340c99a9759327ce2ec2b7
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62297125"
---
# <a name="providing-mouse-interaction-while-inactive"></a>Inserimento di interazione del mouse in stato di inattività

Se il controllo non viene attivato immediatamente, è comunque possibile per processo WM_SETCURSOR e WM_MOUSEMOVE messaggi, anche se il controllo non dispone di finestre proprie. Questa operazione può essere eseguita abilitando `COleControl`dell'implementazione del `IPointerInactive` interfaccia, che è disabilitata per impostazione predefinita. (Vedere la *ActiveX SDK* per una descrizione di questa interfaccia.) Per abilitarla, includere il flag pointerInactive nel set di flag restituiti da [COleControl:: GetControlFlags](../mfc/reference/colecontrol-class.md#getcontrolflags):

[!code-cpp[NVC_MFC_AxOpt#5](../mfc/codesnippet/cpp/providing-mouse-interaction-while-inactive_1.cpp)]
[!code-cpp[NVC_MFC_AxOpt#10](../mfc/codesnippet/cpp/providing-mouse-interaction-while-inactive_2.cpp)]
[!code-cpp[NVC_MFC_AxOpt#7](../mfc/codesnippet/cpp/providing-mouse-interaction-while-inactive_3.cpp)]

Il codice per includere questo flag viene generato automaticamente se si seleziona il **Mouse puntatore notifiche quando inattivi** opzione il [le impostazioni di controllo](../mfc/reference/control-settings-mfc-activex-control-wizard.md) pagina quando si crea il controllo con il **Creazione guidata controllo ActiveX MFC**.

Quando il `IPointerInactive` interfaccia è abilitata, il contenitore di delega WM_SETCURSOR e WM_MOUSEMOVE dei messaggi. `COleControl`dell'implementazione di `IPointerInactive` invia i messaggi attraverso mappa messaggi del controllo dopo la regolazione del mouse coordina in modo appropriato. È possibile elaborare i messaggi come comuni messaggi di finestra aggiungendo le voci corrispondenti alla mappa messaggi. Nei gestori per questi messaggi, evitare di usare la *m_hWnd* variabile membro (o qualsiasi funzione membro che lo utilizza) senza prima verificare che il relativo valore non è **NULL**.

È anche possibile un controllo inattivo a essere la destinazione di un'operazione di trascinamento e rilascio OLE. Questa operazione richiede l'attivazione del controllo nel momento in cui che l'utente trascina un oggetto su di esso, in modo che la finestra del controllo può essere registrata come destinazione di rilascio. Per causare l'attivazione si verificano durante il trascinamento, eseguire l'override [COleControl:: GetActivationPolicy](../mfc/reference/colecontrol-class.md#getactivationpolicy)e restituire il flag POINTERINACTIVE_ACTIVATEONDRAG:

[!code-cpp[NVC_MFC_AxOpt#11](../mfc/codesnippet/cpp/providing-mouse-interaction-while-inactive_4.cpp)]

L'abilitazione di `IPointerInactive` interfaccia indica in genere che si desidera il controllo sia in grado di elaborare i messaggi del mouse in qualsiasi momento. Per ottenere questo comportamento in un contenitore che non supporta il `IPointerInactive` interfaccia, è necessario disporre sempre attivo quando visibile, ovvero il controllo deve includere il flag OLEMISC_ACTIVATEWHENVISIBLE tra i vari flag. Tuttavia, per evitare questo flag di entrata in vigore in un contenitore che supporta `IPointerInactive`, è anche possibile specificare il flag OLEMISC_IGNOREACTIVATEWHENVISIBLE:

[!code-cpp[NVC_MFC_AxOpt#12](../mfc/codesnippet/cpp/providing-mouse-interaction-while-inactive_5.cpp)]

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC: ottimizzazione](../mfc/mfc-activex-controls-optimization.md)
