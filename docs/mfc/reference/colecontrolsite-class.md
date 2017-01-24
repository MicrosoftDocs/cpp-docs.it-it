---
title: "COleControlSite Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleControlSite"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleControlSite class"
ms.assetid: 43970644-5eab-434a-8ba6-56d144ff1e3f
caps.latest.revision: 24
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# COleControlSite Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce il supporto per le interfacce di controlli lato client personalizzate.  
  
## Sintassi  
  
```  
class COleControlSite : public CCmdTarget  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleControlSite::COleControlSite](../Topic/COleControlSite::COleControlSite.md)|Costruisce un oggetto `COleControlSite`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleControlSite::BindDefaultProperty](../Topic/COleControlSite::BindDefaultProperty.md)|Associa la proprietà predefinita del controllo ospitato a un'origine dati.|  
|[COleControlSite::BindProperty](../Topic/COleControlSite::BindProperty.md)|Associa una proprietà del controllo ospitato a un'origine dati.|  
|[COleControlSite::CreateControl](../Topic/COleControlSite::CreateControl.md)|Crea un controllo ActiveX ospitato.|  
|[COleControlSite::DestroyControl](../Topic/COleControlSite::DestroyControl.md)|Elimina il controllo ospitato.|  
|[COleControlSite::DoVerb](../Topic/COleControlSite::DoVerb.md)|Esegue un verbo specifico del controllo ospitato.|  
|[COleControlSite::EnableDSC](../Topic/COleControlSite::EnableDSC.md)|Abilita il sourcing di dati per un sito del controllo.|  
|[COleControlSite::EnableWindow](../Topic/COleControlSite::EnableWindow.md)|Abilita il sito del controllo.|  
|[COleControlSite::FreezeEvents](../Topic/COleControlSite::FreezeEvents.md)|Specifica se il sito del controllo è accetta gli eventi.|  
|[COleControlSite::GetDefBtnCode](../Topic/COleControlSite::GetDefBtnCode.md)|Recupera il codice del pulsante predefinito per il controllo ospitato.|  
|[COleControlSite::GetDlgCtrlID](../Topic/COleControlSite::GetDlgCtrlID.md)|Recupera l'identificatore del controllo.|  
|[COleControlSite::GetEventIID](../Topic/COleControlSite::GetEventIID.md)|Recupera l'id di un'interfaccia eventi per un controllo ospitato.|  
|[COleControlSite::GetExStyle](../Topic/COleControlSite::GetExStyle.md)|Recupera gli stili estesi del sito del controllo.|  
|[COleControlSite::GetProperty](../Topic/COleControlSite::GetProperty.md)|Recupera una determinata proprietà del controllo ospitato.|  
|[COleControlSite::GetStyle](../Topic/COleControlSite::GetStyle.md)|Recupera gli stili del sito del controllo.|  
|[COleControlSite::GetWindowText](../Topic/COleControlSite::GetWindowText.md)|Recupera il testo del controllo ospitato.|  
|[COleControlSite::InvokeHelper](../Topic/COleControlSite::InvokeHelper.md)|Richiama un metodo specifico del controllo ospitato.|  
|[COleControlSite::InvokeHelperV](../Topic/COleControlSite::InvokeHelperV.md)|Richiama un metodo specifico del controllo ospitato con un elenco di argomenti variabile.|  
|[COleControlSite::IsDefaultButton](../Topic/COleControlSite::IsDefaultButton.md)|Determina se il controllo è il pulsante predefinito nella finestra.|  
|[COleControlSite::IsWindowEnabled](../Topic/COleControlSite::IsWindowEnabled.md)|Controlla lo stato visibile del sito del controllo.|  
|[COleControlSite::ModifyStyle](../Topic/COleControlSite::ModifyStyle.md)|Modificare gli stili estesi correnti del sito del controllo.|  
|[COleControlSite::ModifyStyleEx](../Topic/COleControlSite::ModifyStyleEx.md)|Modifica degli stili correnti del sito del controllo.|  
|[COleControlSite::MoveWindow](../Topic/COleControlSite::MoveWindow.md)|Modifica la posizione del sito del controllo.|  
|[COleControlSite::QuickActivate](../Topic/COleControlSite::QuickActivate.md)|Rapidamente attiva il controllo ospitato.|  
|[COleControlSite::SafeSetProperty](../Topic/COleControlSite::SafeSetProperty.md)|Imposta una proprietà o un metodo del controllo senza possibilità di generare un'eccezione.|  
|[COleControlSite::SetDefaultButton](../Topic/COleControlSite::SetDefaultButton.md)|Imposta il pulsante predefinito nella finestra.|  
|[COleControlSite::SetDlgCtrlID](../Topic/COleControlSite::SetDlgCtrlID.md)|Recupera l'identificatore del controllo.|  
|[COleControlSite::SetFocus](../Topic/COleControlSite::SetFocus.md)|Imposta lo stato attivo sul sito del controllo.|  
|[COleControlSite::SetProperty](../Topic/COleControlSite::SetProperty.md)|Imposta una proprietà specifica del controllo ospitato.|  
|[COleControlSite::SetPropertyV](../Topic/COleControlSite::SetPropertyV.md)|Imposta una proprietà specifica il controllo ospitato con un elenco di argomenti variabile.|  
|[COleControlSite::SetWindowPos](../Topic/COleControlSite::SetWindowPos.md)|Imposta la posizione del sito del controllo.|  
|[COleControlSite::SetWindowText](../Topic/COleControlSite::SetWindowText.md)|Imposta il testo del controllo ospitato.|  
|[COleControlSite::ShowWindow](../Topic/COleControlSite::ShowWindow.md)|Mostra o nasconde il sito del controllo.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleControlSite::GetControlInfo](../Topic/COleControlSite::GetControlInfo.md)|Recupera le informazioni e i tasti di scelta rapida per il controllo ospitato.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleControlSite::m\_bIsWindowless](../Topic/COleControlSite::m_bIsWindowless.md)|Determina se il controllo ospitato è un controllo senza finestra.|  
|[COleControlSite::m\_ctlInfo](../Topic/COleControlSite::m_ctlInfo.md)|Contiene informazioni sulla gestione della tastiera per il controllo.|  
|[COleControlSite::m\_dwEventSink](../Topic/COleControlSite::m_dwEventSink.md)|I cookie del punto di connessione del controllo.|  
|[COleControlSite::m\_dwMiscStatus](../Topic/COleControlSite::m_dwMiscStatus.md)|I diversi stati del controllo ospitato.|  
|[COleControlSite::m\_dwPropNotifySink](../Topic/COleControlSite::m_dwPropNotifySink.md)|Il cookie `IPropertyNotifySink` del controllo.|  
|[COleControlSite::m\_dwStyle](../Topic/COleControlSite::m_dwStyle.md)|Gli stili del controllo ospitato.|  
|[COleControlSite::m\_hWnd](../Topic/COleControlSite::m_hWnd.md)|L'handle del sito del controllo.|  
|[COleControlSite::m\_iidEvents](../Topic/COleControlSite::m_iidEvents.md)|ID dell'interfaccia eventi per il controllo ospitato.|  
|[COleControlSite::m\_nID](../Topic/COleControlSite::m_nID.md)|ID del controllo ospitato.|  
|[COleControlSite::m\_pActiveObject](../Topic/COleControlSite::m_pActiveObject.md)|Un puntatore all'oggetto `IOleInPlaceActiveObject` del controllo ospitato.|  
|[COleControlSite::m\_pCtrlCont](../Topic/COleControlSite::m_pCtrlCont.md)|Il contenitore del controllo ospitato.|  
|[COleControlSite::m\_pInPlaceObject](../Topic/COleControlSite::m_pInPlaceObject.md)|Un puntatore all'oggetto `IOleInPlaceObject` del controllo ospitato.|  
|[COleControlSite::m\_pObject](../Topic/COleControlSite::m_pObject.md)|Un puntatore a un'interfaccia `IOleObjectInterface` del controllo.|  
|[COleControlSite::m\_pWindowlessObject](../Topic/COleControlSite::m_pWindowlessObject.md)|Un puntatore a un'interfaccia `IOleInPlaceObjectWindowless` del controllo.|  
|[COleControlSite::m\_pWndCtrl](../Topic/COleControlSite::m_pWndCtrl.md)|Un puntatore all'oggetto finestra per il controllo ospitato.|  
|[COleControlSite::m\_rect](../Topic/COleControlSite::m_rect.md)|Le dimensioni del sito del controllo.|  
  
## Note  
 Questo supporto è il mezzo principale che un controllo ActiveX incorporato ottiene informazioni sulla posizione e l'ambito del sito visualizzato, il moniker, dell'interfaccia utente, delle proprietà di ambiente e altre risorse fornite dal contenitore.  `COleControlSite` completamente implementa [IOleControlSite](http://msdn.microsoft.com/library/windows/desktop/ms688502), [IOleInPlaceSite](http://msdn.microsoft.com/library/windows/desktop/ms686586), [IOleClientSite](http://msdn.microsoft.com/library/windows/desktop/ms693706), [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638), **IBoundObjectSite**, **INotifyDBEvents**, interfacce [IRowSetNotify](https://msdn.microsoft.com/en-us/library/ms712959.aspx).  Inoltre, l'interfaccia IDispatch \(fornendo supporto per le proprietà di ambiente e i sink di evento\) viene inoltre implementata.  
  
 Per creare un sito del controllo ActiveX utilizzando `COleControlSite`, derivare una classe da `COleControlSite`.  Nel `CWnd`classe derivata per un override del contenitore, ad esempio la finestra di dialogo\) la funzione **CWnd::CreateControlSite**.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `COleControlSite`  
  
## Requisiti  
 **Header:** afxocc.h  
  
## Vedere anche  
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleControlContainer Class](../../mfc/reference/colecontrolcontainer-class.md)