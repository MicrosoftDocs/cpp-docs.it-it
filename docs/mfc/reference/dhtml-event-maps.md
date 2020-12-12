---
description: 'Altre informazioni su: mappe eventi DHTML'
title: Mappe eventi DHTML
ms.date: 11/04/2016
f1_keywords:
- vc.macros.shared
helpviewer_keywords:
- event map macros [MFC]
- DHTML [MFC], event map macros
- macros [MFC], DHTML event map
- DHTML events [MFC], event map
- DHTML events [MFC]
ms.assetid: 9a2c8ae7-7216-4a5e-bc60-6b98695be0c6
ms.openlocfilehash: b9df8f1aa59472de033943efd28f5c688c61e706
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97220123"
---
# <a name="dhtml-event-maps"></a>Mappe eventi DHTML

Le macro seguenti possono essere utilizzate per gestire gli eventi DHTML.

## <a name="dhtml-event-map-macros"></a>Macro della mappa eventi DHTML

Le macro seguenti possono essere utilizzate per gestire gli eventi DHTML nelle classi derivate da [CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md).

|Nome|Description|
|-|-|
|[BEGIN_DHTML_EVENT_MAP](#begin_dhtml_event_map)|Contrassegna l'inizio della mappa eventi DHTML.|
|[BEGIN_DHTML_EVENT_MAP_INLINE](#begin_dhtml_event_map_inline)|Contrassegna l'inizio della mappa eventi DHTML.|
|[DECLARE_DHTML_EVENT_MAP](#declare_dhtml_event_map)|Dichiara la mappa eventi DHTML.|
|[DHTML_EVENT](#dhtml_event)|Utilizzato per gestire un evento a livello di documento per un singolo elemento HTML.|
|[DHTML_EVENT_AXCONTROL](#dhtml_event_axcontrol)|Utilizzato per gestire un evento generato da un controllo ActiveX.|
|[DHTML_EVENT_CLASS](#dhtml_event_class)|Utilizzato per gestire un evento a livello di documento per tutti gli elementi HTML con una particolare classe CSS.|
|[DHTML_EVENT_ELEMENT](#dhtml_event_element)|Utilizzato per gestire un evento a livello di elemento.|
|[DHTML_EVENT_ONAFTERUPDATE](#dhtml_event_onafterupdate)|Utilizzato per gestire l' `onafterupdate` evento da un elemento HTML.|
|[DHTML_EVENT_ONBEFOREUPDATE](#dhtml_event_onbeforeupdate)|Utilizzato per gestire l' `onbeforeupdate` evento da un elemento HTML.|
|[DHTML_EVENT_ONBLUR](#dhtml_event_onblur)|Utilizzato per gestire l' `onblur` evento da un elemento HTML.|
|[DHTML_EVENT_ONCHANGE](#dhtml_event_onchange)|Utilizzato per gestire l' `onchange` evento da un elemento HTML.|
|[DHTML_EVENT_ONCLICK](#dhtml_event_onclick)|Utilizzato per gestire l' `onclick` evento da un elemento HTML.|
|[DHTML_EVENT_ONDATAAVAILABLE](#dhtml_event_ondataavailable)|Utilizzato per gestire l' `ondataavailable` evento da un elemento HTML.|
|[DHTML_EVENT_ONDATASETCHANGED](#dhtml_event_ondatasetchanged)|Utilizzato per gestire l' `ondatasetchanged` evento da un elemento HTML.|
|[DHTML_EVENT_ONDATASETCOMPLETE](#dhtml_event_ondatasetcomplete)|Utilizzato per gestire l' `ondatasetcomplete` evento da un elemento HTML.|
|[DHTML_EVENT_ONDBLCLICK](#dhtml_event_ondblclick)|Utilizzato per gestire l' `ondblclick` evento da un elemento HTML.|
|[DHTML_EVENT_ONDRAGSTART](#dhtml_event_ondragstart)|Utilizzato per gestire l' `ondragstart` evento da un elemento HTML.|
|[DHTML_EVENT_ONERRORUPDATE](#dhtml_event_onerrorupdate)|Utilizzato per gestire l' `onerrorupdate` evento da un elemento HTML.|
|[DHTML_EVENT_ONFILTERCHANGE](#dhtml_event_onfilterchange)|Utilizzato per gestire l' `onfilterchange` evento da un elemento HTML.|
|[DHTML_EVENT_ONFOCUS](#dhtml_event_onfocus)|Utilizzato per gestire l' `onfocus` evento da un elemento HTML.|
|[DHTML_EVENT_ONHELP](#dhtml_event_onhelp)|Utilizzato per gestire l' `onhelp` evento da un elemento HTML.|
|[DHTML_EVENT_ONKEYDOWN](#dhtml_event_onkeydown)|Utilizzato per gestire l' `onkeydown` evento da un elemento HTML.|
|[DHTML_EVENT_ONKEYPRESS](#dhtml_event_onkeypress)|Utilizzato per gestire l' `onkeypress` evento da un elemento HTML.|
|[DHTML_EVENT_ONKEYUP](#dhtml_event_onkeyup)|Utilizzato per gestire l' `onkeyup` evento da un elemento HTML.|
|[DHTML_EVENT_ONMOUSEDOWN](#dhtml_event_onmousedown)|Utilizzato per gestire l' `onmousedown` evento da un elemento HTML.|
|[DHTML_EVENT_ONMOUSEMOVE](#dhtml_event_onmousemove)|Utilizzato per gestire l' `onmousemove` evento da un elemento HTML.|
|[DHTML_EVENT_ONMOUSEOUT](#dhtml_event_onmouseout)|Utilizzato per gestire l' `onmouseout` evento da un elemento HTML.|
|[DHTML_EVENT_ONMOUSEOVER](#dhtml_event_onmouseover)|Utilizzato per gestire l' `onmouseover` evento da un elemento HTML.|
|[DHTML_EVENT_ONMOUSEUP](#dhtml_event_onmouseup)|Utilizzato per gestire l' `onmouseup` evento da un elemento HTML.|
|[DHTML_EVENT_ONRESIZE](#dhtml_event_onresize)|Utilizzato per gestire l' `onresize` evento da un elemento HTML.|
|[DHTML_EVENT_ONROWENTER](#dhtml_event_onrowenter)|Utilizzato per gestire l' `onrowenter` evento da un elemento HTML.|
|[DHTML_EVENT_ONROWEXIT](#dhtml_event_onrowexit)|Utilizzato per gestire l' `onrowexit` evento da un elemento HTML.|
|[DHTML_EVENT_ONSELECTSTART](#dhtml_event_onselectstart)|Utilizzato per gestire l' `onselectstart` evento da un elemento HTML.|
|[DHTML_EVENT_TAG](#dhtml_event_tag)|Utilizzato per gestire un evento a livello di documento per tutti gli elementi con un tag HTML specifico.|
|[END_DHTML_EVENT_MAP](#end_dhtml_event_map)|Contrassegna la fine della mappa eventi DHTML.|
|[END_DHTML_EVENT_MAP_INLINE](#end_dhtml_event_map_inline)|Contrassegna la fine della mappa eventi DHTML. |

## <a name="url-event-map-macros"></a>Macro mappa eventi URL

Le macro seguenti possono essere utilizzate per gestire gli eventi DHTML nelle classi derivate da [CMultiPageDHtmlDialog](../../mfc/reference/cmultipagedhtmldialog-class.md).

|Nome|Description|
|-|-|
|[BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map)|Contrassegna l'inizio della mappa eventi dell'URL e del DHTML a più pagine.|
|[BEGIN_EMBED_DHTML_EVENT_MAP](#begin_embed_dhtml_event_map)|Contrassegna l'inizio di una mappa eventi DHTML incorporata.|
|[BEGIN_URL_ENTRIES](#begin_url_entries)|Contrassegna l'inizio di una mappa di voci di eventi URL.|
|[DECLARE_DHTML_URL_EVENT_MAP](#declare_dhtml_url_event_map)|Dichiara la mappa eventi dell'URL e del DHTML a più pagine.|
|[END_DHTML_URL_EVENT_MAP](#end_dhtml_url_event_map)|Contrassegna la fine della mappa eventi dell'URL e del DHTML a più pagine.|
|[END_EMBED_DHTML_EVENT_MAP](#end_embed_dhtml_event_map)|Contrassegna la fine di una mappa eventi DHTML incorporata.|
|[END_URL_ENTRIES](#end_url_entries)|Contrassegna la fine di una mappa di voci di eventi URL.|
|[URL_EVENT_ENTRY](#url_event_entry)|Esegue il mapping di un URL o di una risorsa HTML a una pagina in una finestra di dialogo a più pagine.|

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="begin_dhtml_event_map"></a><a name="begin_dhtml_event_map"></a> BEGIN_DHTML_EVENT_MAP

Contrassegna l'inizio della mappa eventi DHTML quando viene inserita nel file di origine per la classe identificata da `className` .

```cpp
BEGIN_DHTML_EVENT_MAP(className)
```

### <a name="parameters"></a>Parametri

*className*<br/>
Nome della classe che contiene la mappa eventi DHTML. Questa classe deve derivare direttamente o indirettamente da [CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md) e includere la macro [DECLARE_DHTML_EVENT_MAP](#declare_dhtml_event_map) all'interno della relativa definizione di classe.

### <a name="remarks"></a>Commenti

Aggiungere una mappa eventi DHTML alla classe per fornire informazioni a `CDHtmlDialog` che possono essere usate per indirizzare gli eventi generati da elementi HTML o controlli ActiveX in una pagina Web per il gestore delle funzioni nella classe.

Posizionare la macro BEGIN_DHTML_EVENT_MAP nel file di implementazione (. cpp) della classe seguito da DHTML_EVENT macro per gli eventi che la classe deve gestire (ad esempio, DHTML_EVENT_ONMOUSEOVER per gli eventi MouseOver). Utilizzare la macro [END_DHTML_EVENT_MAP](#end_dhtml_event_map) per contrassegnare la fine della mappa eventi. Queste macro implementano la funzione seguente:

`virtual const DHtmlEventMapEntry* GetDHtmlEventMap();`

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="begin_dhtml_event_map_inline"></a><a name="begin_dhtml_event_map_inline"></a> BEGIN_DHTML_EVENT_MAP_INLINE

Contrassegna l'inizio della mappa eventi DHTML all'interno della definizione della classe per *ClassName*.

```cpp
BEGIN_DHTML_EVENT_MAP_INLINE(className)
```

### <a name="parameters"></a>Parametri

*className*<br/>
Nome della classe che contiene la mappa eventi DHTML. Questa classe deve derivare direttamente o indirettamente da [CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md) e includere la macro [DECLARE_DHTML_EVENT_MAP](#declare_dhtml_event_map) all'interno della relativa definizione di classe.

### <a name="remarks"></a>Commenti

Aggiungere una mappa eventi DHTML alla classe per fornire informazioni a `CDHtmlDialog` che possono essere usate per indirizzare gli eventi generati da elementi HTML o controlli ActiveX in una pagina Web per il gestore delle funzioni nella classe.

Posizionare la macro BEGIN_DHTML_EVENT_MAP nel file di definizione della classe (. h) seguito da DHTML_EVENT macro per gli eventi che la classe deve gestire (ad esempio, DHTML_EVENT_ONMOUSEOVER per gli eventi MouseOver). Utilizzare la macro [END_DHTML_EVENT_MAP_INLINE](#end_dhtml_event_map_inline) per contrassegnare la fine della mappa eventi. Queste macro implementano la funzione seguente:

`virtual const DHtmlEventMapEntry* GetDHtmlEventMap();`

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="declare_dhtml_event_map"></a><a name="declare_dhtml_event_map"></a> DECLARE_DHTML_EVENT_MAP

Dichiara una mappa eventi DHTML in una definizione di classe.

```cpp
DECLARE_DHTML_EVENT_MAP()
```

### <a name="remarks"></a>Commenti

Questa macro deve essere utilizzata nella definizione di classi derivate da [CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md).

Utilizzare [BEGIN_DHTML_EVENT_MAP](#begin_dhtml_event_map) o [BEGIN_DHTML_EVENT_MAP_INLINE](#begin_dhtml_event_map_inline) per implementare la mappa.

[DECLARE_DHTML_EVENT_MAP](#declare_dhtml_event_map) dichiara la funzione seguente:

`virtual const DHtmlEventMapEntry* GetDHtmlEventMap( );`

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event"></a><a name="dhtml_event"></a> DHTML_EVENT

Gestisce (a livello di documento) un evento identificato da *DISPID* originato dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT(dispid, elemName,  memberFxn)
```

### <a name="parameters"></a>Parametri

*DISPID*<br/>
DISPID dell'evento da gestire.

*elemName*<br/>
Oggetto LPCWSTR che contiene l'ID dell'elemento HTML che ha origine l'evento o NULL per gestire gli eventi del documento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_axcontrol"></a><a name="dhtml_event_axcontrol"></a> DHTML_EVENT_AXCONTROL

Gestisce l'evento identificato da *DISPID* generato dal controllo ActiveX identificato da *ControlName*.

```cpp
DHTML_EVENT_AXCONTROL(dispid, controlName,  memberFxn)
```

### <a name="parameters"></a>Parametri

*DISPID*<br/>
ID dispatch dell'evento da gestire.

*controlName*<br/>
Un LPCWSTR che contiene l'ID HTML del controllo che attiva l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_class"></a><a name="dhtml_event_class"></a> DHTML_EVENT_CLASS

Gestisce (a livello di documento) un evento identificato da *DISPID* originato da qualsiasi elemento HTML con la classe CSS identificata da *elemName*.

```cpp
DHTML_EVENT_CLASS(dispid, elemName,  memberFxn)
```

### <a name="parameters"></a>Parametri

*DISPID*<br/>
ID dispatch dell'evento da gestire.

*elemName*<br/>
Oggetto LPCWSTR che contiene la classe CSS degli elementi HTML che forniscono l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_element"></a><a name="dhtml_event_element"></a> DHTML_EVENT_ELEMENT

Gestisce (in corrispondenza dell'elemento identificato da *elemName*) un evento identificato da *DISPID*.

```cpp
DHTML_EVENT_ELEMENT(dispid, elemName,  memberFxn)
```

### <a name="parameters"></a>Parametri

*DISPID*<br/>
ID dispatch dell'evento da gestire.

*elemName*<br/>
Oggetto LPCWSTR che contiene l'ID dell'elemento HTML che ha origine l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

Se questa macro viene utilizzata per gestire gli eventi di non bubbling, l'origine dell'evento sarà l'elemento identificato da *elemName*.

Se questa macro viene utilizzata per gestire gli eventi di bubbling, l'elemento identificato da *elemName* potrebbe non essere l'origine dell'evento (l'origine può essere qualsiasi elemento contenuto da *elemName*).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_onafterupdate"></a><a name="dhtml_event_onafterupdate"></a> DHTML_EVENT_ONAFTERUPDATE

Handle (a livello di documento) l' `onafterupdate` evento ha avuto origine dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONAFTERUPDATE(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Oggetto LPCWSTR che contiene l'ID dell'elemento HTML che ha origine l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_onbeforeupdate"></a><a name="dhtml_event_onbeforeupdate"></a> DHTML_EVENT_ONBEFOREUPDATE

Handle (a livello di documento) l' `onbeforeupdate` evento ha avuto origine dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONBEFOREUPDATE(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Oggetto LPCWSTR che contiene l'ID dell'elemento HTML che ha origine l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_onblur"></a><a name="dhtml_event_onblur"></a> DHTML_EVENT_ONBLUR

Gestisce l'evento a livello di elemento `onblur` . Si tratta di un evento di non bubbling.

```cpp
DHTML_EVENT_ONBLUR(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Oggetto LPCWSTR che contiene l'ID dell'elemento HTML che ha origine l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_onchange"></a><a name="dhtml_event_onchange"></a> DHTML_EVENT_ONCHANGE

Gestisce l'evento a livello di elemento `onchange` . Si tratta di un evento di non bubbling.

```cpp
DHTML_EVENT_ONCHANGE(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Oggetto LPCWSTR che contiene l'ID dell'elemento HTML che ha origine l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_onclick"></a><a name="dhtml_event_onclick"></a> DHTML_EVENT_ONCLICK

Handle (a livello di documento) l' `onclick` evento ha avuto origine dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONCLICK(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Oggetto LPCWSTR che contiene l'ID dell'elemento HTML che ha origine l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_ondataavailable"></a><a name="dhtml_event_ondataavailable"></a> DHTML_EVENT_ONDATAAVAILABLE

Handle (a livello di documento) l' `ondataavailable` evento ha avuto origine dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONDATAAVAILABLE(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Oggetto LPCWSTR che contiene l'ID dell'elemento HTML che ha origine l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_ondatasetchanged"></a><a name="dhtml_event_ondatasetchanged"></a> DHTML_EVENT_ONDATASETCHANGED

Handle (a livello di documento) l' `ondatasetchanged` evento ha avuto origine dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONDATASETCHANGED(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Oggetto LPCWSTR che contiene l'ID dell'elemento HTML che ha origine l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_ondatasetcomplete"></a><a name="dhtml_event_ondatasetcomplete"></a> DHTML_EVENT_ONDATASETCOMPLETE

Gestisce (a livello di documento) l' `ondatasetcomplete` evento originato dall'elemento HTML identificato da `elemName` .

```cpp
DHTML_EVENT_ONDATASETCOMPLETE(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Oggetto LPCWSTR che contiene l'ID dell'elemento HTML che ha origine l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_ondblclick"></a><a name="dhtml_event_ondblclick"></a> DHTML_EVENT_ONDBLCLICK

Handle (a livello di documento) l' `ondblclick` evento ha avuto origine dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONDBLCLICK(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Oggetto LPCWSTR che contiene l'ID dell'elemento HTML che ha origine l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_ondragstart"></a><a name="dhtml_event_ondragstart"></a> DHTML_EVENT_ONDRAGSTART

Handle (a livello di documento) l' `ondragstart` evento ha avuto origine dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONDRAGSTART(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Oggetto LPCWSTR che contiene l'ID dell'elemento HTML che ha origine l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_onerrorupdate"></a><a name="dhtml_event_onerrorupdate"></a> DHTML_EVENT_ONERRORUPDATE

Handle (a livello di documento) l' `onerrorupdate` evento ha avuto origine dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONERRORUPDATE(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Oggetto LPCWSTR che contiene l'ID dell'elemento HTML che ha origine l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_onfilterchange"></a><a name="dhtml_event_onfilterchange"></a> DHTML_EVENT_ONFILTERCHANGE

Handle (a livello di documento) l' `onfilterchange` evento ha avuto origine dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONFILTERCHANGE(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Oggetto LPCWSTR che contiene l'ID dell'elemento HTML che ha origine l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_onfocus"></a><a name="dhtml_event_onfocus"></a> DHTML_EVENT_ONFOCUS

Gestisce l'evento a livello di elemento `onfocus` . Si tratta di un evento di non bubbling.

```cpp
DHTML_EVENT_ONFOCUS(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Oggetto LPCWSTR che contiene l'ID dell'elemento HTML che ha origine l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_onhelp"></a><a name="dhtml_event_onhelp"></a> DHTML_EVENT_ONHELP

Handle (a livello di documento) l' `onhelp` evento ha avuto origine dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONHELP(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Oggetto LPCWSTR che contiene l'ID dell'elemento HTML che ha origine l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_onkeydown"></a><a name="dhtml_event_onkeydown"></a> DHTML_EVENT_ONKEYDOWN

Handle (a livello di documento) l' `onkeydown` evento ha avuto origine dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONKEYDOWN(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Oggetto LPCWSTR che contiene l'ID dell'elemento HTML che ha origine l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_onkeypress"></a><a name="dhtml_event_onkeypress"></a> DHTML_EVENT_ONKEYPRESS

Handle (a livello di documento) l' `onkeypress` evento ha avuto origine dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONKEYPRESS(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Oggetto LPCWSTR che contiene l'ID dell'elemento HTML che ha origine l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_onkeyup"></a><a name="dhtml_event_onkeyup"></a> DHTML_EVENT_ONKEYUP

Handle (a livello di documento) l' `onkeyup` evento ha avuto origine dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONKEYUP(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Oggetto LPCWSTR che contiene l'ID dell'elemento HTML che ha origine l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_onmousedown"></a><a name="dhtml_event_onmousedown"></a> DHTML_EVENT_ONMOUSEDOWN

Handle (a livello di documento) l' `onmousedown` evento ha avuto origine dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONMOUSEDOWN(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Oggetto LPCWSTR che contiene l'ID dell'elemento HTML che ha origine l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_onmousemove"></a><a name="dhtml_event_onmousemove"></a> DHTML_EVENT_ONMOUSEMOVE

Handle (a livello di documento) l' `onmousemove` evento ha avuto origine dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONMOUSEMOVE(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Oggetto LPCWSTR che contiene l'ID dell'elemento HTML che ha origine l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_onmouseout"></a><a name="dhtml_event_onmouseout"></a> DHTML_EVENT_ONMOUSEOUT

Handle (a livello di documento) l' `onmouseout` evento ha avuto origine dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONMOUSEOUT(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Oggetto LPCWSTR che contiene l'ID dell'elemento HTML che ha origine l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_onmouseover"></a><a name="dhtml_event_onmouseover"></a> DHTML_EVENT_ONMOUSEOVER

Handle (a livello di documento) l' `onmouseover` evento ha avuto origine dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONMOUSEOVER(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Oggetto LPCWSTR che contiene l'ID dell'elemento HTML che ha origine l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_onmouseup"></a><a name="dhtml_event_onmouseup"></a> DHTML_EVENT_ONMOUSEUP

Handle (a livello di documento) l' `onmouseup` evento ha avuto origine dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONMOUSEUP(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Oggetto LPCWSTR che contiene l'ID dell'elemento HTML che ha origine l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_onresize"></a><a name="dhtml_event_onresize"></a> DHTML_EVENT_ONRESIZE

Gestisce l'evento a livello di elemento `onresize` . Si tratta di un evento di non bubbling.

```cpp
DHTML_EVENT_ONRESIZE(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Oggetto LPCWSTR che contiene l'ID dell'elemento HTML che ha origine l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_onrowenter"></a><a name="dhtml_event_onrowenter"></a> DHTML_EVENT_ONROWENTER

Handle (a livello di documento) l' `onrowenter` evento ha avuto origine dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONROWENTER(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Oggetto LPCWSTR che contiene l'ID dell'elemento HTML che ha origine l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_onrowexit"></a><a name="dhtml_event_onrowexit"></a> DHTML_EVENT_ONROWEXIT

Handle (a livello di documento) l' `onrowexit` evento ha avuto origine dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONROWEXIT(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Oggetto LPCWSTR che contiene l'ID dell'elemento HTML che ha origine l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_onselectstart"></a><a name="dhtml_event_onselectstart"></a> DHTML_EVENT_ONSELECTSTART

Handle (a livello di documento) l' `onselectstart` evento ha avuto origine dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONSELECTSTART(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Oggetto LPCWSTR che contiene l'ID dell'elemento HTML che ha origine l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="dhtml_event_tag"></a><a name="dhtml_event_tag"></a> DHTML_EVENT_TAG

Gestisce (a livello di documento) un evento identificato da `dispid` originato da qualsiasi elemento HTML con il tag HTML identificato da *elemName*.

```cpp
DHTML_EVENT_TAG(dispid, elemName,  memberFxn)
```

### <a name="parameters"></a>Parametri

*DISPID*<br/>
ID dispatch dell'evento da gestire.

*elemName*<br/>
Tag HTML degli elementi HTML che forniscono l'evento.

*memberFxn*<br/>
Funzione del gestore per l'evento.

### <a name="remarks"></a>Commenti

Usare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="end_dhtml_event_map"></a><a name="end_dhtml_event_map"></a> END_DHTML_EVENT_MAP

Contrassegna la fine della mappa eventi DHTML.

```cpp
END_DHTML_EVENT_MAP()
```

### <a name="remarks"></a>Commenti

Deve essere utilizzato insieme a [BEGIN_DHTML_EVENT_MAP](#begin_dhtml_event_map).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="begin_dhtml_url_event_map"></a><a name="begin_dhtml_url_event_map"></a> BEGIN_DHTML_URL_EVENT_MAP

Avvia la definizione di una mappa eventi DHTML e URL in una finestra di dialogo a più pagine.

```cpp
BEGIN_DHTML_URL_EVENT_MAP()
```

### <a name="remarks"></a>Commenti

Inserire BEGIN_DHTML_URL_EVENT_MAP nel file di implementazione della classe derivata da [CMultiPageDHtmlDialog](../../mfc/reference/cmultipagedhtmldialog-class.md). Seguirla con le [mappe eventi DHTML incorporate](#begin_embed_dhtml_event_map) e le [voci URL](#begin_url_entries)e quindi chiuderla con [END_DHTML_URL_EVENT_MAP](#end_dhtml_url_event_map). Includere la macro [DECLARE_DHTML_URL_EVENT_MAP](#declare_dhtml_url_event_map) all'interno della definizione della classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#196](../../mfc/codesnippet/cpp/dhtml-event-maps_1.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="begin_embed_dhtml_event_map"></a><a name="begin_embed_dhtml_event_map"></a> BEGIN_EMBED_DHTML_EVENT_MAP

Avvia la definizione di una mappa eventi DHTML incorporata in una finestra di dialogo a più pagine.

```cpp
BEGIN_EMBED_DHTML_EVENT_MAP(className, mapName)
```

### <a name="parameters"></a>Parametri

*className*<br/>
Nome della classe che contiene la mappa dell'evento. Questa classe deve derivare direttamente o indirettamente da [CMultiPageDHtmlDialog](../../mfc/reference/cmultipagedhtmldialog-class.md). La mappa eventi DHTML incorporata deve trovarsi all'interno di una [mappa eventi DHTML e URL](#begin_dhtml_url_event_map).

*mapName*<br/>
Specifica la pagina la cui mappa eventi è. Questo corrisponde a *mapname* nella macro [URL_EVENT_ENTRY](#url_event_entry) effettivamente la definizione dell'URL o della risorsa HTML.

### <a name="remarks"></a>Commenti

Poiché una finestra di dialogo DHTML a più pagine è costituita da più pagine HTML, ciascuna delle quali può generare eventi DHTML, le mappe eventi incorporate vengono usate per eseguire il mapping degli eventi ai gestori in base a ogni pagina.

Le mappe eventi incorporate all'interno di una mappa eventi DHTML e URL sono costituite da una macro BEGIN_EMBED_DHTML_EVENT_MAP seguita da [DHTML_EVENT](#dhtml_event) macro e da una macro [END_EMBED_DHTML_EVENT_MAP](#end_embed_dhtml_event_map) .

Ogni mappa eventi incorporata richiede una [voce dell'evento URL](#url_event_entry) corrispondente per eseguire il mapping di *mapname* (specificato in BEGIN_EMBED_DHTML_EVENT_MAP) a un URL o a una risorsa HTML.

### <a name="example"></a>Esempio

Vedere l'esempio in [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="begin_url_entries"></a><a name="begin_url_entries"></a> BEGIN_URL_ENTRIES

Inizia la definizione di una mappa di voci di eventi URL in una finestra di dialogo a più pagine.

```cpp
BEGIN_URL_ENTRIES(className)
```

### <a name="parameters"></a>Parametri

*className*<br/>
Nome della classe che contiene la mappa di voci di eventi URL. Questa classe deve derivare direttamente o indirettamente da [CMultiPageDHtmlDialog](../../mfc/reference/cmultipagedhtmldialog-class.md). La mappa di voci dell'evento URL deve trovarsi all'interno di una [mappa eventi DHTML e URL](#begin_dhtml_url_event_map).

### <a name="remarks"></a>Commenti

Poiché una finestra di dialogo DHTML a più pagine è costituita da più pagine HTML, le voci di eventi URL vengono usate per eseguire il mapping di URL o risorse HTML a [mappe eventi DHTML incorporate](#begin_embed_dhtml_event_map)corrispondenti. Inserire URL_EVENT_ENTRY macro tra BEGIN_URL_ENTRIES e [END_URL_ENTRIES](#end_url_entries) macro.

### <a name="example"></a>Esempio

Vedere l'esempio in [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="declare_dhtml_url_event_map"></a><a name="declare_dhtml_url_event_map"></a> DECLARE_DHTML_URL_EVENT_MAP

Dichiara una mappa eventi DHTML e URL in una definizione di classe.

```cpp
DECLARE_DHTML_URL_EVENT_MAP()
```

### <a name="remarks"></a>Commenti

Questa macro deve essere utilizzata nella definizione di classi derivate da [CMultiPageDHtmlDialog](../../mfc/reference/cmultipagedhtmldialog-class.md).

Una mappa eventi DHTML e URL contiene [mappe eventi DHTML incorporate](#begin_embed_dhtml_event_map) e [voci di eventi URL](#begin_url_entries) per eseguire il mapping degli eventi DHTML ai gestori in base a ogni pagina. Utilizzare [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map) per implementare la mappa.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="end_dhtml_url_event_map"></a><a name="end_dhtml_url_event_map"></a> END_DHTML_URL_EVENT_MAP

Contrassegna la fine di una mappa eventi DHTML e URL.

```cpp
END_DHTML_URL_EVENT_MAP(className)
```

### <a name="parameters"></a>Parametri

*className*<br/>
Nome della classe che contiene la mappa dell'evento. Questa classe deve derivare direttamente o indirettamente da [CMultiPageDHtmlDialog](../../mfc/reference/cmultipagedhtmldialog-class.md). Deve corrispondere a *ClassName* nella macro [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map) corrispondente.

### <a name="example"></a>Esempio

Vedere l'esempio in [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="end_embed_dhtml_event_map"></a><a name="end_embed_dhtml_event_map"></a> END_EMBED_DHTML_EVENT_MAP

Contrassegna la fine di una mappa eventi DHTML incorporata.

```cpp
END_EMBED_DHTML_EVENT_MAP()
```

### <a name="example"></a>Esempio

Vedere l'esempio in [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="end_url_entries"></a><a name="end_url_entries"></a> END_URL_ENTRIES

Contrassegna la fine di una mappa di voci di eventi URL.

```cpp
END_URL_ENTRIES()
```

### <a name="example"></a>Esempio

Vedere l'esempio in [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="url_event_entry"></a><a name="url_event_entry"></a> URL_EVENT_ENTRY

Esegue il mapping di un URL o di una risorsa HTML a una pagina in una finestra di dialogo a più pagine.

```cpp
URL_EVENT_ENTRY(className, url,  mapName)
```

### <a name="parameters"></a>Parametri

*className*<br/>
Nome della classe che contiene la mappa di voci di eventi URL. Questa classe deve derivare direttamente o indirettamente da [CMultiPageDHtmlDialog](../../mfc/reference/cmultipagedhtmldialog-class.md). La mappa di voci dell'evento URL deve trovarsi all'interno di una [mappa eventi DHTML e URL](#begin_dhtml_url_event_map).

*url*<br/>
URL o risorsa HTML per la pagina.

*mapName*<br/>
Specifica la pagina il cui URL è *URL*. Corrisponde a *mapname* nella macro [BEGIN_EMBED_DHTML_EVENT_MAP](#begin_embed_dhtml_event_map) che esegue il mapping degli eventi da questa pagina.

### <a name="remarks"></a>Commenti

Se la pagina è una risorsa HTML, l' *URL* deve essere la rappresentazione di stringa del numero ID della risorsa (ovvero "123", non 123 o ID_HTMLRES1).

L'identificatore di pagina, *mapname*, è un simbolo arbitrario usato per collegare mapping di eventi DHTML incorporati a mappe di voci di eventi URL. È limitato nell'ambito della mappa eventi DHTML e URL.

### <a name="example"></a>Esempio

Vedere l'esempio in [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

## <a name="end_dhtml_event_map_inline"></a><a name="end_dhtml_event_map_inline"></a> END_DHTML_EVENT_MAP_INLINE

Contrassegna la fine della mappa eventi DHTML.

### <a name="syntax"></a>Sintassi

```cpp
END_DHTML_EVENT_MAP_INLINE( )
```

### <a name="remarks"></a>Osservazioni

Deve essere utilizzato insieme a [BEGIN_DHTML_EVENT_MAP_INLINE](#begin_dhtml_event_map_inline).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdhtml. h

## <a name="see-also"></a>Vedi anche

[Macro e funzioni globali](mfc-macros-and-globals.md)
