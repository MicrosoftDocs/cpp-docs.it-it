---
title: "CComCompositeControl Class | Microsoft Docs"
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
  - "CComCompositeControl"
  - "ATL::CComCompositeControl"
  - "ATL.CComCompositeControl<T>"
  - "ATL.CComCompositeControl"
  - "ATL::CComCompositeControl<T>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComCompositeControl class"
  - "controlli composti, CComCompositeControl class"
ms.assetid: 1304b931-27e8-4fbc-be8e-bb226ad887fb
caps.latest.revision: 21
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComCompositeControl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi necessari per implementare un controllo composito.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      template <  
class T   
>  
class CComCompositeControl :  
public CComControl< T, CAxDialogImpl< T > >  
```  
  
#### Parametri  
 `T`  
 I la classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o da [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)nonché da tutte le altre interfacce si desidera supporto al controllo composito.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCompositeControl::CComCompositeControl](../Topic/CComCompositeControl::CComCompositeControl.md)|Costruttore.|  
|[CComCompositeControl::~CComCompositeControl](../Topic/CComCompositeControl::~CComCompositeControl.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCompositeControl::AdviseSinkMap](../Topic/CComCompositeControl::AdviseSinkMap.md)|Chiamare questo metodo per consigliare o il unadvise tutti i controlli ospitati dal controllo composito.|  
|[CComCompositeControl::CalcExtent](../Topic/CComCompositeControl::CalcExtent.md)|Chiamare questo metodo per calcolare la dimensione in unità **HIMETRIC** di risorsa finestra di dialogo utilizzata per ospitare il controllo composito.|  
|[CComCompositeControl::Create](../Topic/CComCompositeControl::Create.md)|Questo metodo viene chiamato per creare la finestra di controllo per il controllo composito.|  
|[CComCompositeControl::CreateControlWindow](../Topic/CComCompositeControl::CreateControlWindow.md)|Chiamare questo metodo per creare la finestra di controllo e consigliare per tutto il controllo ospitato.|  
|[CComCompositeControl::SetBackgroundColorFromAmbient](../Topic/CComCompositeControl::SetBackgroundColorFromAmbient.md)|Chiamare questo metodo per impostare il colore di sfondo del controllo composito con il colore di sfondo del contenitore.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCompositeControl::m\_hbrBackground](../Topic/CComCompositeControl::m_hbrBackground.md)|Pennello per lo sfondo.|  
|[CComCompositeControl::m\_hWndFocus](../Topic/CComCompositeControl::m_hWndFocus.md)|Handle della finestra correntemente attivo.|  
  
## Note  
 Le classi derivate dalla classe `CComCompositeControl` ereditano la funzionalità di un controllo composito ActiveX.  I controlli ActiveX derivati da `CComCompositeControl` contenuti in una finestra di dialogo standard.  Questi tipi di controlli sono denominati controlli compositi poiché possono contenere altri controlli \(controlli Windows nativi e controlli ActiveX\).  
  
 `CComCompositeControl` identifica la finestra di dialogo da utilizzare per la creazione del controllo composito ricerca di un membro dati enumerato la classe figlio.  Il membro IDD di questa classe figlio viene impostato sull'ID di risorsa di risorsa finestra di dialogo che sarà utilizzata come finestra del controllo.  L'esempio seguente è un esempio del membro dati della classe derivata da `CComCompositeControl` deve contenere per identificare la finestra di dialogo da utilizzare per la finestra del controllo:  
  
 [!code-cpp[NVC_ATL_COM#13](../../atl/codesnippet/CPP/ccomcompositecontrol-class_1.h)]  
  
> [!NOTE]
>  I controlli compositi sono sempre controlli con finestre, sebbene possano contenere i controlli privi di finestra.  
  
 Un controllo implementato da `CComCompositeControl`nella classe derivata ha comportamento di tabulazione predefinito incorporato.  Quando il controllo riceve lo stato attivo da catalogato in un'applicazione contenitore, successivamente premere il tasto TAB consente lo stato attivo a essere ciclato dai controlli contenuti in un controllo composito, quindi dal controllo composito e sull'elemento successivo dell'ordine di tabulazione del contenitore.  L'ordine di tabulazione dei controlli ospitati è determinato dalla finestra di dialogo e determina l'ordine di tabulazione si verificherà.  
  
> [!NOTE]
>  Affinché i tasti di scelta rapida funzioni correttamente con `CComCompositeControl`, è necessario caricare una tabella di tasti di scelta rapida come il controllo, passa l'handle e il numero di tasti in [IOleControlImpl::GetControlInfo](../Topic/IOleControlImpl::GetControlInfo.md)e infine elimina la tabella quando il controllo viene rilasciato.  
  
## Esempio  
 [!code-cpp[NVC_ATL_COM#14](../../atl/codesnippet/CPP/ccomcompositecontrol-class_2.h)]  
  
## Gerarchia di ereditarietà  
 `WinBase`  
  
 [CComControlBase](../../atl/reference/ccomcontrolbase-class.md)  
  
 [CComControl](../../atl/reference/ccomcontrol-class.md)  
  
 `CComCompositeControl`  
  
## Requisiti  
 **Header:** atlctl.h  
  
## Vedere anche  
 [CComControl Class](../../atl/reference/ccomcontrol-class.md)   
 [Nozioni fondamentali sul controllo composito](../../atl/atl-composite-control-fundamentals.md)   
 [Class Overview](../../atl/atl-class-overview.md)