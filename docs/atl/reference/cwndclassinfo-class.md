---
title: Classe CWndClassInfo | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CWndClassInfo
dev_langs:
- C++
helpviewer_keywords:
- CWndClassInfo class
ms.assetid: c36fe7e1-75f1-4cf5-a06f-9f59c43fe6fb
caps.latest.revision: 22
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 050e7483670bd32f633660ba44491c8bb3fc462d
ms.openlocfilehash: f036d79c7a9420e083eb86023c5cbf98906cc1cc
ms.lasthandoff: 02/24/2017

---
# <a name="cwndclassinfo-class"></a>Classe CWndClassInfo
Questa classe fornisce metodi per la registrazione di informazioni per una classe della finestra.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CWndClassInfo
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|||  
|-|-|  
|[Register](#register)|Registra la classe della finestra.|  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|[m_atom](#m_atom)|Identifica la classe di finestra registrati.|  
|[m_bSystemCursor](#m_bsystemcursor)|Specifica se la risorsa di cursore fa riferimento a un cursore di sistema o a un cursore contenuto in una risorsa di modulo.|  
|[m_lpszCursorID](#m_lpszcursorid)|Specifica il nome della risorsa cursore.|  
|[m_lpszOrigName](#m_lpszorigname)|Contiene il nome di una classe finestra esistente.|  
|[m_szAutoName](#m_szautoname)|Contiene un nome di classe della finestra generati ATL.|  
|[m_wc](#m_wc)|Gestisce informazioni sulla classe di finestra in un **WNDCLASSEX** struttura.|  
|[pWndProc](#pwndproc)|Punta alla routine della finestra di una classe finestra esistente.|  
  
## <a name="remarks"></a>Note  
 `CWndClassInfo`gestisce le informazioni di una classe di finestra. In genere si utilizza `CWndClassInfo` tramite una delle tre macro, `DECLARE_WND_CLASS`, `DECLARE_WND_CLASS_EX`, o `DECLARE_WND_SUPERCLASS`, come descritto nella tabella seguente:  
  
|Macro|Descrizione|  
|-----------|-----------------|  
|[DECLARE_WND_CLASS](http://msdn.microsoft.com/library/55247a72-fb9e-4bde-87f3-747c08076971)|`CWndClassInfo`Registra le informazioni per una nuova classe di finestra.|  
|[DECLARE_WND_CLASS_EX](http://msdn.microsoft.com/library/0672c144-f2aa-4f6a-ae16-566e3a1f5411)|`CWndClassInfo`Registra le informazioni per una nuova classe di finestra, inclusi i parametri della classe.|  
|[DECLARE_WND_SUPERCLASS](http://msdn.microsoft.com/library/650337b6-4973-41e5-8c36-55f90327bdcd)|`CWndClassInfo`Registra le informazioni per una classe della finestra basata su una classe esistente, ma utilizza una routine della finestra diversa. Questa tecnica è denominata creazione di superclassi.|  
  
 Per impostazione predefinita, [CWindowImpl](../../atl/reference/cwindowimpl-class.md) include il `DECLARE_WND_CLASS` macro per creare una finestra in base a una nuova classe della finestra. DECLARE_WND_CLASS fornisce gli stili predefiniti e il colore di sfondo per il controllo. Se si desidera specificare lo stile e il colore di sfondo, personalmente, derivare la classe da `CWindowImpl` e includere il `DECLARE_WND_CLASS_EX` macro nella definizione della classe.  
  
 Se si desidera creare una finestra basata su una classe finestra esistente, derivare la classe da `CWindowImpl` e includere il `DECLARE_WND_SUPERCLASS` macro nella definizione della classe. Ad esempio:  
  
 [!code-cpp[NVC_ATL_Windowing&#43;](../../atl/codesnippet/cpp/cwndclassinfo-class_1.h)]  
  
 Per ulteriori informazioni sulle classi finestra, vedere [classi di finestra](http://msdn.microsoft.com/library/windows/desktop/ms632596) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Per ulteriori informazioni sull'utilizzo delle finestre in ATL, vedere l'articolo [classi di finestra ATL](../../atl/atl-window-classes.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
  
##  <a name="a-namematoma--cwndclassinfomatom"></a><a name="m_atom"></a>CWndClassInfo::m_atom  
 Contiene l'identificatore univoco per la classe di finestra registrati.  
  
```
ATOM m_atom;
```  
  
##  <a name="a-namembsystemcursora--cwndclassinfombsystemcursor"></a><a name="m_bsystemcursor"></a>CWndClassInfo::m_bSystemCursor  
 Se **TRUE**, la risorsa del cursore di sistema venga caricata quando la classe finestra è registrata.  
  
```
BOOL m_bSystemCursor;
```  
  
### <a name="remarks"></a>Note  
 In caso contrario, verrà caricata la risorsa cursore contenuta nel modulo.  
  
 `CWndClassInfo`Usa `m_bSystemCursor` solo quando il [DECLARE_WND_CLASS](http://msdn.microsoft.com/library/55247a72-fb9e-4bde-87f3-747c08076971) (l'impostazione predefinita in [CWindowImpl](../../atl/reference/cwindowimpl-class.md)) o [DECLARE_WND_CLASS_EX](http://msdn.microsoft.com/library/0672c144-f2aa-4f6a-ae16-566e3a1f5411) (macro) viene specificato. In questo caso, `m_bSystemCursor` viene inizializzata su **TRUE**. Per ulteriori informazioni, vedere il [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md) Panoramica.  
  
##  <a name="a-namemlpszcursorida--cwndclassinfomlpszcursorid"></a><a name="m_lpszcursorid"></a>CWndClassInfo::m_lpszCursorID  
 Specifica il nome della risorsa cursore o l'identificatore di risorsa della parola meno significativa e zero con la parola di ordine superiore.  
  
```
LPCTSTR m_lpszCursorID;
```  
  
### <a name="remarks"></a>Note  
 Quando la classe di finestra è registrata, l'handle del cursore identificato da `m_lpszCursorID` vengono recuperati e archiviati dalla [m_wc](#m_wc).  
  
 `CWndClassInfo`Usa `m_lpszCursorID` solo quando il [DECLARE_WND_CLASS](http://msdn.microsoft.com/library/55247a72-fb9e-4bde-87f3-747c08076971) (l'impostazione predefinita in [CWindowImpl](../../atl/reference/cwindowimpl-class.md)) o [DECLARE_WND_CLASS_EX](http://msdn.microsoft.com/library/0672c144-f2aa-4f6a-ae16-566e3a1f5411) (macro) viene specificato. In questo caso, `m_lpszCursorID` viene inizializzata su **IDC_ARROW**. Per ulteriori informazioni, vedere il [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md) Panoramica.  
  
##  <a name="a-namemlpszorignamea--cwndclassinfomlpszorigname"></a><a name="m_lpszorigname"></a>CWndClassInfo::m_lpszOrigName  
 Contiene il nome di una classe finestra esistente.  
  
```
LPCTSTR m_lpszOrigName;
```  
  
### <a name="remarks"></a>Note  
 `CWndClassInfo`Usa `m_lpszOrigName` solo quando si include il [DECLARE_WND_SUPERCLASS](http://msdn.microsoft.com/library/650337b6-4973-41e5-8c36-55f90327bdcd) macro nella definizione della classe. In questo caso, `CWndClassInfo` registra una classe della finestra in base alla classe denominata da `m_lpszOrigName`. Per ulteriori informazioni, vedere il [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md) Panoramica.  
  
##  <a name="a-namemszautonamea--cwndclassinfomszautoname"></a><a name="m_szautoname"></a>CWndClassInfo::m_szAutoName  
 Contiene il nome della classe della finestra.  
  
```
TCHAR m_szAutoName[13];
```  
  
### <a name="remarks"></a>Note  
 `CWndClassInfo`Usa `m_szAutoName` solo se **NULL** viene passato il `WndClassName` parametro [DECLARE_WND_CLASS](http://msdn.microsoft.com/library/55247a72-fb9e-4bde-87f3-747c08076971), [DECLARE_WND_CLASS_EX](http://msdn.microsoft.com/library/0672c144-f2aa-4f6a-ae16-566e3a1f5411) o [DECLARE_WND_SUPERCLASS](http://msdn.microsoft.com/library/650337b6-4973-41e5-8c36-55f90327bdcd). ATL creerà un nome quando la classe finestra è registrata.  
  
##  <a name="a-namemwca--cwndclassinfomwc"></a><a name="m_wc"></a>CWndClassInfo::m_wc  
 Gestisce le informazioni sulla classe di finestra in un [WNDCLASSEX](http://msdn.microsoft.com/library/windows/desktop/ms633577) struttura.  
  
```
WNDCLASSEX m_wc;
```  
  
### <a name="remarks"></a>Note  
 Se è stato specificato il [DECLARE_WND_CLASS](http://msdn.microsoft.com/library/55247a72-fb9e-4bde-87f3-747c08076971) (l'impostazione predefinita in [CWindowImpl](../../atl/reference/cwindowimpl-class.md)) o [DECLARE_WND_CLASS_EX](http://msdn.microsoft.com/library/0672c144-f2aa-4f6a-ae16-566e3a1f5411) (macro), `m_wc` contiene informazioni su una nuova classe della finestra.  
  
 Se è stato specificato il [DECLARE_WND_SUPERCLASS](http://msdn.microsoft.com/library/650337b6-4973-41e5-8c36-55f90327bdcd) (macro), `m_wc` contiene informazioni su una superclasse, ovvero una classe della finestra basata su una classe esistente, ma utilizza una routine della finestra diversa. [m_lpszOrigName](#m_lpszorigname) e [pWndProc](#pwndproc) salvare il nome della classe finestra esistente e la routine della finestra, rispettivamente.  
  
##  <a name="a-namepwndproca--cwndclassinfopwndproc"></a><a name="pwndproc"></a>CWndClassInfo::pWndProc  
 Punta alla routine della finestra di una classe finestra esistente.  
  
```
WNDPROC pWndProc;
```  
  
### <a name="remarks"></a>Note  
 `CWndClassInfo`Usa `pWndProc` solo quando si include il [DECLARE_WND_SUPERCLASS](http://msdn.microsoft.com/library/650337b6-4973-41e5-8c36-55f90327bdcd) macro nella definizione della classe. In questo caso, `CWndClassInfo` registra una classe finestra basata su una classe esistente, ma utilizza una routine della finestra diversa. Procedura della finestra della classe finestra esistente viene salvato `pWndProc`. Per ulteriori informazioni, vedere il [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md) Panoramica.  
  
##  <a name="a-nameregistera--cwndclassinforegister"></a><a name="register"></a>CWndClassInfo::Register  
 Chiamato da [CWindowImpl::Create](../../atl/reference/cwindowimpl-class.md#create) per registrare la classe di finestra se non è ancora stato registrato.  
  
```
ATOM Register(WNDPROC* pProc);
```  
  
### <a name="parameters"></a>Parametri  
 `pProc`  
 [out] Specifica la procedura di finestra originale di una classe finestra esistente.  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, un atomo che identifica la classe di finestra da registrare. In caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Se è stato specificato il [DECLARE_WND_CLASS](http://msdn.microsoft.com/library/55247a72-fb9e-4bde-87f3-747c08076971) (l'impostazione predefinita in [CWindowImpl](../../atl/reference/cwindowimpl-class.md)) o [DECLARE_WND_CLASS_EX](http://msdn.microsoft.com/library/0672c144-f2aa-4f6a-ae16-566e3a1f5411) (macro), `Register` registra una nuova classe di finestra. In questo caso, il `pProc` parametro non viene utilizzato.  
  
 Se è stato specificato il [DECLARE_WND_SUPERCLASS](http://msdn.microsoft.com/library/650337b6-4973-41e5-8c36-55f90327bdcd) (macro), `Register` registra una superclasse, ovvero una classe della finestra basata su una classe esistente, ma utilizza una routine della finestra diversa. Procedura della finestra della classe finestra esistente viene restituito in `pProc`.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComControl](../../atl/reference/ccomcontrol-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
