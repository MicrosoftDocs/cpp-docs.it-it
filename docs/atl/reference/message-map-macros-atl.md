---
title: Macro della mappa messaggi (ATL)
ms.date: 11/04/2016
f1_keywords:
- atlwin/ATL::ALT_MSG_MAP
- atlwin/ATL::BEGIN_MSG_MAP
- atlwin/ATL::CHAIN_MSG_MAP_ALT
- atlwin/ATL::CHAIN_MSG_MAP_ALT_MEMBER
- atlwin/ATL::CHAIN_MSG_MAP
- atlwin/ATL::CHAIN_MSG_MAP_DYNAMIC
- atlwin/ATL::CHAIN_MSG_MAP_MEMBER
- atlwin/ATL::COMMAND_CODE_HANDLER
- atlwin/ATL::COMMAND_HANDLER
- atlwin/ATL::COMMAND_ID_HANDLER
- atlwin/ATL::COMMAND_RANGE_CODE_HANDLER
- atlwin/ATL::COMMAND_RANGE_HANDLER
- atlwin/ATL::DECLARE_EMPTY_MSG_MAP
- atlwin/ATL::DEFAULT_REFLECTION_HANDLER
- atlwin/ATL::END_MSG_MAP
- atlwin/ATL::FORWARD_NOTIFICATIONS
- atlwin/ATL::MESSAGE_HANDLER
- atlwin/ATL::MESSAGE_RANGE_HANDLER
- atlwin/ATL::NOTIFY_CODE_HANDLER
- atlwin/ATL::NOTIFY_HANDLER
- atlwin/ATL::NOTIFY_ID_HANDLER
- atlwin/ATL::NOTIFY_RANGE_CODE_HANDLER
- atlwin/ATL::NOTIFY_RANGE_HANDLER
- atlwin/ATL::REFLECT_NOTIFICATIONS
- atlwin/ATL::REFLECTED_COMMAND_CODE_HANDLER
- atlwin/ATL::REFLECTED_COMMAND_HANDLER
- atlwin/ATL::REFLECTED_COMMAND_ID_HANDLER
- atlwin/ATL::REFLECTED_COMMAND_RANGE_CODE_HANDLER
- atlwin/ATL::REFLECTED_COMMAND_RANGE_HANDLER
- atlwin/ATL::REFLECTED_NOTIFY_CODE_HANDLER
- atlwin/ATL::REFLECTED_NOTIFY_HANDLER
- atlwin/ATL::REFLECTED_NOTIFY_ID_HANDLER
- atlwin/ATL::REFLECTED_NOTIFY_RANGE_CODE_HANDLER
- atlwin/ATL::REFLECTED_NOTIFY_RANGE_HANDLER
ms.assetid: eefdd546-8934-4a30-b263-9c06a8addcbd
ms.openlocfilehash: bedef3a8563e27f72017720530e3b7addb78ec3d
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57290378"
---
# <a name="message-map-macros-atl"></a>Macro della mappa messaggi (ATL)

Queste macro definiscono le mappe messaggi e le voci.

|||
|-|-|
|[ALT_MSG_MAP](#alt_msg_map)|Contrassegna l'inizio di una mappa messaggi alternativo.|
|[BEGIN_MSG_MAP](#begin_msg_map)|Contrassegna l'inizio della mappa del messaggio predefinito.|
|[CHAIN_MSG_MAP_ALT](#chain_msg_map_alt)|Eseguire il mapping sia concatenato a un messaggio alternativo nella classe di base.|
|[CHAIN_MSG_MAP_ALT_MEMBER](#chain_msg_map_alt_member)|Eseguire il mapping sia concatenato a un messaggio alternativo in un membro dati della classe.|
|[CHAIN_MSG_MAP](#chain_msg_map)|Eseguire il mapping delle catene per il messaggio predefinito nella classe di base.|
|[CHAIN_MSG_MAP_DYNAMIC](#chain_msg_map_dynamic)|Catene alla mappa dei messaggi in un'altra classe in fase di esecuzione.|
|[CHAIN_MSG_MAP_MEMBER](#chain_msg_map_member)|Eseguire il mapping delle catene per il messaggio predefinito in un membro dati della classe.|
|[COMMAND_CODE_HANDLER](#command_code_handler)|Un messaggio WM_COMMAND viene eseguito il mapping a una funzione del gestore, in base al codice di notifica.|
|[COMMAND_HANDLER](#command_handler)|Un messaggio WM_COMMAND viene eseguito il mapping a una funzione del gestore, in base al codice di notifica e l'identificatore della voce di menu, controllo o tasto di scelta rapida.|
|[COMMAND_ID_HANDLER](#command_id_handler)|Un messaggio WM_COMMAND viene eseguito il mapping a una funzione del gestore, in base all'identificatore della voce di menu, controllo o tasto di scelta rapida.|
|[COMMAND_RANGE_CODE_HANDLER](#command_range_code_handler)|Un messaggio WM_COMMAND viene eseguito il mapping a una funzione del gestore, in base al codice di notifica e un intervallo contiguo di identificatori di controllo.|
|[COMMAND_RANGE_HANDLER](#command_range_handler)|Un messaggio WM_COMMAND viene eseguito il mapping a una funzione del gestore, basata su un intervallo contiguo di identificatori di controllo.|
|[DECLARE_EMPTY_MSG_MAP](#declare_empty_msg_map)|Implementa una mappa di messaggio vuoto.|
|[DEFAULT_REFLECTION_HANDLER](#default_reflection_handler)|Fornisce un gestore predefinito per i messaggi riflessi non vengono gestiti in caso contrario.|
|[END_MSG_MAP](#end_msg_map)|Contrassegna la fine di una mappa messaggi.|
|[FORWARD_NOTIFICATIONS](#forward_notifications)|Inoltra i messaggi di notifica alla finestra padre.|
|[MESSAGE_HANDLER](#message_handler)|Un messaggio di Windows viene eseguito il mapping a una funzione del gestore.|
|[MESSAGE_RANGE_HANDLER](#message_range_handler)|I messaggi di un intervallo contiguo di Windows viene eseguito il mapping a una funzione del gestore.|
|[NOTIFY_CODE_HANDLER](#notify_code_handler)|Un messaggio WM_NOTIFY viene eseguito il mapping a una funzione del gestore, in base al codice di notifica.|
|[NOTIFY_HANDLER](#notify_handler)|Un messaggio WM_NOTIFY viene eseguito il mapping a una funzione del gestore, in base al codice di notifica e l'identificatore del controllo.|
|[NOTIFY_ID_HANDLER](#notify_id_handler)|Un messaggio WM_NOTIFY viene eseguito il mapping a una funzione del gestore, in base all'identificatore del controllo.|
|[NOTIFY_RANGE_CODE_HANDLER](#notify_range_code_handler)|Un messaggio WM_NOTIFY viene eseguito il mapping a una funzione del gestore, in base al codice di notifica e un intervallo contiguo di identificatori di controllo.|
|[NOTIFY_RANGE_HANDLER](#notify_range_handler)|Un messaggio WM_NOTIFY viene eseguito il mapping a una funzione del gestore, basata su un intervallo contiguo di identificatori di controllo.|
|[REFLECT_NOTIFICATIONS](#reflect_notifications)|Riflette i messaggi di notifica alla finestra che li ha inviati.|
|[REFLECTED_COMMAND_CODE_HANDLER](#reflected_command_code_handler)|Un messaggio WM_COMMAND viene eseguito il mapping a una funzione del gestore, in base al codice di notifica.|
|[REFLECTED_COMMAND_HANDLER](#reflected_command_handler)|Un messaggio WM_COMMAND viene eseguito il mapping a una funzione del gestore, in base al codice di notifica e l'identificatore della voce di menu, controllo o tasto di scelta rapida.|
|[REFLECTED_COMMAND_ID_HANDLER](#reflected_command_id_handler)|Un messaggio WM_COMMAND viene eseguito il mapping a una funzione del gestore, in base all'identificatore della voce di menu, controllo o tasto di scelta rapida.|
|[REFLECTED_COMMAND_RANGE_CODE_HANDLER](#reflected_command_range_code_handler)|Un messaggio WM_COMMAND viene eseguito il mapping a una funzione del gestore, in base al codice di notifica e un intervallo contiguo di identificatori di controllo.|
|[REFLECTED_COMMAND_RANGE_HANDLER](#reflected_command_range_handler)|Un messaggio WM_COMMAND viene eseguito il mapping a una funzione del gestore, basata su un intervallo contiguo di identificatori di controllo.|
|[REFLECTED_NOTIFY_CODE_HANDLER](#reflected_notify_code_handler)|Esegue il mapping di un messaggio WM_NOTIFY riprodotto a una funzione del gestore, in base al codice di notifica.|
|[REFLECTED_NOTIFY_HANDLER](#reflected_notify_handler)|Esegue il mapping di un messaggio WM_NOTIFY riprodotto a una funzione del gestore, in base al codice di notifica e l'identificatore del controllo.|
|[REFLECTED_NOTIFY_ID_HANDLER](#reflected_notify_id_handler)|Esegue il mapping di un messaggio WM_NOTIFY riprodotto a una funzione del gestore, in base all'identificatore del controllo.|
|[REFLECTED_NOTIFY_RANGE_CODE_HANDLER](#reflected_notify_range_code_handler)|Esegue il mapping di un messaggio WM_NOTIFY riprodotto a una funzione del gestore, in base al codice di notifica e un intervallo contiguo di identificatori di controllo.|
|[REFLECTED_NOTIFY_RANGE_HANDLER](#reflected_notify_range_handler)|Esegue il mapping di un messaggio WM_NOTIFY riprodotto a una funzione del gestore, basata su un intervallo contiguo di identificatori di controllo.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="alt_msg_map"></a>  ALT_MSG_MAP

Contrassegna l'inizio di una mappa messaggi alternativo.

```
ALT_MSG_MAP(msgMapID)
```

### <a name="parameters"></a>Parametri

*msgMapID*<br/>
[in] L'identificatore della mappa del messaggio.

### <a name="remarks"></a>Note

ATL identifica ogni mappa dei messaggi da un numero. La mappa dei messaggi predefinita (dichiarata con la macro BEGIN_MSG_MAP) è identificata da 0. Una mappa messaggi alternativo è identificata da *msgMapID*.

Mappe messaggi vengono utilizzate per elaborare i messaggi inviati a una finestra. Ad esempio, [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) consente di specificare l'identificatore di una mappa dei messaggi nell'oggetto che contiene. [CContainedWindow:: WindowProc](ccontainedwindowt-class.md#windowproc) Usa quindi questa mappa messaggi per indirizzare i messaggi della finestra contenuta in funzione del gestore appropriato o in un'altra mappa messaggi. Per un elenco delle macro che dichiarano funzioni di gestione, vedere [BEGIN_MSG_MAP](#begin_msg_map).

Iniziano sempre una mappa dei messaggi con BEGIN_MSG_MAP. È possibile dichiarare le mappe dei successivi messaggi alternativo.

Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Si noti che ci sia sempre esattamente un'istanza di BEGIN_MSG_MAP ed END_MSG_MAP.

Per altre informazioni sull'uso di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).

### <a name="example"></a>Esempio

L'esempio seguente illustra il mapping dei messaggi predefinito e mappa di un messaggio alternativo, ognuno dei quali contiene una funzione del gestore:

[!code-cpp[NVC_ATL_Windowing#98](../../atl/codesnippet/cpp/message-map-macros-atl_1.h)]

L'esempio seguente mostra due mappe di messaggi alternativo. La mappa dei messaggi predefinita è vuota.

[!code-cpp[NVC_ATL_Windowing#99](../../atl/codesnippet/cpp/message-map-macros-atl_2.h)]

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="begin_msg_map"></a>  BEGIN_MSG_MAP

Contrassegna l'inizio della mappa del messaggio predefinito.

```
BEGIN_MSG_MAP(theClass)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
[in] Il nome della classe contenente la mappa dei messaggi.

### <a name="remarks"></a>Note

[CWindowImpl::](cwindowimpl-class.md#windowproc) Usa la mappa dei messaggi predefinita per elaborare i messaggi inviati alla finestra. La mappa messaggi indirizza i messaggi in funzione del gestore appropriato o in un'altra mappa messaggi.

Le macro seguenti mapping di un messaggio a una funzione del gestore. Questa funzione deve essere definita in *theClass*.

|Macro|Descrizione|
|-----------|-----------------|
|[MESSAGE_HANDLER](#message_handler)|Un messaggio di Windows viene eseguito il mapping a una funzione del gestore.|
|[MESSAGE_RANGE_HANDLER](#message_range_handler)|I messaggi di un intervallo contiguo di Windows viene eseguito il mapping a una funzione del gestore.|
|[COMMAND_HANDLER](#command_handler)|Un messaggio WM_COMMAND viene eseguito il mapping a una funzione del gestore, in base al codice di notifica e l'identificatore della voce di menu, controllo o tasto di scelta rapida.|
|[COMMAND_ID_HANDLER](#command_id_handler)|Un messaggio WM_COMMAND viene eseguito il mapping a una funzione del gestore, in base all'identificatore della voce di menu, controllo o tasto di scelta rapida.|
|[COMMAND_CODE_HANDLER](#command_handler)|Un messaggio WM_COMMAND viene eseguito il mapping a una funzione del gestore, in base al codice di notifica.|
|[COMMAND_RANGE_HANDLER](#command_range_handler)|Esegue il mapping di un intervallo contiguo di WM_COMMAND (messaggi) a una funzione del gestore, in base all'identificatore della voce di menu, controllo o tasto di scelta rapida.|
|[NOTIFY_HANDLER](#notify_handler)|Un messaggio WM_NOTIFY viene eseguito il mapping a una funzione del gestore, in base al codice di notifica e l'identificatore del controllo.|
|[NOTIFY_ID_HANDLER](#notify_id_handler)|Un messaggio WM_NOTIFY viene eseguito il mapping a una funzione del gestore, in base all'identificatore del controllo.|
|[NOTIFY_CODE_HANDLER](#notify_code_handler)|Un messaggio WM_NOTIFY viene eseguito il mapping a una funzione del gestore, in base al codice di notifica.|
|[NOTIFY_RANGE_HANDLER](#notify_range_handler)|I messaggi di un intervallo contiguo di WM_NOTIFY viene eseguito il mapping a una funzione del gestore, in base all'identificatore del controllo.|

Le macro seguenti indirizzano messaggi a un'altra mappa messaggi. Questo processo è denominato "concatenamento".

|Macro|Descrizione|
|-----------|-----------------|
|[CHAIN_MSG_MAP](#chain_msg_map)|Eseguire il mapping delle catene per il messaggio predefinito nella classe di base.|
|[CHAIN_MSG_MAP_MEMBER](#chain_msg_map_member)|Eseguire il mapping delle catene per il messaggio predefinito in un membro dati della classe.|
|[CHAIN_MSG_MAP_ALT](#chain_msg_map_alt)|Eseguire il mapping sia concatenato a un messaggio alternativo nella classe di base.|
|[CHAIN_MSG_MAP_ALT_MEMBER](#chain_msg_map_alt_member)|Eseguire il mapping sia concatenato a un messaggio alternativo in un membro dati della classe.|
|[CHAIN_MSG_MAP_DYNAMIC](#chain_msg_map_dynamic)|Eseguire il mapping delle catene per il messaggio predefinito in un'altra classe in fase di esecuzione.|

Le seguenti macro indirizzano i messaggi "riflesse" dalla finestra padre. Ad esempio, un controllo in genere invia i messaggi di notifica alla finestra padre per l'elaborazione, ma la finestra padre può riprodurre il messaggio al controllo.

|Macro|Descrizione|
|-----------|-----------------|
|[REFLECTED_COMMAND_HANDLER](#reflected_command_handler)|Un messaggio WM_COMMAND viene eseguito il mapping a una funzione del gestore, in base al codice di notifica e l'identificatore della voce di menu, controllo o tasto di scelta rapida.|
|[REFLECTED_COMMAND_ID_HANDLER](#reflected_command_id_handler)|Un messaggio WM_COMMAND viene eseguito il mapping a una funzione del gestore, in base all'identificatore della voce di menu, controllo o tasto di scelta rapida.|
|[REFLECTED_COMMAND_CODE_HANDLER](#reflected_command_code_handler)|Un messaggio WM_COMMAND viene eseguito il mapping a una funzione del gestore, in base al codice di notifica.|
|[REFLECTED_COMMAND_RANGE_HANDLER](#reflected_command_range_handler)|Un messaggio WM_COMMAND viene eseguito il mapping a una funzione del gestore, basata su un intervallo contiguo di identificatori di controllo.|
|[REFLECTED_COMMAND_RANGE_CODE_HANDLER](#reflected_command_range_code_handler)|Un messaggio WM_COMMAND viene eseguito il mapping a una funzione del gestore, in base al codice di notifica e un intervallo contiguo di identificatori di controllo.|
|[REFLECTED_NOTIFY_HANDLER](#reflected_notify_handler)|Esegue il mapping di un messaggio WM_NOTIFY riprodotto a una funzione del gestore, in base al codice di notifica e l'identificatore del controllo.|
|[REFLECTED_NOTIFY_ID_HANDLER](#reflected_notify_id_handler)|Esegue il mapping di un messaggio WM_NOTIFY riprodotto a una funzione del gestore, in base all'identificatore del controllo.|
|[REFLECTED_NOTIFY_CODE_HANDLER](#reflected_notify_code_handler)|Esegue il mapping di un messaggio WM_NOTIFY riprodotto a una funzione del gestore, in base al codice di notifica.|
|[REFLECTED_NOTIFY_RANGE_HANDLER](#reflected_notify_range_handler)|Esegue il mapping di un messaggio WM_NOTIFY riprodotto a una funzione del gestore, basata su un intervallo contiguo di identificatori di controllo.|
|[REFLECTED_NOTIFY_RANGE_CODE_HANDLER](#reflected_notify_range_code_handler)|Esegue il mapping di un messaggio WM_NOTIFY riprodotto a una funzione del gestore, in base al codice di notifica e un intervallo contiguo di identificatori di controllo.|

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#102](../../atl/codesnippet/cpp/message-map-macros-atl_3.h)]

Quando un `CMyExtWindow` oggetto riceve un messaggio WM_PAINT, il messaggio viene indirizzato a `CMyExtWindow::OnPaint` per l'elaborazione effettiva. Se `OnPaint` indica il messaggio richiede un'ulteriore elaborazione, il messaggio viene quindi reindirizzati alla mappa messaggi predefinito `CMyBaseWindow`.

Oltre alla mappa messaggi predefinito, è possibile definire una mappa messaggi alternativa con [ALT_MSG_MAP](#alt_msg_map). Iniziano sempre una mappa dei messaggi con BEGIN_MSG_MAP. È possibile dichiarare le mappe dei successivi messaggi alternativo. L'esempio seguente illustra il mapping dei messaggi predefinito e mappa di un messaggio alternativo, ognuno dei quali contiene una funzione del gestore:

[!code-cpp[NVC_ATL_Windowing#98](../../atl/codesnippet/cpp/message-map-macros-atl_1.h)]

L'esempio seguente mostra due mappe di messaggi alternativo. La mappa dei messaggi predefinita è vuota.

[!code-cpp[NVC_ATL_Windowing#99](../../atl/codesnippet/cpp/message-map-macros-atl_2.h)]

Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Si noti che ci sia sempre esattamente un'istanza di BEGIN_MSG_MAP ed END_MSG_MAP.

Per altre informazioni sull'uso di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="chain_msg_map_alt"></a>  CHAIN_MSG_MAP_ALT

Definisce una voce in una mappa messaggi.

```
CHAIN_MSG_MAP_ALT(theChainClass, msgMapID)
```

### <a name="parameters"></a>Parametri

*theChainClass*<br/>
[in] Il nome della classe di base che contiene la mappa dei messaggi.

*msgMapID*<br/>
[in] L'identificatore della mappa del messaggio.

### <a name="remarks"></a>Note

CHAIN_MSG_MAP_ALT indirizza i messaggi a una mappa messaggi alternative in una classe di base. È necessario aver dichiarato la mappa messaggi alternativo con [ALT_MSG_MAP(msgMapID)](#alt_msg_map). Per indirizzare i messaggi alla mappa messaggi di una classe di base predefinito (dichiarato con [BEGIN_MSG_MAP](#begin_msg_map)), usare CHAIN_MSG_MAP. Per un esempio, vedere [CHAIN_MSG_MAP](#chain_msg_map).

> [!NOTE]
>  Iniziano sempre una mappa dei messaggi con BEGIN_MSG_MAP. È quindi possibile dichiarare le mappe dei successivi messaggi alternativo con ALT_MSG_MAP. Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Ogni mappa del messaggio deve avere esattamente un'istanza di BEGIN_MSG_MAP ed END_MSG_MAP.

Per altre informazioni sull'uso di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="chain_msg_map_alt_member"></a>  CHAIN_MSG_MAP_ALT_MEMBER

Definisce una voce in una mappa messaggi.

```
CHAIN_MSG_MAP_ALT_MEMBER(theChainMember, msgMapID)
```

### <a name="parameters"></a>Parametri

*theChainMember*<br/>
[in] Il nome del membro dati che contiene la mappa dei messaggi.

*msgMapID*<br/>
[in] L'identificatore della mappa del messaggio.

### <a name="remarks"></a>Note

CHAIN_MSG_MAP_ALT_MEMBER indirizza i messaggi a una mappa messaggi alternative in un membro dati. È necessario aver dichiarato la mappa messaggi alternativo con [ALT_MSG_MAP(msgMapID)](#alt_msg_map). Per indirizzare i messaggi alla mappa messaggi di un membro dati predefiniti (dichiarato con [BEGIN_MSG_MAP](#begin_msg_map)), usare CHAIN_MSG_MAP_MEMBER. Per un esempio, vedere [CHAIN_MSG_MAP_MEMBER](#chain_msg_map_member).

> [!NOTE]
>  Iniziano sempre una mappa dei messaggi con BEGIN_MSG_MAP. È quindi possibile dichiarare le mappe dei successivi messaggi alternativo con ALT_MSG_MAP. Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Ogni mappa del messaggio deve avere esattamente un'istanza di BEGIN_MSG_MAP ed END_MSG_MAP.

Per altre informazioni sull'uso di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="chain_msg_map"></a>  CHAIN_MSG_MAP

Definisce una voce in una mappa messaggi.

```
CHAIN_MSG_MAP(theChainClass)
```

### <a name="parameters"></a>Parametri

*theChainClass*<br/>
[in] Il nome della classe di base che contiene la mappa dei messaggi.

### <a name="remarks"></a>Note

CHAIN_MSG_MAP indirizza i messaggi alla mappa messaggi di una classe di base predefinito (dichiarato con [BEGIN_MSG_MAP](#begin_msg_map)). Per indirizzare i messaggi alla mappa messaggi alternativo di una classe di base (dichiarato con [ALT_MSG_MAP](#alt_msg_map)), usare [CHAIN_MSG_MAP_ALT](#chain_msg_map_alt).

> [!NOTE]
>  Iniziano sempre una mappa dei messaggi con BEGIN_MSG_MAP. È quindi possibile dichiarare le mappe dei successivi messaggi alternativo con ALT_MSG_MAP. Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Ogni mappa del messaggio deve avere esattamente un'istanza di BEGIN_MSG_MAP ed END_MSG_MAP.

Per altre informazioni sull'uso di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#107](../../atl/codesnippet/cpp/message-map-macros-atl_4.h)]

In questo esempio viene illustrato quanto segue:

- Se sta usando una routine della finestra `CMyClass`della mappa messaggi predefinita e `OnPaint` non handle di un messaggio, il messaggio viene indirizzato a `CMyBaseClass`del mappa dei messaggi predefinita per l'elaborazione.

- Se una procedura di finestra è utilizzando la mappa messaggi alternativo prima nella `CMyClass`, tutti i messaggi vengono indirizzati a `CMyBaseClass`della mappa del messaggio predefinito.

- Se si usa una routine della finestra `CMyClass`di eseguire il mapping secondo messaggio alternativo e `OnChar` non handle di un messaggio, il messaggio viene indirizzato alla mappa messaggio alternativo specificato `CMyBaseClass`. `CMyBaseClass` deve avere dichiarato la mappa messaggi con ALT_MSG_MAP(1).

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="chain_msg_map_dynamic"></a>  CHAIN_MSG_MAP_DYNAMIC

Definisce una voce in una mappa messaggi.

```
CHAIN_MSG_MAP_DYNAMIC(dynaChainID)
```

### <a name="parameters"></a>Parametri

*dynaChainID*<br/>
[in] Identificatore univoco per la mappa dei messaggi di un oggetto.

### <a name="remarks"></a>Note

CHAIN_MSG_MAP_DYNAMIC indirizza i messaggi, in fase di esecuzione alla mappa dei messaggi predefinita in un altro oggetto. L'oggetto e propria mappa messaggi sono associati *dynaChainID*, che viene definita attraverso [CDynamicChain::](cdynamicchain-class.md#setchainentry). È necessario derivare la classe da `CDynamicChain` per poter utilizzare CHAIN_MSG_MAP_DYNAMIC. Per un esempio, vedere la [CDynamicChain](../../atl/reference/cdynamicchain-class.md) Panoramica.

> [!NOTE]
>  Iniziano sempre una mappa dei messaggi con [BEGIN_MSG_MAP](#begin_msg_map). È quindi possibile dichiarare le mappe dei successivi messaggi alternativo con ALT_MSG_MAP. Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Ogni mappa del messaggio deve avere esattamente un'istanza di BEGIN_MSG_MAP ed END_MSG_MAP.

Per altre informazioni sull'uso di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="chain_msg_map_member"></a>  CHAIN_MSG_MAP_MEMBER

Definisce una voce in una mappa messaggi.

```
CHAIN_MSG_MAP_MEMBER(theChainMember)
```

### <a name="parameters"></a>Parametri

*theChainMember*<br/>
[in] Il nome del membro dati che contiene la mappa dei messaggi.

### <a name="remarks"></a>Note

CHAIN_MSG_MAP_MEMBER indirizza i messaggi alla mappa messaggi di un membro dati predefiniti (dichiarato con [BEGIN_MSG_MAP](#begin_msg_map)). Per indirizzare i messaggi alla mappa messaggi alternativo di un membro dati (dichiarato con [ALT_MSG_MAP](#alt_msg_map)), usare [CHAIN_MSG_MAP_ALT_MEMBER](#chain_msg_map_alt_member).

> [!NOTE]
>  Iniziano sempre una mappa dei messaggi con BEGIN_MSG_MAP. È quindi possibile dichiarare le mappe dei successivi messaggi alternativo con ALT_MSG_MAP. Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Ogni mappa del messaggio deve avere esattamente un'istanza di BEGIN_MSG_MAP ed END_MSG_MAP.

Per altre informazioni sull'uso di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#108](../../atl/codesnippet/cpp/message-map-macros-atl_5.h)]

In questo esempio viene illustrato quanto segue:

- Se sta usando una routine della finestra `CMyClass`della mappa messaggi predefinita e `OnPaint` non handle di un messaggio, il messaggio viene indirizzato a `m_obj`del mappa dei messaggi predefinita per l'elaborazione.

- Se una procedura di finestra è utilizzando la mappa messaggi alternativo prima nella `CMyClass`, tutti i messaggi vengono indirizzati a `m_obj`della mappa del messaggio predefinito.

- Se si usa una routine della finestra `CMyClass`di eseguire il mapping secondo messaggio alternativo e `OnChar` non handle di un messaggio, il messaggio viene indirizzato alla mappa del messaggio alternativo specificato di `m_obj`. Classe `CMyContainedClass` deve avere dichiarato la mappa messaggi con ALT_MSG_MAP(1).

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="command_code_handler"></a>  COMMAND_CODE_HANDLER

Simile a [COMMAND_HANDLER](#command_handler), ma esegue il mapping di un [WM_COMMAND](/windows/desktop/menurc/wm-command) messaggi solo in base al codice di notifica.

```
COMMAND_CODE_HANDLER(code, func)
```

### <a name="parameters"></a>Parametri

*codice*<br/>
[in] Il codice di notifica.

*func*<br/>
[in] Il nome della funzione di gestore di messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="command_handler"></a>  COMMAND_HANDLER

Definisce una voce in una mappa messaggi.

```
COMMAND_HANDLER(id, code, func)
```

### <a name="parameters"></a>Parametri

*ID*<br/>
[in] Identificatore della voce di menu, controllo o tasto di scelta rapida.

*codice*<br/>
[in] Il codice di notifica.

*func*<br/>
[in] Il nome della funzione di gestore di messaggi.

### <a name="remarks"></a>Note

Esegue il mapping COMMAND_HANDLER una [WM_COMMAND](/windows/desktop/menurc/wm-command) messaggio alla funzione del gestore specificato, in base al codice di notifica e l'identificatore del controllo. Ad esempio:

[!code-cpp[NVC_ATL_Windowing#119](../../atl/codesnippet/cpp/message-map-macros-atl_6.h)]

Qualsiasi funzione specificato in una macro COMMAND_HANDLER deve essere definita come segue:

`LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);`

Il set di mapping dei messaggi `bHandled` su TRUE prima `CommandHandler` viene chiamato. Se `CommandHandler` non gestisce completamente il messaggio deve essere impostato `bHandled` su FALSE per indicare che il messaggio richiede un'ulteriore elaborazione.

> [!NOTE]
>  Iniziano sempre una mappa dei messaggi con [BEGIN_MSG_MAP](#begin_msg_map). È quindi possibile dichiarare le mappe dei successivi messaggi alternativo con [ALT_MSG_MAP](#alt_msg_map). Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Ogni mappa del messaggio deve avere esattamente un'istanza di BEGIN_MSG_MAP ed END_MSG_MAP.

Oltre a COMMAND_HANDLER, è possibile usare [MESSAGE_HANDLER](#message_handler) per eseguire il mapping di un messaggio WM_COMMAND senza considerare un identificatore o un codice. In questo caso `MESSAGE_HANDLER(WM_COMMAND, OnHandlerFunction)` indirizzerà tutti i messaggi WM_COMMAND `OnHandlerFunction`.

Per altre informazioni sull'uso di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="command_id_handler"></a>  COMMAND_ID_HANDLER

Simile a [COMMAND_HANDLER](#command_handler), ma esegue il mapping di un [WM_COMMAND](/windows/desktop/menurc/wm-command) messaggi solo in base all'identificatore della voce di menu, controllo o tasto di scelta rapida.

```
COMMAND_ID_HANDLER(id, func)
```

### <a name="parameters"></a>Parametri

*ID*<br/>
[in] Identificatore della voce di menu, controllo o l'invio del messaggio di tasti di scelta rapida.

*func*<br/>
[in] Il nome della funzione di gestore di messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="command_range_code_handler"></a>  COMMAND_RANGE_CODE_HANDLER

Simile a [COMMAND_RANGE_HANDLER](#command_range_handler), ma viene eseguito il mapping [WM_COMMAND](/windows/desktop/menurc/wm-command) messaggi con un codice di notifica specifico da una gamma di controlli a una funzione di gestione singolo.

```
COMMAND_RANGE_CODE_HANDLER(idFirst, idLast, code, func)
```

### <a name="parameters"></a>Parametri

*idFirst*<br/>
[in] Contrassegna l'inizio di un intervallo contiguo di identificatori di controllo.

*idLast*<br/>
[in] Contrassegna la fine di un intervallo contiguo di identificatori di controllo.

*codice*<br/>
[in] Il codice di notifica.

*func*<br/>
[in] Il nome della funzione di gestore di messaggi.

### <a name="remarks"></a>Note

Questo intervallo si basa sull'identificatore della voce di menu, controllo o l'invio del messaggio di tasti di scelta rapida.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="command_range_handler"></a>  COMMAND_RANGE_HANDLER

Simile a [COMMAND_HANDLER](#command_handler), ma viene eseguito il mapping [WM_COMMAND](/windows/desktop/menurc/wm-command) i messaggi da una gamma di controlli a una funzione di gestione singolo.

```
COMMAND_RANGE_HANDLER( idFirst, idLast, func)
```

### <a name="parameters"></a>Parametri

*idFirst*<br/>
[in] Contrassegna l'inizio di un intervallo contiguo di identificatori di controllo.

*idLast*<br/>
[in] Contrassegna la fine di un intervallo contiguo di identificatori di controllo.

*func*<br/>
[in] Il nome della funzione di gestore di messaggi.

### <a name="remarks"></a>Note

Questo intervallo si basa sull'identificatore della voce di menu, controllo o l'invio del messaggio di tasti di scelta rapida.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="declare_empty_msg_map"></a>  DECLARE_EMPTY_MSG_MAP

Dichiara un mapping del messaggio vuoto.

```
DECLARE_EMPTY_MSG_MAP()
```

### <a name="remarks"></a>Note

DECLARE_EMPTY_MSG_MAP è una macro di praticità che chiama le macro [BEGIN_MSG_MAP](#begin_msg_map) e [END_MSG_MAP](#end_msg_map) per creare una mappa messaggi vuota:

[!code-cpp[NVC_ATL_Windowing#122](../../atl/codesnippet/cpp/message-map-macros-atl_7.h)]

##  <a name="default_reflection_handler"></a>  DEFAULT_REFLECTION_HANDLER

Fornisce un gestore predefinito per la finestra figlio (controllo) che riceverà messaggi; riflessi il gestore passerà correttamente i messaggi non gestiti a `DefWindowProc`.

```
DEFAULT_REFLECTION_HANDLER()
```

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="end_msg_map"></a>  END_MSG_MAP

Contrassegna la fine di una mappa messaggi.

```
END_MSG_MAP()
```

### <a name="remarks"></a>Note

Usare sempre la [BEGIN_MSG_MAP](#begin_msg_map) macro per contrassegnare l'inizio di una mappa messaggi. Uso [ALT_MSG_MAP](#alt_msg_map) per dichiarare le mappe dei successivi messaggi alternativo.

Si noti che ci sia sempre esattamente un'istanza di BEGIN_MSG_MAP ed END_MSG_MAP.

Per altre informazioni sull'uso di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).

### <a name="example"></a>Esempio

L'esempio seguente illustra il mapping dei messaggi predefinito e mappa di un messaggio alternativo, ognuno dei quali contiene una funzione del gestore:

[!code-cpp[NVC_ATL_Windowing#98](../../atl/codesnippet/cpp/message-map-macros-atl_1.h)]

L'esempio seguente mostra due mappe di messaggi alternativo. La mappa dei messaggi predefinita è vuota.

[!code-cpp[NVC_ATL_Windowing#99](../../atl/codesnippet/cpp/message-map-macros-atl_2.h)]

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="forward_notifications"></a>  FORWARD_NOTIFICATIONS

Inoltra i messaggi di notifica alla finestra padre.

```
FORWARD_NOTIFICATIONS()
```

### <a name="remarks"></a>Note

Specificare questa macro come parte della mappa del messaggio.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="message_handler"></a>  MESSAGE_HANDLER

Definisce una voce in una mappa messaggi.

```
MESSAGE_HANDLER( msg, func )
```

### <a name="parameters"></a>Parametri

*msg*<br/>
[in] Il messaggio di Windows.

*func*<br/>
[in] Il nome della funzione di gestore di messaggi.

### <a name="remarks"></a>Note

MESSAGE_HANDLER esegue il mapping di un messaggio di Windows per la funzione del gestore specificati.

Qualsiasi funzione specificato in una macro MESSAGE_HANDLER deve essere definita come segue:

`LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);`

Il set di mapping dei messaggi `bHandled` su TRUE prima `MessageHandler` viene chiamato. Se `MessageHandler` non gestisce completamente il messaggio deve essere impostato `bHandled` su FALSE per indicare che il messaggio richiede un'ulteriore elaborazione.

> [!NOTE]
>  Iniziano sempre una mappa dei messaggi con [BEGIN_MSG_MAP](#begin_msg_map). È quindi possibile dichiarare le mappe dei successivi messaggi alternativo con [ALT_MSG_MAP](#alt_msg_map). Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Ogni mappa del messaggio deve avere esattamente un'istanza di BEGIN_MSG_MAP ed END_MSG_MAP.

Oltre a MESSAGE_HANDLER, è possibile usare [COMMAND_HANDLER](#command_handler) e [NOTIFY_HANDLER](#notify_handler) per eseguire il mapping [WM_COMMAND](/windows/desktop/menurc/wm-command) e [WM_NOTIFY](/windows/desktop/controls/wm-notify) messaggi , rispettivamente.

Per altre informazioni sull'uso di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#129](../../atl/codesnippet/cpp/message-map-macros-atl_8.h)]

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="message_range_handler"></a>  MESSAGE_RANGE_HANDLER

Simile a [MESSAGE_HANDLER](#message_handler), ma viene mappato un intervallo di Windows di messaggi a una funzione di gestione singolo.

```
MESSAGE_RANGE_HANDLER( msgFirst, msgLast, func )
```

### <a name="parameters"></a>Parametri

*msgFirst*<br/>
[in] Contrassegna l'inizio di un intervallo contiguo di messaggi.

*msgLast*<br/>
[in] Contrassegna la fine di un intervallo contiguo di messaggi.

*func*<br/>
[in] Il nome della funzione di gestore di messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="notify_code_handler"></a>  NOTIFY_CODE_HANDLER

Simile a [NOTIFY_HANDLER](#notify_handler), ma esegue il mapping di un [WM_NOTIFY](/windows/desktop/controls/wm-notify) messaggi solo in base al codice di notifica.

```
NOTIFY_CODE_HANDLER(cd, func)
```

### <a name="parameters"></a>Parametri

*cd*<br/>
[in] Il codice di notifica.

*func*<br/>
[in] Il nome della funzione di gestore di messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="notify_handler"></a>  NOTIFY_HANDLER

Definisce una voce in una mappa messaggi.

```
NOTIFY_HANDLER( id, cd, func )
```

### <a name="parameters"></a>Parametri

*ID*<br/>
[in] L'identificatore del controllo che invia il messaggio.

*cd*<br/>
[in] Il codice di notifica.

*func*<br/>
[in] Il nome della funzione di gestore di messaggi.

### <a name="remarks"></a>Note

Esegue il mapping di NOTIFY_HANDLER una [WM_NOTIFY](/windows/desktop/controls/wm-notify) messaggio alla funzione del gestore specificato, in base al codice di notifica e l'identificatore del controllo.

Qualsiasi funzione specificato in una macro NOTIFY_HANDLER deve essere definita come segue:

`LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);`

Il set di mapping dei messaggi `bHandled` su TRUE prima `NotifyHandler` viene chiamato. Se `NotifyHandler` non gestisce completamente il messaggio deve essere impostato `bHandled` su FALSE per indicare che il messaggio richiede un'ulteriore elaborazione.

> [!NOTE]
>  Iniziano sempre una mappa dei messaggi con [BEGIN_MSG_MAP](#begin_msg_map). È quindi possibile dichiarare le mappe dei successivi messaggi alternativo con [ALT_MSG_MAP](#alt_msg_map). Il [END_MSG_MAP](#end_msg_map) macro contrassegna la fine della mappa messaggi. Ogni mappa del messaggio deve avere esattamente un'istanza di BEGIN_MSG_MAP ed END_MSG_MAP.

Oltre a NOTIFY_HANDLER, è possibile usare [MESSAGE_HANDLER](#message_handler) per eseguire il mapping di un messaggio WM_NOTIFY senza considerare un identificatore o un codice. In questo caso `MESSAGE_HANDLER(WM_NOTIFY, OnHandlerFunction)` indirizzerà tutti i messaggi WM_NOTIFY `OnHandlerFunction`.

Per altre informazioni sull'uso di mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#130](../../atl/codesnippet/cpp/message-map-macros-atl_9.h)]

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="notify_id_handler"></a>  NOTIFY_ID_HANDLER

Simile a [NOTIFY_HANDLER](#notify_handler), ma esegue il mapping di un [WM_NOTIFY](/windows/desktop/controls/wm-notify) messaggi solo in base l'identificatore del controllo.

```
NOTIFY_ID_HANDLER( id, func )
```

### <a name="parameters"></a>Parametri

*ID*<br/>
[in] L'identificatore del controllo che invia il messaggio.

*func*<br/>
[in] Il nome della funzione di gestore di messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="notify_range_code_handler"></a>  NOTIFY_RANGE_CODE_HANDLER

Simile a [NOTIFY_RANGE_HANDLER](#notify_range_handler), ma viene eseguito il mapping [WM_NOTIFY](/windows/desktop/controls/wm-notify) messaggi con un codice di notifica specifico da una gamma di controlli a una funzione di gestione singolo.

```
NOTIFY_RANGE_CODE_HANDLER( idFirst, idLast, cd, func )
```

### <a name="parameters"></a>Parametri

*idFirst*<br/>
[in] Contrassegna l'inizio di un intervallo contiguo di identificatori di controllo.

*idLast*<br/>
[in] Contrassegna la fine di un intervallo contiguo di identificatori di controllo.

*cd*<br/>
[in] Il codice di notifica.

*func*<br/>
[in] Il nome della funzione di gestore di messaggi.

### <a name="remarks"></a>Note

Questo intervallo si basa sull'identificatore del controllo che invia il messaggio.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="notify_range_handler"></a>  NOTIFY_RANGE_HANDLER

Simile a [NOTIFY_HANDLER](#notify_handler), ma viene eseguito il mapping [WM_NOTIFY](/windows/desktop/controls/wm-notify) i messaggi da una gamma di controlli a una funzione di gestione singolo.

```
NOTIFY_RANGE_HANDLER( idFirst, idLast, func )
```

### <a name="parameters"></a>Parametri

*idFirst*<br/>
[in] Contrassegna l'inizio di un intervallo contiguo di identificatori di controllo.

*idLast*<br/>
[in] Contrassegna la fine di un intervallo contiguo di identificatori di controllo.

*func*<br/>
[in] Il nome della funzione di gestore di messaggi.

### <a name="remarks"></a>Note

Questo intervallo si basa sull'identificatore del controllo che invia il messaggio.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="reflect_notifications"></a>  REFLECT_NOTIFICATIONS

Riflette i messaggi di notifica alla finestra figlio (controllo) che li ha inviati.

```
REFLECT_NOTIFICATIONS()
```

### <a name="remarks"></a>Note

Specificare questa macro come parte della mappa messaggi della finestra padre.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="reflected_command_code_handler"></a>  REFLECTED_COMMAND_CODE_HANDLER

Simile a [COMMAND_CODE_HANDLER](#command_code_handler), ma esegue il mapping di comandi riflessi dalla finestra padre.

```
REFLECTED_COMMAND_CODE_HANDLER( code, func )
```

### <a name="parameters"></a>Parametri

*codice*<br/>
[in] Il codice di notifica.

*func*<br/>
[in] Il nome della funzione di gestore di messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="reflected_command_handler"></a>  REFLECTED_COMMAND_HANDLER

Simile a [COMMAND_HANDLER](#command_handler), ma esegue il mapping di comandi riflessi dalla finestra padre.

```
REFLECTED_COMMAND_HANDLER( id, code, func )
```

### <a name="parameters"></a>Parametri

*ID*<br/>
[in] Identificatore della voce di menu, controllo o tasto di scelta rapida.

*codice*<br/>
[in] Il codice di notifica.

*func*<br/>
[in] Il nome della funzione di gestore di messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="reflected_command_id_handler"></a>  REFLECTED_COMMAND_ID_HANDLER

Simile a [COMMAND_ID_HANDLER](#command_id_handler), ma esegue il mapping di comandi riflessi dalla finestra padre.

```
REFLECTED_COMMAND_ID_HANDLER( id, func )
```

### <a name="parameters"></a>Parametri

*ID*<br/>
[in] Identificatore della voce di menu, controllo o tasto di scelta rapida.

*func*<br/>
[in] Il nome della funzione di gestore di messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="reflected_command_range_code_handler"></a>  REFLECTED_COMMAND_RANGE_CODE_HANDLER

Simile a [COMMAND_RANGE_CODE_HANDLER](#command_range_code_handler), ma esegue il mapping di comandi riflessi dalla finestra padre.

```
REFLECTED_COMMAND_RANGE_CODE_HANDLER( idFirst, idLast, code, func )
```

### <a name="parameters"></a>Parametri

*idFirst*<br/>
[in] Contrassegna l'inizio di un intervallo contiguo di identificatori di controllo.

*idLast*<br/>
[in] Contrassegna la fine di un intervallo contiguo di identificatori di controllo.

*codice*<br/>
[in] Il codice di notifica.

*func*<br/>
[in] Il nome della funzione di gestore di messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="reflected_command_range_handler"></a>  REFLECTED_COMMAND_RANGE_HANDLER

Simile a [COMMAND_RANGE_HANDLER](#command_range_handler), ma esegue il mapping di comandi riflessi dalla finestra padre.

```
REFLECTED_COMMAND_RANGE_HANDLER( idFirst, idLast, func )
```

### <a name="parameters"></a>Parametri

*idFirst*<br/>
[in] Contrassegna l'inizio di un intervallo contiguo di identificatori di controllo.

*idLast*<br/>
[in] Contrassegna la fine di un intervallo contiguo di identificatori di controllo.

*func*<br/>
[in] Il nome della funzione di gestore di messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="reflected_notify_code_handler"></a>  REFLECTED_NOTIFY_CODE_HANDLER

Simile a [NOTIFY_CODE_HANDLER](#notify_code_handler), ma viene eseguito il mapping delle notifiche riflesse dalla finestra padre.

```
REFLECTED_NOTIFY_CODE_HANDLER_EX( cd, func )
```

### <a name="parameters"></a>Parametri

*cd*<br/>
[in] Il codice di notifica.

*func*<br/>
[in] Il nome della funzione di gestore di messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="reflected_notify_handler"></a>  REFLECTED_NOTIFY_HANDLER

Simile a [NOTIFY_HANDLER](#notify_handler), ma viene eseguito il mapping delle notifiche riflesse dalla finestra padre.

```
REFLECTED_NOTIFY_HANDLER( id, cd, func )
```

### <a name="parameters"></a>Parametri

*ID*<br/>
[in] Identificatore della voce di menu, controllo o tasto di scelta rapida.

*cd*<br/>
[in] Il codice di notifica.

*func*<br/>
[in] Il nome della funzione di gestore di messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="reflected_notify_id_handler"></a>  REFLECTED_NOTIFY_ID_HANDLER

Simile a [NOTIFY_ID_HANDLER](#notify_id_handler), ma viene eseguito il mapping delle notifiche riflesse dalla finestra padre.

```
REFLECTED_NOTIFY_ID_HANDLER( id, func )
```

### <a name="parameters"></a>Parametri

*ID*<br/>
[in] Identificatore della voce di menu, controllo o tasto di scelta rapida.

*func*<br/>
[in] Il nome della funzione di gestore di messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="reflected_notify_range_code_handler"></a>  REFLECTED_NOTIFY_RANGE_CODE_HANDLER

Simile a [NOTIFY_RANGE_CODE_HANDLER](#notify_range_code_handler), ma viene eseguito il mapping delle notifiche riflesse dalla finestra padre.

```
REFLECTED_NOTIFY_RANGE_CODE_HANDLER( idFirst, idLast, cd, func )
```

### <a name="parameters"></a>Parametri

*idFirst*<br/>
[in] Contrassegna l'inizio di un intervallo contiguo di identificatori di controllo.

*idLast*<br/>
[in] Contrassegna la fine di un intervallo contiguo di identificatori di controllo.

*cd*<br/>
[in] Il codice di notifica.

*func*<br/>
[in] Il nome della funzione di gestore di messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="reflected_notify_range_handler"></a>  REFLECTED_NOTIFY_RANGE_HANDLER

Simile a [NOTIFY_RANGE_HANDLER](#notify_range_handler), ma viene eseguito il mapping delle notifiche riflesse dalla finestra padre.

```
REFLECTED_NOTIFY_RANGE_HANDLER( idFirst, idLast, func )
```

### <a name="parameters"></a>Parametri

*idFirst*<br/>
[in] Contrassegna l'inizio di un intervallo contiguo di identificatori di controllo.

*idLast*<br/>
[in] Contrassegna la fine di un intervallo contiguo di identificatori di controllo.

*func*<br/>
[in] Il nome della funzione di gestore di messaggi.

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)
