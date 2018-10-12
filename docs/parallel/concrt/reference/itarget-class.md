---
title: Classe ITarget | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- ITarget
- AGENTS/concurrency::ITarget
- AGENTS/concurrency::ITarget::propagate
- AGENTS/concurrency::ITarget::send
- AGENTS/concurrency::ITarget::supports_anonymous_source
- AGENTS/concurrency::ITarget::link_source
- AGENTS/concurrency::ITarget::unlink_source
- AGENTS/concurrency::ITarget::unlink_sources
dev_langs:
- C++
helpviewer_keywords:
- ITarget class
ms.assetid: 5678db25-112a-4f72-be13-42e16b67c48b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8fe26b202dbe9aabc1ccf98a59ead6c51c498fc1
ms.sourcegitcommit: 8480f16893f09911f08a58caf684405404f7ac8e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/12/2018
ms.locfileid: "49163712"
---
# <a name="itarget-class"></a>Classe ITarget

La classe `ITarget` corrisponde all'interfaccia per tutti i blocchi di destinazione. I blocchi di destinazione usano messaggi a loro offerti da blocchi `ISource`.

## <a name="syntax"></a>Sintassi

```
template<class T>
class ITarget;
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di dati del payload all'interno di messaggi accettati dal blocco di destinazione.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`filter_method`|La firma di qualsiasi metodo usato dal blocco che restituisce un `bool` valore per determinare se deve essere accettato un messaggio offerto.|
|`type`|Un alias del tipo per `T`.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[~ Distruttore ITarget](#dtor)|Elimina definitivamente il `ITarget` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[propagate](#propagate)|Quando sottoposto a override in una classe derivata, passa in modo asincrono un messaggio da un blocco di origine per questo blocco di destinazione.|
|[send](#send)|Quando sottoposto a override in una classe derivata, passa in modo sincrono un messaggio al blocco di destinazione.|
|[supports_anonymous_source](#supports_anonymous_source)|Quando viene sottoposto a override in una classe derivata, restituisce true o false a seconda che il blocco dei messaggi accetti messaggi offerti da un'origine che non è collegata a esso. Se il metodo sottoposto a override restituisce **true**, la destinazione non è possibile posticipare un messaggio offerto, in quanto l'origine sia identificata nel relativo Registro di sistema collegamento sourse richiede l'utilizzo di un messaggio posticipato in un secondo momento.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[link_source](#link_source)|Quando sottoposto a override in una classe derivata, è possibile collegare un blocco di origine specificato a questo `ITarget` blocco.|
|[unlink_source](#unlink_source)|Quando sottoposto a override in una classe derivata, consente di scollegare un blocco di origine specificato da questo `ITarget` blocco.|
|[unlink_sources](#unlink_sources)|Quando sottoposto a override in una classe derivata, consente di scollegare tutti i blocchi di origine dal `ITarget` blocco.|

## <a name="remarks"></a>Note

Per altre informazioni, vedere [blocchi di messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ITarget`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

##  <a name="dtor"></a> ~ITarget

Elimina definitivamente il `ITarget` oggetto.

```
virtual ~ITarget();
```

##  <a name="link_source"></a> link_source

Quando sottoposto a override in una classe derivata, è possibile collegare un blocco di origine specificato a questo `ITarget` blocco.

```
virtual void link_source(_Inout_ ISource<T>* _PSource) = 0;
```

### <a name="parameters"></a>Parametri

*PSource*<br/>
Il `ISource` bloccare da collegare a questa `ITarget` blocco.

### <a name="remarks"></a>Note

Questa funzione non deve essere chiamata direttamente su un `ITarget` blocco. I blocchi devono essere connesse tra loro tramite il `link_target` metodo sul `ISource` blocchi, che verranno richiamato il `link_source` metodo nella destinazione corrispondente.

##  <a name="propagate"></a> propagazione

Quando sottoposto a override in una classe derivata, passa in modo asincrono un messaggio da un blocco di origine per questo blocco di destinazione.

```
virtual message_status propagate(
    _Inout_opt_ message<T>* _PMessage,
    _Inout_opt_ ISource<T>* _PSource) = 0;
```

### <a name="parameters"></a>Parametri

*PMessage*<br/>
Puntatore all'oggetto `message`.

*PSource*<br/>
Un puntatore al blocco di origine offrendo il messaggio.

### <a name="return-value"></a>Valore restituito

Oggetto [message_status](concurrency-namespace-enums.md) indicazione di cosa ha deciso di destinazione a che fare con il messaggio.

### <a name="remarks"></a>Note

Il metodo genera un' [invalid_argument](../../../standard-library/invalid-argument-class.md) eccezione se il valore di `_PMessage` o `_PSource` parametro è `NULL`.

##  <a name="send"></a> Invia

Quando sottoposto a override in una classe derivata, passa in modo sincrono un messaggio al blocco di destinazione.

```
virtual message_status send(
    _Inout_ message<T>* _PMessage,
    _Inout_ ISource<T>* _PSource) = 0;
```

### <a name="parameters"></a>Parametri

*PMessage*<br/>
Puntatore all'oggetto `message`.

*PSource*<br/>
Un puntatore al blocco di origine offrendo il messaggio.

### <a name="return-value"></a>Valore restituito

Oggetto [message_status](concurrency-namespace-enums.md) indicazione di cosa ha deciso di destinazione a che fare con il messaggio.

### <a name="remarks"></a>Note

Il metodo genera un' [invalid_argument](../../../standard-library/invalid-argument-class.md) eccezione se il valore di `_PMessage` o `_PSource` parametro è `NULL`.

Uso di `send` metodo all'esterno di inizio del messaggio e per propagare i messaggi all'interno di una rete è un'operazione rischiosa e può causare un deadlock.

Quando `send` termina, il messaggio sia già accettato e trasferito nel blocco di destinazione o è stato rifiutato dalla destinazione.

##  <a name="supports_anonymous_source"></a> supports_anonymous_source

Quando viene sottoposto a override in una classe derivata, restituisce true o false a seconda che il blocco dei messaggi accetti messaggi offerti da un'origine che non è collegata a esso. Se il metodo sottoposto a override restituisce **true**, la destinazione non è possibile posticipare un messaggio offerto, in quanto l'origine sia identificata nel relativo Registro di sistema collegamento sourse richiede l'utilizzo di un messaggio posticipato in un secondo momento.

```
virtual bool supports_anonymous_source();
```

### <a name="return-value"></a>Valore restituito

**true** se il blocco può accettare messaggi da un'origine che non è collegata a esso **false** in caso contrario.

##  <a name="unlink_source"></a> unlink_source

Quando sottoposto a override in una classe derivata, consente di scollegare un blocco di origine specificato da questo `ITarget` blocco.

```
virtual void unlink_source(_Inout_ ISource<T>* _PSource) = 0;
```

### <a name="parameters"></a>Parametri

*PSource*<br/>
Il `ISource` bloccare da scollegare dal `ITarget` blocco.

### <a name="remarks"></a>Note

Questa funzione non deve essere chiamata direttamente su un `ITarget` blocco. Blocchi devono essere disconnesso utilizzando il `unlink_target` o `unlink_targets` metodi sul `ISource` blocchi, che verranno richiamato il `unlink_source` metodo nella destinazione corrispondente.

##  <a name="unlink_sources"></a> unlink_sources

Quando sottoposto a override in una classe derivata, consente di scollegare tutti i blocchi di origine dal `ITarget` blocco.

```
virtual void unlink_sources() = 0;
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Classe ISource](isource-class.md)
