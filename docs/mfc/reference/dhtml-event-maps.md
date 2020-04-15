---
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
ms.openlocfilehash: 30c755b2901374cffab3ce91d0683811ef6624b6
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365803"
---
# <a name="dhtml-event-maps"></a>Mappe eventi DHTML

Le macro seguenti possono essere utilizzate per gestire gli eventi DHTML.

## <a name="dhtml-event-map-macros"></a>Macro della mappa eventi DHTML

Le macro seguenti possono essere utilizzate per gestire gli eventi DHTML nelle classi derivate da [CDHtmlDialog.The](../../mfc/reference/cdhtmldialog-class.md)following macros can be used to handle DHTML events in CDHtmlDialog-derived classes.

|||
|-|-|
|[BEGIN_DHTML_EVENT_MAP](#begin_dhtml_event_map)|Contrassegna l'inizio della mappa eventi DHTML.|
|[BEGIN_DHTML_EVENT_MAP_INLINE](#begin_dhtml_event_map_inline)|Contrassegna l'inizio della mappa eventi DHTML.|
|[DECLARE_DHTML_EVENT_MAP](#declare_dhtml_event_map)|Dichiara la mappa eventi DHTML.|
|[DHTML_EVENT](#dhtml_event)|Utilizzato per gestire un evento a livello di documento per un singolo elemento HTML.|
|[DHTML_EVENT_AXCONTROL](#dhtml_event_axcontrol)|Utilizzato per gestire un evento generato da un controllo ActiveX.|
|[DHTML_EVENT_CLASS](#dhtml_event_class)|Utilizzato per gestire un evento a livello di documento per tutti gli elementi HTML con una particolare classe CSS.|
|[DHTML_EVENT_ELEMENT](#dhtml_event_element)|Utilizzato per gestire un evento a livello di elemento.|
|[DHTML_EVENT_ONAFTERUPDATE](#dhtml_event_onafterupdate)|Utilizzato per `onafterupdate` gestire l'evento da un elemento HTML.|
|[DHTML_EVENT_ONBEFOREUPDATE](#dhtml_event_onbeforeupdate)|Utilizzato per `onbeforeupdate` gestire l'evento da un elemento HTML.|
|[DHTML_EVENT_ONBLUR](#dhtml_event_onblur)|Utilizzato per `onblur` gestire l'evento da un elemento HTML.|
|[DHTML_EVENT_ONCHANGE](#dhtml_event_onchange)|Utilizzato per `onchange` gestire l'evento da un elemento HTML.|
|[DHTML_EVENT_ONCLICK](#dhtml_event_onclick)|Utilizzato per `onclick` gestire l'evento da un elemento HTML.|
|[DHTML_EVENT_ONDATAAVAILABLE](#dhtml_event_ondataavailable)|Utilizzato per `ondataavailable` gestire l'evento da un elemento HTML.|
|[DHTML_EVENT_ONDATASETCHANGED](#dhtml_event_ondatasetchanged)|Utilizzato per `ondatasetchanged` gestire l'evento da un elemento HTML.|
|[DHTML_EVENT_ONDATASETCOMPLETE](#dhtml_event_ondatasetcomplete)|Utilizzato per `ondatasetcomplete` gestire l'evento da un elemento HTML.|
|[DHTML_EVENT_ONDBLCLICK](#dhtml_event_ondblclick)|Utilizzato per `ondblclick` gestire l'evento da un elemento HTML.|
|[DHTML_EVENT_ONDRAGSTART](#dhtml_event_ondragstart)|Utilizzato per `ondragstart` gestire l'evento da un elemento HTML.|
|[DHTML_EVENT_ONERRORUPDATE](#dhtml_event_onerrorupdate)|Utilizzato per `onerrorupdate` gestire l'evento da un elemento HTML.|
|[DHTML_EVENT_ONFILTERCHANGE](#dhtml_event_onfilterchange)|Utilizzato per `onfilterchange` gestire l'evento da un elemento HTML.|
|[DHTML_EVENT_ONFOCUS](#dhtml_event_onfocus)|Utilizzato per `onfocus` gestire l'evento da un elemento HTML.|
|[DHTML_EVENT_ONHELP](#dhtml_event_onhelp)|Utilizzato per `onhelp` gestire l'evento da un elemento HTML.|
|[DHTML_EVENT_ONKEYDOWN](#dhtml_event_onkeydown)|Utilizzato per `onkeydown` gestire l'evento da un elemento HTML.|
|[DHTML_EVENT_ONKEYPRESS](#dhtml_event_onkeypress)|Utilizzato per `onkeypress` gestire l'evento da un elemento HTML.|
|[DHTML_EVENT_ONKEYUP](#dhtml_event_onkeyup)|Utilizzato per `onkeyup` gestire l'evento da un elemento HTML.|
|[DHTML_EVENT_ONMOUSEDOWN](#dhtml_event_onmousedown)|Utilizzato per `onmousedown` gestire l'evento da un elemento HTML.|
|[DHTML_EVENT_ONMOUSEMOVE](#dhtml_event_onmousemove)|Utilizzato per `onmousemove` gestire l'evento da un elemento HTML.|
|[DHTML_EVENT_ONMOUSEOUT](#dhtml_event_onmouseout)|Utilizzato per `onmouseout` gestire l'evento da un elemento HTML.|
|[DHTML_EVENT_ONMOUSEOVER](#dhtml_event_onmouseover)|Utilizzato per `onmouseover` gestire l'evento da un elemento HTML.|
|[DHTML_EVENT_ONMOUSEUP](#dhtml_event_onmouseup)|Utilizzato per `onmouseup` gestire l'evento da un elemento HTML.|
|[DHTML_EVENT_ONRESIZE](#dhtml_event_onresize)|Utilizzato per `onresize` gestire l'evento da un elemento HTML.|
|[DHTML_EVENT_ONROWENTER](#dhtml_event_onrowenter)|Utilizzato per `onrowenter` gestire l'evento da un elemento HTML.|
|[DHTML_EVENT_ONROWEXIT](#dhtml_event_onrowexit)|Utilizzato per `onrowexit` gestire l'evento da un elemento HTML.|
|[DHTML_EVENT_ONSELECTSTART](#dhtml_event_onselectstart)|Utilizzato per `onselectstart` gestire l'evento da un elemento HTML.|
|[DHTML_EVENT_TAG](#dhtml_event_tag)|Utilizzato per gestire un evento a livello di documento per tutti gli elementi con un tag HTML specifico.|
|[END_DHTML_EVENT_MAP](#end_dhtml_event_map)|Contrassegna la fine della mappa eventi DHTML.|
|[END_DHTML_EVENT_MAP_INLINE](#end_dhtml_event_map_inline)|Contrassegna la fine della mappa eventi DHTML. |

## <a name="url-event-map-macros"></a>Macro della mappa eventi URL

Le macro seguenti possono essere utilizzate per gestire gli eventi DHTML nelle classi derivate da [CMultiPageDHtmlDialog.](../../mfc/reference/cmultipagedhtmldialog-class.md)

|||
|-|-|
|[BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map)|Contrassegna l'inizio della mappa eventi DHTML e URL a più pagine.|
|[BEGIN_EMBED_DHTML_EVENT_MAP](#begin_embed_dhtml_event_map)|Contrassegna l'inizio di una mappa eventi DHTML incorporata.|
|[BEGIN_URL_ENTRIES](#begin_url_entries)|Contrassegna l'inizio di una mappa delle voci di eventi URL.|
|[DECLARE_DHTML_URL_EVENT_MAP](#declare_dhtml_url_event_map)|Dichiara il DHTML a più pagine e la mappa eventi URL.|
|[END_DHTML_URL_EVENT_MAP](#end_dhtml_url_event_map)|Contrassegna la fine della mappa eventi DHTML e URL a più pagine.|
|[END_EMBED_DHTML_EVENT_MAP](#end_embed_dhtml_event_map)|Contrassegna la fine di una mappa eventi DHTML incorporata.|
|[END_URL_ENTRIES](#end_url_entries)|Contrassegna la fine di una mappa delle voci di eventi URL.|
|[URL_EVENT_ENTRY](#url_event_entry)|Esegue il mapping di un URL o di una risorsa HTML a una pagina in una finestra di dialogo a più pagine.|

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="begin_dhtml_event_map"></a><a name="begin_dhtml_event_map"></a>BEGIN_DHTML_EVENT_MAP

Contrassegna l'inizio della mappa eventi DHTML quando viene `className`inserita nel file di origine per la classe identificata da .

```cpp
BEGIN_DHTML_EVENT_MAP(className)
```

### <a name="parameters"></a>Parametri

*Classname*<br/>
Nome della classe contenente la mappa eventi DHTML. Questa classe deve derivare direttamente o indirettamente da [CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md) e includere la macro [DECLARE_DHTML_EVENT_MAP](#declare_dhtml_event_map) all'interno della relativa definizione di classe.

### <a name="remarks"></a>Osservazioni

Aggiungere una mappa eventi DHTML alla `CDHtmlDialog` classe per fornire informazioni che possono essere utilizzate per instradare gli eventi generati da elementi HTML o controlli ActiveX in una pagina Web alle funzioni di gestione nella classe.

Inserire la macro BEGIN_DHTML_EVENT_MAP nel file di implementazione della classe (cpp) seguita da DHTML_EVENT macro per gli eventi che la classe deve gestire (ad esempio, DHTML_EVENT_ONMOUSEOVER per gli eventi di passaggio del mouse). Utilizzare la macro [END_DHTML_EVENT_MAP](#end_dhtml_event_map) per contrassegnare la fine della mappa eventi. Queste macro implementano la seguente funzione:

`virtual const DHtmlEventMapEntry* GetDHtmlEventMap();`

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="begin_dhtml_event_map_inline"></a><a name="begin_dhtml_event_map_inline"></a>BEGIN_DHTML_EVENT_MAP_INLINE

Contrassegna l'inizio della mappa eventi DHTML all'interno della definizione di classe per *className*.

```cpp
BEGIN_DHTML_EVENT_MAP_INLINE(className)
```

### <a name="parameters"></a>Parametri

*Classname*<br/>
Nome della classe contenente la mappa eventi DHTML. Questa classe deve derivare direttamente o indirettamente da [CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md) e includere la macro [DECLARE_DHTML_EVENT_MAP](#declare_dhtml_event_map) all'interno della relativa definizione di classe.

### <a name="remarks"></a>Osservazioni

Aggiungere una mappa eventi DHTML alla `CDHtmlDialog` classe per fornire informazioni che possono essere utilizzate per instradare gli eventi generati da elementi HTML o controlli ActiveX in una pagina Web alle funzioni di gestione nella classe.

Inserire la BEGIN_DHTML_EVENT_MAP macro nel file di definizione (h) della classe seguita da DHTML_EVENT macro per gli eventi che la classe deve gestire (ad esempio, DHTML_EVENT_ONMOUSEOVER per gli eventi di passaggio del mouse). Utilizzare la macro [END_DHTML_EVENT_MAP_INLINE](#end_dhtml_event_map_inline) per contrassegnare la fine della mappa eventi. Queste macro implementano la seguente funzione:

`virtual const DHtmlEventMapEntry* GetDHtmlEventMap();`

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="declare_dhtml_event_map"></a><a name="declare_dhtml_event_map"></a>DECLARE_DHTML_EVENT_MAP

Dichiara una mappa eventi DHTML in una definizione di classe.

```cpp
DECLARE_DHTML_EVENT_MAP()
```

### <a name="remarks"></a>Osservazioni

Questa macro deve essere utilizzata nella definizione di [CDHtmlDialog-classi](../../mfc/reference/cdhtmldialog-class.md)derivate.

Utilizzare [BEGIN_DHTML_EVENT_MAP](#begin_dhtml_event_map) o [BEGIN_DHTML_EVENT_MAP_INLINE](#begin_dhtml_event_map_inline) per implementare la mappa.

[DECLARE_DHTML_EVENT_MAP](#declare_dhtml_event_map) dichiara la funzione seguente:

`virtual const DHtmlEventMapEntry* GetDHtmlEventMap( );`

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event"></a><a name="dhtml_event"></a>DHTML_EVENT

Gestisce (a livello di documento) un evento identificato da *dispid* originato dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT(dispid, elemName,  memberFxn)
```

### <a name="parameters"></a>Parametri

*Dispid*<br/>
DISPID dell'evento da gestire.

*elemName*<br/>
Oggetto LPCWSTR che contiene l'ID dell'elemento HTML che codifica l'evento oppure NULL per gestire gli eventi del documento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_axcontrol"></a><a name="dhtml_event_axcontrol"></a>DHTML_EVENT_AXCONTROL

Gestisce l'evento identificato dal *dispid* generato dal controllo ActiveX identificato da *controlName*.

```cpp
DHTML_EVENT_AXCONTROL(dispid, controlName,  memberFxn)
```

### <a name="parameters"></a>Parametri

*Dispid*<br/>
ID di invio dell'evento da gestire.

*Nomecontrollo*<br/>
Un LPCWSTR che contiene l'ID HTML del controllo che genera l'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_class"></a><a name="dhtml_event_class"></a>DHTML_EVENT_CLASS

Gestisce (a livello di documento) un evento identificato da *dispid* originato da qualsiasi elemento HTML con la classe CSS identificata da *elemName*.

```cpp
DHTML_EVENT_CLASS(dispid, elemName,  memberFxn)
```

### <a name="parameters"></a>Parametri

*Dispid*<br/>
ID di invio dell'evento da gestire.

*elemName*<br/>
Un LPCWSTR che contiene la classe CSS degli elementi HTML che si ritrovano all'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_element"></a><a name="dhtml_event_element"></a>DHTML_EVENT_ELEMENT

Gestisce (in corrispondenza dell'elemento identificato da *elemName*) un evento identificato da *dispid*.

```cpp
DHTML_EVENT_ELEMENT(dispid, elemName,  memberFxn)
```

### <a name="parameters"></a>Parametri

*Dispid*<br/>
ID di invio dell'evento da gestire.

*elemName*<br/>
Un LPCWSTR che contiene l'ID dell'elemento HTML che ospita l'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

Se questa macro viene utilizzata per gestire gli eventi non di bubbling, l'origine dell'evento sarà l'elemento identificato da *elemName*.

Se questa macro viene utilizzata per gestire gli eventi di bubbling, l'elemento identificato da *elemName* potrebbe non essere l'origine dell'evento (l'origine potrebbe essere qualsiasi elemento contenuto da *elemName*).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_onafterupdate"></a><a name="dhtml_event_onafterupdate"></a>DHTML_EVENT_ONAFTERUPDATE

Gestisce (a livello `onafterupdate` di documento) l'evento originato dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONAFTERUPDATE(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Un LPCWSTR che contiene l'ID dell'elemento HTML che ospita l'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_onbeforeupdate"></a><a name="dhtml_event_onbeforeupdate"></a>DHTML_EVENT_ONBEFOREUPDATE

Gestisce (a livello `onbeforeupdate` di documento) l'evento originato dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONBEFOREUPDATE(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Un LPCWSTR che contiene l'ID dell'elemento HTML che ospita l'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_onblur"></a><a name="dhtml_event_onblur"></a>DHTML_EVENT_ONBLUR

Gestisce (a livello `onblur` di elemento) l'evento. Si tratta di un evento non di bubbling.

```cpp
DHTML_EVENT_ONBLUR(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Un LPCWSTR che contiene l'ID dell'elemento HTML che ospita l'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_onchange"></a><a name="dhtml_event_onchange"></a>DHTML_EVENT_ONCHANGE

Gestisce (a livello `onchange` di elemento) l'evento. Si tratta di un evento non di bubbling.

```cpp
DHTML_EVENT_ONCHANGE(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Un LPCWSTR che contiene l'ID dell'elemento HTML che ospita l'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_onclick"></a><a name="dhtml_event_onclick"></a>DHTML_EVENT_ONCLICK

Gestisce (a livello `onclick` di documento) l'evento originato dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONCLICK(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Un LPCWSTR che contiene l'ID dell'elemento HTML che ospita l'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_ondataavailable"></a><a name="dhtml_event_ondataavailable"></a>DHTML_EVENT_ONDATAAVAILABLE

Gestisce (a livello `ondataavailable` di documento) l'evento originato dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONDATAAVAILABLE(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Un LPCWSTR che contiene l'ID dell'elemento HTML che ospita l'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_ondatasetchanged"></a><a name="dhtml_event_ondatasetchanged"></a>DHTML_EVENT_ONDATASETCHANGED

Gestisce (a livello `ondatasetchanged` di documento) l'evento originato dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONDATASETCHANGED(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Un LPCWSTR che contiene l'ID dell'elemento HTML che ospita l'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_ondatasetcomplete"></a><a name="dhtml_event_ondatasetcomplete"></a>DHTML_EVENT_ONDATASETCOMPLETE

Gestisce (a livello `ondatasetcomplete` di documento) l'evento `elemName`originato dall'elemento HTML identificato da .

```cpp
DHTML_EVENT_ONDATASETCOMPLETE(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Un LPCWSTR che contiene l'ID dell'elemento HTML che ospita l'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_ondblclick"></a><a name="dhtml_event_ondblclick"></a>DHTML_EVENT_ONDBLCLICK

Gestisce (a livello `ondblclick` di documento) l'evento originato dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONDBLCLICK(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Un LPCWSTR che contiene l'ID dell'elemento HTML che ospita l'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_ondragstart"></a><a name="dhtml_event_ondragstart"></a>DHTML_EVENT_ONDRAGSTART

Gestisce (a livello `ondragstart` di documento) l'evento originato dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONDRAGSTART(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Un LPCWSTR che contiene l'ID dell'elemento HTML che ospita l'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_onerrorupdate"></a><a name="dhtml_event_onerrorupdate"></a>DHTML_EVENT_ONERRORUPDATE

Gestisce (a livello `onerrorupdate` di documento) l'evento originato dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONERRORUPDATE(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Un LPCWSTR che contiene l'ID dell'elemento HTML che ospita l'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_onfilterchange"></a><a name="dhtml_event_onfilterchange"></a>DHTML_EVENT_ONFILTERCHANGE

Gestisce (a livello `onfilterchange` di documento) l'evento originato dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONFILTERCHANGE(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Un LPCWSTR che contiene l'ID dell'elemento HTML che ospita l'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_onfocus"></a><a name="dhtml_event_onfocus"></a>DHTML_EVENT_ONFOCUS

Gestisce (a livello `onfocus` di elemento) l'evento. Si tratta di un evento non di bubbling.

```cpp
DHTML_EVENT_ONFOCUS(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Un LPCWSTR che contiene l'ID dell'elemento HTML che ospita l'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_onhelp"></a><a name="dhtml_event_onhelp"></a>DHTML_EVENT_ONHELP

Gestisce (a livello `onhelp` di documento) l'evento originato dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONHELP(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Un LPCWSTR che contiene l'ID dell'elemento HTML che ospita l'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_onkeydown"></a><a name="dhtml_event_onkeydown"></a>DHTML_EVENT_ONKEYDOWN

Gestisce (a livello `onkeydown` di documento) l'evento originato dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONKEYDOWN(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Un LPCWSTR che contiene l'ID dell'elemento HTML che ospita l'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_onkeypress"></a><a name="dhtml_event_onkeypress"></a>DHTML_EVENT_ONKEYPRESS

Gestisce (a livello `onkeypress` di documento) l'evento originato dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONKEYPRESS(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Un LPCWSTR che contiene l'ID dell'elemento HTML che ospita l'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_onkeyup"></a><a name="dhtml_event_onkeyup"></a>DHTML_EVENT_ONKEYUP

Gestisce (a livello `onkeyup` di documento) l'evento originato dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONKEYUP(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Un LPCWSTR che contiene l'ID dell'elemento HTML che ospita l'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_onmousedown"></a><a name="dhtml_event_onmousedown"></a>DHTML_EVENT_ONMOUSEDOWN

Gestisce (a livello `onmousedown` di documento) l'evento originato dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONMOUSEDOWN(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Un LPCWSTR che contiene l'ID dell'elemento HTML che ospita l'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_onmousemove"></a><a name="dhtml_event_onmousemove"></a>DHTML_EVENT_ONMOUSEMOVE

Gestisce (a livello `onmousemove` di documento) l'evento originato dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONMOUSEMOVE(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Un LPCWSTR che contiene l'ID dell'elemento HTML che ospita l'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_onmouseout"></a><a name="dhtml_event_onmouseout"></a>DHTML_EVENT_ONMOUSEOUT

Gestisce (a livello `onmouseout` di documento) l'evento originato dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONMOUSEOUT(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Un LPCWSTR che contiene l'ID dell'elemento HTML che ospita l'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_onmouseover"></a><a name="dhtml_event_onmouseover"></a>DHTML_EVENT_ONMOUSEOVER

Gestisce (a livello `onmouseover` di documento) l'evento originato dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONMOUSEOVER(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Un LPCWSTR che contiene l'ID dell'elemento HTML che ospita l'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_onmouseup"></a><a name="dhtml_event_onmouseup"></a>DHTML_EVENT_ONMOUSEUP

Gestisce (a livello `onmouseup` di documento) l'evento originato dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONMOUSEUP(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Un LPCWSTR che contiene l'ID dell'elemento HTML che ospita l'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_onresize"></a><a name="dhtml_event_onresize"></a>DHTML_EVENT_ONRESIZE

Gestisce (a livello `onresize` di elemento) l'evento. Si tratta di un evento non di bubbling.

```cpp
DHTML_EVENT_ONRESIZE(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Un LPCWSTR che contiene l'ID dell'elemento HTML che ospita l'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_onrowenter"></a><a name="dhtml_event_onrowenter"></a>DHTML_EVENT_ONROWENTER

Gestisce (a livello `onrowenter` di documento) l'evento originato dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONROWENTER(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Un LPCWSTR che contiene l'ID dell'elemento HTML che ospita l'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_onrowexit"></a><a name="dhtml_event_onrowexit"></a>DHTML_EVENT_ONROWEXIT

Gestisce (a livello `onrowexit` di documento) l'evento originato dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONROWEXIT(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Un LPCWSTR che contiene l'ID dell'elemento HTML che ospita l'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_onselectstart"></a><a name="dhtml_event_onselectstart"></a>DHTML_EVENT_ONSELECTSTART

Gestisce (a livello `onselectstart` di documento) l'evento originato dall'elemento HTML identificato da *elemName*.

```cpp
DHTML_EVENT_ONSELECTSTART(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
Un LPCWSTR che contiene l'ID dell'elemento HTML che ospita l'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="dhtml_event_tag"></a><a name="dhtml_event_tag"></a>DHTML_EVENT_TAG

Gestisce (a livello di documento) un evento identificato `dispid` da qualsiasi elemento HTML con il tag HTML identificato da *elemName*.

```cpp
DHTML_EVENT_TAG(dispid, elemName,  memberFxn)
```

### <a name="parameters"></a>Parametri

*Dispid*<br/>
ID di invio dell'evento da gestire.

*elemName*<br/>
Tag HTML degli elementi HTML che codificano l'evento.

*memberFxn (parte utente)*<br/>
La funzione del gestore per l'evento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa macro per aggiungere una voce alla [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="end_dhtml_event_map"></a><a name="end_dhtml_event_map"></a>END_DHTML_EVENT_MAP

Contrassegna la fine della mappa eventi DHTML.

```cpp
END_DHTML_EVENT_MAP()
```

### <a name="remarks"></a>Osservazioni

Deve essere utilizzato insieme [a BEGIN_DHTML_EVENT_MAP](#begin_dhtml_event_map).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="begin_dhtml_url_event_map"></a><a name="begin_dhtml_url_event_map"></a>BEGIN_DHTML_URL_EVENT_MAP

Avvia la definizione di una mappa eventi DHTML e URL in una finestra di dialogo a più pagine.

```cpp
BEGIN_DHTML_URL_EVENT_MAP()
```

### <a name="remarks"></a>Osservazioni

Inserire BEGIN_DHTML_URL_EVENT_MAP nel file di implementazione della classe derivata da [CMultiPageDHtmlDialog.](../../mfc/reference/cmultipagedhtmldialog-class.md) Seguitelo con [mappe eventi DHTML incorporate](#begin_embed_dhtml_event_map) e voci [URL](#begin_url_entries), quindi chiudetelo con [END_DHTML_URL_EVENT_MAP](#end_dhtml_url_event_map). Includere la macro [di DECLARE_DHTML_URL_EVENT_MAP](#declare_dhtml_url_event_map) all'interno della definizione della classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#196](../../mfc/codesnippet/cpp/dhtml-event-maps_1.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="begin_embed_dhtml_event_map"></a><a name="begin_embed_dhtml_event_map"></a>BEGIN_EMBED_DHTML_EVENT_MAP

Avvia la definizione di una mappa eventi DHTML incorporata in una finestra di dialogo a più pagine.

```cpp
BEGIN_EMBED_DHTML_EVENT_MAP(className, mapName)
```

### <a name="parameters"></a>Parametri

*Classname*<br/>
Nome della classe contenente la mappa eventi. Questa classe deve derivare direttamente o indirettamente da [CMultiPageDHtmlDialog](../../mfc/reference/cmultipagedhtmldialog-class.md). La mappa eventi DHTML incorporata deve trovarsi all'interno di una [mappa eventi DHTML e URL](#begin_dhtml_url_event_map).

*mapName (nomemappa)*<br/>
Specifica la pagina di cui si trova la mappa eventi. Corrisponde a *mapName* nella [URL_EVENT_ENTRY](#url_event_entry) macro che definisce effettivamente l'URL o la risorsa HTML.

### <a name="remarks"></a>Osservazioni

Poiché una finestra di dialogo DHTML a più pagine è costituita da più pagine HTML, ognuna delle quali può generare eventi DHTML, le mappe eventi incorporate vengono utilizzate per eseguire il mapping degli eventi ai gestori per pagina.

I mapping eventi incorporati all'interno di una mappa eventi DHTML e URL sono costituiti da una macro di BEGIN_EMBED_DHTML_EVENT_MAP seguita da macro [DHTML_EVENT](#dhtml_event) e da una macro [END_EMBED_DHTML_EVENT_MAP.](#end_embed_dhtml_event_map)

Ogni mappa eventi incorporata richiede una voce di [evento URL](#url_event_entry) corrispondente per mappare *mapName* (specificato in BEGIN_EMBED_DHTML_EVENT_MAP) a un URL o a una risorsa HTML.

### <a name="example"></a>Esempio

Vedere l'esempio in [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="begin_url_entries"></a><a name="begin_url_entries"></a>BEGIN_URL_ENTRIES

Inizia la definizione di una mappa di voci di eventi URL in una finestra di dialogo a più pagine.

```cpp
BEGIN_URL_ENTRIES(className)
```

### <a name="parameters"></a>Parametri

*Classname*<br/>
Nome della classe che contiene la mappa di voci di eventi URL. Questa classe deve derivare direttamente o indirettamente da [CMultiPageDHtmlDialog](../../mfc/reference/cmultipagedhtmldialog-class.md). La mappa dell'immissione degli eventi URL deve trovarsi all'interno di una [mappa eventi DHTML e URL](#begin_dhtml_url_event_map).

### <a name="remarks"></a>Osservazioni

Poiché una finestra di dialogo DHTML a più pagine è costituita da più pagine HTML, le voci di evento URL vengono utilizzate per eseguire il mapping di URL o risorse HTML alle [mappe eventi DHTML incorporate](#begin_embed_dhtml_event_map)corrispondenti. Inserire URL_EVENT_ENTRY macro tra BEGIN_URL_ENTRIES e [END_URL_ENTRIES](#end_url_entries) macro.

### <a name="example"></a>Esempio

Vedere l'esempio in [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="declare_dhtml_url_event_map"></a><a name="declare_dhtml_url_event_map"></a>DECLARE_DHTML_URL_EVENT_MAP

Dichiara una mappa eventi DHTML e URL in una definizione di classe.

```cpp
DECLARE_DHTML_URL_EVENT_MAP()
```

### <a name="remarks"></a>Osservazioni

Questa macro deve essere utilizzata nella definizione di [CMultiPageDHtmlDialog-classi](../../mfc/reference/cmultipagedhtmldialog-class.md)derivate.

Una mappa eventi DHTML e URL contiene [mappe eventi DHTML incorporate](#begin_embed_dhtml_event_map) e voci di evento [URL](#begin_url_entries) per eseguire il mapping di eventi DHTML ai gestori per pagina. Utilizzare [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map) per implementare la mappa.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="end_dhtml_url_event_map"></a><a name="end_dhtml_url_event_map"></a>END_DHTML_URL_EVENT_MAP

Contrassegna la fine di una mappa eventi DHTML e URL.

```cpp
END_DHTML_URL_EVENT_MAP(className)
```

### <a name="parameters"></a>Parametri

*Classname*<br/>
Nome della classe contenente la mappa eventi. Questa classe deve derivare direttamente o indirettamente da [CMultiPageDHtmlDialog](../../mfc/reference/cmultipagedhtmldialog-class.md). Deve corrispondere *a className* nella macro [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map) corrispondente.

### <a name="example"></a>Esempio

Vedere l'esempio in [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="end_embed_dhtml_event_map"></a><a name="end_embed_dhtml_event_map"></a>END_EMBED_DHTML_EVENT_MAP

Contrassegna la fine di una mappa eventi DHTML incorporata.

```cpp
END_EMBED_DHTML_EVENT_MAP()
```

### <a name="example"></a>Esempio

Vedere l'esempio in [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="end_url_entries"></a><a name="end_url_entries"></a>END_URL_ENTRIES

Contrassegna la fine di una mappa delle voci di eventi URL.

```cpp
END_URL_ENTRIES()
```

### <a name="example"></a>Esempio

Vedere l'esempio in [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="url_event_entry"></a><a name="url_event_entry"></a>URL_EVENT_ENTRY

Esegue il mapping di un URL o di una risorsa HTML a una pagina in una finestra di dialogo a più pagine.

```cpp
URL_EVENT_ENTRY(className, url,  mapName)
```

### <a name="parameters"></a>Parametri

*Classname*<br/>
Nome della classe che contiene la mappa di voci di eventi URL. Questa classe deve derivare direttamente o indirettamente da [CMultiPageDHtmlDialog](../../mfc/reference/cmultipagedhtmldialog-class.md). La mappa dell'immissione degli eventi URL deve trovarsi all'interno di una [mappa eventi DHTML e URL](#begin_dhtml_url_event_map).

*url*<br/>
L'URL o la risorsa HTML per la pagina.

*mapName (nomemappa)*<br/>
Specifica la pagina il cui URL è *url*. Corrisponde a *mapName* nella macro [BEGIN_EMBED_DHTML_EVENT_MAP](#begin_embed_dhtml_event_map) che esegue il mapping degli eventi da questa pagina.

### <a name="remarks"></a>Osservazioni

Se la pagina è una risorsa HTML, *url* deve essere la rappresentazione di stringa del numero ID della risorsa (ovvero, "123", non 123 o ID_HTMLRES1).

L'identificatore di pagina, *mapName*, è un simbolo arbitrario utilizzato per collegare il mapping di eventi DHTML incorporati alle mappe delle voci di eventi URL. L'ambito è limitato alla mappa eventi DHTML e URL.

### <a name="example"></a>Esempio

Vedere l'esempio in [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml.h

## <a name="end_dhtml_event_map_inline"></a><a name="end_dhtml_event_map_inline"></a>END_DHTML_EVENT_MAP_INLINE

Contrassegna la fine della mappa eventi DHTML.

### <a name="syntax"></a>Sintassi

```cpp
END_DHTML_EVENT_MAP_INLINE( )
```

### <a name="remarks"></a>Osservazioni

Deve essere utilizzato insieme [a BEGIN_DHTML_EVENT_MAP_INLINE](#begin_dhtml_event_map_inline).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdhtml.h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](mfc-macros-and-globals.md)
