---
title: "CSnapInItemImpl Class | Microsoft Docs"
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
  - "CSnapInItemImpl"
  - "ATL.CSnapInItemImpl"
  - "ATL::CSnapInItemImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSnapInItemImpl class"
  - "snap-ins"
  - "snap-ins, ATL support for"
  - "snap-ins, data items"
ms.assetid: 52caefbd-9eae-49b0-add2-d55524271aa7
caps.latest.revision: 20
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CSnapInItemImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi per implementare un oggetto del nodo dello snap\-in.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      template <  
class T,  
BOOL bIsExtension= FALSE  
>  
class ATL_NO_VTABLE CSnapInItemImpl :  
public CSnapInItem  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `CSnapInItemImpl`.  
  
 *bIsExtension*  
 **TRUE** se l'oggetto è un estensione dello snap\-in, in caso contrario **FALSE**.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSnapInItemImpl::CSnapInItemImpl](../Topic/CSnapInItemImpl::CSnapInItemImpl.md)|Costruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSnapInItemImpl::AddMenuItems](../Topic/CSnapInItemImpl::AddMenuItems.md)|Aggiunge voci di menu a un menu di scelta rapida.|  
|[CSnapInItemImpl::Command](../Topic/CSnapInItemImpl::Command.md)|Chiamato dalla console quando una voce di menu personalizzata è selezionata.|  
|[CSnapInItemImpl::CreatePropertyPages](../Topic/CSnapInItemImpl::CreatePropertyPages.md)|Aggiungere pagine alla finestra delle proprietà dello snap\-in.|  
|[CSnapInItemImpl::FillData](../Topic/CSnapInItemImpl::FillData.md)|Informazioni di copie l'oggetto dello snap\-in in un flusso specificato.|  
|[CSnapInItemImpl::GetResultPaneInfo](../Topic/CSnapInItemImpl::GetResultPaneInfo.md)|Recuperare la struttura **RESULTDATAITEM** lo snap\-in.|  
|[CSnapInItemImpl::GetResultViewType](../Topic/CSnapInItemImpl::GetResultViewType.md)|Determina il tipo di visualizzazione utilizzato dal riquadro dei risultati.|  
|[CSnapInItemImpl::GetScopePaneInfo](../Topic/CSnapInItemImpl::GetScopePaneInfo.md)|Recuperare la struttura **SCOPEDATAITEM** lo snap\-in.|  
|[CSnapInItemImpl::Notify](../Topic/CSnapInItemImpl::Notify.md)|Chiamato dalla console per notificare allo snap\-in di un'azione eseguita dall'utente.|  
|[CSnapInItemImpl::QueryPagesFor](../Topic/CSnapInItemImpl::QueryPagesFor.md)|Chiamato per verificare se il nodo dello snap\-in supporta le pagine delle proprietà.|  
|[CSnapInItemImpl::SetMenuInsertionFlags](../Topic/CSnapInItemImpl::SetMenuInsertionFlags.md)|Modifica i flag di inserimento di menu per un oggetto dello snap\-in.|  
|[CSnapInItemImpl::SetToolbarButtonInfo](../Topic/CSnapInItemImpl::SetToolbarButtonInfo.md)|Imposta le informazioni sul pulsante della barra degli strumenti specificato.|  
|[CSnapInItemImpl::UpdateMenuState](../Topic/CSnapInItemImpl::UpdateMenuState.md)|Aggiorna lo stato di un elemento di menu di scelta rapida.|  
|[CSnapInItemImpl::UpdateToolbarButton](../Topic/CSnapInItemImpl::UpdateToolbarButton.md)|Aggiorna lo stato del pulsante della barra degli strumenti specificato.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSnapInItemImpl::m\_bstrDisplayName](../Topic/CSnapInItemImpl::m_bstrDisplayName.md)|Il nome dell'oggetto dello snap\-in.|  
|[CSnapInItemImpl::m\_resultDataItem](../Topic/CSnapInItemImpl::m_resultDataItem.md)|La struttura di Windows **RESULTDATAITEM** utilizzata dall'oggetto `CSnapInItemImpl`.|  
|[CSnapInItemImpl::m\_scopeDataItem](../Topic/CSnapInItemImpl::m_scopeDataItem.md)|La struttura di Windows **SCOPEDATAITEM** utilizzata dall'oggetto `CSnapInItemImpl`.|  
  
## Note  
 `CSnapInItemImpl` fornisce un'implementazione di base per un oggetto del nodo dello snap\-in, ad esempio voci di menu e barre degli strumenti di aggiunta e inoltrare i controlli per il nodo dello snap\-in alla funzione di gestione appropriata.  Queste funzionalità vengono implementate utilizzando diverse interfacce e eseguono il mapping dei tipi.  Le notifiche di handle di un'implementazione predefinita inviati al nodo oggetto per definire l'istanza corretta della classe derivata quindi inoltrando il messaggio all'istanza corretta.  
  
## Gerarchia di ereditarietà  
 `CSnapInItem`  
  
 `CSnapInItemImpl`  
  
## Requisiti  
 **Header:** atlsnap.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)