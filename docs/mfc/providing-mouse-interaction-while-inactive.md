---
title: Inserimento di interazione del Mouse quando inattivo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: MFC ActiveX controls [MFC], mouse interaction
ms.assetid: b09106bf-44c7-4b9b-a6d9-0d624f16f5b3
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a2f8991b6cc827c35c94b0989ef82e32422fd5c3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="providing-mouse-interaction-while-inactive"></a>Inserimento di interazione del mouse in stato di inattività
Se il controllo non è attivato immediatamente, può comunque desiderato per l'elaborazione `WM_SETCURSOR` e `WM_MOUSEMOVE` i messaggi, anche se il controllo non ha una finestra propria. Questo può essere eseguito abilitando `COleControl`dell'implementazione del `IPointerInactive` interfaccia, che è disabilitato per impostazione predefinita. (Vedere il *ActiveX SDK* per una descrizione di questa interfaccia.) Per abilitarlo, includere il `pointerInactive` flag nel set di flag restituiti da [COleControl:: GetControlFlags](../mfc/reference/colecontrol-class.md#getcontrolflags):  
  
 [!code-cpp[NVC_MFC_AxOpt#5](../mfc/codesnippet/cpp/providing-mouse-interaction-while-inactive_1.cpp)]  
[!code-cpp[NVC_MFC_AxOpt#10](../mfc/codesnippet/cpp/providing-mouse-interaction-while-inactive_2.cpp)]  
[!code-cpp[NVC_MFC_AxOpt#7](../mfc/codesnippet/cpp/providing-mouse-interaction-while-inactive_3.cpp)]  
  
 Il codice per includere questo flag viene generato automaticamente se si seleziona il **Mouse puntatore notifiche quando inattivo** opzione il [le impostazioni di controllo](../mfc/reference/control-settings-mfc-activex-control-wizard.md) pagina quando si crea il controllo con il **Creazione guidata controllo ActiveX MFC**.  
  
 Quando il `IPointerInactive` interfaccia è abilitata, i delegati contenitore `WM_SETCURSOR` e `WM_MOUSEMOVE` dei messaggi. `COleControl`dell'implementazione di `IPointerInactive` invia i messaggi tramite la mappa dei messaggi del controllo dopo la regolazione del mouse coordinate in modo appropriato. È possibile elaborare i messaggi come comuni messaggi di finestra aggiungendo le voci corrispondenti alla mappa messaggi. Nei gestori per questi messaggi, evitare di utilizzare il `m_hWnd` variabile membro (o qualsiasi funzione membro che lo utilizza) senza prima verificare che il relativo valore non è **NULL**.  
  
 È anche un controllo inattivo deve essere la destinazione di un'operazione di trascinamento e rilascio OLE. Questa operazione richiede l'attivazione del controllo al momento che l'utente trascina un oggetto su di esso, in modo che la finestra del controllo può essere registrata come obiettivo di rilascio. Affinché l'attivazione si verificano durante il trascinamento, eseguire l'override [COleControl:: GetActivationPolicy](../mfc/reference/colecontrol-class.md#getactivationpolicy)e restituire il **POINTERINACTIVE_ACTIVATEONDRAG** flag:  
  
 [!code-cpp[NVC_MFC_AxOpt#11](../mfc/codesnippet/cpp/providing-mouse-interaction-while-inactive_4.cpp)]  
  
 Abilitazione di `IPointerInactive` interfaccia in genere significa che si desidera il controllo sia in grado di elaborare i messaggi del mouse in qualsiasi momento. Per ottenere questo comportamento in un contenitore che non supporta il `IPointerInactive` interfaccia, è necessario disporre sempre attivo quando visibile, ovvero il controllo deve includere il **OLEMISC_ACTIVATEWHENVISIBLE** flag tra i flag esterni. Tuttavia, per evitare questo flag da diventino effettive in un contenitore che supporta `IPointerInactive`, è inoltre possibile specificare il **OLEMISC_IGNOREACTIVATEWHENVISIBLE** flag:  
  
 [!code-cpp[NVC_MFC_AxOpt#12](../mfc/codesnippet/cpp/providing-mouse-interaction-while-inactive_5.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC: ottimizzazione](../mfc/mfc-activex-controls-optimization.md)

