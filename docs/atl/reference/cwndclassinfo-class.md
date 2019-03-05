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
ms.openlocfilehash: 4aeac558c28d0ac89707423433e51f348bc35d29
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57274115"
---
# <a name="cwndclassinfo-class"></a>Classe CWndClassInfo

Questa classe fornisce metodi per la registrazione delle informazioni per una classe della finestra.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

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
|[m_atom](#m_atom)|Identifica in modo univoco la classe di finestra registrata.|
|[m_bSystemCursor](#m_bsystemcursor)|Specifica se la risorsa del cursore fa riferimento a un cursore di sistema o a un cursore contenuta in un modulo di risorse.|
|[m_lpszCursorID](#m_lpszcursorid)|Specifica il nome della risorsa cursore.|
|[m_lpszOrigName](#m_lpszorigname)|Contiene il nome di una classe di finestra esistente.|
|[m_szAutoName](#m_szautoname)|Contiene un nome generato ATL della classe della finestra.|
|[m_wc](#m_wc)|Conserva le informazioni di classe di finestra in un `WNDCLASSEX` struttura.|
|[pWndProc](#pwndproc)|Punti alla routine della finestra di una classe di finestra esistente.|

## <a name="remarks"></a>Note

`CWndClassInfo` gestisce le informazioni di una classe di finestra. In genere si usa `CWndClassInfo` tramite uno dei tre macro, DECLARE_WND_CLASS, DECLARE_WND_CLASS_EX o DECLARE_WND_SUPERCLASS, come descritto nella tabella seguente:

|Macro|Descrizione|
|-----------|-----------------|
|[DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class)|`CWndClassInfo` Registra le informazioni per una nuova classe di finestra.|
|[DECLARE_WND_CLASS_EX](window-class-macros.md#declare_wnd_class_ex)|`CWndClassInfo` Registra le informazioni per una nuova classe di finestra, inclusi i parametri di classe.|
|[DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass)|`CWndClassInfo` Registra le informazioni per una classe della finestra che si basa su una classe esistente, ma utilizza una procedura di finestra diversi. Questa tecnica è denominata creazione di superclassi.|

Per impostazione predefinita [CWindowImpl](../../atl/reference/cwindowimpl-class.md) include il `DECLARE_WND_CLASS` macro per creare una finestra basata su una nuova classe della finestra. DECLARE_WND_CLASS offre il colore di sfondo e gli stili predefiniti per il controllo. Se si desidera specificare lo stile e il colore di sfondo, personalmente, derivare la classe da `CWindowImpl` e includere la macro DECLARE_WND_CLASS_EX nella definizione di classe.

Se si desidera creare una finestra basata su una classe di finestra esistente, derivare la classe da `CWindowImpl` e includere la macro DECLARE_WND_SUPERCLASS nella definizione di classe. Ad esempio:

[!code-cpp[NVC_ATL_Windowing#43](../../atl/codesnippet/cpp/cwndclassinfo-class_1.h)]

Per altre informazioni sulle classi di finestre, vedere [classi di finestra](/windows/desktop/winmsg/window-classes) nel SDK di Windows.

Per altre informazioni sull'uso delle finestre in ATL, vedere l'articolo [classi di finestra ATL](../../atl/atl-window-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="m_atom"></a>  CWndClassInfo::m_atom

Contiene l'identificatore univoco per la classe di finestra registrata.

```
ATOM m_atom;
```

##  <a name="m_bsystemcursor"></a>  CWndClassInfo::m_bSystemCursor

Se TRUE, la risorsa del cursore di sistema venga caricata quando la classe finestra è registrata.

```
BOOL m_bSystemCursor;
```

### <a name="remarks"></a>Note

In caso contrario, la risorsa del cursore contenuta nel modulo verrà caricata.

`CWndClassInfo` viene utilizzato `m_bSystemCursor` solo quando il [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) (l'impostazione predefinita in [CWindowImpl](../../atl/reference/cwindowimpl-class.md)) o il [DECLARE_WND_CLASS_EX](window-class-macros.md#declare_wnd_class_ex) macro è specificata. In questo caso, `m_bSystemCursor` viene inizializzato su TRUE. Per altre informazioni, vedere la [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md) Panoramica.

##  <a name="m_lpszcursorid"></a>  CWndClassInfo::m_lpszCursorID

Specifica il nome della risorsa del cursore o l'identificatore di risorsa in zero all'interno della parola più significativa e la parola meno significativa.

```
LPCTSTR m_lpszCursorID;
```

### <a name="remarks"></a>Note

Quando la classe di finestra è registrata, l'handle per il cursore identificato da `m_lpszCursorID` viene recuperato e archiviato dal [m_wc](#m_wc).

`CWndClassInfo` viene utilizzato `m_lpszCursorID` solo quando il [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) (l'impostazione predefinita in [CWindowImpl](../../atl/reference/cwindowimpl-class.md)) o il [DECLARE_WND_CLASS_EX](window-class-macros.md#declare_wnd_class_ex) macro è specificata. In questo caso, `m_lpszCursorID` viene inizializzato su IDC_ARROW. Per altre informazioni, vedere la [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md) Panoramica.

##  <a name="m_lpszorigname"></a>  CWndClassInfo::m_lpszOrigName

Contiene il nome di una classe di finestra esistente.

```
LPCTSTR m_lpszOrigName;
```

### <a name="remarks"></a>Note

`CWndClassInfo` viene utilizzato `m_lpszOrigName` solo quando si include la [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) macro nella definizione della classe. In questo caso `CWndClassInfo` registra una classe di finestre basata sulla classe denominata da `m_lpszOrigName`. Per altre informazioni, vedere la [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md) Panoramica.

##  <a name="m_szautoname"></a>  CWndClassInfo::m_szAutoName

Contiene il nome della classe della finestra.

```
TCHAR m_szAutoName[13];
```

### <a name="remarks"></a>Note

`CWndClassInfo` Usa `m_szAutoName` solo se viene passato NULL il `WndClassName` parametro per [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class), il [DECLARE_WND_CLASS_EX](window-class-macros.md#declare_wnd_class_ex) oppure [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) . ATL creerà un nome quando la classe finestra è registrata.

##  <a name="m_wc"></a>  CWndClassInfo::m_wc

Mantiene le informazioni sulla classe di finestra in un [WNDCLASSEX](/windows/desktop/api/winuser/ns-winuser-tagwndclassexa) struttura.

```
WNDCLASSEX m_wc;
```

### <a name="remarks"></a>Note

Se è stato specificato il [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) (l'impostazione predefinita in [CWindowImpl](../../atl/reference/cwindowimpl-class.md)) o la [DECLARE_WND_CLASS_EX](window-class-macros.md#declare_wnd_class_ex) macro, `m_wc` contiene informazioni su un nuova classe della finestra.

Se è stato specificato il [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) macro, `m_wc` contiene informazioni su una superclasse, ovvero una classe della finestra che si basa su una classe esistente, ma utilizza una procedura di finestra diversi. [m_lpszOrigName](#m_lpszorigname) e [pWndProc](#pwndproc) salvare nome della classe finestra esistente e la procedura della finestra, rispettivamente.

##  <a name="pwndproc"></a>  CWndClassInfo::pWndProc

Punti alla routine della finestra di una classe di finestra esistente.

```
WNDPROC pWndProc;
```

### <a name="remarks"></a>Note

`CWndClassInfo` viene utilizzato `pWndProc` solo quando si include la [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) macro nella definizione della classe. In questo caso, `CWndClassInfo` registra una classe della finestra che si basa su una classe esistente, ma utilizza una procedura di finestra diversi. Procedura di finestra della classe finestra esistente viene salvato `pWndProc`. Per altre informazioni, vedere la [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md) Panoramica.

##  <a name="register"></a>  CWndClassInfo::Register

Chiamata eseguita dal [CWindowImpl::Create](../../atl/reference/cwindowimpl-class.md#create) per registrare la classe della finestra se non è ancora stato registrato.

```
ATOM Register(WNDPROC* pProc);
```

### <a name="parameters"></a>Parametri

*pProc*<br/>
[out] Specifica la procedura di finestra originale di una classe di finestra esistente.

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, un atomo che identifica in modo univoco la classe della finestra da registrare. In caso contrario, 0.

### <a name="remarks"></a>Note

Se è stato specificato il [DECLARE_WND_CLASS](window-class-macros.md#declare_wnd_class) (l'impostazione predefinita in [CWindowImpl](../../atl/reference/cwindowimpl-class.md)) o la [DECLARE_WND_CLASS_EX](window-class-macros.md#declare_wnd_class_ex) macro, `Register` registra una nuova classe della finestra. In questo caso, il *pProc* parametro non viene utilizzato.

Se è stato specificato il [DECLARE_WND_SUPERCLASS](window-class-macros.md#declare_wnd_superclass) macro, `Register` registra una superclasse, ovvero una classe della finestra che si basa su una classe esistente, ma utilizza una procedura di finestra diversi. Procedura di finestra della classe finestra esistente viene restituito in *pProc*.

## <a name="see-also"></a>Vedere anche

[Classe CComControl](../../atl/reference/ccomcontrol-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
