---
title: Classe propagator_block
ms.date: 11/04/2016
f1_keywords:
- propagator_block
- AGENTS/concurrency::propagator_block
- AGENTS/concurrency::propagator_block::propagator_block
- AGENTS/concurrency::propagator_block::propagate
- AGENTS/concurrency::propagator_block::send
- AGENTS/concurrency::propagator_block::decline_incoming_messages
- AGENTS/concurrency::propagator_block::initialize_source_and_target
- AGENTS/concurrency::propagator_block::link_source
- AGENTS/concurrency::propagator_block::process_input_messages
- AGENTS/concurrency::propagator_block::propagate_message
- AGENTS/concurrency::propagator_block::register_filter
- AGENTS/concurrency::propagator_block::remove_network_links
- AGENTS/concurrency::propagator_block::send_message
- AGENTS/concurrency::propagator_block::unlink_source
- AGENTS/concurrency::propagator_block::unlink_sources
helpviewer_keywords:
- propagator_block class
ms.assetid: 86aa75fd-eda5-42aa-aadf-25c0c1c9742d
ms.openlocfilehash: 7f466ad8f474ddb73d2235d9999c3dbeae627672
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62394364"
---
# <a name="propagatorblock-class"></a>Classe propagator_block

La classe `propagator_block` è una classe base astratta per blocchi di messaggio che sono sia origine sia destinazione. Combina la funzionalità delle classi `source_block` e `target_block`.

## <a name="syntax"></a>Sintassi

```
template<class _TargetLinkRegistry, class _SourceLinkRegistry, class _MessageProcessorType = ordered_message_processor<typename _TargetLinkRegistry::type::type>>
class propagator_block : public source_block<_TargetLinkRegistry,
    _MessageProcessorType>,
public ITarget<typename _SourceLinkRegistry::type::source_type>;
```

#### <a name="parameters"></a>Parametri

*_TargetLinkRegistry*<br/>
Il Registro di sistema collegamento da utilizzare per mantenere i collegamenti di destinazione.

*_SourceLinkRegistry*<br/>
Il Registro di sistema collegamento da utilizzare per mantenere i collegamenti di origine.

*_MessageProcessorType*<br/>
Il tipo di processore per l'elaborazione dei messaggi.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`source_iterator`|Il tipo di iteratore per il `source_link_manager` per questo `propagator_block`.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[propagator_block](#ctor)|Costruisce un oggetto `propagator_block`.|
|[~ propagator_block distruttore](#dtor)|Elimina un oggetto `propagator_block`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[propagate](#propagate)|Consente di passare in modo asincrono un messaggio da un blocco di origine per questo blocco di destinazione.|
|[send](#send)|Avvia in modo sincrono un messaggio a questo blocco. Chiamato da un `ISource` blocco. Quando questa funzione viene completata, il messaggio sarà già stato propagato nel blocco.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[decline_incoming_messages](#decline_incoming_messages)|Indica al blocco che i nuovi messaggi debbano essere rifiutati.|
|[initialize_source_and_target](#initialize_source_and_target)|Inizializza l'oggetto di base. In particolare, il `message_processor` oggetto deve essere inizializzata.|
|[link_source](#link_source)|Collega un blocco di origine specificato a questa `propagator_block` oggetto.|
|[process_input_messages](#process_input_messages)|Elabora i messaggi di input. Ciò è utile solo per i blocchi di propagazione che derivano da source_block (esegue l'override [source_block:: process_input_messages](source-block-class.md#process_input_messages).)|
|[propagate_message](#propagate_message)|Quando sottoposto a override in una classe derivata, questo metodo passa in modo asincrono un messaggio da un `ISource` blocco da questo `propagator_block` oggetto. Viene richiamato per la `propagate` metodo, quando viene chiamato da un blocco di origine.|
|[register_filter](#register_filter)|Registra un metodo di filtro che verrà richiamato su ogni messaggio ricevuto.|
|[remove_network_links](#remove_network_links)|Rimuove tutti i collegamenti di rete di origine e di destinazione da questo `propagator_block` oggetto.|
|[send_message](#send_message)|Quando sottoposto a override in una classe derivata, questo metodo passa in modo sincrono un messaggio da un `ISource` blocco da questo `propagator_block` oggetto. Viene richiamato per la `send` metodo, quando viene chiamato da un blocco di origine.|
|[unlink_source](#unlink_source)|Scollega un blocco di origine specificato da questo `propagator_block` oggetto.|
|[unlink_sources](#unlink_sources)|Scollega tutti i blocchi di origine dal `propagator_block` oggetto. (Esegue l'override [ITarget:: Unlink_sources](itarget-class.md#unlink_sources).)|

## <a name="remarks"></a>Note

Per evitare ereditarietà multipla, le `propagator_block` classe eredita dal `source_block` classe e `ITarget` classe astratta. La maggior parte delle funzionalità del `target_block` classe viene replicata qui.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[ISource](isource-class.md)

[ITarget](itarget-class.md)

[source_block](source-block-class.md)

`propagator_block`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

##  <a name="decline_incoming_messages"></a> decline_incoming_messages

Indica al blocco che i nuovi messaggi debbano essere rifiutati.

```
void decline_incoming_messages();
```

### <a name="remarks"></a>Note

Questo metodo viene chiamato dal distruttore per garantire che i nuovi messaggi vengono rifiutati mentre l'eliminazione è in corso.

##  <a name="initialize_source_and_target"></a> initialize_source_and_target

Inizializza l'oggetto di base. In particolare, il `message_processor` oggetto deve essere inizializzata.

```
void initialize_source_and_target(
    _Inout_opt_ Scheduler* _PScheduler = NULL,
    _Inout_opt_ ScheduleGroup* _PScheduleGroup = NULL);
```

### <a name="parameters"></a>Parametri

*_PScheduler*<br/>
L'utilità di pianificazione da utilizzare per la pianificazione di attività.

*_PScheduleGroup*<br/>
Il gruppo di pianificazione da utilizzare per la pianificazione di attività.

##  <a name="link_source"></a> link_source

Collega un blocco di origine specificato a questa `propagator_block` oggetto.

```
virtual void link_source(_Inout_ ISource<_Source_type>* _PSource);
```

### <a name="parameters"></a>Parametri

*_PSource*<br/>
Un puntatore al `ISource` blocco che deve essere collegato.

##  <a name="process_input_messages"></a> process_input_messages

Elabora i messaggi di input. Questa operazione è utile solo per i blocchi di propagazione che derivano da source_block

```
virtual void process_input_messages(_Inout_ message<_Target_type>* _PMessage);
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore al messaggio che deve essere elaborato.

##  <a name="propagate"></a> propagate

Consente di passare in modo asincrono un messaggio da un blocco di origine per questo blocco di destinazione.

```
virtual message_status propagate(
    _Inout_opt_ message<_Source_type>* _PMessage,
    _Inout_opt_ ISource<_Source_type>* _PSource);
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore all'oggetto `message`.

*_PSource*<br/>
Un puntatore al blocco di origine offrendo il messaggio.

### <a name="return-value"></a>Valore restituito

Oggetto [message_status](concurrency-namespace-enums.md) indicazione di cosa ha deciso di destinazione a che fare con il messaggio.

### <a name="remarks"></a>Note

Il `propagate` metodo viene richiamato su un blocco di destinazione da un blocco di origine dati collegata. Nella coda un'attività asincrona per gestire il messaggio, se uno non è già in coda o l'esecuzione.

Il metodo genera un' [invalid_argument](../../../standard-library/invalid-argument-class.md) eccezione se il valore di `_PMessage` o `_PSource` parametro è `NULL`.

##  <a name="propagate_message"></a> propagate_message

Quando sottoposto a override in una classe derivata, questo metodo passa in modo asincrono un messaggio da un `ISource` blocco da questo `propagator_block` oggetto. Viene richiamato per la `propagate` metodo, quando viene chiamato da un blocco di origine.

```
virtual message_status propagate_message(
    _Inout_ message<_Source_type>* _PMessage,
    _Inout_ ISource<_Source_type>* _PSource) = 0;
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore all'oggetto `message`.

*_PSource*<br/>
Un puntatore al blocco di origine offrendo il messaggio.

### <a name="return-value"></a>Valore restituito

Oggetto [message_status](concurrency-namespace-enums.md) indicazione di cosa ha deciso di destinazione a che fare con il messaggio.

##  <a name="ctor"></a> propagator_block

Costruisce un oggetto `propagator_block`.

```
propagator_block();
```

##  <a name="dtor"></a> ~propagator_block

Elimina un oggetto `propagator_block`.

```
virtual ~propagator_block();
```

##  <a name="register_filter"></a> register_filter

Registra un metodo di filtro che verrà richiamato su ogni messaggio ricevuto.

```
void register_filter(filter_method const& _Filter);
```

### <a name="parameters"></a>Parametri

*_Filter*<br/>
Il metodo di filtro.

##  <a name="remove_network_links"></a> remove_network_links

Rimuove tutti i collegamenti di rete di origine e di destinazione da questo `propagator_block` oggetto.

```
void remove_network_links();
```

##  <a name="send"></a> Invia

Avvia in modo sincrono un messaggio a questo blocco. Chiamato da un `ISource` blocco. Quando questa funzione viene completata, il messaggio sarà già stato propagato nel blocco.

```
virtual message_status send(
    _Inout_ message<_Source_type>* _PMessage,
    _Inout_ ISource<_Source_type>* _PSource);
```

### <a name="parameters"></a>Parametri

*_PMessage*<br/>
Puntatore all'oggetto `message`.

*_PSource*<br/>
Un puntatore al blocco di origine offrendo il messaggio.

### <a name="return-value"></a>Valore restituito

Oggetto [message_status](concurrency-namespace-enums.md) indicazione di cosa ha deciso di destinazione a che fare con il messaggio.

### <a name="remarks"></a>Note

Questo metodo genera un [invalid_argument](../../../standard-library/invalid-argument-class.md) eccezione se il valore di `_PMessage` oppure `_PSource` parametro è `NULL`.

##  <a name="send_message"></a> send_message

Quando sottoposto a override in una classe derivata, questo metodo passa in modo sincrono un messaggio da un `ISource` blocco da questo `propagator_block` oggetto. Viene richiamato per la `send` metodo, quando viene chiamato da un blocco di origine.

```
virtual message_status send_message(
    _Inout_ message<_Source_type> *,
    _Inout_ ISource<_Source_type> *);
```

### <a name="return-value"></a>Valore restituito

Oggetto [message_status](concurrency-namespace-enums.md) indicazione di cosa ha deciso di destinazione a che fare con il messaggio.

### <a name="remarks"></a>Note

Per impostazione predefinita, questo blocco restituisce `declined` a meno che non viene sottoposto a override da una classe derivata.

##  <a name="unlink_source"></a> unlink_source

Scollega un blocco di origine specificato da questo `propagator_block` oggetto.

```
virtual void unlink_source(_Inout_ ISource<_Source_type>* _PSource);
```

### <a name="parameters"></a>Parametri

*_PSource*<br/>
Un puntatore al `ISource` blocco che deve essere sconnesso.

##  <a name="unlink_sources"></a> unlink_sources

Scollega tutti i blocchi di origine dal `propagator_block` oggetto.

```
virtual void unlink_sources();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe source_block](source-block-class.md)<br/>
[Classe ITarget](itarget-class.md)
