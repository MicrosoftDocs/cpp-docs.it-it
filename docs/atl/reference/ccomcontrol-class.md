---
title: "CComControl Class | Microsoft Docs"
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
  - "CComControl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ambient properties"
  - "CComControl class"
  - "CComControlBase class, CComControl class"
  - "control flags"
  - "controlli [ATL], control helper functions"
  - "controlli [ATL], proprietà"
  - "proprietà predefinite, ATL"
ms.assetid: 55368c27-bd16-45a7-b701-edb36157c8e8
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComControl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi per creare e gestire i controlli ATL.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      template <  
class T,  
class WinBase= CWindowImpl< T>   
>  
class ATL_NO_VTABLE CComControl :  
public CComControlBase, public WinBase;  
```  
  
#### Parametri  
 `T`  
 La classe che implementa il controllo.  
  
 *WinBase*  
 La classe base che implementa le funzioni di utilizzo di windows.  L'impostazione predefinita è [CWindowImpl](../../atl/reference/cwindowimpl-class.md).  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComControl::CComControl](../Topic/CComControl::CComControl.md)|Costruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComControl::ControlQueryInterface](../Topic/CComControl::ControlQueryInterface.md)|Recupera un puntatore a un'interfaccia richiesta.|  
|[CComControl::CreateControlWindow](../Topic/CComControl::CreateControlWindow.md)|Crea una finestra del controllo.|  
|[CComControl::FireOnChanged](../Topic/CComControl::FireOnChanged.md)|Notifica al sink contenitore che una proprietà del controllo è stato modificato.|  
|[CComControl::FireOnRequestEdit](../Topic/CComControl::FireOnRequestEdit.md)|Notifica al sink contenitore che una proprietà del controllo sta la modifica e che l'oggetto sia richiede al sink come procedere.|  
|[CComControl::MessageBox](../Topic/CComControl::MessageBox.md)|Chiamare questo metodo per creare, visualizzare ed eseguire una finestra di messaggio.|  
  
## Note  
 `CComControl` è un set di funzioni di supporto utili del controllo e dei membri dati essenziali per i controlli ATL.  Quando si crea un controllo standard o un controllo DHTML utilizzando la creazione guidata controllo ATL, la procedura guidata automaticamente derivare la classe da `CComControl`.  `CComControl` deriva la maggior parte dei metodi da [CComControlBase](../../atl/reference/ccomcontrolbase-class.md).  
  
 Per ulteriori informazioni sulla creazione di un controllo, vedere [L'esercitazione ATL](../../atl/active-template-library-atl-tutorial.md).  Per ulteriori informazioni sulla creazione guidata progetto ATL, vedere l'articolo [Creare un progetto ATL](../../atl/reference/creating-an-atl-project.md).  
  
 Per una dimostrazione dei metodi e i membri dati `CComControl`, vedere l'esempio [CIRC](../../top/visual-cpp-samples.md).  
  
## Gerarchia di ereditarietà  
 `WinBase`  
  
 [CComControlBase](../../atl/reference/ccomcontrolbase-class.md)  
  
 `CComControl`  
  
## Requisiti  
 **Header:** atlctl.h  
  
## Vedere anche  
 [CWindowImpl Class](../../atl/reference/cwindowimpl-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [CComControlBase Class](../../atl/reference/ccomcontrolbase-class.md)   
 [CComCompositeControl Class](../../atl/reference/ccomcompositecontrol-class.md)