---
title: "CWndClassInfo Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CWndClassInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CWndClassInfo class"
ms.assetid: c36fe7e1-75f1-4cf5-a06f-9f59c43fe6fb
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CWndClassInfo Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi per registrare le informazioni per una classe finestra.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class CWndClassInfo  
  
```  
  
## Membri  
  
### Metodi pubblici  
  
|||  
|-|-|  
|[Registra](../Topic/CWndClassInfo::Register.md)|registra la classe di finestre.|  
  
### Membri di dati  
  
|||  
|-|-|  
|[m\_atom](../Topic/CWndClassInfo::m_atom.md)|Identifica in modo univoco la classe della finestra registrata.|  
|[m\_bSystemCursor](../Topic/CWndClassInfo::m_bSystemCursor.md)|Specifica se la risorsa cursore si riferisce a un cursore di sistema o un cursore contenuto in una risorsa di modulo.|  
|[m\_lpszCursorID](../Topic/CWndClassInfo::m_lpszCursorID.md)|Specifica il nome della risorsa cursore.|  
|[m\_lpszOrigName](../Topic/CWndClassInfo::m_lpszOrigName.md)|Contiene il nome di una classe finestra esistente.|  
|[m\_szAutoName](../Topic/CWndClassInfo::m_szAutoName.md)|Utilizza un nome ATL\- generato la classe finestra.|  
|[m\_wc](../Topic/CWndClassInfo::m_wc.md)|Gestisce le informazioni della classe di finestra in una struttura **WNDCLASSEX**.|  
|[pWndProc](../Topic/CWndClassInfo::pWndProc.md)|Punta alla routine della finestra di una classe finestra esistente.|  
  
## Note  
 `CWndClassInfo` gestisce le informazioni sulla classe della finestra.  In genere si utilizza `CWndClassInfo` con una di tre macro, `DECLARE_WND_CLASS`, `DECLARE_WND_CLASS_EX`, o `DECLARE_WND_SUPERCLASS`, come descritto nella tabella seguente:  
  
|Macro|Descrizione|  
|-----------|-----------------|  
|[DECLARE\_WND\_CLASS](../Topic/DECLARE_WND_CLASS.md)|Informazioni di registro di`CWndClassInfo` per una nuova classe della finestra.|  
|[DECLARE\_WND\_CLASS\_EX](../Topic/DECLARE_WND_CLASS_EX.md)|Informazioni di registro di`CWndClassInfo` per una nuova classe della finestra, inclusi i parametri di classe.|  
|[DECLARE\_WND\_SUPERCLASS](../Topic/DECLARE_WND_SUPERCLASS.md)|Le informazioni di registro di`CWndClassInfo` per una classe finestra basata su una classe esistente ma seguono una diversa routine della finestra.  Questa tecnica viene chiamata una superclasse basata su.|  
  
 Per impostazione predefinita, [CWindowImpl](../../atl/reference/cwindowimpl-class.md) include la macro `DECLARE_WND_CLASS` per creare una finestra basata su una nuova classe della finestra.  DECLARE\_WND\_CLASS fornisce gli stili predefiniti e il colore di sfondo del controllo.  Se si desidera specificare lo stile e il colore di sfondo manualmente, derivare la classe da `CWindowImpl` e includere una macro `DECLARE_WND_CLASS_EX` nella definizione della classe.  
  
 Se si desidera creare una finestra basata su una classe finestra esistente, derivare la classe da `CWindowImpl` e includere una macro `DECLARE_WND_SUPERCLASS` nella definizione della classe.  Di seguito è riportato un esempio:  
  
 [!code-cpp[NVC_ATL_Windowing#43](../../atl/codesnippet/CPP/cwndclassinfo-class_1.h)]  
  
 Per ulteriori informazioni sulle classi di finestre, vedere [Classi di finestre](http://msdn.microsoft.com/library/windows/desktop/ms632596) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Per ulteriori informazioni sull'utilizzo delle finestre in ATL, vedere l'articolo [Classi di finestre ATL](../../atl/atl-window-classes.md).  
  
## Requisiti  
 **Header:** atlwin.h  
  
## Vedere anche  
 [CComControl Class](../../atl/reference/ccomcontrol-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)