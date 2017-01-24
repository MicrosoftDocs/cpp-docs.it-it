---
title: "IOleObjectImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.IOleObjectImpl"
  - "ATL.IOleObjectImpl<T>"
  - "ATL::IOleObjectImpl"
  - "ATL::IOleObjectImpl<T>"
  - "IOleObjectImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX (controlli) [C++], communication between container and control"
  - "IOleObject, implementazione ATL"
  - "IOleObjectImpl class"
ms.assetid: 59750b2d-1633-4a51-a4c2-6455b6b90c45
caps.latest.revision: 20
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IOleObjectImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa **IUnknown** ed è un'interfaccia principale tra cui un contenitore comunica con un controllo.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```  
  
      template<  
class T   
>  
class ATL_NO_VTABLE IOleObjectImpl :  
public IOleObject  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `IOleObjectImpl`.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IOleObjectImpl::Advise](../Topic/IOleObjectImpl::Advise.md)|Stabilisce una connessione consultiva con il controllo.|  
|[IOleObjectImpl::Close](../Topic/IOleObjectImpl::Close.md)|Modifica lo stato del controllo da eseguire al caricamento su.|  
|[IOleObjectImpl::DoVerb](../Topic/IOleObjectImpl::DoVerb.md)|Indica al controllo di eseguire una delle azioni enumerate.|  
|[IOleObjectImpl::DoVerbDiscardUndo](../Topic/IOleObjectImpl::DoVerbDiscardUndo.md)|Indica al controllo di rimuovere tutto lo stato di annullamento viene gestito.|  
|[IOleObjectImpl::DoVerbHide](../Topic/IOleObjectImpl::DoVerbHide.md)|Indica al controllo di rimuovere la relativa interfaccia utente dalla visualizzazione.|  
|[IOleObjectImpl::DoVerbInPlaceActivate](../Topic/IOleObjectImpl::DoVerbInPlaceActivate.md)|Esegue il controllo e installa la finestra, ma non installa l'interfaccia utente del controllo.|  
|[IOleObjectImpl::DoVerbOpen](../Topic/IOleObjectImpl::DoVerbOpen.md)|Fa sì che il controllo aperto\- a essere modificato in una finestra separata.|  
|[IOleObjectImpl::DoVerbPrimary](../Topic/IOleObjectImpl::DoVerbPrimary.md)|Esegue l'azione specificata quando l'utente fa doppio clic sul controllo.  Il controllo definisce l'azione, in genere attivare il controllo sul posto.|  
|[IOleObjectImpl::DoVerbShow](../Topic/IOleObjectImpl::DoVerbShow.md)|Viene illustrato un controllo appena inserito all'utente.|  
|[IOleObjectImpl::DoVerbUIActivate](../Topic/IOleObjectImpl::DoVerbUIActivate.md)|Attiva il controllo sul posto e visualizza l'interfaccia utente del controllo, ad esempio menu e barre degli strumenti.|  
|[IOleObjectImpl::EnumAdvise](../Topic/IOleObjectImpl::EnumAdvise.md)|Enumera le connessioni consultive del controllo.|  
|[IOleObjectImpl::EnumVerbs](../Topic/IOleObjectImpl::EnumVerbs.md)|Enumera le azioni per il controllo.|  
|[IOleObjectImpl::GetClientSite](../Topic/IOleObjectImpl::GetClientSite.md)|Recupera il sito client del controllo.|  
|[IOleObjectImpl::GetClipboardData](../Topic/IOleObjectImpl::GetClipboardData.md)|Recupera i dati dagli Appunti.  L'implementazione ATL restituisce **E\_NOTIMPL**.|  
|[IOleObjectImpl::GetExtent](../Topic/IOleObjectImpl::GetExtent.md)|Recupera l'ambito dell'area di visualizzazione del controllo.|  
|[IOleObjectImpl::GetMiscStatus](../Topic/IOleObjectImpl::GetMiscStatus.md)|Recupera lo stato del controllo.|  
|[IOleObjectImpl::GetMoniker](../Topic/IOleObjectImpl::GetMoniker.md)|Recupera il moniker del controllo.  L'implementazione ATL restituisce **E\_NOTIMPL**.|  
|[IOleObjectImpl::GetUserClassID](../Topic/IOleObjectImpl::GetUserClassID.md)|Recupera l'identificatore di classe del controllo.|  
|[IOleObjectImpl::GetUserType](../Topic/IOleObjectImpl::GetUserType.md)|Recupera il nome dell'utente tipo di controllo.|  
|[IOleObjectImpl::InitFromData](../Topic/IOleObjectImpl::InitFromData.md)|Inizializza il controllo ai dati selezionati.  L'implementazione ATL restituisce **E\_NOTIMPL**.|  
|[IOleObjectImpl::IsUpToDate](../Topic/IOleObjectImpl::IsUpToDate.md)|Controllare se il controllo.  L'implementazione ATL restituisce `S_OK`.|  
|[IOleObjectImpl::OnPostVerbDiscardUndo](../Topic/IOleObjectImpl::OnPostVerbDiscardUndo.md)|Chiamato da [DoVerbDiscardUndo](../Topic/IOleObjectImpl::DoVerbDiscardUndo.md) dopo lo stato di annullamento viene rimosso.|  
|[IOleObjectImpl::OnPostVerbHide](../Topic/IOleObjectImpl::OnPostVerbHide.md)|Chiamato da [DoVerbHide](../Topic/IOleObjectImpl::DoVerbHide.md) dopo il controllo è nascosto.|  
|[IOleObjectImpl::OnPostVerbInPlaceActivate](../Topic/IOleObjectImpl::OnPostVerbInPlaceActivate.md)|Chiamato da [DoVerbInPlaceActivate](../Topic/IOleObjectImpl::DoVerbInPlaceActivate.md) dopo il controllo viene attivato sul posto.|  
|[IOleObjectImpl::OnPostVerbOpen](../Topic/IOleObjectImpl::OnPostVerbOpen.md)|Chiamato da [DoVerbOpen](../Topic/IOleObjectImpl::DoVerbOpen.md) dopo che il controllo viene aperto per la modifica in una finestra separata.|  
|[IOleObjectImpl::OnPostVerbShow](../Topic/IOleObjectImpl::OnPostVerbShow.md)|Chiamato da [DoVerbShow](../Topic/IOleObjectImpl::DoVerbShow.md) dopo che il controllo è diventato visibile.|  
|[IOleObjectImpl::OnPostVerbUIActivate](../Topic/IOleObjectImpl::OnPostVerbUIActivate.md)|Chiamato da [DoVerbUIActivate](../Topic/IOleObjectImpl::DoVerbUIActivate.md) dopo aver creato l'interfaccia utente del controllo è stata attivata.|  
|[IOleObjectImpl::OnPreVerbDiscardUndo](../Topic/IOleObjectImpl::OnPreVerbDiscardUndo.md)|Chiamato da [DoVerbDiscardUndo](../Topic/IOleObjectImpl::DoVerbDiscardUndo.md) prima dello stato di annullamento viene rimosso.|  
|[IOleObjectImpl::OnPreVerbHide](../Topic/IOleObjectImpl::OnPreVerbHide.md)|Chiamato da [DoVerbHide](../Topic/IOleObjectImpl::DoVerbHide.md) prima che il controllo è nascosto.|  
|[IOleObjectImpl::OnPreVerbInPlaceActivate](../Topic/IOleObjectImpl::OnPreVerbInPlaceActivate.md)|Chiamato da [DoVerbInPlaceActivate](../Topic/IOleObjectImpl::DoVerbInPlaceActivate.md) prima che il controllo viene attivato sul posto.|  
|[IOleObjectImpl::OnPreVerbOpen](../Topic/IOleObjectImpl::OnPreVerbOpen.md)|Chiamato da [DoVerbOpen](../Topic/IOleObjectImpl::DoVerbOpen.md) prima che il controllo venga aperto per la modifica in una finestra separata.|  
|[IOleObjectImpl::OnPreVerbShow](../Topic/IOleObjectImpl::OnPreVerbShow.md)|Chiamato da [DoVerbShow](../Topic/IOleObjectImpl::DoVerbShow.md) prima che il controllo sia stato reso visibile.|  
|[IOleObjectImpl::OnPreVerbUIActivate](../Topic/IOleObjectImpl::OnPreVerbUIActivate.md)|Chiamato da [DoVerbUIActivate](../Topic/IOleObjectImpl::DoVerbUIActivate.md) prima dell'interfaccia utente del controllo sia stata attivata.|  
|[IOleObjectImpl::SetClientSite](../Topic/IOleObjectImpl::SetClientSite.md)|Indica al controllo sul sito client nel contenitore.|  
|[IOleObjectImpl::SetColorScheme](../Topic/IOleObjectImpl::SetColorScheme.md)|Consigliabile utilizzare una combinazione di colori all'applicazione del controllo, se disponibile.  L'implementazione ATL restituisce **E\_NOTIMPL**.|  
|[IOleObjectImpl::SetExtent](../Topic/IOleObjectImpl::SetExtent.md)|Impostare l'ambito dell'area di visualizzazione del controllo.|  
|[IOleObjectImpl::SetHostNames](../Topic/IOleObjectImpl::SetHostNames.md)|Indica al controllo dei nomi dell'applicazione contenitore e documento contenitore.|  
|[IOleObjectImpl::SetMoniker](../Topic/IOleObjectImpl::SetMoniker.md)|Indica al controllo che il relativo moniker è.  L'implementazione ATL restituisce **E\_NOTIMPL**.|  
|[IOleObjectImpl::Unadvise](../Topic/IOleObjectImpl::Unadvise.md)|Elimina una connessione consultiva con il controllo.|  
|[IOleObjectImpl::Update](../Topic/IOleObjectImpl::Update.md)|Aggiorna il controllo.  L'implementazione ATL restituisce `S_OK`.|  
  
## Note  
 L'interfaccia [IOleObject](http://msdn.microsoft.com/library/windows/desktop/dd542709) è l'interfaccia principale tra cui un contenitore comunica con un controllo.  La classe `IOleObjectImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa **IUnknown** inviando le informazioni del dispositivo di dump nelle build di debug.  
  
 **Articoli correlati** [L'esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [Creare un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## Gerarchia di ereditarietà  
 `IOleObject`  
  
 `IOleObjectImpl`  
  
## Requisiti  
 **Header:** atlctl.h  
  
## Vedere anche  
 [CComControl Class](../../atl/reference/ccomcontrol-class.md)   
 [ActiveX Controls Interfaces](http://msdn.microsoft.com/library/windows/desktop/ms692724)   
 [Class Overview](../../atl/atl-class-overview.md)