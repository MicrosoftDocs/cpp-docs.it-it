---
title: "Inserimento di interazione del mouse in stato di inattivit&#224; | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC (controlli ActiveX), interazione del mouse"
ms.assetid: b09106bf-44c7-4b9b-a6d9-0d624f16f5b3
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Inserimento di interazione del mouse in stato di inattivit&#224;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se il controllo immediato non è attivato, è comunque desiderarlo per elaborare `WM_SETCURSOR` e messaggi di `WM_MOUSEMOVE`, anche se non ha finestra dei propri.  A questo scopo abilitando l'implementazione di `COleControl` dell'interfaccia di `IPointerInactive`, che è disabilitata per impostazione predefinita. \(Vedere *ActiveX SDK* per una descrizione dell'interfaccia.\) Per abilitarla, includere il flag di `pointerInactive` nel set di flag restituiti da [COleControl::GetControlFlags](../Topic/COleControl::GetControlFlags.md):  
  
 [!code-cpp[NVC_MFC_AxOpt#5](../mfc/codesnippet/CPP/providing-mouse-interaction-while-inactive_1.cpp)]  
[!code-cpp[NVC_MFC_AxOpt#10](../mfc/codesnippet/CPP/providing-mouse-interaction-while-inactive_2.cpp)]  
[!code-cpp[NVC_MFC_AxOpt#7](../mfc/codesnippet/CPP/providing-mouse-interaction-while-inactive_3.cpp)]  
  
 Il codice per importare questo flag viene generato automaticamente se si seleziona l'opzione **Notifiche del puntatore del mouse quando inattivo** nella pagina di [Impostazioni controllo](../mfc/reference/control-settings-mfc-activex-control-wizard.md) durante la creazione del controllo con **Creazione guidata controllo ActiveX MFC**.  
  
 Quando l'interfaccia di `IPointerInactive` è abilitata, il contenitore delega `WM_SETCURSOR` e messaggi di `WM_MOUSEMOVE`.  l'implementazione di`COleControl` di `IPointerInactive` invia i messaggi tramite la mappa messaggi del controllo dopo avere modificato le coordinate del mouse in modo appropriato.  È possibile elaborare messaggi come i messaggi comuni della finestra aggiungendo voci corrispondenti alla mappa messaggi.  Nei gestori per questi messaggi, evitare di utilizzare la variabile membro di `m_hWnd` o qualsiasi altra funzione membro che la utilizza\) senza prima verificare che il valore non è **NULL**.  
  
 È inoltre possibile un controllo inattivo per essere la destinazione di un'operazione di trascinamento della selezione OLE.  Questo richiede l'attivazione del controllo dal momento che l'utente trascina un oggetto su, in modo che la finestra del controllo può essere registrata come destinazione di trascinamento.  Per impedire l'attivazione con verificarsi durante il trascinamento, eseguire l'override di [COleControl::GetActivationPolicy](../Topic/COleControl::GetActivationPolicy.md) e restituire il flag di **POINTERINACTIVE\_ACTIVATEONDRAG** :  
  
 [!code-cpp[NVC_MFC_AxOpt#11](../mfc/codesnippet/CPP/providing-mouse-interaction-while-inactive_4.cpp)]  
  
 Attivare l'interfaccia di `IPointerInactive` indica in genere che si desidera disporre il controllo sia in grado dei messaggi del mouse di elaborazione.  Per ottenere questo comportamento in un contenitore che non supporta l'interfaccia di `IPointerInactive`, è necessario disporre del controllo con lo stato attivo sempre una volta visibile, che significa che il controllo deve includere il flag di **OLEMISC\_ACTIVATEWHENVISIBLE** tra i vari flag.  Tuttavia, per evitare questo flag da rendere effettive in un contenitore che supporta `IPointerInactive`, è anche possibile specificare il flag di **OLEMISC\_IGNOREACTIVATEWHENVISIBLE** :  
  
 [!code-cpp[NVC_MFC_AxOpt#12](../mfc/codesnippet/CPP/providing-mouse-interaction-while-inactive_5.cpp)]  
  
## Vedere anche  
 [Controlli ActiveX MFC: ottimizzazione](../mfc/mfc-activex-controls-optimization.md)