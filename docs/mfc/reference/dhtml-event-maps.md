---
title: Mappe eventi DHTML | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.macros.shared
dev_langs:
- C++
helpviewer_keywords:
- event map macros [MFC]
- DHTML [MFC], event map macros
- macros [MFC], DHTML event map
- DHTML events [MFC], event map
- DHTML events [MFC]
ms.assetid: 9a2c8ae7-7216-4a5e-bc60-6b98695be0c6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 777180468ec377b50ee0affaa29bd04a302bda52
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50057920"
---
# <a name="dhtml-event-maps"></a>Mappe eventi DHTML

Le seguenti macro sono utilizzabile per gestire gli eventi DHTML.

## <a name="dhtml-event-map-macros"></a>Macro della mappa eventi DHTML

Le macro seguenti consente di gestire gli eventi DHTML nelle [CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md)-le classi derivate.

|||
|-|-|
|[BEGIN_DHTML_EVENT_MAP](#begin_dhtml_event_map)|Contrassegna l'inizio della mappa eventi DHTML.|
|[BEGIN_DHTML_EVENT_MAP_INLINE](#begin_dhtml_event_map_inline)|Contrassegna l'inizio della mappa eventi DHTML.|
|[DECLARE_DHTML_EVENT_MAP](#declare_dhtml_event_map)|Dichiara la mappa eventi DHTML.|
|[DHTML_EVENT](#dhtml_event)|Consente di gestire un evento a livello di documento per un singolo elemento HTML.|
|[DHTML_EVENT_AXCONTROL](#dhtml_event_axcontrol)|Consente di gestire un evento attivato da un controllo ActiveX.|
|[DHTML_EVENT_CLASS](#dhtml_event_class)|Consente di gestire un evento a livello di documento per tutti gli elementi HTML con una particolare classe CSS.|
|[DHTML_EVENT_ELEMENT](#dhtml_event_element)|Consente di gestire un evento a livello di elemento.|
|[DHTML_EVENT_ONAFTERUPDATE](#dhtml_event_onafterupdate)|Utilizzato per gestire il `onafterupdate` evento da un elemento HTML.|
|[DHTML_EVENT_ONBEFOREUPDATE](#dhtml_event_onbeforeupdate)|Utilizzato per gestire il `onbeforeupdate` evento da un elemento HTML.|
|[DHTML_EVENT_ONBLUR](#dhtml_event_onblur)|Utilizzato per gestire il `onblur` evento da un elemento HTML.|
|[DHTML_EVENT_ONCHANGE](#dhtml_event_onchange)|Utilizzato per gestire il `onchange` evento da un elemento HTML.|
|[DHTML_EVENT_ONCLICK](#dhtml_event_onclick)|Utilizzato per gestire il `onclick` evento da un elemento HTML.|
|[DHTML_EVENT_ONDATAAVAILABLE](#dhtml_event_ondataavailable)|Utilizzato per gestire il `ondataavailable` evento da un elemento HTML.|
|[DHTML_EVENT_ONDATASETCHANGED](#dhtml_event_ondatasetchanged)|Utilizzato per gestire il `ondatasetchanged` evento da un elemento HTML.|
|[DHTML_EVENT_ONDATASETCOMPLETE](#dhtml_event_ondatasetcomplete)|Utilizzato per gestire il `ondatasetcomplete` evento da un elemento HTML.|
|[DHTML_EVENT_ONDBLCLICK](#dhtml_event_ondblclick)|Utilizzato per gestire il `ondblclick` evento da un elemento HTML.|
|[DHTML_EVENT_ONDRAGSTART](#dhtml_event_ondragstart)|Utilizzato per gestire il `ondragstart` evento da un elemento HTML.|
|[DHTML_EVENT_ONERRORUPDATE](#dhtml_event_onerrorupdate)|Utilizzato per gestire il `onerrorupdate` evento da un elemento HTML.|
|[DHTML_EVENT_ONFILTERCHANGE](#dhtml_event_onfilterchange)|Utilizzato per gestire il `onfilterchange` evento da un elemento HTML.|
|[DHTML_EVENT_ONFOCUS](#dhtml_event_onfocus)|Utilizzato per gestire il `onfocus` evento da un elemento HTML.|
|[DHTML_EVENT_ONHELP](#dhtml_event_onhelp)|Utilizzato per gestire il `onhelp` evento da un elemento HTML.|
|[DHTML_EVENT_ONKEYDOWN](#dhtml_event_onkeydown)|Utilizzato per gestire il `onkeydown` evento da un elemento HTML.|
|[DHTML_EVENT_ONKEYPRESS](#dhtml_event_onkeypress)|Utilizzato per gestire il `onkeypress` evento da un elemento HTML.|
|[DHTML_EVENT_ONKEYUP](#dhtml_event_onkeyup)|Utilizzato per gestire il `onkeyup` evento da un elemento HTML.|
|[DHTML_EVENT_ONMOUSEDOWN](#dhtml_event_onmousedown)|Utilizzato per gestire il `onmousedown` evento da un elemento HTML.|
|[DHTML_EVENT_ONMOUSEMOVE](#dhtml_event_onmousemove)|Utilizzato per gestire il `onmousemove` evento da un elemento HTML.|
|[DHTML_EVENT_ONMOUSEOUT](#dhtml_event_onmouseout)|Utilizzato per gestire il `onmouseout` evento da un elemento HTML.|
|[DHTML_EVENT_ONMOUSEOVER](#dhtml_event_onmouseover)|Utilizzato per gestire il `onmouseover` evento da un elemento HTML.|
|[DHTML_EVENT_ONMOUSEUP](#dhtml_event_onmouseup)|Utilizzato per gestire il `onmouseup` evento da un elemento HTML.|
|[DHTML_EVENT_ONRESIZE](#dhtml_event_onresize)|Utilizzato per gestire il `onresize` evento da un elemento HTML.|
|[DHTML_EVENT_ONROWENTER](#dhtml_event_onrowenter)|Utilizzato per gestire il `onrowenter` evento da un elemento HTML.|
|[DHTML_EVENT_ONROWEXIT](#dhtml_event_onrowexit)|Utilizzato per gestire il `onrowexit` evento da un elemento HTML.|
|[DHTML_EVENT_ONSELECTSTART](#dhtml_event_onselectstart)|Utilizzato per gestire il `onselectstart` evento da un elemento HTML.|
|[DHTML_EVENT_TAG](#dhtml_event_tag)|Consente di gestire un evento a livello di documento per tutti gli elementi con un particolare tag HTML.|
|[END_DHTML_EVENT_MAP](#end_dhtml_event_map)|Contrassegna la fine della mappa eventi DHTML.|
|[END_DHTML_EVENT_MAP_INLINE](#end_dhtml_event_map_inline)|Contrassegna la fine della mappa eventi DHTML. |

## <a name="url-event-map-macros"></a>Macro della mappa eventi URL

Le macro seguenti consente di gestire gli eventi DHTML nelle [CMultiPageDHtmlDialog](../../mfc/reference/cmultipagedhtmldialog-class.md)-le classi derivate.

|||
|-|-|
|[BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map)|Contrassegna l'inizio della mappa eventi URL e DHTML a più pagine.|
|[BEGIN_EMBED_DHTML_EVENT_MAP](#begin_embed_dhtml_event_map)|Contrassegna l'inizio di una mappa eventi DHTML incorporata.|
|[BEGIN_URL_ENTRIES](#begin_url_entries)|Contrassegna l'inizio di una mappa di voci di eventi URL.|
|[DECLARE_DHTML_URL_EVENT_MAP](#declare_dhtml_url_event_map)|Dichiara la mappa di eventi URL e DHTML a più pagine.|
|[END_DHTML_URL_EVENT_MAP](#end_dhtml_url_event_map)|Contrassegna la fine della mappa eventi URL e DHTML a più pagine.|
|[END_EMBED_DHTML_EVENT_MAP](#end_embed_dhtml_event_map)|Contrassegna la fine di una mappa eventi DHTML incorporata.|
|[END_URL_ENTRIES](#end_url_entries)|Contrassegna la fine di una mappa di voci di eventi URL.|
|[URL_EVENT_ENTRY](#url_event_entry)|Una risorsa URL o HTML viene eseguito il mapping a una pagina in una finestra di dialogo a più pagine.|

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="begin_dhtml_event_map"></a>  BEGIN_DHTML_EVENT_MAP

Contrassegna l'inizio della mappa eventi DHTML quando viene inserita nel file di origine per la classe identificata da `className`.

```
BEGIN_DHTML_EVENT_MAP(className)
```

### <a name="parameters"></a>Parametri

*className*<br/>
Il nome della classe che contiene la mappa eventi DHTML. Questa classe deve derivare direttamente o indirettamente da [CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md) e includere le [DECLARE_DHTML_EVENT_MAP](#declare_dhtml_event_map) macro nella relativa definizione di classe.

### <a name="remarks"></a>Note

Aggiungere una mappa eventi DHTML alla classe per fornire informazioni a `CDHtmlDialog` che può essere utilizzato per instradare gli eventi generati da controlli ActiveX in una pagina web da funzioni del gestore nella classe o elementi HTML.

Posizionare il begin_dhtml_event_map (macro) nel file implementazione (. cpp) della classe seguiti da macro DHTML_EVENT per gli eventi che della classe consiste nel gestire (ad esempio, DHTML_EVENT_ONMOUSEOVER per gli eventi al passaggio del mouse). Usare la [END_DHTML_EVENT_MAP](#end_dhtml_event_map) macro per contrassegnare la fine della mappa eventi. Queste macro implementano la funzione seguente:

`virtual const DHtmlEventMapEntry* GetDHtmlEventMap();`

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="begin_dhtml_event_map_inline"></a>  BEGIN_DHTML_EVENT_MAP_INLINE

Contrassegna l'inizio della mappa all'interno della definizione di classe per eventi DHTML *className*.

```
BEGIN_DHTML_EVENT_MAP_INLINE(className)
```

### <a name="parameters"></a>Parametri

*className*<br/>
Il nome della classe che contiene la mappa eventi DHTML. Questa classe deve derivare direttamente o indirettamente da [CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md) e includere le [DECLARE_DHTML_EVENT_MAP](#declare_dhtml_event_map) macro nella relativa definizione di classe.

### <a name="remarks"></a>Note

Aggiungere una mappa eventi DHTML alla classe per fornire informazioni a `CDHtmlDialog` che può essere utilizzato per instradare gli eventi generati da controlli ActiveX in una pagina web da funzioni del gestore nella classe o elementi HTML.

Inserire il begin_dhtml_event_map (macro) nel file definizione (con estensione h) della classe seguiti da macro DHTML_EVENT per gli eventi che della classe consiste nel gestire (ad esempio, DHTML_EVENT_ONMOUSEOVER per gli eventi al passaggio del mouse). Usare la [END_DHTML_EVENT_MAP_INLINE](#end_dhtml_event_map_inline) macro per contrassegnare la fine della mappa eventi. Queste macro implementano la funzione seguente:

`virtual const DHtmlEventMapEntry* GetDHtmlEventMap();`

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="declare_dhtml_event_map"></a>  DECLARE_DHTML_EVENT_MAP

Dichiara una mappa eventi DHTML in una definizione di classe.

```
DECLARE_DHTML_EVENT_MAP()
```

### <a name="remarks"></a>Note

Deve essere utilizzato nella definizione di questa macro [CDHtmlDialog](../../mfc/reference/cdhtmldialog-class.md)-le classi derivate.

Uso [BEGIN_DHTML_EVENT_MAP](#begin_dhtml_event_map) oppure [BEGIN_DHTML_EVENT_MAP_INLINE](#begin_dhtml_event_map_inline) per implementare la mappa.

[DECLARE_DHTML_EVENT_MAP](#declare_dhtml_event_map) dichiara la funzione seguente:

`virtual const DHtmlEventMapEntry* GetDHtmlEventMap( );`

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event"></a>  DHTML_EVENT

Gestisce (a livello di documento) un evento identificato da *dispid* originata dall'elemento HTML identificato dal *elemName*.

```
DHTML_EVENT(dispid, elemName,  memberFxn)
```

### <a name="parameters"></a>Parametri

*DISPID*<br/>
I DISPID dell'evento da gestire.

*elemName*<br/>
LPCWSTR che contiene l'ID dell'elemento HTML ha generato l'evento, o NULL per gestire gli eventi del documento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_axcontrol"></a>  DHTML_EVENT_AXCONTROL

Gestisce l'evento identificato da *dispid* generato dal controllo ActiveX identificato dal *controlName*.

```
DHTML_EVENT_AXCONTROL(dispid, controlName,  memberFxn)
```

### <a name="parameters"></a>Parametri

*DISPID*<br/>
ID dispatch dell'evento da gestire.

*controlName*<br/>
LPCWSTR che contiene l'ID HTML del controllo che genera l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_class"></a>  DHTML_EVENT_CLASS

Gestisce (a livello di documento) un evento identificato da *dispid* ha avuto origine da qualsiasi elemento HTML con la classe CSS identificata dal *elemName*.

```
DHTML_EVENT_CLASS(dispid, elemName,  memberFxn)
```

### <a name="parameters"></a>Parametri

*DISPID*<br/>
ID dispatch dell'evento da gestire.

*elemName*<br/>
LPCWSTR che contiene la classe CSS degli elementi HTML ha generato l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_element"></a>  DHTML_EVENT_ELEMENT

Gestisce (in corrispondenza dell'elemento identificato da *elemName*) un evento identificato dal *dispid*.

```
DHTML_EVENT_ELEMENT(dispid, elemName,  memberFxn)
```

### <a name="parameters"></a>Parametri

*DISPID*<br/>
ID dispatch dell'evento da gestire.

*elemName*<br/>
LPCWSTR che contiene l'ID dell'elemento HTML ha generato l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

Se questa macro viene usata per gestire gli eventi nonbubbling, l'origine dell'evento sarà l'elemento identificato dal *elemName*.

Se questa macro viene usata per gestire gli eventi di bubbling, l'elemento identificato da *elemName* potrebbe non essere l'origine dell'evento (l'origine può essere qualsiasi elemento contenuto dalla *elemName*).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_onafterupdate"></a>  DHTML_EVENT_ONAFTERUPDATE

(A livello di documento) gestisce il `onafterupdate` ha avuto origine evento per l'elemento HTML identificato dal *elemName*.

```
DHTML_EVENT_ONAFTERUPDATE(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
LPCWSTR che contiene l'ID dell'elemento HTML ha generato l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_onbeforeupdate"></a>  DHTML_EVENT_ONBEFOREUPDATE

(A livello di documento) gestisce il `onbeforeupdate` ha avuto origine evento per l'elemento HTML identificato dal *elemName*.

```
DHTML_EVENT_ONBEFOREUPDATE(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
LPCWSTR che contiene l'ID dell'elemento HTML ha generato l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_onblur"></a>  DHTML_EVENT_ONBLUR

(A livello di elemento) gestisce il `onblur` evento. Si tratta di un evento nonbubbling.

```
DHTML_EVENT_ONBLUR(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
LPCWSTR che contiene l'ID dell'elemento HTML ha generato l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_onchange"></a>  DHTML_EVENT_ONCHANGE

(A livello di elemento) gestisce il `onchange` evento. Si tratta di un evento nonbubbling.

```
DHTML_EVENT_ONCHANGE(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
LPCWSTR che contiene l'ID dell'elemento HTML ha generato l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_onclick"></a>  DHTML_EVENT_ONCLICK

(A livello di documento) gestisce il `onclick` ha avuto origine evento per l'elemento HTML identificato dal *elemName*.

```
DHTML_EVENT_ONCLICK(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
LPCWSTR che contiene l'ID dell'elemento HTML ha generato l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_ondataavailable"></a>  DHTML_EVENT_ONDATAAVAILABLE

(A livello di documento) gestisce il `ondataavailable` ha avuto origine evento per l'elemento HTML identificato dal *elemName*.

```
DHTML_EVENT_ONDATAAVAILABLE(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
LPCWSTR che contiene l'ID dell'elemento HTML ha generato l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_ondatasetchanged"></a>  DHTML_EVENT_ONDATASETCHANGED

(A livello di documento) gestisce il `ondatasetchanged` ha avuto origine evento per l'elemento HTML identificato dal *elemName*.

```
DHTML_EVENT_ONDATASETCHANGED(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
LPCWSTR che contiene l'ID dell'elemento HTML ha generato l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_ondatasetcomplete"></a>  DHTML_EVENT_ONDATASETCOMPLETE

(A livello di documento) gestisce il `ondatasetcomplete` ha avuto origine evento per l'elemento HTML identificato da `elemName`.

```
DHTML_EVENT_ONDATASETCOMPLETE(elemName, memberFxn)

```

### <a name="parameters"></a>Parametri

*elemName*<br/>
LPCWSTR che contiene l'ID dell'elemento HTML ha generato l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_ondblclick"></a>  DHTML_EVENT_ONDBLCLICK

(A livello di documento) gestisce il `ondblclick` ha avuto origine evento per l'elemento HTML identificato dal *elemName*.

```
DHTML_EVENT_ONDBLCLICK(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
LPCWSTR che contiene l'ID dell'elemento HTML ha generato l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_ondragstart"></a>  DHTML_EVENT_ONDRAGSTART

(A livello di documento) gestisce il `ondragstart` ha avuto origine evento per l'elemento HTML identificato dal *elemName*.

```
DHTML_EVENT_ONDRAGSTART(elemName, memberFxn)
```

### <a name="parameters"></a>Parametri

*elemName*<br/>
LPCWSTR che contiene l'ID dell'elemento HTML ha generato l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_onerrorupdate"></a>  DHTML_EVENT_ONERRORUPDATE

(A livello di documento) gestisce il `onerrorupdate` ha avuto origine evento per l'elemento HTML identificato dal *elemName*.

```
DHTML_EVENT_ONERRORUPDATE(elemName, memberFxn)

```

### <a name="parameters"></a>Parametri

*elemName*<br/>
LPCWSTR che contiene l'ID dell'elemento HTML ha generato l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_onfilterchange"></a>  DHTML_EVENT_ONFILTERCHANGE

(A livello di documento) gestisce il `onfilterchange` ha avuto origine evento per l'elemento HTML identificato dal *elemName*.

```

DHTML_EVENT_ONFILTERCHANGE(elemName, memberFxn)

```

### <a name="parameters"></a>Parametri

*elemName*<br/>
LPCWSTR che contiene l'ID dell'elemento HTML ha generato l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_onfocus"></a>  DHTML_EVENT_ONFOCUS

(A livello di elemento) gestisce il `onfocus` evento. Si tratta di un evento nonbubbling.

```

DHTML_EVENT_ONFOCUS(elemName, memberFxn)

```

### <a name="parameters"></a>Parametri

*elemName*<br/>
LPCWSTR che contiene l'ID dell'elemento HTML ha generato l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_onhelp"></a>  DHTML_EVENT_ONHELP

(A livello di documento) gestisce il `onhelp` ha avuto origine evento per l'elemento HTML identificato dal *elemName*.

```

DHTML_EVENT_ONHELP(elemName, memberFxn)

```

### <a name="parameters"></a>Parametri

*elemName*<br/>
LPCWSTR che contiene l'ID dell'elemento HTML ha generato l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_onkeydown"></a>  DHTML_EVENT_ONKEYDOWN

(A livello di documento) gestisce il `onkeydown` ha avuto origine evento per l'elemento HTML identificato dal *elemName*.

```

DHTML_EVENT_ONKEYDOWN(elemName, memberFxn)

```

### <a name="parameters"></a>Parametri

*elemName*<br/>
LPCWSTR che contiene l'ID dell'elemento HTML ha generato l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_onkeypress"></a>  DHTML_EVENT_ONKEYPRESS

(A livello di documento) gestisce il `onkeypress` ha avuto origine evento per l'elemento HTML identificato dal *elemName*.

```

DHTML_EVENT_ONKEYPRESS(elemName, memberFxn)

```

### <a name="parameters"></a>Parametri

*elemName*<br/>
LPCWSTR che contiene l'ID dell'elemento HTML ha generato l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_onkeyup"></a>  DHTML_EVENT_ONKEYUP

(A livello di documento) gestisce il `onkeyup` ha avuto origine evento per l'elemento HTML identificato dal *elemName*.

```

DHTML_EVENT_ONKEYUP(elemName, memberFxn)

```

### <a name="parameters"></a>Parametri

*elemName*<br/>
LPCWSTR che contiene l'ID dell'elemento HTML ha generato l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_onmousedown"></a>  DHTML_EVENT_ONMOUSEDOWN

(A livello di documento) gestisce il `onmousedown` ha avuto origine evento per l'elemento HTML identificato dal *elemName*.

```

DHTML_EVENT_ONMOUSEDOWN(elemName, memberFxn)

```

### <a name="parameters"></a>Parametri

*elemName*<br/>
LPCWSTR che contiene l'ID dell'elemento HTML ha generato l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_onmousemove"></a>  DHTML_EVENT_ONMOUSEMOVE

(A livello di documento) gestisce il `onmousemove` ha avuto origine evento per l'elemento HTML identificato dal *elemName*.

```

DHTML_EVENT_ONMOUSEMOVE(elemName, memberFxn)

```

### <a name="parameters"></a>Parametri

*elemName*<br/>
LPCWSTR che contiene l'ID dell'elemento HTML ha generato l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_onmouseout"></a>  DHTML_EVENT_ONMOUSEOUT

(A livello di documento) gestisce il `onmouseout` ha avuto origine evento per l'elemento HTML identificato dal *elemName*.

```

DHTML_EVENT_ONMOUSEOUT(elemName, memberFxn)

```

### <a name="parameters"></a>Parametri

*elemName*<br/>
LPCWSTR che contiene l'ID dell'elemento HTML ha generato l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_onmouseover"></a>  DHTML_EVENT_ONMOUSEOVER

(A livello di documento) gestisce il `onmouseover` ha avuto origine evento per l'elemento HTML identificato dal *elemName*.

```

DHTML_EVENT_ONMOUSEOVER(elemName, memberFxn)

```

### <a name="parameters"></a>Parametri

*elemName*<br/>
LPCWSTR che contiene l'ID dell'elemento HTML ha generato l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_onmouseup"></a>  DHTML_EVENT_ONMOUSEUP

(A livello di documento) gestisce il `onmouseup` ha avuto origine evento per l'elemento HTML identificato dal *elemName*.

```

DHTML_EVENT_ONMOUSEUP(elemName, memberFxn)

```

### <a name="parameters"></a>Parametri

*elemName*<br/>
LPCWSTR che contiene l'ID dell'elemento HTML ha generato l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_onresize"></a>  DHTML_EVENT_ONRESIZE

(A livello di elemento) gestisce il `onresize` evento. Si tratta di un evento nonbubbling.

```

DHTML_EVENT_ONRESIZE(elemName, memberFxn)

```

### <a name="parameters"></a>Parametri

*elemName*<br/>
LPCWSTR che contiene l'ID dell'elemento HTML ha generato l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_onrowenter"></a>  DHTML_EVENT_ONROWENTER

(A livello di documento) gestisce il `onrowenter` ha avuto origine evento per l'elemento HTML identificato dal *elemName*.

```

DHTML_EVENT_ONROWENTER(elemName, memberFxn)

```

### <a name="parameters"></a>Parametri

*elemName*<br/>
LPCWSTR che contiene l'ID dell'elemento HTML ha generato l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_onrowexit"></a>  DHTML_EVENT_ONROWEXIT

(A livello di documento) gestisce il `onrowexit` ha avuto origine evento per l'elemento HTML identificato dal *elemName*.

```

DHTML_EVENT_ONROWEXIT(elemName, memberFxn)

```

### <a name="parameters"></a>Parametri

*elemName*<br/>
LPCWSTR che contiene l'ID dell'elemento HTML ha generato l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_onselectstart"></a>  DHTML_EVENT_ONSELECTSTART

(A livello di documento) gestisce il `onselectstart` ha avuto origine evento per l'elemento HTML identificato dal *elemName*.

```

DHTML_EVENT_ONSELECTSTART(elemName, memberFxn)

```

### <a name="parameters"></a>Parametri

*elemName*<br/>
LPCWSTR che contiene l'ID dell'elemento HTML ha generato l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="dhtml_event_tag"></a>  DHTML_EVENT_TAG

Gestisce (a livello di documento) un evento identificato da `dispid` ha avuto origine da qualsiasi elemento HTML con il tag HTML identificato da *elemName*.

```
DHTML_EVENT_TAG(dispid, elemName,  memberFxn)
```

### <a name="parameters"></a>Parametri

*DISPID*<br/>
ID dispatch dell'evento da gestire.

*elemName*<br/>
Il tag HTML degli elementi HTML ha generato l'evento.

*memberFxn*<br/>
La funzione del gestore dell'evento.

### <a name="remarks"></a>Note

Usare questa macro per aggiungere una voce per il [mappa eventi DHTML](#begin_dhtml_event_map_inline) nella classe.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="end_dhtml_event_map"></a>  END_DHTML_EVENT_MAP

Contrassegna la fine della mappa eventi DHTML.

```
END_DHTML_EVENT_MAP()
```

### <a name="remarks"></a>Note

Deve essere usata in combinazione con [BEGIN_DHTML_EVENT_MAP](#begin_dhtml_event_map).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="begin_dhtml_url_event_map"></a>  BEGIN_DHTML_URL_EVENT_MAP

Avvia la definizione di una mappa eventi DHTML e l'URL in una finestra di dialogo a più pagine.

```
BEGIN_DHTML_URL_EVENT_MAP()

```

### <a name="remarks"></a>Note

Inserire BEGIN_DHTML_URL_EVENT_MAP nel file di implementazione delle [CMultiPageDHtmlDialog](../../mfc/reference/cmultipagedhtmldialog-class.md)-classe derivata. Seguire con [mappe eventi DHTML incorporate](#begin_embed_dhtml_event_map) e [voci URL](#begin_url_entries)e quindi viene chiusa senza [END_DHTML_URL_EVENT_MAP](#end_dhtml_url_event_map). Includere il [DECLARE_DHTML_URL_EVENT_MAP](#declare_dhtml_url_event_map) macro all'interno della definizione di classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#196](../../mfc/codesnippet/cpp/dhtml-event-maps_1.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="begin_embed_dhtml_event_map"></a>  BEGIN_EMBED_DHTML_EVENT_MAP

Avvia la definizione di una mappa eventi DHTML incorporata in una finestra di dialogo a più pagine.

```
BEGIN_EMBED_DHTML_EVENT_MAP(className, mapName)

```

### <a name="parameters"></a>Parametri

*className*<br/>
Il nome della classe che contiene la mappa di eventi. Questa classe deve derivare direttamente o indirettamente da [CMultiPageDHtmlDialog](../../mfc/reference/cmultipagedhtmldialog-class.md). Mappa eventi DHTML incorporata debba essere all'interno di un [mappa eventi URL e DHTML](#begin_dhtml_url_event_map)).

*mapName*<br/>
Specifica la pagina il cui evento eseguire il mapping. Questa corrisponde *mapName* nel [URL_EVENT_ENTRY](#url_event_entry) macro effettivamente la definizione di risorsa URL o HTML.

### <a name="remarks"></a>Note

Poiché una finestra di dialogo DHTML a più pagine è costituito da più pagine HTML, ognuno dei quali può generare eventi DHTML, mappe eventi incorporate vengono utilizzate per eseguire il mapping degli eventi ai gestori in base a una pagina.

Mappe eventi incorporato all'interno di una mappa eventi DHTML e l'URL è costituito da un begin_embed_dhtml_event_map (macro) seguito da [DHTML_EVENT](#dhtml_event) macro e un [END_EMBED_DHTML_EVENT_MAP](#end_embed_dhtml_event_map) macro.

Ogni mappa eventi incorporato richiede un oggetto corrispondente [voce dell'evento URL](#url_event_entry) per eseguire il mapping *mapName* (specificato nella BEGIN_EMBED_DHTML_EVENT_MAP) a una risorsa URL o HTML.

### <a name="example"></a>Esempio

Vedere l'esempio nella [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="begin_url_entries"></a>  BEGIN_URL_ENTRIES

Inizia la definizione di una mappa di voci di eventi URL in una finestra di dialogo a più pagine.

```
BEGIN_URL_ENTRIES(className)

```

### <a name="parameters"></a>Parametri

*className*<br/>
Nome della classe che contiene la mappa di voci di eventi URL. Questa classe deve derivare direttamente o indirettamente da [CMultiPageDHtmlDialog](../../mfc/reference/cmultipagedhtmldialog-class.md). Mappa di voci di eventi URL deve essere all'interno di un [mappa eventi URL e DHTML](#begin_dhtml_url_event_map)).

### <a name="remarks"></a>Note

Poiché una finestra di dialogo DHTML a più pagine è costituita da più pagine HTML, voci di eventi URL vengono utilizzate per eseguire il mapping di URL o HTML risorse corrispondente [mappe eventi DHTML incorporate](#begin_embed_dhtml_event_map). Inserire le macro URL_EVENT_ENTRY tra BEGIN_URL_ENTRIES e [END_URL_ENTRIES](#end_url_entries) macro.

### <a name="example"></a>Esempio

Vedere l'esempio nella [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="declare_dhtml_url_event_map"></a>  DECLARE_DHTML_URL_EVENT_MAP

Dichiara una mappa eventi DHTML e l'URL in una definizione di classe.

```
DECLARE_DHTML_URL_EVENT_MAP()

```

### <a name="remarks"></a>Note

Deve essere utilizzato nella definizione di questa macro [CMultiPageDHtmlDialog](../../mfc/reference/cmultipagedhtmldialog-class.md)-le classi derivate.

Contiene una mappa eventi URL e DHTML [mappe eventi DHTML incorporate](#begin_embed_dhtml_event_map) e [voci di eventi URL](#begin_url_entries) per eseguire il mapping degli eventi DHTML gestori in base a una pagina. Uso [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map) per implementare la mappa.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="end_dhtml_url_event_map"></a>  END_DHTML_URL_EVENT_MAP

Contrassegna la fine di una mappa eventi DHTML e l'URL.

```
END_DHTML_URL_EVENT_MAP(className)

```

### <a name="parameters"></a>Parametri

*className*<br/>
Il nome della classe che contiene la mappa di eventi. Questa classe deve derivare direttamente o indirettamente da [CMultiPageDHtmlDialog](../../mfc/reference/cmultipagedhtmldialog-class.md). Tale nome deve corrispondere *NomeClasse* corrispondenti [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map) macro.

### <a name="example"></a>Esempio

Vedere l'esempio nella [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="end_embed_dhtml_event_map"></a>  END_EMBED_DHTML_EVENT_MAP

Contrassegna la fine di una mappa eventi DHTML incorporata.

```
END_EMBED_DHTML_EVENT_MAP()

```

### <a name="example"></a>Esempio

Vedere l'esempio nella [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="end_url_entries"></a>  END_URL_ENTRIES

Contrassegna la fine di una mappa di voci di eventi URL.

```
END_URL_ENTRIES()

```

### <a name="example"></a>Esempio

Vedere l'esempio nella [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="url_event_entry"></a>  URL_EVENT_ENTRY

Una risorsa URL o HTML viene eseguito il mapping a una pagina in una finestra di dialogo a più pagine.

```
URL_EVENT_ENTRY(className, url,  mapName)
```

### <a name="parameters"></a>Parametri

*className*<br/>
Nome della classe che contiene la mappa di voci di eventi URL. Questa classe deve derivare direttamente o indirettamente da [CMultiPageDHtmlDialog](../../mfc/reference/cmultipagedhtmldialog-class.md). Mappa di voci di eventi URL deve essere all'interno di un [mappa eventi URL e DHTML](#begin_dhtml_url_event_map)).

*URL*<br/>
La risorsa URL o HTML della pagina.

*mapName*<br/>
Specifica la pagina il cui URL è *url*. Questa corrisponde *mapName* nel [BEGIN_EMBED_DHTML_EVENT_MAP](#begin_embed_dhtml_event_map) macro che esegue il mapping degli eventi da questa pagina.

### <a name="remarks"></a>Note

Se la pagina è una risorsa HTML *url* deve essere la rappresentazione di stringa del numero di ID della risorsa (vale a dire, "123", non 123 o ID_HTMLRES1).

L'identificatore della tabella, *mapName*, è un simbolo arbitrario usato per collegare incorporato mappe eventi DHTML alle mappe di ingresso di eventi URL. È limitato nell'ambito per la mappa eventi DHTML e l'URL.

### <a name="example"></a>Esempio

Vedere l'esempio nella [BEGIN_DHTML_URL_EVENT_MAP](#begin_dhtml_url_event_map).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdhtml. h

##  <a name="end_dhtml_event_map_inline"></a>END_DHTML_EVENT_MAP_INLINE

Contrassegna la fine della mappa eventi DHTML.

### <a name="syntax"></a>Sintassi

```
END_DHTML_EVENT_MAP_INLINE( )
```

### <a name="remarks"></a>Note

Deve essere usata in combinazione con [BEGIN_DHTML_EVENT_MAP_INLINE](#begin_dhtml_event_map_inline).

### <a name="requirements"></a>Requisiti

**Intestazione:** afxdhtml. h

### <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](mfc-macros-and-globals.md)
