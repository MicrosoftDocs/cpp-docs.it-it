---
title: "CContainedWindowT Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CContainedWindow"
  - "CContainedWindowT"
  - "ATL.CContainedWindowT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CContainedWindow class"
  - "CContainedWindowT class"
  - "contained windows"
ms.assetid: cde0ca36-9347-4068-995a-d294dae57ca9
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 26
---
# CContainedWindowT Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa una finestra contenuta in un altro oggetto.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      template <  
class TBase= CWindow,  
class TWinTraits= CControlWinTraits   
>  
class CContainedWindowT :  
public TBase  
```  
  
#### Parametri  
 *TBase*  
 La classe base della nuova classe.  La classe base predefinita è `CWindow`.  
  
 `TWinTraits`  
 I tratti classe che definisce gli stili per la finestra.  Il valore predefinito è `CControlWinTraits`.  
  
> [!NOTE]
>  [CContainedWindow](../Topic/CContainedWindow.md) è una specializzazione `CContainedWindowT`.  Se si desidera modificare la classe di base o i tratti, utilizzare direttamente `CContainedWindowT`.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CContainedWindowT::CContainedWindowT](../Topic/CContainedWindowT::CContainedWindowT.md)|Costruttore.  Inizializza i membri dati per specificare quali mappa messaggi elaborerà i messaggi della finestra contenuta.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CContainedWindowT::Create](../Topic/CContainedWindowT::Create.md)|Crea una finestra.|  
|[CContainedWindowT::DefWindowProc](../Topic/CContainedWindowT::DefWindowProc.md)|Fornisce l'elaborazione dei messaggi predefinito.|  
|[CContainedWindowT::GetCurrentMessage](../Topic/CContainedWindowT::GetCurrentMessage.md)|Restituisce il messaggio corrente.|  
|[CContainedWindowT::RegisterWndSuperclass](../Topic/CContainedWindowT::RegisterWndSuperclass.md)|Registrazione della classe della finestra contenuta.|  
|[CContainedWindowT::SubclassWindow](../Topic/CContainedWindowT::SubclassWindow.md)|Rappresenta una sottoclasse di una finestra.|  
|[CContainedWindowT::SwitchMessageMap](../Topic/CContainedWindowT::SwitchMessageMap.md)|Modificare la mappa messaggi viene utilizzata per elaborare i messaggi della finestra contenuta.|  
|[CContainedWindowT::UnsubclassWindow](../Topic/CContainedWindowT::UnsubclassWindow.md)|Ripristina una finestra precedentemente impostata come sottoclasse.|  
|[CContainedWindowT::WindowProc](../Topic/CContainedWindowT::WindowProc.md)|\(Proprietà statica\) elabora i messaggi inviati alla finestra contenuta.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CContainedWindowT::m\_dwMsgMapID](../Topic/CContainedWindowT::m_dwMsgMapID.md)|Identifica la mappa messaggi elaborerà i messaggi della finestra contenuta.|  
|[CContainedWindowT::m\_lpszClassName](../Topic/CContainedWindowT::m_lpszClassName.md)|Specifica il nome di una classe finestra esistente in cui una nuova classe della finestra verrà basata su.|  
|[CContainedWindowT::m\_pfnSuperWindowProc](../Topic/CContainedWindowT::m_pfnSuperWindowProc.md)|Punta alla routine della finestra della classe finestra.|  
|[CContainedWindowT::m\_pObject](../Topic/CContainedWindowT::m_pObject.md)|Punti all'oggetto contenitore.|  
  
## Note  
 `CContainedWindowT` implementa una finestra contenuta in un altro oggetto.  Utilizzare la routine della finestra di `CContainedWindowT` una mappa messaggi nell'oggetto contenitore ai messaggi diretti ai gestori appropriati.  Nel creare un oggetto `CContainedWindowT`, specificare quale mappa messaggi deve essere utilizzata.  
  
 `CContainedWindowT` consente di creare una nuova finestra una superclasse basata su una classe finestra esistente.  Il metodo **Crea** innanzitutto registrata una classe finestra basata su una classe esistente ma utilizza `CContainedWindowT::WindowProc`.  **Crea** crea quindi una finestra basata sulla nuova classe della finestra.  Ogni istanza `CContainedWindowT` boxing di una superclasse una classe finestra diversa.  
  
 `CContainedWindowT` supporta inoltre la creazione di una sottoclasse della finestra.  Il metodo `SubclassWindow` associa una finestra esistente all'oggetto `CContainedWindowT` e modifica la routine della finestra `CContainedWindowT::WindowProc`.  Ogni istanza `CContainedWindowT` boxing della sottoclasse di una finestra diversa.  
  
> [!NOTE]
>  Per un dato oggetto `CContainedWindowT`, chiamare **Crea** o `SubclassWindow`.  Non è necessario chiamare entrambi i metodi nello stesso oggetto.  
  
 Quando si utilizza l'opzione **Add control based on** nella creazione guidata progetto ATL, la procedura guidata viene automaticamente aggiunto un membro dati `CContainedWindowT` la classe che implementa il controllo.  Il seguente esempio mostra come la finestra contenuto viene dichiarata:  
  
 [!code-cpp[NVC_ATL_Windowing#38](../../atl/codesnippet/CPP/ccontainedwindowt-class_1.h)]  
  
 [!code-cpp[NVC_ATL_Windowing#39](../../atl/codesnippet/CPP/ccontainedwindowt-class_2.h)]  
  
 [!code-cpp[NVC_ATL_Windowing#40](../../atl/codesnippet/CPP/ccontainedwindowt-class_3.h)]  
  
|Per ulteriori informazioni su|Vedere|  
|-----------------------------------|------------|  
|Creazione di controlli|[L'esercitazione ATL](../../atl/active-template-library-atl-tutorial.md)|  
|Utilizzando le finestre in ATL|[Classi di finestre ATL](../../atl/atl-window-classes.md)|  
|Creazione guidata progetto ATL|[Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)|  
|Windows|[Finestre](http://msdn.microsoft.com/library/windows/desktop/ms632595) e argomenti successivi in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]|  
  
## Gerarchia di ereditarietà  
 `TBase`  
  
 `CContainedWindowT`  
  
## Requisiti  
 **Header:** atlwin.h  
  
## Vedere anche  
 [CWindow Class](../../atl/reference/cwindow-class.md)   
 [CWindowImpl Class](../../atl/reference/cwindowimpl-class.md)   
 [CMessageMap Class](../../atl/reference/cmessagemap-class.md)   
 [BEGIN\_MSG\_MAP](../Topic/BEGIN_MSG_MAP.md)   
 [ALT\_MSG\_MAP](../Topic/ALT_MSG_MAP.md)   
 [Class Overview](../../atl/atl-class-overview.md)