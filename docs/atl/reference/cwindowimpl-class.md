---
title: "CWindowImpl Class | Microsoft Docs"
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
  - "ATL::CWindowImpl"
  - "ATL.CWindowImpl"
  - "CWindowImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CWindowImpl class"
  - "subclassing windows, ATL"
ms.assetid: 02eefd45-a0a6-4d1b-99f6-dbf627e2cc2f
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CWindowImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce metodi per la creazione di una finestra o di una sua sottoclasse.  
  
> [!IMPORTANT]
>  Tale classe ed i relativi membri non possono essere utilizzati in applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```  
  
      template <  
class T,  
class TBase= CWindow,  
class TWinTraits= CControlWinTraits   
>  
class ATL_NO_VTABLE CWindowImpl :  
public CWindowImplBaseT< TBase, TWinTraits>  
```  
  
#### Parametri  
 `T`  
 La nuova classe, derivata da `CWindowImpl`.  
  
 *TBase*  
 La classe base della classe.  Per impostazione predefinita, la classe base è [CWindow](../../atl/reference/cwindow-class.md).  
  
 `TWinTraits`  
 Una [classe di caratteristiche](../../atl/understanding-window-traits.md) in cui sono definiti gli stili della finestra.  Il valore predefinito è `CControlWinTraits`.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWindowImpl::Create](../Topic/CWindowImpl::Create.md)|Crea una finestra.|  
  
### Metodi di CWindowImplBaseT  
  
|||  
|-|-|  
|[DefWindowProc](../Topic/CWindowImpl::DefWindowProc.md)|Fornisce l'elaborazione dei messaggi predefinita.|  
|[GetCurrentMessage](../Topic/CWindowImpl::GetCurrentMessage.md)|Restituisce il messaggio corrente.|  
|[GetWindowProc](../Topic/CWindowImpl::GetWindowProc.md)|Restituisce la routine della finestra corrente.|  
|[OnFinalMessage](../Topic/CWindowImpl::OnFinalMessage.md)|Chiamata dopo aver ricevuto l'ultimo messaggio \(in genere `WM_NCDESTROY`\).|  
|[SubclassWindow](../Topic/CWindowImpl::SubclassWindow.md)|Crea una sottoclasse di una finestra.|  
|[UnsubclassWindow](../Topic/CWindowImpl::UnsubclassWindow.md)|Ripristina una finestra precedentemente impostata come sottoclasse.|  
  
### Metodi statici  
  
|||  
|-|-|  
|[GetWndClassInfo](../Topic/CWindowImpl::GetWndClassInfo.md)|Restituisce un'istanza static di [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md), che gestisce le informazioni sulla classe della finestra.|  
|[WindowProc](../Topic/CWindowImpl::WindowProc.md)|Elabora i messaggi inviati alla finestra.|  
  
### Membri di dati  
  
|||  
|-|-|  
|[m\_pfnSuperWindowProc](../Topic/CWindowImpl::m_pfnSuperWindowProc.md)|Punta alla routine della finestra originale della classe della finestra.|  
  
## Note  
 È possibile utilizzare `CWindowImpl` per creare una finestra o una sottoclasse di una finestra esistente. La routine della finestra `CWindowImpl` utilizza una mappa dei messaggi per indirizzare i messaggi ai gestori appropriati.  
  
 `CWindowImpl::Create` crea una finestra sulla base delle informazioni della classe della finestra gestite da [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md).  `CWindowImpl` contiene la macro [DECLARE\_WND\_CLASS](../Topic/DECLARE_WND_CLASS.md), ovvero `CWndClassInfo` registra una nuova classe della finestra.  Se si desidera rendere superclasse a una classe finestra esistente, derivare la classe da `CWindowImpl` e includere la macro [DECLARE\_WND\_SUPERCLASS](../Topic/DECLARE_WND_SUPERCLASS.md).  In questo caso, `CWndClassInfo` registra una classe della finestra basata su una classe esistente ma utilizza `CWindowImpl::WindowProc`.  Ad esempio:  
  
 [!code-cpp[NVC_ATL_Windowing#43](../../atl/codesnippet/CPP/cwindowimpl-class_1.h)]  
  
> [!NOTE]
>  Poiché `CWndClassInfo` gestisce le informazioni per una sola classe della finestra, ogni finestra creata tramite un'istanza di `CWindowImpl` è basata sulla stessa classe della finestra.  
  
 `CWindowImpl` supporta inoltre la creazione di una sottoclassi della finestra.  Il metodo `SubclassWindow` associa una finestra esistente all'oggetto `CWindowImpl` e modifica la routine della finestra in `CWindowImpl::WindowProc`.  Ogni istanza di `CWindowImpl` può creare una sottoclasse di una finestra diversa.  
  
> [!NOTE]
>  Per un dato oggetto `CWindowImpl`, chiamare **Crea** oppure `SubclassWindow`.  Non invocare entrambi i metodi sullo stesso oggetto.  
  
 Oltre a `CWindowImpl`, ATL fornisce [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) per creare una finestra contenuta in un altro oggetto.  
  
 Il distruttore della classe base \(~**CWindowImplRoot**\) assicura che la finestra venga rimossa prima che l'oggetto venga distrutto.  
  
 `CWindowImpl` deriva da **CWindowImplBaseT**, che deriva da **CWindowImplRoot**, che deriva da **TBase** e [CMessageMap](../../atl/reference/cmessagemap-class.md).  
  
|Per ulteriori informazioni su|Vedere|  
|-----------------------------------|------------|  
|Creazione di controlli|[Tutorial di ATL](../../atl/active-template-library-atl-tutorial.md)|  
|Usare le finestre in ATL|[Classi di finestra ATL](../../atl/atl-window-classes.md)|  
|Creazione guidata progetto ATL|[Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)|  
  
## Gerarchia di ereditarietà  
 [CMessageMap](../../atl/reference/cmessagemap-class.md)  
  
 `TBase`  
  
 `CWindowImplRoot`  
  
 `CWindowImplBaseT`  
  
 `CWindowImpl`  
  
## Requisiti  
 **Intestazione:** atlwin.h  
  
## Vedere anche  
 [BEGIN\_MSG\_MAP](../Topic/BEGIN_MSG_MAP.md)   
 [CComControl Class](../../atl/reference/ccomcontrol-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)