---
title: "COleControlContainer Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleControlContainer"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "contenitori dei controlli ActiveX [C++], control site"
  - "COleControlContainer class"
  - "controlli personalizzati [MFC], sites"
ms.assetid: f7ce9246-0fb7-4f07-a83a-6c2390d0fdf8
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# COleControlContainer Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Funge da contenitore di controlli per i controlli ActiveX.  
  
## Sintassi  
  
```  
class COleControlContainer : public CCmdTarget  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleControlContainer::COleControlContainer](../Topic/COleControlContainer::COleControlContainer.md)|Costruisce un oggetto `COleControlContainer`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleControlContainer::AttachControlSite](../Topic/COleControlContainer::AttachControlSite.md)|Crea un sito del controllo, ospitato dal contenitore.|  
|[COleControlContainer::BroadcastAmbientPropertyChange](../Topic/COleControlContainer::BroadcastAmbientPropertyChange.md)|Notifica a tutti i controlli contenuti che una proprietà di ambiente è stato modificato.|  
|[COleControlContainer::CheckDlgButton](../Topic/COleControlContainer::CheckDlgButton.md)|Modifica il pulsante specificato.|  
|[COleControlContainer::CheckRadioButton](../Topic/COleControlContainer::CheckRadioButton.md)|Selezionare il pulsante di opzione specificato di un gruppo.|  
|[COleControlContainer::CreateControl](../Topic/COleControlContainer::CreateControl.md)|Crea un controllo ActiveX ospitato.|  
|[COleControlContainer::CreateOleFont](../Topic/COleControlContainer::CreateOleFont.md)|Crea un tipo di carattere OLE.|  
|[COleControlContainer::FindItem](../Topic/COleControlContainer::FindItem.md)|Restituisce il sito personalizzato del controllo specificato.|  
|[COleControlContainer::FreezeAllEvents](../Topic/COleControlContainer::FreezeAllEvents.md)|Determina se il sito del controllo è accetta gli eventi.|  
|[COleControlContainer::GetAmbientProp](../Topic/COleControlContainer::GetAmbientProp.md)|Recupera la proprietà di ambiente specificata.|  
|[COleControlContainer::GetDlgItem](../Topic/COleControlContainer::GetDlgItem.md)|Recupera il controllo specificato della finestra di dialogo.|  
|[COleControlContainer::GetDlgItemInt](../Topic/COleControlContainer::GetDlgItemInt.md)|Recupera il valore del controllo specificato della finestra di dialogo.|  
|[COleControlContainer::GetDlgItemText](../Topic/COleControlContainer::GetDlgItemText.md)|Recupera la barra del titolo del controllo specificato della finestra di dialogo.|  
|[COleControlContainer::HandleSetFocus](../Topic/COleControlContainer::HandleSetFocus.md)|Determina se il contenitore gestisce i messaggi `WM_SETFOCUS`.|  
|[COleControlContainer::HandleWindowlessMessage](../Topic/COleControlContainer::HandleWindowlessMessage.md)|Gestisce i messaggi inviati a un controllo senza finestra.|  
|[COleControlContainer::IsDlgButtonChecked](../Topic/COleControlContainer::IsDlgButtonChecked.md)|Determina lo stato del pulsante specificato.|  
|[COleControlContainer::OnPaint](../Topic/COleControlContainer::OnPaint.md)|Chiamato per aggiornare una parte del contenitore.|  
|[COleControlContainer::OnUIActivate](../Topic/COleControlContainer::OnUIActivate.md)|Chiamato quando un controllo sta per essere attivato sul posto.|  
|[COleControlContainer::OnUIDeactivate](../Topic/COleControlContainer::OnUIDeactivate.md)|Chiamato quando un controllo sta per essere disabilitato.|  
|[COleControlContainer::ScrollChildren](../Topic/COleControlContainer::ScrollChildren.md)|Chiamato dal framework quando i messaggi di scorrimento vengono ricevuti da una finestra figlio.|  
|[COleControlContainer::SendDlgItemMessage](../Topic/COleControlContainer::SendDlgItemMessage.md)|Invia un messaggio al controllo specificato.|  
|[COleControlContainer::SetDlgItemInt](../Topic/COleControlContainer::SetDlgItemInt.md)|Imposta il valore del controllo specificato.|  
|[COleControlContainer::SetDlgItemText](../Topic/COleControlContainer::SetDlgItemText.md)|Imposta il testo del controllo specificato.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleControlContainer::m\_crBack](../Topic/COleControlContainer::m_crBack.md)|Il colore di sfondo del contenitore.|  
|[COleControlContainer::m\_crFore](../Topic/COleControlContainer::m_crFore.md)|Il colore di primo piano del contenitore.|  
|[COleControlContainer::m\_listSitesOrWnds](../Topic/COleControlContainer::m_listSitesOrWnds.md)|Un elenco di siti supportati del controllo.|  
|[COleControlContainer::m\_nWindowlessControls](../Topic/COleControlContainer::m_nWindowlessControls.md)|Il numero di controlli privi di finestra ospitati.|  
|[COleControlContainer::m\_pOleFont](../Topic/COleControlContainer::m_pOleFont.md)|Un puntatore al carattere OLE del sito del controllo personalizzato.|  
|[COleControlContainer::m\_pSiteCapture](../Topic/COleControlContainer::m_pSiteCapture.md)|Puntatore al sito del controllo di acquisizione.|  
|[COleControlContainer::m\_pSiteFocus](../Topic/COleControlContainer::m_pSiteFocus.md)|Puntatore al controllo che ha attualmente lo stato attivo per l'input.|  
|[COleControlContainer::m\_pSiteUIActive](../Topic/COleControlContainer::m_pSiteUIActive.md)|Puntatore al controllo attualmente sul posto attivato.|  
|[COleControlContainer::m\_pWnd](../Topic/COleControlContainer::m_pWnd.md)|Puntatore alla finestra che implementa il contenitore di controlli.|  
|[COleControlContainer::m\_siteMap](../Topic/COleControlContainer::m_siteMap.md)|La mappa del sito.|  
  
## Note  
 Questa operazione viene eseguita mediante il supporto per uno o più siti del controllo ActiveX \(implementati da `COleControlSite`\).  `COleControlContainer` completamente implementa le interfacce [IOleContainer](http://msdn.microsoft.com/library/windows/desktop/ms690103) e [IOleInPlaceFrame](http://msdn.microsoft.com/library/windows/desktop/ms692770), consentendo dei controlli ActiveX contenuti compiano le qualificazioni come elementi sul posto.  
  
 Generalmente, la classe viene utilizzata insieme a `COccManager` e `COleControlSite` per implementare un contenitore di controlli ActiveX personalizzato, con i siti personalizzati per uno o più controlli ActiveX.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `COleControlContainer`  
  
## Requisiti  
 **Header:** afxocc.h  
  
## Vedere anche  
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleControlSite Class](../../mfc/reference/colecontrolsite-class.md)   
 [COccManager Class](../../mfc/reference/coccmanager-class.md)