---
title: Classe CWndClassInfo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CWndClassInfo
- ATLWIN/ATL::CWndClassInfo
- ATLWIN/ATL::Register
- ATLWIN/ATL::m_atom
- ATLWIN/ATL::m_bSystemCursor
- ATLWIN/ATL::m_lpszCursorID
- ATLWIN/ATL::m_lpszOrigName
- ATLWIN/ATL::m_szAutoName
- ATLWIN/ATL::m_wc
- ATLWIN/ATL::pWndProc
dev_langs:
- C++
helpviewer_keywords:
- CWndClassInfo class
ms.assetid: c36fe7e1-75f1-4cf5-a06f-9f59c43fe6fb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 878d6065f3a158ac4404620205ef9c60912d89ca
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32365764"
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
|[m_atom](#m_atom)|Identifica in modo univoco la classe di finestra registrati.|  
|[m_bSystemCursor](#m_bsystemcursor)|Specifica se la risorsa cursore fa riferimento a un cursore di sistema o a un cursore contenuta in un modulo di risorse.|  
|[m_lpszCursorID](#m_lpszcursorid)|Specifica il nome della risorsa cursore.|  
|[m_lpszOrigName](#m_lpszorigname)|Contiene il nome di una classe finestra esistente.|  
|[m_szAutoName](#m_szautoname)|Contiene un nome generato da ATL della classe della finestra.|  
|[m_wc](#m_wc)|Gestisce informazioni sulla classe di finestra in un **WNDCLASSEX** struttura.|  
|[pWndProc](#pwndproc)|Punta alla routine della finestra di una classe finestra esistente.|  
  
## <a name="remarks"></a>Note  
 `CWndClassInfo` gestisce le informazioni di una classe della finestra. In genere si usa `CWndClassInfo` tramite uno dei tre macro, `DECLARE_WND_CLASS`, `DECLARE_WND_CLASS_EX`, o `DECLARE_WND_SUPERCLASS`, come descritto nella tabella seguente:  
  
|Macro|Descrizione|  
|-----------|-----------------|  
|[DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class)|`CWndClassInfo` Registra le informazioni per una nuova classe della finestra.|  
|[DECLARE_WND_CLASS_EX](window-class-macros.md#declare_wnd_class_ex)|`CWndClassInfo` Registra le informazioni per una nuova classe di finestra, inclusi i parametri di classe.|  
|[DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass)|`CWndClassInfo` Registra le informazioni per una classe della finestra si basa su una classe esistente che usa una routine della finestra diverso. Questa tecnica è denominata creazione di superclassi.|  
  
 Per impostazione predefinita, [CWindowImpl](../../atl/reference/cwindowimpl-class.md) include il `DECLARE_WND_CLASS` (macro) per creare una finestra in base a una nuova classe della finestra. DECLARE_WND_CLASS fornisce gli stili predefiniti e il colore di sfondo per il controllo. Se si desidera specificare lo stile e il colore di sfondo, manualmente, derivare la classe da `CWindowImpl` e includere il `DECLARE_WND_CLASS_EX` macro nella definizione della classe.  
  
 Se si desidera creare una finestra in base a una classe finestra esistente, derivare la classe da `CWindowImpl` e includere il `DECLARE_WND_SUPERCLASS` macro nella definizione della classe. Ad esempio:  
  
 [!code-cpp[NVC_ATL_Windowing#43](../../atl/codesnippet/cpp/cwndclassinfo-class_1.h)]  
  
 Per ulteriori informazioni sulle classi di finestra, vedere [classi di finestra](http://msdn.microsoft.com/library/windows/desktop/ms632596) in Windows SDK.  
  
 Per ulteriori informazioni sull'utilizzo delle finestre in ATL, vedere l'articolo [classi di finestra ATL](../../atl/atl-window-classes.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
  
##  <a name="m_atom"></a>  CWndClassInfo::m_atom  
 Contiene l'identificatore univoco per la classe di finestra registrati.  
  
```
ATOM m_atom;
```  
  
##  <a name="m_bsystemcursor"></a>  CWndClassInfo::m_bSystemCursor  
 Se **TRUE**, la risorsa del cursore di sistema venga caricata quando la classe di finestra è registrata.  
  
```
BOOL m_bSystemCursor;
```  
  
### <a name="remarks"></a>Note  
 In caso contrario, la risorsa cursore contenuta nel modulo verrà caricata.  
  
 `CWndClassInfo` Usa `m_bSystemCursor` solo quando il [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) (il valore predefinito in [CWindowImpl](../../atl/reference/cwindowimpl-class.md)) o [DECLARE_WND_CLASS_EX](window-class-macros.md#declare_wnd_class_ex) macro è specificato. In questo caso, `m_bSystemCursor` viene inizializzata su **TRUE**. Per ulteriori informazioni, vedere il [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md) Panoramica.  
  
##  <a name="m_lpszcursorid"></a>  CWndClassInfo::m_lpszCursorID  
 Specifica il nome della risorsa cursore o l'identificatore di risorsa in word di ordine inferiore e zero nella parola significativo.  
  
```
LPCTSTR m_lpszCursorID;
```  
  
### <a name="remarks"></a>Note  
 Quando la classe di finestra è registrata, l'handle per il cursore identificato da `m_lpszCursorID` vengono recuperati e archiviati dalla [m_wc](#m_wc).  
  
 `CWndClassInfo` Usa `m_lpszCursorID` solo quando il [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) (il valore predefinito in [CWindowImpl](../../atl/reference/cwindowimpl-class.md)) o [DECLARE_WND_CLASS_EX](window-class-macros.md#declare_wnd_class_ex) macro è specificato. In questo caso, `m_lpszCursorID` viene inizializzata su **IDC_ARROW**. Per ulteriori informazioni, vedere il [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md) Panoramica.  
  
##  <a name="m_lpszorigname"></a>  CWndClassInfo::m_lpszOrigName  
 Contiene il nome di una classe finestra esistente.  
  
```
LPCTSTR m_lpszOrigName;
```  
  
### <a name="remarks"></a>Note  
 `CWndClassInfo` viene utilizzato `m_lpszOrigName` solo quando si include la [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) macro nella definizione della classe. In questo caso, `CWndClassInfo` registra una classe della finestra in base alla classe denominata da `m_lpszOrigName`. Per ulteriori informazioni, vedere il [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md) Panoramica.  
  
##  <a name="m_szautoname"></a>  CWndClassInfo::m_szAutoName  
 Contiene il nome della classe della finestra.  
  
```
TCHAR m_szAutoName[13];
```  
  
### <a name="remarks"></a>Note  
 `CWndClassInfo` viene utilizzato `m_szAutoName` solo se **NULL** viene passato il `WndClassName` parametro [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class), il [DECLARE_WND_CLASS_EX](window-class-macros.md#declare_wnd_class_ex) o [ DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass). ATL verrà costruito un nome quando la classe di finestra è registrata.  
  
##  <a name="m_wc"></a>  CWndClassInfo::m_wc  
 Gestisce le informazioni sulla classe di finestra in un [WNDCLASSEX](http://msdn.microsoft.com/library/windows/desktop/ms633577) struttura.  
  
```
WNDCLASSEX m_wc;
```  
  
### <a name="remarks"></a>Note  
 Se è stato specificato il [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) (il valore predefinito in [CWindowImpl](../../atl/reference/cwindowimpl-class.md)) o [DECLARE_WND_CLASS_EX](window-class-macros.md#declare_wnd_class_ex) (macro), `m_wc` contiene informazioni su un nuova classe della finestra.  
  
 Se è stato specificato il [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) (macro), `m_wc` contiene informazioni su una superclasse, ovvero una classe di finestra è basata su una classe esistente che usa una routine della finestra diverso. [m_lpszOrigName](#m_lpszorigname) e [pWndProc](#pwndproc) salvare nome della classe di finestra esistente e routine di finestra, rispettivamente.  
  
##  <a name="pwndproc"></a>  CWndClassInfo::pWndProc  
 Punta alla routine della finestra di una classe finestra esistente.  
  
```
WNDPROC pWndProc;
```  
  
### <a name="remarks"></a>Note  
 `CWndClassInfo` viene utilizzato `pWndProc` solo quando si include la [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) macro nella definizione della classe. In questo caso, `CWndClassInfo` registra una classe di finestra è basata su una classe esistente che usa una routine della finestra diverso. Routine della finestra della classe di finestra esistente viene salvato `pWndProc`. Per ulteriori informazioni, vedere il [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md) Panoramica.  
  
##  <a name="register"></a>  CWndClassInfo::Register  
 Chiamato da [CWindowImpl::Create](../../atl/reference/cwindowimpl-class.md#create) per registrare la classe di finestra se non è ancora stato registrato.  
  
```
ATOM Register(WNDPROC* pProc);
```  
  
### <a name="parameters"></a>Parametri  
 `pProc`  
 [out] Specifica la procedura di finestra originale di una classe finestra esistente.  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, un atom che identifica in modo univoco la classe di finestra da registrare. In caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Se è stato specificato il [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) (il valore predefinito in [CWindowImpl](../../atl/reference/cwindowimpl-class.md)) o [DECLARE_WND_CLASS_EX](window-class-macros.md#declare_wnd_class_ex) (macro), `Register` registra una nuova classe della finestra. In questo caso, il `pProc` parametro non viene usato.  
  
 Se è stato specificato il [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) (macro), `Register` registra una superclasse, ovvero una classe di finestra è basata su una classe esistente che usa una routine della finestra diverso. Routine della finestra della classe di finestra esistente viene restituito in `pProc`.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComControl](../../atl/reference/ccomcontrol-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)