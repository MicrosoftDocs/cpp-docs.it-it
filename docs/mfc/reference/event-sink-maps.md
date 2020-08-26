---
title: Mappe sink di evento
ms.date: 11/04/2016
helpviewer_keywords:
- event sink maps [MFC]
ms.assetid: a9757eb2-5f4a-45ec-a2cd-ce5eec85b16f
ms.openlocfilehash: 2cbfbc70ae14ccda95c377cb1587bf9d2a1ad3e6
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88837264"
---
# <a name="event-sink-maps"></a>Mappe sink di evento

Quando un controllo OLE incorporato genera un evento, il contenitore del controllo riceve l'evento usando un meccanismo, denominato "mapping di sink di evento", fornito da MFC. Questa mappa di sink di evento designa le funzioni del gestore per ogni evento specifico, nonché i parametri di tali eventi. Per ulteriori informazioni sulle mappe sink di evento, vedere l'articolo [contenitori di controlli ActiveX](../../mfc/activex-control-containers.md).

### <a name="event-sink-maps"></a>Mappe sink di evento

|Nome|Descrizione|
|-|-|
|[BEGIN_EVENTSINK_MAP](#begin_eventsink_map)|Avvia la definizione di una mappa di sink di evento.|
|[DECLARE_EVENTSINK_MAP](#declare_eventsink_map)|Dichiara una mappa di sink di evento.|
|[END_EVENTSINK_MAP](#end_eventsink_map)|Termina la definizione di una mappa di sink di evento.|
|[ON_EVENT](#on_event)|Definisce un gestore eventi per un evento specifico.|
|[ON_EVENT_RANGE](#on_event_range)|Definisce un gestore eventi per un evento specifico generato da un set di controlli OLE.|
|[ON_EVENT_REFLECT](#on_event_reflect)|Riceve gli eventi generati dal controllo prima che vengano gestiti dal contenitore del controllo.|
|[ON_PROPNOTIFY](#on_propnotify)|Definisce un gestore per la gestione delle notifiche delle proprietà da un controllo OLE.|
|[ON_PROPNOTIFY_RANGE](#on_propnotify_range)|Definisce un gestore per la gestione delle notifiche di proprietà da un set di controlli OLE.|
|[ON_PROPNOTIFY_REFLECT](#on_propnotify_reflect)|Riceve le notifiche delle proprietà inviate dal controllo prima che vengano gestite dal contenitore del controllo.|

## <a name="begin_eventsink_map"></a><a name="begin_eventsink_map"></a> BEGIN_EVENTSINK_MAP

Inizia la definizione della mappa di sink di evento.

```
BEGIN_EVENTSINK_MAP(theClass, baseClass)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
Specifica il nome della classe del controllo il cui mapping di sink di evento è.

*baseClass*<br/>
Specifica il nome della classe di base di *theClass*.

### <a name="remarks"></a>Osservazioni

Nel file di implementazione (. cpp) che definisce le funzioni membro per la classe, avviare la mappa di sink di evento con la macro BEGIN_EVENTSINK_MAP, quindi aggiungere le voci della macro per ogni evento a cui ricevere una notifica e completare la mappa di sink di evento con la macro END_EVENTSINK_MAP.

Per ulteriori informazioni sulle mappe di sink di evento e sui contenitori di controlli OLE, vedere l'articolo [contenitori di controlli ActiveX](../../mfc/activex-control-containers.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp. h

## <a name="declare_eventsink_map"></a><a name="declare_eventsink_map"></a> DECLARE_EVENTSINK_MAP

Un contenitore OLE può fornire una mappa di sink di evento per specificare gli eventi a cui verrà notificato il contenitore.

```
DECLARE_EVENTSINK_MAP()
```

### <a name="remarks"></a>Osservazioni

Usare la macro DECLARE_EVENTSINK_MAP alla fine della dichiarazione di classe. Quindi, in. File CPP che definisce le funzioni membro per la classe, usa la macro BEGIN_EVENTSINK_MAP, le voci della macro per ogni evento di cui ricevere una notifica e la macro END_EVENTSINK_MAP per dichiarare la fine dell'elenco di sink di evento.

Per ulteriori informazioni sulle mappe sink di evento, vedere l'articolo [contenitori di controlli ActiveX](../../mfc/activex-control-containers.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXWIN. h

## <a name="end_eventsink_map"></a><a name="end_eventsink_map"></a> END_EVENTSINK_MAP

Termina la definizione della mappa di sink di evento.

```
END_EVENTSINK_MAP()
```

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp. h

## <a name="on_event"></a><a name="on_event"></a> ON_EVENT

Utilizzare la macro ON_EVENT per definire una funzione del gestore eventi per un evento generato da un controllo OLE.

```
ON_EVENT(theClass, id, dispid, pfnHandler,  vtsParams)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
Classe a cui appartiene questo mapping di sink di evento.

*id*<br/>
ID del controllo OLE.

*DISPID*<br/>
ID di invio dell'evento generato dal controllo.

*pfnHandler*<br/>
Puntatore a una funzione membro che gestisce l'evento. Questa funzione deve avere un tipo restituito BOOL e i tipi di parametro corrispondenti ai parametri dell'evento (vedere *vtsParams*). La funzione deve restituire TRUE per indicare che l'evento è stato gestito. in caso contrario, FALSE.

*vtsParams*<br/>
Sequenza di **VTS_** costanti che specifica i tipi dei parametri per l'evento. Si tratta delle stesse costanti utilizzate nelle voci della mappa di invio, ad esempio DISP_FUNCTION.

### <a name="remarks"></a>Osservazioni

L'argomento *vtsParams* è un elenco separato da spazi dei valori delle costanti **VTS_** . Uno o più valori separati da spazi (non virgole) specificano l'elenco di parametri della funzione. Ad esempio:

[!code-cpp[NVC_MFCAutomation#11](../../mfc/codesnippet/cpp/event-sink-maps_1.cpp)]

Specifica un elenco contenente un valore short integer seguito da un valore BOOL.

Per un elenco delle costanti **VTS_** , vedere [EVENT_CUSTOM](event-maps.md#event_custom).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp. h

## <a name="on_event_range"></a><a name="on_event_range"></a> ON_EVENT_RANGE

Utilizzare la macro ON_EVENT_RANGE per definire una funzione del gestore eventi per un evento generato da qualsiasi controllo OLE con un ID di controllo all'interno di un intervallo contiguo di ID.

```
ON_EVENT_RANGE(theClass, idFirst, idLast, dispid, pfnHandler,  vtsParams)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
Classe a cui appartiene questo mapping di sink di evento.

*idFirst*<br/>
ID controllo del primo controllo OLE nell'intervallo.

*idLast*<br/>
ID del controllo dell'ultimo controllo OLE nell'intervallo.

*DISPID*<br/>
ID di invio dell'evento generato dal controllo.

*pfnHandler*<br/>
Puntatore a una funzione membro che gestisce l'evento. Questa funzione deve avere un tipo restituito BOOL, un primo parametro di tipo UINT (per l'ID del controllo) e tipi di parametro aggiuntivi che corrispondono ai parametri dell'evento (vedere *vtsParams*). La funzione deve restituire TRUE per indicare che l'evento è stato gestito. in caso contrario, FALSE.

*vtsParams*<br/>
Sequenza di **VTS_** costanti che specifica i tipi dei parametri per l'evento. La prima costante deve essere di tipo VTS_I4, per l'ID del controllo. Si tratta delle stesse costanti utilizzate nelle voci della mappa di invio, ad esempio DISP_FUNCTION.

### <a name="remarks"></a>Osservazioni

L'argomento *vtsParams* è un elenco separato da spazi dei valori delle costanti **VTS_** . Uno o più valori separati da spazi (non virgole) specificano l'elenco di parametri della funzione. Ad esempio:

[!code-cpp[NVC_MFCAutomation#11](../../mfc/codesnippet/cpp/event-sink-maps_1.cpp)]

Specifica un elenco contenente un valore short integer seguito da un valore BOOL.

Per un elenco delle costanti **VTS_** , vedere [EVENT_CUSTOM](event-maps.md#event_custom).

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato un gestore eventi, per l'evento MouseDown, implementato per tre controlli (IDC_MYCTRL1 tramite IDC_MYCTRL3). La funzione del gestore eventi, `OnRangeMouseDown` , è dichiarata nel file di intestazione della classe dialog ( `CMyDlg` ) come:

[!code-cpp[NVC_MFCAutomation#12](../../mfc/codesnippet/cpp/event-sink-maps_2.h)]

Il codice riportato di seguito è definito nel file di implementazione della classe della finestra di dialogo.

[!code-cpp[NVC_MFCAutomation#13](../../mfc/codesnippet/cpp/event-sink-maps_3.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp. h

## <a name="on_event_reflect"></a><a name="on_event_reflect"></a> ON_EVENT_REFLECT

La macro ON_EVENT_REFLECT, se utilizzata nella mappa di sink di eventi della classe wrapper di un controllo OLE, riceve gli eventi generati dal controllo prima che vengano gestiti dal contenitore del controllo.

```
ON_EVENT_REFLECT(theClass,  dispid, pfnHandler,  vtsParams)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
Classe a cui appartiene questo mapping di sink di evento.

*DISPID*<br/>
ID di invio dell'evento generato dal controllo.

*pfnHandler*<br/>
Puntatore a una funzione membro che gestisce l'evento. Questa funzione deve avere un tipo restituito BOOL e tipi di parametro corrispondenti ai parametri dell'evento (vedere *vtsParams*). La funzione deve restituire TRUE per indicare che l'evento è stato gestito. in caso contrario, FALSE.

*vtsParams*<br/>
Sequenza di **VTS_** costanti che specifica i tipi dei parametri per l'evento. Si tratta delle stesse costanti utilizzate nelle voci della mappa di invio, ad esempio DISP_FUNCTION.

### <a name="remarks"></a>Osservazioni

L'argomento *vtsParams* è un elenco separato da spazi dei valori delle costanti **VTS_** .

Uno o più valori separati da spazi (non virgole) specificano l'elenco di parametri della funzione. Ad esempio:

[!code-cpp[NVC_MFCAutomation#11](../../mfc/codesnippet/cpp/event-sink-maps_1.cpp)]

Specifica un elenco contenente un valore short integer seguito da un valore BOOL.

Per un elenco delle costanti **VTS_** , vedere [EVENT_CUSTOM](event-maps.md#event_custom).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp. h

## <a name="on_propnotify"></a><a name="on_propnotify"></a> ON_PROPNOTIFY

Utilizzare la macro ON_PROPNOTIFY per definire una voce della mappa di sink di evento per la gestione delle notifiche delle proprietà da un controllo OLE.

```
ON_PROPNOTIFY(theClass, id, dispid, pfnRequest, pfnChanged)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
Classe a cui appartiene questo mapping di sink di evento.

*id*<br/>
ID del controllo OLE.

*DISPID*<br/>
ID di invio della proprietà della notifica.

*pfnRequest*<br/>
Puntatore a una funzione membro che gestisce la `OnRequestEdit` notifica per questa proprietà. Questa funzione deve avere un tipo restituito BOOL e un parametro **bool** <strong>\*</strong> . Questa funzione deve impostare il parametro su TRUE per consentire la modifica della proprietà e FALSE per non consentire. La funzione deve restituire TRUE per indicare che la notifica è stata gestita. in caso contrario, FALSE.

*pfnChanged*<br/>
Puntatore a una funzione membro che gestisce la `OnChanged` notifica per questa proprietà. La funzione deve avere un tipo restituito BOOL e un parametro UINT. La funzione deve restituire TRUE per indicare che la notifica è stata gestita. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

L'argomento *vtsParams* è un elenco separato da spazi dei valori delle costanti **VTS_** . Uno o più valori separati da spazi (non virgole) specificano l'elenco di parametri della funzione. Ad esempio:

[!code-cpp[NVC_MFCAutomation#11](../../mfc/codesnippet/cpp/event-sink-maps_1.cpp)]

Specifica un elenco contenente un valore short integer seguito da un valore BOOL.

Per un elenco delle costanti **VTS_** , vedere [EVENT_CUSTOM](event-maps.md#event_custom).

## <a name="on_propnotify_range"></a><a name="on_propnotify_range"></a> ON_PROPNOTIFY_RANGE

Utilizzare la macro ON_PROPNOTIFY_RANGE per definire una voce della mappa di sink di eventi per la gestione delle notifiche delle proprietà da qualsiasi controllo OLE con ID di controllo all'interno di un intervallo contiguo di ID.

```

ON_PROPNOTIFY_RANGE(theClass, idFirst, idLast, dispid, pfnRequest, pfnChanged)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
Classe a cui appartiene questo mapping di sink di evento.

*idFirst*<br/>
ID controllo del primo controllo OLE nell'intervallo.

*idLast*<br/>
ID del controllo dell'ultimo controllo OLE nell'intervallo.

*DISPID*<br/>
ID di invio della proprietà della notifica.

*pfnRequest*<br/>
Puntatore a una funzione membro che gestisce la `OnRequestEdit` notifica per questa proprietà. Questa funzione deve avere un `BOOL` tipo restituito e `UINT` i `BOOL*` parametri e. La funzione deve impostare il parametro su TRUE per consentire la modifica della proprietà e FALSE per non consentire. La funzione deve restituire TRUE per indicare che la notifica è stata gestita. in caso contrario, FALSE.

*pfnChanged*<br/>
Puntatore a una funzione membro che gestisce la `OnChanged` notifica per questa proprietà. La funzione deve avere un `BOOL` tipo restituito e un `UINT` parametro. La funzione deve restituire TRUE per indicare che la notifica è stata gestita. in caso contrario, FALSE.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp. h

## <a name="on_propnotify_reflect"></a><a name="on_propnotify_reflect"></a> ON_PROPNOTIFY_REFLECT

La macro ON_PROPNOTIFY_REFLECT, se utilizzata nella mappa di sink di eventi della classe wrapper di un controllo OLE, riceve le notifiche delle proprietà inviate dal controllo prima che vengano gestite dal contenitore del controllo.

```

ON_PROPNOTIFY_REFLECT(theClass, dispid, pfnRequest, pfnChanged)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
Classe a cui appartiene questo mapping di sink di evento.

*DISPID*<br/>
ID di invio della proprietà della notifica.

*pfnRequest*<br/>
Puntatore a una funzione membro che gestisce la `OnRequestEdit` notifica per questa proprietà. Questa funzione deve avere un tipo restituito BOOL e un parametro **bool** <strong>\*</strong> . Questa funzione deve impostare il parametro su TRUE per consentire la modifica della proprietà e FALSE per non consentire. La funzione deve restituire TRUE per indicare che la notifica è stata gestita. in caso contrario, FALSE.

*pfnChanged*<br/>
Puntatore a una funzione membro che gestisce la `OnChanged` notifica per questa proprietà. La funzione deve avere un tipo restituito BOOL e nessun parametro. La funzione deve restituire TRUE per indicare che la notifica è stata gestita. in caso contrario, FALSE.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp. h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
