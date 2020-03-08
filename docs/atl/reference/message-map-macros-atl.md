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
ms.openlocfilehash: 42fdc7a3f09568b641229e897a2a493994a7ba8a
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78862969"
---
# <a name="message-map-macros-atl"></a>Macro della mappa messaggi (ATL)

Queste macro definiscono le mappe e le voci dei messaggi.

|||
|-|-|
|[ALT_MSG_MAP](#alt_msg_map)|Contrassegna l'inizio di una mappa messaggi alternativa.|
|[BEGIN_MSG_MAP](#begin_msg_map)|Contrassegna l'inizio della mappa messaggi predefinita.|
|[CHAIN_MSG_MAP_ALT](#chain_msg_map_alt)|Concatena a una mappa messaggi alternativa nella classe di base.|
|[CHAIN_MSG_MAP_ALT_MEMBER](#chain_msg_map_alt_member)|Concatena a una mappa messaggi alternativa in un membro dati della classe.|
|[CHAIN_MSG_MAP](#chain_msg_map)|Concatena alla mappa messaggi predefinita nella classe di base.|
|[CHAIN_MSG_MAP_DYNAMIC](#chain_msg_map_dynamic)|Concatena la mappa messaggi in un'altra classe in fase di esecuzione.|
|[CHAIN_MSG_MAP_MEMBER](#chain_msg_map_member)|Concatena la mappa messaggi predefinita in un membro dati della classe.|
|[COMMAND_CODE_HANDLER](#command_code_handler)|Esegue il mapping di un messaggio di WM_COMMAND a una funzione di gestione, in base al codice di notifica.|
|[COMMAND_HANDLER](#command_handler)|Esegue il mapping di un messaggio di WM_COMMAND a una funzione di gestione, in base al codice di notifica e all'identificatore della voce di menu, del controllo o dell'acceleratore.|
|[COMMAND_ID_HANDLER](#command_id_handler)|Esegue il mapping di un messaggio di WM_COMMAND a una funzione di gestione, in base all'identificatore della voce di menu, del controllo o dell'acceleratore.|
|[COMMAND_RANGE_CODE_HANDLER](#command_range_code_handler)|Esegue il mapping di un messaggio di WM_COMMAND a una funzione di gestione, in base al codice di notifica e a un intervallo contiguo di identificatori di controllo.|
|[COMMAND_RANGE_HANDLER](#command_range_handler)|Esegue il mapping di un messaggio di WM_COMMAND a una funzione di gestione, in base a un intervallo contiguo di identificatori di controllo.|
|[DECLARE_EMPTY_MSG_MAP](#declare_empty_msg_map)|Implementa una mappa messaggi vuota.|
|[DEFAULT_REFLECTION_HANDLER](#default_reflection_handler)|Fornisce un gestore predefinito per i messaggi riflessi che non vengono gestiti in altro modo.|
|[END_MSG_MAP](#end_msg_map)|Contrassegna la fine di una mappa messaggi.|
|[FORWARD_NOTIFICATIONS](#forward_notifications)|Consente di inviare i messaggi di notifica alla finestra padre.|
|[MESSAGE_HANDLER](#message_handler)|Esegue il mapping di un messaggio di Windows a una funzione del gestore.|
|[MESSAGE_RANGE_HANDLER](#message_range_handler)|Esegue il mapping di un intervallo contiguo di messaggi di Windows a una funzione del gestore.|
|[NOTIFY_CODE_HANDLER](#notify_code_handler)|Esegue il mapping di un messaggio di WM_NOTIFY a una funzione di gestione, in base al codice di notifica.|
|[NOTIFY_HANDLER](#notify_handler)|Esegue il mapping di un messaggio di WM_NOTIFY a una funzione di gestione, in base al codice di notifica e all'identificatore del controllo.|
|[NOTIFY_ID_HANDLER](#notify_id_handler)|Esegue il mapping di un messaggio di WM_NOTIFY a una funzione di gestione, in base all'identificatore del controllo.|
|[NOTIFY_RANGE_CODE_HANDLER](#notify_range_code_handler)|Esegue il mapping di un messaggio di WM_NOTIFY a una funzione di gestione, in base al codice di notifica e a un intervallo contiguo di identificatori di controllo.|
|[NOTIFY_RANGE_HANDLER](#notify_range_handler)|Esegue il mapping di un messaggio di WM_NOTIFY a una funzione di gestione, in base a un intervallo contiguo di identificatori di controllo.|
|[REFLECT_NOTIFICATIONS](#reflect_notifications)|Riflette i messaggi di notifica alla finestra che li ha inviati.|
|[REFLECTED_COMMAND_CODE_HANDLER](#reflected_command_code_handler)|Esegue il mapping di un messaggio di WM_COMMAND riflesso a una funzione di gestione, in base al codice di notifica.|
|[REFLECTED_COMMAND_HANDLER](#reflected_command_handler)|Esegue il mapping di un messaggio di WM_COMMAND riflesso a una funzione di gestione, in base al codice di notifica e all'identificatore della voce di menu, del controllo o dell'acceleratore.|
|[REFLECTED_COMMAND_ID_HANDLER](#reflected_command_id_handler)|Esegue il mapping di un messaggio WM_COMMAND riflesso a una funzione di gestione, in base all'identificatore della voce di menu, del controllo o dell'acceleratore.|
|[REFLECTED_COMMAND_RANGE_CODE_HANDLER](#reflected_command_range_code_handler)|Esegue il mapping di un messaggio WM_COMMAND riflesso a una funzione di gestione, in base al codice di notifica e a un intervallo contiguo di identificatori di controllo.|
|[REFLECTED_COMMAND_RANGE_HANDLER](#reflected_command_range_handler)|Esegue il mapping di un messaggio WM_COMMAND riflesso a una funzione di gestione, in base a un intervallo contiguo di identificatori di controllo.|
|[REFLECTED_NOTIFY_CODE_HANDLER](#reflected_notify_code_handler)|Esegue il mapping di un messaggio di WM_NOTIFY riflesso a una funzione di gestione, in base al codice di notifica.|
|[REFLECTED_NOTIFY_HANDLER](#reflected_notify_handler)|Esegue il mapping di un messaggio di WM_NOTIFY riflesso a una funzione di gestione, in base al codice di notifica e all'identificatore del controllo.|
|[REFLECTED_NOTIFY_ID_HANDLER](#reflected_notify_id_handler)|Esegue il mapping di un messaggio di WM_NOTIFY riflesso a una funzione di gestione, in base all'identificatore del controllo.|
|[REFLECTED_NOTIFY_RANGE_CODE_HANDLER](#reflected_notify_range_code_handler)|Esegue il mapping di un messaggio WM_NOTIFY riflesso a una funzione di gestione, in base al codice di notifica e a un intervallo contiguo di identificatori di controllo.|
|[REFLECTED_NOTIFY_RANGE_HANDLER](#reflected_notify_range_handler)|Esegue il mapping di un messaggio WM_NOTIFY riflesso a una funzione di gestione, in base a un intervallo contiguo di identificatori di controllo.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="alt_msg_map"></a>ALT_MSG_MAP

Contrassegna l'inizio di una mappa messaggi alternativa.

```
ALT_MSG_MAP(msgMapID)
```

### <a name="parameters"></a>Parametri

*msgMapID*<br/>
in Identificatore della mappa messaggi.

### <a name="remarks"></a>Osservazioni

ATL identifica ogni mappa messaggi in base a un numero. La mappa messaggi predefinita (dichiarata con la macro BEGIN_MSG_MAP) è identificata da 0. Una mappa messaggi alternativa è identificata da *msgMapID*.

Le mappe messaggi vengono utilizzate per elaborare i messaggi inviati a una finestra. [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) , ad esempio, consente di specificare l'identificatore di una mappa messaggi nell'oggetto che lo contiene. [CContainedWindow:: WindowProc](ccontainedwindowt-class.md#windowproc) usa quindi questa mappa messaggi per indirizzare i messaggi della finestra contenuta alla funzione del gestore appropriata o a un'altra mappa messaggi. Per un elenco di macro che dichiarano le funzioni del gestore, vedere [BEGIN_MSG_MAP](#begin_msg_map).

Iniziare sempre una mappa messaggi con BEGIN_MSG_MAP. È quindi possibile dichiarare le mappe messaggi alternative successive.

La macro [END_MSG_MAP](#end_msg_map) contrassegna la fine della mappa messaggi. Si noti che esiste sempre esattamente un'istanza di BEGIN_MSG_MAP e END_MSG_MAP.

Per ulteriori informazioni sull'utilizzo delle mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrata la mappa messaggi predefinita e una mappa messaggi alternativa, ognuno contenente una funzione del gestore:

[!code-cpp[NVC_ATL_Windowing#98](../../atl/codesnippet/cpp/message-map-macros-atl_1.h)]

Nell'esempio seguente vengono illustrate due mappe messaggi alternative. La mappa messaggi predefinita è vuota.

[!code-cpp[NVC_ATL_Windowing#99](../../atl/codesnippet/cpp/message-map-macros-atl_2.h)]

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="begin_msg_map"></a>BEGIN_MSG_MAP

Contrassegna l'inizio della mappa messaggi predefinita.

```
BEGIN_MSG_MAP(theClass)
```

### <a name="parameters"></a>Parametri

*theClass*<br/>
in Nome della classe che contiene la mappa messaggi.

### <a name="remarks"></a>Osservazioni

[CWindowImpl:: WindowProc](cwindowimpl-class.md#windowproc) usa la mappa messaggi predefinita per elaborare i messaggi inviati alla finestra. La mappa messaggi indirizza i messaggi alla funzione del gestore appropriata o a un'altra mappa messaggi.

Le macro seguenti consentono di eseguire il mapping di un messaggio a una funzione del gestore. Questa funzione deve essere definita in *theClass*.

|Macro|Descrizione|
|-----------|-----------------|
|[MESSAGE_HANDLER](#message_handler)|Esegue il mapping di un messaggio di Windows a una funzione del gestore.|
|[MESSAGE_RANGE_HANDLER](#message_range_handler)|Esegue il mapping di un intervallo contiguo di messaggi di Windows a una funzione del gestore.|
|[COMMAND_HANDLER](#command_handler)|Esegue il mapping di un messaggio di WM_COMMAND a una funzione di gestione, in base al codice di notifica e all'identificatore della voce di menu, del controllo o dell'acceleratore.|
|[COMMAND_ID_HANDLER](#command_id_handler)|Esegue il mapping di un messaggio di WM_COMMAND a una funzione di gestione, in base all'identificatore della voce di menu, del controllo o dell'acceleratore.|
|[COMMAND_CODE_HANDLER](#command_handler)|Esegue il mapping di un messaggio di WM_COMMAND a una funzione di gestione, in base al codice di notifica.|
|[COMMAND_RANGE_HANDLER](#command_range_handler)|Esegue il mapping di un intervallo contiguo di messaggi di WM_COMMAND a una funzione di gestione, in base all'identificatore della voce di menu, del controllo o dell'acceleratore.|
|[NOTIFY_HANDLER](#notify_handler)|Esegue il mapping di un messaggio di WM_NOTIFY a una funzione di gestione, in base al codice di notifica e all'identificatore del controllo.|
|[NOTIFY_ID_HANDLER](#notify_id_handler)|Esegue il mapping di un messaggio di WM_NOTIFY a una funzione di gestione, in base all'identificatore del controllo.|
|[NOTIFY_CODE_HANDLER](#notify_code_handler)|Esegue il mapping di un messaggio di WM_NOTIFY a una funzione di gestione, in base al codice di notifica.|
|[NOTIFY_RANGE_HANDLER](#notify_range_handler)|Esegue il mapping di un intervallo contiguo di messaggi di WM_NOTIFY a una funzione di gestione, in base all'identificatore del controllo.|

Le macro seguenti indirizzano i messaggi a un'altra mappa messaggi. Questo processo è denominato "concatenamento".

|Macro|Descrizione|
|-----------|-----------------|
|[CHAIN_MSG_MAP](#chain_msg_map)|Concatena alla mappa messaggi predefinita nella classe di base.|
|[CHAIN_MSG_MAP_MEMBER](#chain_msg_map_member)|Concatena la mappa messaggi predefinita in un membro dati della classe.|
|[CHAIN_MSG_MAP_ALT](#chain_msg_map_alt)|Concatena a una mappa messaggi alternativa nella classe di base.|
|[CHAIN_MSG_MAP_ALT_MEMBER](#chain_msg_map_alt_member)|Concatena a una mappa messaggi alternativa in un membro dati della classe.|
|[CHAIN_MSG_MAP_DYNAMIC](#chain_msg_map_dynamic)|Concatena la mappa messaggi predefinita in un'altra classe in fase di esecuzione.|

Le macro seguenti indirizzano i messaggi "riflessi" dalla finestra padre. Ad esempio, un controllo in genere invia messaggi di notifica alla finestra padre per l'elaborazione, ma la finestra padre può riportare il messaggio al controllo.

|Macro|Descrizione|
|-----------|-----------------|
|[REFLECTED_COMMAND_HANDLER](#reflected_command_handler)|Esegue il mapping di un messaggio di WM_COMMAND riflesso a una funzione di gestione, in base al codice di notifica e all'identificatore della voce di menu, del controllo o dell'acceleratore.|
|[REFLECTED_COMMAND_ID_HANDLER](#reflected_command_id_handler)|Esegue il mapping di un messaggio WM_COMMAND riflesso a una funzione di gestione, in base all'identificatore della voce di menu, del controllo o dell'acceleratore.|
|[REFLECTED_COMMAND_CODE_HANDLER](#reflected_command_code_handler)|Esegue il mapping di un messaggio di WM_COMMAND riflesso a una funzione di gestione, in base al codice di notifica.|
|[REFLECTED_COMMAND_RANGE_HANDLER](#reflected_command_range_handler)|Esegue il mapping di un messaggio WM_COMMAND riflesso a una funzione di gestione, in base a un intervallo contiguo di identificatori di controllo.|
|[REFLECTED_COMMAND_RANGE_CODE_HANDLER](#reflected_command_range_code_handler)|Esegue il mapping di un messaggio WM_COMMAND riflesso a una funzione di gestione, in base al codice di notifica e a un intervallo contiguo di identificatori di controllo.|
|[REFLECTED_NOTIFY_HANDLER](#reflected_notify_handler)|Esegue il mapping di un messaggio di WM_NOTIFY riflesso a una funzione di gestione, in base al codice di notifica e all'identificatore del controllo.|
|[REFLECTED_NOTIFY_ID_HANDLER](#reflected_notify_id_handler)|Esegue il mapping di un messaggio di WM_NOTIFY riflesso a una funzione di gestione, in base all'identificatore del controllo.|
|[REFLECTED_NOTIFY_CODE_HANDLER](#reflected_notify_code_handler)|Esegue il mapping di un messaggio di WM_NOTIFY riflesso a una funzione di gestione, in base al codice di notifica.|
|[REFLECTED_NOTIFY_RANGE_HANDLER](#reflected_notify_range_handler)|Esegue il mapping di un messaggio WM_NOTIFY riflesso a una funzione di gestione, in base a un intervallo contiguo di identificatori di controllo.|
|[REFLECTED_NOTIFY_RANGE_CODE_HANDLER](#reflected_notify_range_code_handler)|Esegue il mapping di un messaggio WM_NOTIFY riflesso a una funzione di gestione, in base al codice di notifica e a un intervallo contiguo di identificatori di controllo.|

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#102](../../atl/codesnippet/cpp/message-map-macros-atl_3.h)]

Quando un oggetto `CMyExtWindow` riceve un messaggio di WM_PAINT, il messaggio viene indirizzato al `CMyExtWindow::OnPaint` per l'elaborazione effettiva. Se `OnPaint` indica che il messaggio richiede un'ulteriore elaborazione, il messaggio verrà quindi indirizzato alla mappa messaggi predefinita nella `CMyBaseWindow`.

Oltre alla mappa messaggi predefinita, è possibile definire una mappa messaggi alternativa con [ALT_MSG_MAP](#alt_msg_map). Iniziare sempre una mappa messaggi con BEGIN_MSG_MAP. È quindi possibile dichiarare le mappe messaggi alternative successive. Nell'esempio seguente viene illustrata la mappa messaggi predefinita e una mappa messaggi alternativa, ognuno contenente una funzione del gestore:

[!code-cpp[NVC_ATL_Windowing#98](../../atl/codesnippet/cpp/message-map-macros-atl_1.h)]

Nell'esempio seguente vengono illustrate due mappe messaggi alternative. La mappa messaggi predefinita è vuota.

[!code-cpp[NVC_ATL_Windowing#99](../../atl/codesnippet/cpp/message-map-macros-atl_2.h)]

La macro [END_MSG_MAP](#end_msg_map) contrassegna la fine della mappa messaggi. Si noti che esiste sempre esattamente un'istanza di BEGIN_MSG_MAP e END_MSG_MAP.

Per ulteriori informazioni sull'utilizzo delle mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="chain_msg_map_alt"></a>CHAIN_MSG_MAP_ALT

Definisce una voce in una mappa messaggi.

```
CHAIN_MSG_MAP_ALT(theChainClass, msgMapID)
```

### <a name="parameters"></a>Parametri

*theChainClass*<br/>
in Nome della classe di base che contiene la mappa messaggi.

*msgMapID*<br/>
in Identificatore della mappa messaggi.

### <a name="remarks"></a>Osservazioni

CHAIN_MSG_MAP_ALT indirizza i messaggi a una mappa messaggi alternativa in una classe base. È necessario che la mappa messaggi alternativa sia stata dichiarata con [ALT_MSG_MAP (msgMapID)](#alt_msg_map). Per indirizzare i messaggi alla mappa messaggi predefinita di una classe di base (dichiarata con [BEGIN_MSG_MAP](#begin_msg_map)), usare CHAIN_MSG_MAP. Per un esempio, vedere [CHAIN_MSG_MAP](#chain_msg_map).

> [!NOTE]
>  Iniziare sempre una mappa messaggi con BEGIN_MSG_MAP. È quindi possibile dichiarare le mappe dei messaggi alternativi successive con ALT_MSG_MAP. La macro [END_MSG_MAP](#end_msg_map) contrassegna la fine della mappa messaggi. Ogni mappa messaggi deve avere esattamente un'istanza di BEGIN_MSG_MAP e END_MSG_MAP.

Per ulteriori informazioni sull'utilizzo delle mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="chain_msg_map_alt_member"></a>CHAIN_MSG_MAP_ALT_MEMBER

Definisce una voce in una mappa messaggi.

```
CHAIN_MSG_MAP_ALT_MEMBER(theChainMember, msgMapID)
```

### <a name="parameters"></a>Parametri

*theChainMember*<br/>
in Nome del membro dati contenente la mappa messaggi.

*msgMapID*<br/>
in Identificatore della mappa messaggi.

### <a name="remarks"></a>Osservazioni

CHAIN_MSG_MAP_ALT_MEMBER indirizza i messaggi a una mappa messaggi alternativa in un membro dati. È necessario che la mappa messaggi alternativa sia stata dichiarata con [ALT_MSG_MAP (msgMapID)](#alt_msg_map). Per indirizzare i messaggi alla mappa messaggi predefinita di un membro dati (dichiarata con [BEGIN_MSG_MAP](#begin_msg_map)), utilizzare CHAIN_MSG_MAP_MEMBER. Per un esempio, vedere [CHAIN_MSG_MAP_MEMBER](#chain_msg_map_member).

> [!NOTE]
>  Iniziare sempre una mappa messaggi con BEGIN_MSG_MAP. È quindi possibile dichiarare le mappe dei messaggi alternativi successive con ALT_MSG_MAP. La macro [END_MSG_MAP](#end_msg_map) contrassegna la fine della mappa messaggi. Ogni mappa messaggi deve avere esattamente un'istanza di BEGIN_MSG_MAP e END_MSG_MAP.

Per ulteriori informazioni sull'utilizzo delle mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="chain_msg_map"></a>CHAIN_MSG_MAP

Definisce una voce in una mappa messaggi.

```
CHAIN_MSG_MAP(theChainClass)
```

### <a name="parameters"></a>Parametri

*theChainClass*<br/>
in Nome della classe di base che contiene la mappa messaggi.

### <a name="remarks"></a>Osservazioni

CHAIN_MSG_MAP indirizza i messaggi alla mappa messaggi predefinita di una classe di base (dichiarata con [BEGIN_MSG_MAP](#begin_msg_map)). Per indirizzare i messaggi alla mappa messaggi alternativa di una classe di base (dichiarata con [ALT_MSG_MAP](#alt_msg_map)), usare [CHAIN_MSG_MAP_ALT](#chain_msg_map_alt).

> [!NOTE]
>  Iniziare sempre una mappa messaggi con BEGIN_MSG_MAP. È quindi possibile dichiarare le mappe dei messaggi alternativi successive con ALT_MSG_MAP. La macro [END_MSG_MAP](#end_msg_map) contrassegna la fine della mappa messaggi. Ogni mappa messaggi deve avere esattamente un'istanza di BEGIN_MSG_MAP e END_MSG_MAP.

Per ulteriori informazioni sull'utilizzo delle mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#107](../../atl/codesnippet/cpp/message-map-macros-atl_4.h)]

In questo esempio viene illustrato quanto segue:

- Se una procedura della finestra utilizza la mappa messaggi predefinita `CMyClass`e `OnPaint` non gestisce alcun messaggio, il messaggio viene indirizzato alla mappa messaggi predefinita di `CMyBaseClass`per l'elaborazione.

- Se una procedura della finestra utilizza la prima mappa messaggi alternativa in `CMyClass`, tutti i messaggi vengono indirizzati alla mappa messaggi predefinita di `CMyBaseClass`.

- Se una procedura della finestra utilizza la seconda mappa messaggi alternativa `CMyClass`e `OnChar` non gestisce un messaggio, il messaggio viene indirizzato alla mappa messaggi alternativa specificata in `CMyBaseClass`. `CMyBaseClass` necessario che la mappa messaggi sia stata dichiarata con ALT_MSG_MAP (1).

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="chain_msg_map_dynamic"></a>CHAIN_MSG_MAP_DYNAMIC

Definisce una voce in una mappa messaggi.

```
CHAIN_MSG_MAP_DYNAMIC(dynaChainID)
```

### <a name="parameters"></a>Parametri

*dynaChainID*<br/>
in Identificatore univoco per la mappa messaggi di un oggetto.

### <a name="remarks"></a>Osservazioni

CHAIN_MSG_MAP_DYNAMIC indirizza i messaggi in fase di esecuzione alla mappa messaggi predefinita in un altro oggetto. L'oggetto e la relativa mappa messaggi sono associati a *dynaChainID*, definito tramite [CDynamicChain:: SetChainEntry](cdynamicchain-class.md#setchainentry). È necessario derivare la classe da `CDynamicChain` per poter usare CHAIN_MSG_MAP_DYNAMIC. Per un esempio, vedere Panoramica di [CDynamicChain](../../atl/reference/cdynamicchain-class.md) .

> [!NOTE]
>  Iniziare sempre una mappa messaggi con [BEGIN_MSG_MAP](#begin_msg_map). È quindi possibile dichiarare le mappe dei messaggi alternativi successive con ALT_MSG_MAP. La macro [END_MSG_MAP](#end_msg_map) contrassegna la fine della mappa messaggi. Ogni mappa messaggi deve avere esattamente un'istanza di BEGIN_MSG_MAP e END_MSG_MAP.

Per ulteriori informazioni sull'utilizzo delle mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="chain_msg_map_member"></a>CHAIN_MSG_MAP_MEMBER

Definisce una voce in una mappa messaggi.

```
CHAIN_MSG_MAP_MEMBER(theChainMember)
```

### <a name="parameters"></a>Parametri

*theChainMember*<br/>
in Nome del membro dati contenente la mappa messaggi.

### <a name="remarks"></a>Osservazioni

CHAIN_MSG_MAP_MEMBER indirizza i messaggi alla mappa messaggi predefinita di un membro dati (dichiarata con [BEGIN_MSG_MAP](#begin_msg_map)). Per indirizzare i messaggi alla mappa messaggi alternativa di un membro dati (dichiarata con [ALT_MSG_MAP](#alt_msg_map)), usare [CHAIN_MSG_MAP_ALT_MEMBER](#chain_msg_map_alt_member).

> [!NOTE]
>  Iniziare sempre una mappa messaggi con BEGIN_MSG_MAP. È quindi possibile dichiarare le mappe dei messaggi alternativi successive con ALT_MSG_MAP. La macro [END_MSG_MAP](#end_msg_map) contrassegna la fine della mappa messaggi. Ogni mappa messaggi deve avere esattamente un'istanza di BEGIN_MSG_MAP e END_MSG_MAP.

Per ulteriori informazioni sull'utilizzo delle mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#108](../../atl/codesnippet/cpp/message-map-macros-atl_5.h)]

In questo esempio viene illustrato quanto segue:

- Se una procedura della finestra utilizza la mappa messaggi predefinita `CMyClass`e `OnPaint` non gestisce alcun messaggio, il messaggio viene indirizzato alla mappa messaggi predefinita di `m_obj`per l'elaborazione.

- Se una procedura della finestra utilizza la prima mappa messaggi alternativa in `CMyClass`, tutti i messaggi vengono indirizzati alla mappa messaggi predefinita di `m_obj`.

- Se una procedura della finestra utilizza la seconda mappa messaggi alternativa `CMyClass`e `OnChar` non gestisce un messaggio, il messaggio viene indirizzato alla mappa messaggi alternativa specificata di `m_obj`. La classe `CMyContainedClass` deve avere dichiarato la mappa messaggi con ALT_MSG_MAP (1).

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="command_code_handler"></a>COMMAND_CODE_HANDLER

Analogamente a [COMMAND_HANDLER](#command_handler), ma esegue il mapping di un messaggio di [WM_COMMAND](/windows/win32/menurc/wm-command) basato solo sul codice di notifica.

```
COMMAND_CODE_HANDLER(code, func)
```

### <a name="parameters"></a>Parametri

*code*<br/>
in Codice di notifica.

*func*<br/>
in Nome della funzione del gestore di messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="command_handler"></a>COMMAND_HANDLER

Definisce una voce in una mappa messaggi.

```
COMMAND_HANDLER(id, code, func)
```

### <a name="parameters"></a>Parametri

*id*<br/>
in Identificatore della voce di menu, del controllo o dell'acceleratore.

*code*<br/>
in Codice di notifica.

*func*<br/>
in Nome della funzione del gestore di messaggi.

### <a name="remarks"></a>Osservazioni

COMMAND_HANDLER esegue il mapping di un messaggio di [WM_COMMAND](/windows/win32/menurc/wm-command) alla funzione del gestore specificata, in base al codice di notifica e all'identificatore del controllo. Ad esempio:

[!code-cpp[NVC_ATL_Windowing#119](../../atl/codesnippet/cpp/message-map-macros-atl_6.h)]

Qualsiasi funzione specificata in una macro di COMMAND_HANDLER deve essere definita come segue:

`LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);`

La mappa messaggi imposta `bHandled` su TRUE prima che venga chiamato `CommandHandler`. Se `CommandHandler` non gestisce completamente il messaggio, deve impostare `bHandled` su FALSE per indicare che il messaggio deve essere ulteriormente elaborato.

> [!NOTE]
>  Iniziare sempre una mappa messaggi con [BEGIN_MSG_MAP](#begin_msg_map). È quindi possibile dichiarare le mappe dei messaggi alternativi successive con [ALT_MSG_MAP](#alt_msg_map). La macro [END_MSG_MAP](#end_msg_map) contrassegna la fine della mappa messaggi. Ogni mappa messaggi deve avere esattamente un'istanza di BEGIN_MSG_MAP e END_MSG_MAP.

Oltre a COMMAND_HANDLER, è possibile utilizzare [MESSAGE_HANDLER](#message_handler) per eseguire il mapping di un messaggio di WM_COMMAND senza considerare un identificatore o un codice. In questo caso, `MESSAGE_HANDLER(WM_COMMAND, OnHandlerFunction)` indirizzare tutti i messaggi di WM_COMMAND a `OnHandlerFunction`.

Per ulteriori informazioni sull'utilizzo delle mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="command_id_handler"></a>COMMAND_ID_HANDLER

Simile a [COMMAND_HANDLER](#command_handler), ma esegue il mapping di un messaggio di [WM_COMMAND](/windows/win32/menurc/wm-command) basato solo sull'identificatore della voce di menu, del controllo o dell'acceleratore.

```
COMMAND_ID_HANDLER(id, func)
```

### <a name="parameters"></a>Parametri

*id*<br/>
in Identificatore della voce di menu, del controllo o dell'acceleratore che invia il messaggio.

*func*<br/>
in Nome della funzione del gestore di messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="command_range_code_handler"></a>COMMAND_RANGE_CODE_HANDLER

Analogamente a [COMMAND_RANGE_HANDLER](#command_range_handler), ma esegue il mapping dei messaggi [WM_COMMAND](/windows/win32/menurc/wm-command) con un codice di notifica specifico da un intervallo di controlli a una singola funzione del gestore.

```
COMMAND_RANGE_CODE_HANDLER(idFirst, idLast, code, func)
```

### <a name="parameters"></a>Parametri

*idFirst*<br/>
in Contrassegna l'inizio di un intervallo contiguo di identificatori di controllo.

*idLast*<br/>
in Contrassegna la fine di un intervallo contiguo di identificatori di controllo.

*code*<br/>
in Codice di notifica.

*func*<br/>
in Nome della funzione del gestore di messaggi.

### <a name="remarks"></a>Osservazioni

Questo intervallo è basato sull'identificatore della voce di menu, del controllo o dell'acceleratore che invia il messaggio.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="command_range_handler"></a>COMMAND_RANGE_HANDLER

Analogamente a [COMMAND_HANDLER](#command_handler), ma esegue il mapping dei messaggi [WM_COMMAND](/windows/win32/menurc/wm-command) da un intervallo di controlli a una singola funzione del gestore.

```
COMMAND_RANGE_HANDLER( idFirst, idLast, func)
```

### <a name="parameters"></a>Parametri

*idFirst*<br/>
in Contrassegna l'inizio di un intervallo contiguo di identificatori di controllo.

*idLast*<br/>
in Contrassegna la fine di un intervallo contiguo di identificatori di controllo.

*func*<br/>
in Nome della funzione del gestore di messaggi.

### <a name="remarks"></a>Osservazioni

Questo intervallo è basato sull'identificatore della voce di menu, del controllo o dell'acceleratore che invia il messaggio.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="declare_empty_msg_map"></a>DECLARE_EMPTY_MSG_MAP

Dichiara una mappa messaggi vuota.

```
DECLARE_EMPTY_MSG_MAP()
```

### <a name="remarks"></a>Osservazioni

DECLARE_EMPTY_MSG_MAP è una macro di praticità che chiama le macro [BEGIN_MSG_MAP](#begin_msg_map) e [END_MSG_MAP](#end_msg_map) per creare una mappa messaggi vuota:

[!code-cpp[NVC_ATL_Windowing#122](../../atl/codesnippet/cpp/message-map-macros-atl_7.h)]

##  <a name="default_reflection_handler"></a>DEFAULT_REFLECTION_HANDLER

Fornisce un gestore predefinito per la finestra figlio (controllo) che riceverà i messaggi riflessi; il gestore passerà correttamente i messaggi non gestiti a `DefWindowProc`.

```
DEFAULT_REFLECTION_HANDLER()
```

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="end_msg_map"></a>END_MSG_MAP

Contrassegna la fine di una mappa messaggi.

```
END_MSG_MAP()
```

### <a name="remarks"></a>Osservazioni

Utilizzare sempre la macro [BEGIN_MSG_MAP](#begin_msg_map) per contrassegnare l'inizio di una mappa messaggi. Utilizzare [ALT_MSG_MAP](#alt_msg_map) per dichiarare le mappe messaggi alternative successive.

Si noti che esiste sempre esattamente un'istanza di BEGIN_MSG_MAP e END_MSG_MAP.

Per ulteriori informazioni sull'utilizzo delle mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrata la mappa messaggi predefinita e una mappa messaggi alternativa, ognuno contenente una funzione del gestore:

[!code-cpp[NVC_ATL_Windowing#98](../../atl/codesnippet/cpp/message-map-macros-atl_1.h)]

Nell'esempio seguente vengono illustrate due mappe messaggi alternative. La mappa messaggi predefinita è vuota.

[!code-cpp[NVC_ATL_Windowing#99](../../atl/codesnippet/cpp/message-map-macros-atl_2.h)]

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="forward_notifications"></a>FORWARD_NOTIFICATIONS

Consente di inviare i messaggi di notifica alla finestra padre.

```
FORWARD_NOTIFICATIONS()
```

### <a name="remarks"></a>Osservazioni

Specificare questa macro come parte della mappa messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="message_handler"></a>MESSAGE_HANDLER

Definisce una voce in una mappa messaggi.

```
MESSAGE_HANDLER( msg, func )
```

### <a name="parameters"></a>Parametri

*messaggio*<br/>
in Messaggio di Windows.

*func*<br/>
in Nome della funzione del gestore di messaggi.

### <a name="remarks"></a>Osservazioni

MESSAGE_HANDLER esegue il mapping di un messaggio di Windows alla funzione del gestore specificata.

Qualsiasi funzione specificata in una macro di MESSAGE_HANDLER deve essere definita come segue:

`LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);`

La mappa messaggi imposta `bHandled` su TRUE prima che venga chiamato `MessageHandler`. Se `MessageHandler` non gestisce completamente il messaggio, deve impostare `bHandled` su FALSE per indicare che il messaggio deve essere ulteriormente elaborato.

> [!NOTE]
>  Iniziare sempre una mappa messaggi con [BEGIN_MSG_MAP](#begin_msg_map). È quindi possibile dichiarare le mappe dei messaggi alternativi successive con [ALT_MSG_MAP](#alt_msg_map). La macro [END_MSG_MAP](#end_msg_map) contrassegna la fine della mappa messaggi. Ogni mappa messaggi deve avere esattamente un'istanza di BEGIN_MSG_MAP e END_MSG_MAP.

Oltre a MESSAGE_HANDLER, è possibile utilizzare [COMMAND_HANDLER](#command_handler) e [NOTIFY_HANDLER](#notify_handler) per eseguire il mapping rispettivamente dei messaggi di [WM_COMMAND](/windows/win32/menurc/wm-command) e di [WM_NOTIFY](/windows/win32/controls/wm-notify) .

Per ulteriori informazioni sull'utilizzo delle mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#129](../../atl/codesnippet/cpp/message-map-macros-atl_8.h)]

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="message_range_handler"></a>MESSAGE_RANGE_HANDLER

Simile a [MESSAGE_HANDLER](#message_handler), ma esegue il mapping di un intervallo di messaggi di Windows a una singola funzione del gestore.

```
MESSAGE_RANGE_HANDLER( msgFirst, msgLast, func )
```

### <a name="parameters"></a>Parametri

*msgFirst*<br/>
in Contrassegna l'inizio di un intervallo contiguo di messaggi.

*msgLast*<br/>
in Contrassegna la fine di un intervallo contiguo di messaggi.

*func*<br/>
in Nome della funzione del gestore di messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="notify_code_handler"></a>NOTIFY_CODE_HANDLER

Analogamente a [NOTIFY_HANDLER](#notify_handler), ma esegue il mapping di un messaggio di [WM_NOTIFY](/windows/win32/controls/wm-notify) basato solo sul codice di notifica.

```
NOTIFY_CODE_HANDLER(cd, func)
```

### <a name="parameters"></a>Parametri

*cd*<br/>
in Codice di notifica.

*func*<br/>
in Nome della funzione del gestore di messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="notify_handler"></a>NOTIFY_HANDLER

Definisce una voce in una mappa messaggi.

```
NOTIFY_HANDLER( id, cd, func )
```

### <a name="parameters"></a>Parametri

*id*<br/>
in Identificatore del controllo che invia il messaggio.

*cd*<br/>
in Codice di notifica.

*func*<br/>
in Nome della funzione del gestore di messaggi.

### <a name="remarks"></a>Osservazioni

NOTIFY_HANDLER esegue il mapping di un messaggio di [WM_NOTIFY](/windows/win32/controls/wm-notify) alla funzione del gestore specificata, in base al codice di notifica e all'identificatore del controllo.

Qualsiasi funzione specificata in una macro di NOTIFY_HANDLER deve essere definita come segue:

`LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);`

La mappa messaggi imposta `bHandled` su TRUE prima che venga chiamato `NotifyHandler`. Se `NotifyHandler` non gestisce completamente il messaggio, deve impostare `bHandled` su FALSE per indicare che il messaggio deve essere ulteriormente elaborato.

> [!NOTE]
>  Iniziare sempre una mappa messaggi con [BEGIN_MSG_MAP](#begin_msg_map). È quindi possibile dichiarare le mappe dei messaggi alternativi successive con [ALT_MSG_MAP](#alt_msg_map). La macro [END_MSG_MAP](#end_msg_map) contrassegna la fine della mappa messaggi. Ogni mappa messaggi deve avere esattamente un'istanza di BEGIN_MSG_MAP e END_MSG_MAP.

Oltre a NOTIFY_HANDLER, è possibile utilizzare [MESSAGE_HANDLER](#message_handler) per eseguire il mapping di un messaggio di WM_NOTIFY senza considerare un identificatore o un codice. In questo caso, `MESSAGE_HANDLER(WM_NOTIFY, OnHandlerFunction)` indirizzare tutti i messaggi di WM_NOTIFY a `OnHandlerFunction`.

Per ulteriori informazioni sull'utilizzo delle mappe messaggi in ATL, vedere [mappe messaggi](../../atl/message-maps-atl.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#130](../../atl/codesnippet/cpp/message-map-macros-atl_9.h)]

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="notify_id_handler"></a>NOTIFY_ID_HANDLER

Simile a [NOTIFY_HANDLER](#notify_handler), ma esegue il mapping di un messaggio di [WM_NOTIFY](/windows/win32/controls/wm-notify) basato solo sull'identificatore del controllo.

```
NOTIFY_ID_HANDLER( id, func )
```

### <a name="parameters"></a>Parametri

*id*<br/>
in Identificatore del controllo che invia il messaggio.

*func*<br/>
in Nome della funzione del gestore di messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="notify_range_code_handler"></a>NOTIFY_RANGE_CODE_HANDLER

Analogamente a [NOTIFY_RANGE_HANDLER](#notify_range_handler), ma esegue il mapping dei messaggi [WM_NOTIFY](/windows/win32/controls/wm-notify) con un codice di notifica specifico da un intervallo di controlli a una singola funzione del gestore.

```
NOTIFY_RANGE_CODE_HANDLER( idFirst, idLast, cd, func )
```

### <a name="parameters"></a>Parametri

*idFirst*<br/>
in Contrassegna l'inizio di un intervallo contiguo di identificatori di controllo.

*idLast*<br/>
in Contrassegna la fine di un intervallo contiguo di identificatori di controllo.

*cd*<br/>
in Codice di notifica.

*func*<br/>
in Nome della funzione del gestore di messaggi.

### <a name="remarks"></a>Osservazioni

Questo intervallo è basato sull'identificatore del controllo che invia il messaggio.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="notify_range_handler"></a>NOTIFY_RANGE_HANDLER

Analogamente a [NOTIFY_HANDLER](#notify_handler), ma esegue il mapping dei messaggi [WM_NOTIFY](/windows/win32/controls/wm-notify) da un intervallo di controlli a una singola funzione del gestore.

```
NOTIFY_RANGE_HANDLER( idFirst, idLast, func )
```

### <a name="parameters"></a>Parametri

*idFirst*<br/>
in Contrassegna l'inizio di un intervallo contiguo di identificatori di controllo.

*idLast*<br/>
in Contrassegna la fine di un intervallo contiguo di identificatori di controllo.

*func*<br/>
in Nome della funzione del gestore di messaggi.

### <a name="remarks"></a>Osservazioni

Questo intervallo è basato sull'identificatore del controllo che invia il messaggio.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="reflect_notifications"></a>REFLECT_NOTIFICATIONS

Riflette i messaggi di notifica alla finestra figlio (controllo) che li ha inviati.

```
REFLECT_NOTIFICATIONS()
```

### <a name="remarks"></a>Osservazioni

Specificare questa macro come parte della mappa messaggi della finestra padre.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="reflected_command_code_handler"></a>REFLECTED_COMMAND_CODE_HANDLER

Simile a [COMMAND_CODE_HANDLER](#command_code_handler), ma esegue il mapping dei comandi riflessi dalla finestra padre.

```
REFLECTED_COMMAND_CODE_HANDLER( code, func )
```

### <a name="parameters"></a>Parametri

*code*<br/>
in Codice di notifica.

*func*<br/>
in Nome della funzione del gestore di messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="reflected_command_handler"></a>REFLECTED_COMMAND_HANDLER

Simile a [COMMAND_HANDLER](#command_handler), ma esegue il mapping dei comandi riflessi dalla finestra padre.

```
REFLECTED_COMMAND_HANDLER( id, code, func )
```

### <a name="parameters"></a>Parametri

*id*<br/>
in Identificatore della voce di menu, del controllo o dell'acceleratore.

*code*<br/>
in Codice di notifica.

*func*<br/>
in Nome della funzione del gestore di messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="reflected_command_id_handler"></a>REFLECTED_COMMAND_ID_HANDLER

Simile a [COMMAND_ID_HANDLER](#command_id_handler), ma esegue il mapping dei comandi riflessi dalla finestra padre.

```
REFLECTED_COMMAND_ID_HANDLER( id, func )
```

### <a name="parameters"></a>Parametri

*id*<br/>
in Identificatore della voce di menu, del controllo o dell'acceleratore.

*func*<br/>
in Nome della funzione del gestore di messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="reflected_command_range_code_handler"></a>REFLECTED_COMMAND_RANGE_CODE_HANDLER

Simile a [COMMAND_RANGE_CODE_HANDLER](#command_range_code_handler), ma esegue il mapping dei comandi riflessi dalla finestra padre.

```
REFLECTED_COMMAND_RANGE_CODE_HANDLER( idFirst, idLast, code, func )
```

### <a name="parameters"></a>Parametri

*idFirst*<br/>
in Contrassegna l'inizio di un intervallo contiguo di identificatori di controllo.

*idLast*<br/>
in Contrassegna la fine di un intervallo contiguo di identificatori di controllo.

*code*<br/>
in Codice di notifica.

*func*<br/>
in Nome della funzione del gestore di messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="reflected_command_range_handler"></a>REFLECTED_COMMAND_RANGE_HANDLER

Simile a [COMMAND_RANGE_HANDLER](#command_range_handler), ma esegue il mapping dei comandi riflessi dalla finestra padre.

```
REFLECTED_COMMAND_RANGE_HANDLER( idFirst, idLast, func )
```

### <a name="parameters"></a>Parametri

*idFirst*<br/>
in Contrassegna l'inizio di un intervallo contiguo di identificatori di controllo.

*idLast*<br/>
in Contrassegna la fine di un intervallo contiguo di identificatori di controllo.

*func*<br/>
in Nome della funzione del gestore di messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="reflected_notify_code_handler"></a>REFLECTED_NOTIFY_CODE_HANDLER

Simile a [NOTIFY_CODE_HANDLER](#notify_code_handler), ma esegue il mapping delle notifiche riflesse dalla finestra padre.

```
REFLECTED_NOTIFY_CODE_HANDLER_EX( cd, func )
```

### <a name="parameters"></a>Parametri

*cd*<br/>
in Codice di notifica.

*func*<br/>
in Nome della funzione del gestore di messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="reflected_notify_handler"></a>REFLECTED_NOTIFY_HANDLER

Simile a [NOTIFY_HANDLER](#notify_handler), ma esegue il mapping delle notifiche riflesse dalla finestra padre.

```
REFLECTED_NOTIFY_HANDLER( id, cd, func )
```

### <a name="parameters"></a>Parametri

*id*<br/>
in Identificatore della voce di menu, del controllo o dell'acceleratore.

*cd*<br/>
in Codice di notifica.

*func*<br/>
in Nome della funzione del gestore di messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="reflected_notify_id_handler"></a>REFLECTED_NOTIFY_ID_HANDLER

Simile a [NOTIFY_ID_HANDLER](#notify_id_handler), ma esegue il mapping delle notifiche riflesse dalla finestra padre.

```
REFLECTED_NOTIFY_ID_HANDLER( id, func )
```

### <a name="parameters"></a>Parametri

*id*<br/>
in Identificatore della voce di menu, del controllo o dell'acceleratore.

*func*<br/>
in Nome della funzione del gestore di messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="reflected_notify_range_code_handler"></a>REFLECTED_NOTIFY_RANGE_CODE_HANDLER

Simile a [NOTIFY_RANGE_CODE_HANDLER](#notify_range_code_handler), ma esegue il mapping delle notifiche riflesse dalla finestra padre.

```
REFLECTED_NOTIFY_RANGE_CODE_HANDLER( idFirst, idLast, cd, func )
```

### <a name="parameters"></a>Parametri

*idFirst*<br/>
in Contrassegna l'inizio di un intervallo contiguo di identificatori di controllo.

*idLast*<br/>
in Contrassegna la fine di un intervallo contiguo di identificatori di controllo.

*cd*<br/>
in Codice di notifica.

*func*<br/>
in Nome della funzione del gestore di messaggi.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="reflected_notify_range_handler"></a>REFLECTED_NOTIFY_RANGE_HANDLER

Simile a [NOTIFY_RANGE_HANDLER](#notify_range_handler), ma esegue il mapping delle notifiche riflesse dalla finestra padre.

```
REFLECTED_NOTIFY_RANGE_HANDLER( idFirst, idLast, func )
```

### <a name="parameters"></a>Parametri

*idFirst*<br/>
in Contrassegna l'inizio di un intervallo contiguo di identificatori di controllo.

*idLast*<br/>
in Contrassegna la fine di un intervallo contiguo di identificatori di controllo.

*func*<br/>
in Nome della funzione del gestore di messaggi.

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)
