---
description: 'Altre informazioni su: classe CWndClassInfo'
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
ms.openlocfilehash: 7a857812fa35743fbab0968fb94095bf8fdcabcf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97140023"
---
# <a name="cwndclassinfo-class"></a>Classe CWndClassInfo

Questa classe fornisce metodi per la registrazione di informazioni per una classe finestra.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CWndClassInfo
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|-|-|
|[Registra](#register)|Registra la classe della finestra.|

### <a name="data-members"></a>Membri dei dati

|Nome|Description|
|-|-|
|[m_atom](#m_atom)|Identifica in modo univoco la classe della finestra registrata.|
|[m_bSystemCursor](#m_bsystemcursor)|Specifica se la risorsa del cursore fa riferimento a un cursore di sistema o a un cursore contenuto in una risorsa del modulo.|
|[m_lpszCursorID](#m_lpszcursorid)|Specifica il nome della risorsa del cursore.|
|[m_lpszOrigName](#m_lpszorigname)|Contiene il nome di una classe di finestra esistente.|
|[m_szAutoName](#m_szautoname)|Include un nome generato da ATL della classe Window.|
|[m_wc](#m_wc)|Mantiene le informazioni sulla classe della finestra in una `WNDCLASSEX` struttura.|
|[pWndProc](#pwndproc)|Punta alla routine della finestra di una classe di finestra esistente.|

## <a name="remarks"></a>Commenti

`CWndClassInfo` gestisce le informazioni di una classe di finestra. In genere si usa `CWndClassInfo` una delle tre macro, DECLARE_WND_CLASS, DECLARE_WND_CLASS_EX o DECLARE_WND_SUPERCLASS, come descritto nella tabella seguente:

|Macro|Description|
|-----------|-----------------|
|[DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class)|`CWndClassInfo` registra le informazioni per una nuova classe di finestra.|
|[DECLARE_WND_CLASS_EX](window-class-macros.md#declare_wnd_class_ex)|`CWndClassInfo` registra le informazioni per una nuova classe di finestra, inclusi i parametri della classe.|
|[DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass)|`CWndClassInfo` registra le informazioni per una classe della finestra basata su una classe esistente ma che utilizza una routine della finestra diversa. Questa tecnica è detta superclasse.|

Per impostazione predefinita, [CWindowImpl](../../atl/reference/cwindowimpl-class.md) include la `DECLARE_WND_CLASS` macro per creare una finestra basata su una nuova classe di finestra. DECLARE_WND_CLASS fornisce gli stili predefiniti e il colore di sfondo per il controllo. Se si desidera specificare lo stile e il colore di sfondo manualmente, derivare la classe da `CWindowImpl` e includere la macro DECLARE_WND_CLASS_EX nella definizione della classe.

Se si desidera creare una finestra basata su una classe di finestra esistente, derivare la classe da `CWindowImpl` e includere la macro DECLARE_WND_SUPERCLASS nella definizione della classe. Ad esempio:

[!code-cpp[NVC_ATL_Windowing#43](../../atl/codesnippet/cpp/cwndclassinfo-class_1.h)]

Per ulteriori informazioni sulle classi finestra, vedere [classi di finestra](/windows/win32/winmsg/window-classes) nella Windows SDK.

Per ulteriori informazioni sull'utilizzo di Windows in ATL, vedere l'articolo relativo alle [classi di finestra ATL](../../atl/atl-window-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

## <a name="cwndclassinfom_atom"></a><a name="m_atom"></a> CWndClassInfo:: m_atom

Contiene l'identificatore univoco per la classe della finestra registrata.

```
ATOM m_atom;
```

## <a name="cwndclassinfom_bsystemcursor"></a><a name="m_bsystemcursor"></a> CWndClassInfo:: m_bSystemCursor

Se è TRUE, la risorsa cursore di sistema verrà caricata quando la classe della finestra viene registrata.

```
BOOL m_bSystemCursor;
```

### <a name="remarks"></a>Commenti

In caso contrario, verrà caricata la risorsa di cursore contenuta nel modulo.

`CWndClassInfo` USA `m_bSystemCursor` solo quando viene specificata la [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) (impostazione predefinita in [CWindowImpl](../../atl/reference/cwindowimpl-class.md)) o la macro [DECLARE_WND_CLASS_EX](window-class-macros.md#declare_wnd_class_ex) . In questo caso, `m_bSystemCursor` viene inizializzato su true. Per ulteriori informazioni, vedere Panoramica di [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md) .

## <a name="cwndclassinfom_lpszcursorid"></a><a name="m_lpszcursorid"></a> CWndClassInfo:: m_lpszCursorID

Specifica il nome della risorsa del cursore o l'identificatore di risorsa nella parola di basso livello e zero nella parola più significativa.

```
LPCTSTR m_lpszCursorID;
```

### <a name="remarks"></a>Commenti

Quando la classe della finestra è registrata, l'handle per il cursore identificato da `m_lpszCursorID` viene recuperato e archiviato da [m_wc](#m_wc).

`CWndClassInfo` USA `m_lpszCursorID` solo quando viene specificata la [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) (impostazione predefinita in [CWindowImpl](../../atl/reference/cwindowimpl-class.md)) o la macro [DECLARE_WND_CLASS_EX](window-class-macros.md#declare_wnd_class_ex) . In questo caso, `m_lpszCursorID` viene inizializzato per IDC_ARROW. Per ulteriori informazioni, vedere Panoramica di [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md) .

## <a name="cwndclassinfom_lpszorigname"></a><a name="m_lpszorigname"></a> CWndClassInfo:: m_lpszOrigName

Contiene il nome di una classe di finestra esistente.

```
LPCTSTR m_lpszOrigName;
```

### <a name="remarks"></a>Commenti

`CWndClassInfo` USA `m_lpszOrigName` solo quando si include la macro [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) nella definizione della classe. In questo caso, `CWndClassInfo` registra una classe della finestra basata sulla classe denominata da `m_lpszOrigName` . Per ulteriori informazioni, vedere Panoramica di [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md) .

## <a name="cwndclassinfom_szautoname"></a><a name="m_szautoname"></a> CWndClassInfo:: m_szAutoName

Include il nome della classe della finestra.

```
TCHAR m_szAutoName[13];
```

### <a name="remarks"></a>Commenti

`CWndClassInfo` USA `m_szAutoName` solo se viene passato null per il `WndClassName` parametro da [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class), [DECLARE_WND_CLASS_EX](window-class-macros.md#declare_wnd_class_ex) o [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass). ATL creerà un nome quando la classe della finestra è registrata.

## <a name="cwndclassinfom_wc"></a><a name="m_wc"></a> CWndClassInfo:: m_wc

Mantiene le informazioni sulla classe della finestra in una struttura [WNDCLASSEX](/windows/win32/api/winuser/ns-winuser-wndclassexw) .

```
WNDCLASSEX m_wc;
```

### <a name="remarks"></a>Commenti

Se è stato specificato il [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) (impostazione predefinita in [CWindowImpl](../../atl/reference/cwindowimpl-class.md)) o la macro [DECLARE_WND_CLASS_EX](window-class-macros.md#declare_wnd_class_ex) , `m_wc` contiene informazioni su una nuova classe di finestra.

Se è stata specificata la macro [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) , `m_wc` contiene informazioni su una superclasse, ovvero una classe della finestra basata su una classe esistente ma che utilizza una routine della finestra diversa. [m_lpszOrigName](#m_lpszorigname) e [pWndProc](#pwndproc) salvano rispettivamente il nome e la routine della finestra della classe della finestra esistente.

## <a name="cwndclassinfopwndproc"></a><a name="pwndproc"></a> CWndClassInfo::p WndProc

Punta alla routine della finestra di una classe di finestra esistente.

```
WNDPROC pWndProc;
```

### <a name="remarks"></a>Commenti

`CWndClassInfo` USA `pWndProc` solo quando si include la macro [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) nella definizione della classe. In questo caso, `CWndClassInfo` registra una classe della finestra basata su una classe esistente ma utilizza una routine della finestra diversa. La routine della finestra della classe della finestra esistente viene salvata in `pWndProc` . Per ulteriori informazioni, vedere Panoramica di [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md) .

## <a name="cwndclassinforegister"></a><a name="register"></a> CWndClassInfo:: Register

Chiamata eseguita da [CWindowImpl:: create](../../atl/reference/cwindowimpl-class.md#create) per registrare la classe della finestra se non è stata ancora registrata.

```
ATOM Register(WNDPROC* pProc);
```

### <a name="parameters"></a>Parametri

*pProc*<br/>
out Specifica la procedura della finestra originale di una classe di finestra esistente.

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, un Atom che identifica in modo univoco la classe della finestra da registrare. Altrimenti, è impostato su 0.

### <a name="remarks"></a>Commenti

Se è stato specificato il [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) (impostazione predefinita in [CWindowImpl](../../atl/reference/cwindowimpl-class.md)) o la macro [DECLARE_WND_CLASS_EX](window-class-macros.md#declare_wnd_class_ex) , `Register` registra una nuova classe di finestra. In questo caso, il parametro *pProc* non viene utilizzato.

Se è stata specificata la macro [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) , `Register` registra una superclasse, una classe della finestra basata su una classe esistente ma utilizza una routine di finestra diversa. La routine della finestra della classe della finestra esistente viene restituita in *pProc*.

## <a name="see-also"></a>Vedi anche

[Classe CComControl](../../atl/reference/ccomcontrol-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
