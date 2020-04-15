---
title: Mappe sink di evento
ms.date: 11/04/2016
helpviewer_keywords:
- event sink maps [MFC]
ms.assetid: a9757eb2-5f4a-45ec-a2cd-ce5eec85b16f
ms.openlocfilehash: 731ed2403aae3332e81702673d1181e9e52399a2
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365728"
---
# <a name="event-sink-maps"></a>Mappe sink di evento

Quando un controllo OLE incorporato genera un evento, il contenitore del controllo riceve l'evento utilizzando un meccanismo, denominato "mappa sink di evento", fornito da MFC. Questa mappa del sink di evento definisce le funzioni del gestore per ogni evento specifico, nonché i parametri di tali eventi. Per ulteriori informazioni sulle mappe del sink di evento, vedere l'articolo Contenitori di [controlli ActiveX](../../mfc/activex-control-containers.md).

### <a name="event-sink-maps"></a>Mappe sink di evento

|||
|-|-|
|[BEGIN_EVENTSINK_MAP](#begin_eventsink_map)|Avvia la definizione di una mappa di sink di evento.|
|[DECLARE_EVENTSINK_MAP](#declare_eventsink_map)|Dichiara una mappa del sink di evento.|
|[END_EVENTSINK_MAP](#end_eventsink_map)|Termina la definizione di una mappa di sink di evento.|
|[ON_EVENT](#on_event)|Definisce un gestore eventi per un evento specifico.|
|[ON_EVENT_RANGE](#on_event_range)|Definisce un gestore eventi per un evento specifico generato da un set di controlli OLE.|
|[ON_EVENT_REFLECT](#on_event_reflect)|Riceve gli eventi generati dal controllo prima che vengano gestiti dal contenitore del controllo.|
|[ON_PROPNOTIFY](#on_propnotify)|Definisce un gestore per la gestione delle notifiche delle proprietà da un controllo OLE.|
|[ON_PROPNOTIFY_RANGE](#on_propnotify_range)|Definisce un gestore per la gestione delle notifiche delle proprietà da un set di controlli OLE.|
|[ON_PROPNOTIFY_REFLECT](#on_propnotify_reflect)|Riceve le notifiche delle proprietà inviate dal controllo prima che vengano gestite dal contenitore del controllo.|

## <a name="begin_eventsink_map"></a><a name="begin_eventsink_map"></a>BEGIN_EVENTSINK_MAP

Avvia la definizione della mappa del sink di evento.

```
BEGIN_EVENTSINK_MAP(theClass, baseClass)
```

### <a name="parameters"></a>Parametri

*classe theClass*<br/>
Specifica il nome della classe di controllo di cui si trova la mappa del sink di evento.

*Baseclass*<br/>
Specifica il nome della classe base di *theClass*.

### <a name="remarks"></a>Osservazioni

Nel file di implementazione (cpp) che definisce le funzioni membro per la classe, avviare la mappa del sink di evento con la macro BEGIN_EVENTSINK_MAP, quindi aggiungere voci di macro per ogni evento di cui ricevere la notifica e completare la mappa del sink di evento con la macro END_EVENTSINK_MAP.

Per ulteriori informazioni sulle mappe del sink di evento e sui contenitori di controlli OLE, vedere l'articolo Contenitori di [controlli ActiveX](../../mfc/activex-control-containers.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp.h

## <a name="declare_eventsink_map"></a><a name="declare_eventsink_map"></a>DECLARE_EVENTSINK_MAP

Un contenitore OLE può fornire una mappa del sink di evento per specificare gli eventi di cui verrà notificato il contenitore.

```
DECLARE_EVENTSINK_MAP()
```

### <a name="remarks"></a>Osservazioni

Utilizzare la macro DECLARE_EVENTSINK_MAP alla fine della dichiarazione di classe. Quindi, nel file . CPP che definisce le funzioni membro per la classe, utilizzare la macro BEGIN_EVENTSINK_MAP, le voci di macro per ciascuno degli eventi da notificare e la macro END_EVENTSINK_MAP per dichiarare la fine dell'elenco di sink di eventi.

Per ulteriori informazioni sulle mappe del sink di evento, vedere l'articolo Contenitori di [controlli ActiveX](../../mfc/activex-control-containers.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxwin.h

## <a name="end_eventsink_map"></a><a name="end_eventsink_map"></a>END_EVENTSINK_MAP

Termina la definizione della mappa del sink di evento.

```
END_EVENTSINK_MAP()
```

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp.h

## <a name="on_event"></a><a name="on_event"></a>ON_EVENT

Utilizzare la macro ON_EVENT per definire una funzione del gestore eventi per un evento generato da un controllo OLE.

```
ON_EVENT(theClass, id, dispid, pfnHandler,  vtsParams)
```

### <a name="parameters"></a>Parametri

*classe theClass*<br/>
Classe a cui appartiene questa mappa del sink di evento.

*id*<br/>
ID del controllo OLE.

*Dispid*<br/>
ID di invio dell'evento generato dal controllo.

*PfnHandler (pfnHandler)*<br/>
Puntatore a una funzione membro che gestisce l'evento. Questa funzione deve avere un tipo restituito BOOL e tipi di parametro che corrispondono ai parametri dell'evento (vedere *vtsParams*). La funzione deve restituire TRUE per indicare che l'evento è stato gestito; in caso contrario, FALSE.

*vtsParams (parametri di*<br/>
Sequenza di **costanti VTS_** che specifica i tipi dei parametri per l'evento. Si tratta delle stesse costanti utilizzate nelle voci della mappa di invio, ad esempio DISP_FUNCTION.

### <a name="remarks"></a>Osservazioni

L'argomento *vtsParams* è un elenco separato da spazi di valori dalle costanti **VTS_.** Uno o più di questi valori separati da spazi (non virgole) specifica l'elenco di parametri della funzione. Ad esempio:

[!code-cpp[NVC_MFCAutomation#11](../../mfc/codesnippet/cpp/event-sink-maps_1.cpp)]

specifica un elenco contenente un valore short integer seguito da un BOOL.

Per un elenco delle costanti **VTS_,** vedere [EVENT_CUSTOM](event-maps.md#event_custom).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp.h

## <a name="on_event_range"></a><a name="on_event_range"></a>ON_EVENT_RANGE

Utilizzare la macro ON_EVENT_RANGE per definire una funzione del gestore eventi per un evento generato da qualsiasi controllo OLE con un ID di controllo all'interno di un intervallo contiguo di ID.

```
ON_EVENT_RANGE(theClass, idFirst, idLast, dispid, pfnHandler,  vtsParams)
```

### <a name="parameters"></a>Parametri

*classe theClass*<br/>
Classe a cui appartiene questa mappa del sink di evento.

*idPrima*<br/>
ID del controllo del primo controllo OLE nell'intervallo.

*idUltimo*<br/>
ID del controllo dell'ultimo controllo OLE nell'intervallo.

*Dispid*<br/>
ID di invio dell'evento generato dal controllo.

*PfnHandler (pfnHandler)*<br/>
Puntatore a una funzione membro che gestisce l'evento. Questa funzione deve avere un tipo restituito BOOL, un primo parametro di tipo UINT (per l'ID del controllo) e tipi di parametro aggiuntivi che corrispondono ai parametri dell'evento (vedere *vtsParams*). La funzione deve restituire TRUE per indicare che l'evento è stato gestito; in caso contrario, FALSE.

*vtsParams (parametri di*<br/>
Sequenza di **costanti VTS_** che specifica i tipi dei parametri per l'evento. La prima costante deve essere di tipo VTS_I4, per l'ID del controllo. Si tratta delle stesse costanti utilizzate nelle voci della mappa di invio, ad esempio DISP_FUNCTION.

### <a name="remarks"></a>Osservazioni

L'argomento *vtsParams* è un elenco separato da spazi di valori dalle costanti **VTS_.** Uno o più di questi valori separati da spazi (non virgole) specifica l'elenco di parametri della funzione. Ad esempio:

[!code-cpp[NVC_MFCAutomation#11](../../mfc/codesnippet/cpp/event-sink-maps_1.cpp)]

specifica un elenco contenente un valore short integer seguito da un BOOL.

Per un elenco delle costanti **VTS_,** vedere [EVENT_CUSTOM](event-maps.md#event_custom).

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato un gestore eventi, per il MouseDown evento, implementato per tre controlli ( IDC_MYCTRL1 tramite IDC_MYCTRL3). La funzione del `OnRangeMouseDown`gestore eventi , , viene `CMyDlg`dichiarata nel file di intestazione della classe della finestra di dialogo ( ) come:

[!code-cpp[NVC_MFCAutomation#12](../../mfc/codesnippet/cpp/event-sink-maps_2.h)]

Il codice seguente è definito nel file di implementazione della classe della finestra di dialogo.

[!code-cpp[NVC_MFCAutomation#13](../../mfc/codesnippet/cpp/event-sink-maps_3.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp.h

## <a name="on_event_reflect"></a><a name="on_event_reflect"></a>ON_EVENT_REFLECT

La ON_EVENT_REFLECT macro, se utilizzata nella mappa del sink di evento della classe wrapper di un controllo OLE, riceve gli eventi generati dal controllo prima che vengano gestiti dal contenitore del controllo.

```
ON_EVENT_REFLECT(theClass,  dispid, pfnHandler,  vtsParams)
```

### <a name="parameters"></a>Parametri

*classe theClass*<br/>
Classe a cui appartiene questa mappa del sink di evento.

*Dispid*<br/>
ID di invio dell'evento generato dal controllo.

*PfnHandler (pfnHandler)*<br/>
Puntatore a una funzione membro che gestisce l'evento. Questa funzione deve avere un tipo restituito BOOL e tipi di parametro che corrispondono ai parametri dell'evento (vedere *vtsParams*). La funzione deve restituire TRUE per indicare che l'evento è stato gestito; in caso contrario, FALSE.

*vtsParams (parametri di*<br/>
Sequenza di **costanti VTS_** che specifica i tipi dei parametri per l'evento. Si tratta delle stesse costanti utilizzate nelle voci della mappa di invio, ad esempio DISP_FUNCTION.

### <a name="remarks"></a>Osservazioni

L'argomento *vtsParams* è un elenco separato da spazi di valori dalle costanti **VTS_.**

Uno o più di questi valori separati da spazi (non virgole) specifica l'elenco di parametri della funzione. Ad esempio:

[!code-cpp[NVC_MFCAutomation#11](../../mfc/codesnippet/cpp/event-sink-maps_1.cpp)]

specifica un elenco contenente un valore short integer seguito da un BOOL.

Per un elenco delle costanti **VTS_,** vedere [EVENT_CUSTOM](event-maps.md#event_custom).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp.h

## <a name="on_propnotify"></a><a name="on_propnotify"></a>ON_PROPNOTIFY

Utilizzare la macro ON_PROPNOTIFY per definire una voce della mappa del sink di evento per la gestione delle notifiche delle proprietà da un controllo OLE.

```
ON_PROPNOTIFY(theClass, id, dispid, pfnRequest, pfnChanged)
```

### <a name="parameters"></a>Parametri

*classe theClass*<br/>
Classe a cui appartiene questa mappa del sink di evento.

*id*<br/>
ID del controllo OLE.

*Dispid*<br/>
ID di invio della proprietà coinvolta nella notifica.

*pfnRichiesta*<br/>
Puntatore a una funzione `OnRequestEdit` membro che gestisce la notifica per questa proprietà. Questa funzione deve avere un tipo restituito BOOL e un parametro **BOOL.** <strong>\*</strong> Questa funzione deve impostare il parametro su TRUE per consentire la modifica della proprietà e FALSE per non consentire. La funzione deve restituire TRUE per indicare che la notifica è stata gestita; in caso contrario, FALSE.

*pfnCambiato*<br/>
Puntatore a una funzione `OnChanged` membro che gestisce la notifica per questa proprietà. La funzione deve avere un tipo restituito BOOL e un parametro UINT. La funzione deve restituire TRUE per indicare che la notifica è stata gestita; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

L'argomento *vtsParams* è un elenco separato da spazi di valori dalle costanti **VTS_.** Uno o più di questi valori separati da spazi (non virgole) specifica l'elenco di parametri della funzione. Ad esempio:

[!code-cpp[NVC_MFCAutomation#11](../../mfc/codesnippet/cpp/event-sink-maps_1.cpp)]

specifica un elenco contenente un valore short integer seguito da un BOOL.

Per un elenco delle costanti **VTS_,** vedere [EVENT_CUSTOM](event-maps.md#event_custom).

## <a name="on_propnotify_range"></a><a name="on_propnotify_range"></a>ON_PROPNOTIFY_RANGE

Utilizzare la ON_PROPNOTIFY_RANGE macro per definire una voce della mappa del sink di evento per la gestione delle notifiche di proprietà da qualsiasi controllo OLE con un ID di controllo all'interno di un intervallo contiguo di ID.

```

ON_PROPNOTIFY_RANGE(theClass, idFirst, idLast, dispid, pfnRequest, pfnChanged)
```

### <a name="parameters"></a>Parametri

*classe theClass*<br/>
Classe a cui appartiene questa mappa del sink di evento.

*idPrima*<br/>
ID del controllo del primo controllo OLE nell'intervallo.

*idUltimo*<br/>
ID del controllo dell'ultimo controllo OLE nell'intervallo.

*Dispid*<br/>
ID di invio della proprietà coinvolta nella notifica.

*pfnRichiesta*<br/>
Puntatore a una funzione `OnRequestEdit` membro che gestisce la notifica per questa proprietà. Questa funzione deve `BOOL` avere `UINT` un `BOOL*` tipo restituito e parametri. La funzione deve impostare il parametro su TRUE per consentire la modifica della proprietà e FALSE per non consentire. La funzione deve restituire TRUE per indicare che la notifica è stata gestita; in caso contrario, FALSE.

*pfnCambiato*<br/>
Puntatore a una funzione `OnChanged` membro che gestisce la notifica per questa proprietà. La funzione deve `BOOL` avere un `UINT` tipo restituito e un parametro. La funzione deve restituire TRUE per indicare che la notifica è stata gestita; in caso contrario, FALSE.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp.h

## <a name="on_propnotify_reflect"></a><a name="on_propnotify_reflect"></a>ON_PROPNOTIFY_REFLECT

La macro ON_PROPNOTIFY_REFLECT, se utilizzata nella mappa del sink di evento della classe wrapper di un controllo OLE, riceve le notifiche delle proprietà inviate dal controllo prima che vengano gestite dal contenitore del controllo.

```

ON_PROPNOTIFY_REFLECT(theClass, dispid, pfnRequest, pfnChanged)
```

### <a name="parameters"></a>Parametri

*classe theClass*<br/>
Classe a cui appartiene questa mappa del sink di evento.

*Dispid*<br/>
ID di invio della proprietà coinvolta nella notifica.

*pfnRichiesta*<br/>
Puntatore a una funzione `OnRequestEdit` membro che gestisce la notifica per questa proprietà. Questa funzione deve avere un tipo restituito BOOL e un parametro **BOOL.** <strong>\*</strong> Questa funzione deve impostare il parametro su TRUE per consentire la modifica della proprietà e FALSE per non consentire. La funzione deve restituire TRUE per indicare che la notifica è stata gestita; in caso contrario, FALSE.

*pfnCambiato*<br/>
Puntatore a una funzione `OnChanged` membro che gestisce la notifica per questa proprietà. La funzione deve avere un tipo restituito BOOL e nessun parametro. La funzione deve restituire TRUE per indicare che la notifica è stata gestita; in caso contrario, FALSE.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdisp.h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
