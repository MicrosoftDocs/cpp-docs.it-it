---
title: Classe CWndClassInfo
ms.date: 11/04/2016
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
helpviewer_keywords:
- CWndClassInfo class
ms.assetid: c36fe7e1-75f1-4cf5-a06f-9f59c43fe6fb
ms.openlocfilehash: 01706bf61c3b977c28998325ece68724cfbc7452
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81330330"
---
# <a name="cwndclassinfo-class"></a>Classe CWndClassInfo

Questa classe fornisce metodi per la registrazione di informazioni per una classe finestra.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CWndClassInfo
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|||
|-|-|
|[Registra](#register)|Registra la classe della finestra.|

### <a name="data-members"></a>Membri dei dati

|||
|-|-|
|[m_atom](#m_atom)|Identifica in modo univoco la classe finestra registrata.|
|[m_bSystemCursor](#m_bsystemcursor)|Specifica se la risorsa cursore fa riferimento a un cursore di sistema o a un cursore contenuto in una risorsa modulo.|
|[m_lpszCursorID](#m_lpszcursorid)|Specifica il nome della risorsa cursore.|
|[m_lpszOrigName](#m_lpszorigname)|Contiene il nome di una classe finestra esistente.|
|[m_szAutoName](#m_szautoname)|Contiene un nome generato da ATL della classe finestra.|
|[m_wc](#m_wc)|Gestisce le informazioni `WNDCLASSEX` sulle classi di finestre in una struttura.|
|[pWndProc (in questo modo)](#pwndproc)|Punta alla routine della finestra di una classe finestra esistente.|

## <a name="remarks"></a>Osservazioni

`CWndClassInfo`gestisce le informazioni di una classe finestra. In genere `CWndClassInfo` si utilizza una delle tre macro, DECLARE_WND_CLASS, DECLARE_WND_CLASS_EX o DECLARE_WND_SUPERCLASS, come descritto nella tabella seguente:

|Macro|Descrizione|
|-----------|-----------------|
|[DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class)|`CWndClassInfo`registra le informazioni per una nuova classe finestra.|
|[DECLARE_WND_CLASS_EX](window-class-macros.md#declare_wnd_class_ex)|`CWndClassInfo`registra le informazioni per una nuova classe finestra, inclusi i parametri della classe.|
|[DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass)|`CWndClassInfo`registra le informazioni per una classe finestra basata su una classe esistente ma utilizza una routine di finestra diversa. Questa tecnica è chiamata superclasse.|

Per impostazione predefinita, [CWindowImpl](../../atl/reference/cwindowimpl-class.md) include la `DECLARE_WND_CLASS` macro per creare una finestra basata su una nuova classe finestra. DECLARE_WND_CLASS fornisce stili predefiniti e colore di sfondo per il controllo. Se si desidera specificare manualmente lo stile e `CWindowImpl` il colore di sfondo, derivare la classe da e includere la macro DECLARE_WND_CLASS_EX nella definizione della classe.

Se si desidera creare una finestra basata su una `CWindowImpl` classe finestra esistente, derivare la classe da e includere la macro DECLARE_WND_SUPERCLASS nella definizione della classe. Ad esempio:

[!code-cpp[NVC_ATL_Windowing#43](../../atl/codesnippet/cpp/cwndclassinfo-class_1.h)]

Per ulteriori informazioni sulle classi finestra, vedere [classi di finestra](/windows/win32/winmsg/window-classes) in Windows SDK.

Per ulteriori informazioni sull'utilizzo delle finestre in ATL, vedere l'articolo Classi finestra [ATL](../../atl/atl-window-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin.h

## <a name="cwndclassinfom_atom"></a><a name="m_atom"></a>CWndClassInfo::m_atom

Contiene l'identificatore univoco per la classe finestra registrata.

```
ATOM m_atom;
```

## <a name="cwndclassinfom_bsystemcursor"></a><a name="m_bsystemcursor"></a>CWndClassInfo::m_bSystemCursor

Se TRUE, la risorsa cursore di sistema verrà caricata quando viene registrata la classe finestra.

```
BOOL m_bSystemCursor;
```

### <a name="remarks"></a>Osservazioni

In caso contrario, verrà caricata la risorsa cursore contenuta nel modulo.

`CWndClassInfo`viene `m_bSystemCursor` utilizzato solo quando viene specificata la [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) (impostazione predefinita in [CWindowImpl](../../atl/reference/cwindowimpl-class.md)) o [quando](window-class-macros.md#declare_wnd_class_ex) viene specificata la DECLARE_WND_CLASS_EX macro. In questo `m_bSystemCursor` caso, viene inizializzato su TRUE. Per altre informazioni, vedere il CWndClassInfo cenno .For more information, see the [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md) overview.

## <a name="cwndclassinfom_lpszcursorid"></a><a name="m_lpszcursorid"></a>CWndClassInfo::m_lpszCursorID

Specifica il nome della risorsa cursore o l'identificatore di risorsa nella parola meno ordine e zero nella parola più ordine.

```
LPCTSTR m_lpszCursorID;
```

### <a name="remarks"></a>Osservazioni

Quando viene registrata la classe finestra, l'handle per il cursore identificato da `m_lpszCursorID` viene recuperato e archiviato da [m_wc](#m_wc).

`CWndClassInfo`viene `m_lpszCursorID` utilizzato solo quando viene specificata la [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) (impostazione predefinita in [CWindowImpl](../../atl/reference/cwindowimpl-class.md)) o [quando](window-class-macros.md#declare_wnd_class_ex) viene specificata la DECLARE_WND_CLASS_EX macro. In questo `m_lpszCursorID` caso, viene inizializzato su IDC_ARROW. Per altre informazioni, vedere il CWndClassInfo cenno .For more information, see the [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md) overview.

## <a name="cwndclassinfom_lpszorigname"></a><a name="m_lpszorigname"></a>CWndClassInfo::m_lpszOrigName

Contiene il nome di una classe finestra esistente.

```
LPCTSTR m_lpszOrigName;
```

### <a name="remarks"></a>Osservazioni

`CWndClassInfo`viene `m_lpszOrigName` utilizzato solo quando si include la macro [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) nella definizione della classe. In questo `CWndClassInfo` caso, registra una classe finestra `m_lpszOrigName`in base alla classe denominata da . Per altre informazioni, vedere il CWndClassInfo cenno .For more information, see the [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md) overview.

## <a name="cwndclassinfom_szautoname"></a><a name="m_szautoname"></a>CWndClassInfo::m_szAutoName

Contiene il nome della classe finestra.

```
TCHAR m_szAutoName[13];
```

### <a name="remarks"></a>Osservazioni

`CWndClassInfo`viene `m_szAutoName` utilizzato solo se `WndClassName` null viene passato per il parametro a [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class), il [DECLARE_WND_CLASS_EX](window-class-macros.md#declare_wnd_class_ex) o [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass). ATL creerà un nome quando viene registrata la classe finestra.

## <a name="cwndclassinfom_wc"></a><a name="m_wc"></a>CWndClassInfo::m_wc

Mantiene le informazioni sulla classe finestra in una struttura [WNDCLASSEX.](/windows/win32/api/winuser/ns-winuser-wndclassexw)

```
WNDCLASSEX m_wc;
```

### <a name="remarks"></a>Osservazioni

Se è stata specificata la [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) (impostazione predefinita in `m_wc` [CWindowImpl](../../atl/reference/cwindowimpl-class.md)) o la macro [DECLARE_WND_CLASS_EX,](window-class-macros.md#declare_wnd_class_ex) contiene informazioni su una nuova classe finestra.

Se è stata specificata `m_wc` la macro [DECLARE_WND_SUPERCLASS,](window-class-macros.md#declare_wnd_superclass) contiene informazioni su una superclasse, ovvero una classe finestra basata su una classe esistente ma che utilizza una routine di finestra diversa. [m_lpszOrigName](#m_lpszorigname) e [pWndProc](#pwndproc) salvano rispettivamente il nome e la routine della finestra esistente.

## <a name="cwndclassinfopwndproc"></a><a name="pwndproc"></a>CWndClassInfo::pWndProc

Punta alla routine della finestra di una classe finestra esistente.

```
WNDPROC pWndProc;
```

### <a name="remarks"></a>Osservazioni

`CWndClassInfo`viene `pWndProc` utilizzato solo quando si include la macro [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) nella definizione della classe. In questo `CWndClassInfo` caso, registra una classe finestra basata su una classe esistente ma utilizza una routine finestra diversa. La routine della finestra della classe `pWndProc`finestra esistente viene salvata in . Per altre informazioni, vedere il CWndClassInfo cenno .For more information, see the [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md) overview.

## <a name="cwndclassinforegister"></a><a name="register"></a>CWndClassInfo::Register

Chiamato da [CWindowImpl::Create](../../atl/reference/cwindowimpl-class.md#create) per registrare la classe della finestra se non è ancora stata registrata.

```
ATOM Register(WNDPROC* pProc);
```

### <a name="parameters"></a>Parametri

*pProc*<br/>
[fuori] Specifica la routine della finestra originale di una classe finestra esistente.

### <a name="return-value"></a>Valore restituito

In caso di esito positivo, un atomo che identifica in modo univoco la classe finestra registrata. Altrimenti, è impostato su 0.

### <a name="remarks"></a>Osservazioni

Se è stata specificata la [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) (impostazione predefinita in `Register` [CWindowImpl](../../atl/reference/cwindowimpl-class.md)) o la macro [DECLARE_WND_CLASS_EX,](window-class-macros.md#declare_wnd_class_ex) registra una nuova classe finestra. In questo caso, il parametro *pProc* non viene utilizzato.

Se è stata specificata `Register` la macro [DECLARE_WND_SUPERCLASS,](window-class-macros.md#declare_wnd_superclass) registra una superclasse, ovvero una classe finestra basata su una classe esistente ma che utilizza una routine di finestra diversa. La routine finestra della classe finestra esistente viene restituita in *pProc*.

## <a name="see-also"></a>Vedere anche

[CComControl (classe)](../../atl/reference/ccomcontrol-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
