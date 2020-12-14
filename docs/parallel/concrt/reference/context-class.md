---
description: 'Altre informazioni su: classe Context'
title: Classe Context
ms.date: 11/04/2016
f1_keywords:
- Context
- CONCRT/concurrency::Context
- CONCRT/concurrency::Context::Block
- CONCRT/concurrency::Context::CurrentContext
- CONCRT/concurrency::Context::GetId
- CONCRT/concurrency::Context::GetScheduleGroupId
- CONCRT/concurrency::Context::GetVirtualProcessorId
- CONCRT/concurrency::Context::Id
- CONCRT/concurrency::Context::IsCurrentTaskCollectionCanceling
- CONCRT/concurrency::Context::IsSynchronouslyBlocked
- CONCRT/concurrency::Context::Oversubscribe
- CONCRT/concurrency::Context::ScheduleGroupId
- CONCRT/concurrency::Context::Unblock
- CONCRT/concurrency::Context::VirtualProcessorId
- CONCRT/concurrency::Context::Yield
helpviewer_keywords:
- Context class
ms.assetid: c0d553f3-961d-4ecd-9a29-4fa4351673b8
ms.openlocfilehash: 4360b01f2261bd75a7db5bd7fab1bbce56a268ce
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97189002"
---
# <a name="context-class"></a>Classe Context

Rappresenta un'astrazione per un contesto di esecuzione.

## <a name="syntax"></a>Sintassi

```cpp
class Context;
```

## <a name="members"></a>Members

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Description|
|----------|-----------------|
|[~ Distruttore del contesto](#dtor)||

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[Bloccato](#block)|Blocca il contesto corrente.|
|[CurrentContext](#currentcontext)|Restituisce un puntatore al contesto corrente.|
|[GetId](#getid)|Restituisce un identificatore per il contesto univoco all'interno dell'utilità di pianificazione a cui appartiene il contesto.|
|[GetScheduleGroupId](#getschedulegroupid)|Restituisce un identificatore per il gruppo di pianificazione su cui sta attualmente lavorando il contesto.|
|[GetVirtualProcessorId](#getvirtualprocessorid)|Restituisce un identificatore per il processore virtuale su cui è attualmente in esecuzione il contesto.|
|[Id](#id)|Restituisce un identificatore per il contesto corrente univoco all'interno dell'utilità di pianificazione a cui appartiene il contesto corrente.|
|[IsCurrentTaskCollectionCanceling](#iscurrenttaskcollectioncanceling)|Restituisce un valore che indica se la raccolta di attività attualmente in esecuzione inline sul contesto corrente si trova in un annullamento attivo (o sarà a breve).|
|[IsSynchronouslyBlocked](#issynchronouslyblocked)|Determina se il contesto è bloccato in modo sincrono. Un contesto viene considerato bloccato in modo sincrono se è stata eseguita in modo esplicito un'azione che ha causato il blocco.|
|[Oversubscribe](#oversubscribe)|Inserisce un processore virtuale aggiuntivo in un'utilità di pianificazione per la durata di un blocco di codice quando viene richiamato in un contesto in esecuzione su uno dei processori virtuali nell'utilità di pianificazione.|
|[ScheduleGroupId](#schedulegroupid)|Restituisce un identificatore per il gruppo di pianificazione su cui sta lavorando il contesto corrente.|
|[Sbloccare](#unblock)|Sblocca il contesto e ne determina l'eseguibile.|
|[VirtualProcessorId](#virtualprocessorid)|Restituisce un identificatore per il processore virtuale su cui è in esecuzione il contesto corrente.|
|[Rendimento](#yield)|Restituisce l'esecuzione in modo da poter eseguire un altro contesto. Se non è disponibile un altro contesto a cui cedere l'esecuzione, l'utilità di pianificazione può cedere l'esecuzione a un altro thread del sistema operativo.|

## <a name="remarks"></a>Commenti

L'utilità di pianificazione del runtime di concorrenza (vedere l' [utilità di pianificazione](scheduler-class.md)) USA i contesti di esecuzione per eseguire il lavoro accodato dall'applicazione. Un thread Win32 è un esempio di un contesto di esecuzione in un sistema operativo Windows.

In qualsiasi momento, il livello di concorrenza di un'utilità di pianificazione è uguale al numero di processori virtuali concessi dal Gestione risorse. Un processore virtuale è un'astrazione per una risorsa di elaborazione e viene mappato a un thread hardware sul sistema sottostante. È possibile eseguire un solo contesto dell'utilità di pianificazione in un processore virtuale in un determinato momento.

L'utilità di pianificazione è di natura cooperativa e un contesto di esecuzione può produrre il proprio processore virtuale in un contesto diverso in qualsiasi momento se vuole entrare in uno stato di attesa. Quando l'attesa viene soddisfatta, non può essere ripresa fino a quando non viene avviata l'esecuzione di un processore virtuale disponibile dall'utilità di pianificazione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Context`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="block"></a><a name="block"></a> Blocco

Blocca il contesto corrente.

```cpp
static void __cdecl Block();
```

### <a name="remarks"></a>Commenti

Tale metodo determinerà la creazione dell'utilità di pianificazione predefinita del processo e/o il collegamento al contesto di chiamata se non è presente alcuna utilità di pianificazione attualmente associata al contesto di chiamata.

Se il contesto chiamante è in esecuzione in un processore virtuale, il processore virtuale troverà un altro contesto eseguibile da eseguire o potrebbe crearne uno nuovo.

Dopo che il `Block` metodo è stato chiamato o sarà chiamato, è necessario associarlo a una chiamata al metodo [Unblock](#unblock) da un altro contesto di esecuzione per poterlo eseguire nuovamente. Tenere presente che esiste un periodo critico tra il punto in cui il codice pubblica il contesto per un altro thread per poter chiamare il `Unblock` metodo e il punto in cui viene effettuata la chiamata al metodo effettivo `Block` . Durante questo periodo, non deve essere chiamare alcun metodo che può a sua volta bloccarsi e sbloccarsi per motivi propri (ad esempio acquisendo un blocco). Le chiamate al `Block` `Unblock` metodo e non tengono traccia del motivo del blocco e dello sblocco. Solo un oggetto deve avere la proprietà di una `Block` -  `Unblock` coppia.

Questo metodo può generare un'ampia gamma di eccezioni, tra cui [scheduler_resource_allocation_error](scheduler-resource-allocation-error-class.md).

## <a name="context"></a><a name="dtor"></a> ~ Contesto

```cpp
virtual ~Context();
```

## <a name="currentcontext"></a><a name="currentcontext"></a> CurrentContext

Restituisce un puntatore al contesto corrente.

```cpp
static Context* __cdecl CurrentContext();
```

### <a name="return-value"></a>Valore restituito

Puntatore al contesto corrente.

### <a name="remarks"></a>Commenti

Tale metodo determinerà la creazione dell'utilità di pianificazione predefinita del processo e/o il collegamento al contesto di chiamata se non è presente alcuna utilità di pianificazione attualmente associata al contesto di chiamata.

## <a name="getid"></a><a name="getid"></a> GetId

Restituisce un identificatore per il contesto univoco all'interno dell'utilità di pianificazione a cui appartiene il contesto.

```cpp
virtual unsigned int GetId() const = 0;
```

### <a name="return-value"></a>Valore restituito

Identificatore del contesto univoco all'interno dell'utilità di pianificazione a cui appartiene il contesto.

## <a name="getschedulegroupid"></a><a name="getschedulegroupid"></a> GetScheduleGroupId

Restituisce un identificatore per il gruppo di pianificazione su cui sta attualmente lavorando il contesto.

```cpp
virtual unsigned int GetScheduleGroupId() const = 0;
```

### <a name="return-value"></a>Valore restituito

Identificatore per il gruppo di pianificazione su cui il contesto è attualmente in funzione.

### <a name="remarks"></a>Commenti

Il valore restituito da questo metodo è un campionamento istantaneo del gruppo di pianificazione su cui è in esecuzione il contesto. Se questo metodo viene chiamato in un contesto diverso da quello corrente, è possibile che il valore non sia aggiornato nel momento in cui viene restituito e potrebbe non essere affidabile. Questo metodo viene in genere utilizzato solo a scopo di debug o di traccia.

## <a name="getvirtualprocessorid"></a><a name="getvirtualprocessorid"></a> GetVirtualProcessorId

Restituisce un identificatore per il processore virtuale su cui è attualmente in esecuzione il contesto.

```cpp
virtual unsigned int GetVirtualProcessorId() const = 0;
```

### <a name="return-value"></a>Valore restituito

Se il contesto è attualmente in esecuzione in un processore virtuale, un identificatore per il processore virtuale su cui è attualmente in esecuzione il contesto; in caso contrario, il valore `-1` .

### <a name="remarks"></a>Commenti

Il valore restituito da questo metodo è un campionamento istantaneo del processore virtuale su cui è in esecuzione il contesto. Questo valore può essere non aggiornato nel momento in cui viene restituito e non può essere ritenuto affidabile. Questo metodo viene in genere utilizzato solo a scopo di debug o di traccia.

## <a name="id"></a><a name="id"></a> ID

Restituisce un identificatore per il contesto corrente univoco all'interno dell'utilità di pianificazione a cui appartiene il contesto corrente.

```cpp
static unsigned int __cdecl Id();
```

### <a name="return-value"></a>Valore restituito

Se il contesto corrente è associato a un'utilità di pianificazione, un identificatore per il contesto corrente univoco all'interno dell'utilità di pianificazione a cui appartiene il contesto corrente. in caso contrario, il valore `-1` .

## <a name="iscurrenttaskcollectioncanceling"></a><a name="iscurrenttaskcollectioncanceling"></a> IsCurrentTaskCollectionCanceling

Restituisce un valore che indica se la raccolta di attività attualmente in esecuzione inline sul contesto corrente si trova in un annullamento attivo (o sarà a breve).

```cpp
static bool __cdecl IsCurrentTaskCollectionCanceling();
```

### <a name="return-value"></a>Valore restituito

Se un'utilità di pianificazione è associata al contesto chiamante e un gruppo di attività sta eseguendo un'attività inline su tale contesto, indica se il gruppo di attività è in un annullamento attivo (o sarà a breve). in caso contrario, il valore **`false`** .

## <a name="issynchronouslyblocked"></a><a name="issynchronouslyblocked"></a> IsSynchronouslyBlocked

Determina se il contesto è bloccato in modo sincrono. Un contesto viene considerato bloccato in modo sincrono se è stata eseguita in modo esplicito un'azione che ha causato il blocco.

```cpp
virtual bool IsSynchronouslyBlocked() const = 0;
```

### <a name="return-value"></a>Valore restituito

Indica se il contesto è bloccato in modo sincrono.

### <a name="remarks"></a>Commenti

Un contesto viene considerato bloccato in modo sincrono se è stata eseguita in modo esplicito un'azione che ha causato il blocco. Nell'utilità di pianificazione del thread, questo indicherebbe una chiamata diretta al metodo `Context::Block` o un oggetto di sincronizzazione compilato utilizzando il metodo `Context::Block`.

Il valore restituito da questo metodo è un esempio istantaneo che indica se il contesto è bloccato in modo sincrono. Questo valore potrebbe non essere aggiornato nel momento in cui viene restituito e può essere usato solo in circostanze molto specifiche.

## <a name="operator-delete"></a><a name="operator_delete"></a> operatore delete

Un `Context` oggetto viene distrutto internamente dal runtime. Non è possibile eliminarlo in modo esplicito.

```cpp
void operator delete(void* _PObject);
```

### <a name="parameters"></a>Parametri

*_PObject*<br/>
Puntatore all'oggetto da eliminare.

## <a name="oversubscribe"></a><a name="oversubscribe"></a> Oversubscribe

Inserisce un processore virtuale aggiuntivo in un'utilità di pianificazione per la durata di un blocco di codice quando viene richiamato in un contesto in esecuzione su uno dei processori virtuali nell'utilità di pianificazione.

```cpp
static void __cdecl Oversubscribe(bool _BeginOversubscription);
```

### <a name="parameters"></a>Parametri

*_BeginOversubscription*<br/>
Se **`true`** , indica che deve essere aggiunto un processore virtuale aggiuntivo per la durata dell'oversubscription. Se **`false`** , indica che l'oversubscription deve terminare e che il processore virtuale aggiunto in precedenza deve essere rimosso.

## <a name="schedulegroupid"></a><a name="schedulegroupid"></a> ScheduleGroupId

Restituisce un identificatore per il gruppo di pianificazione su cui sta lavorando il contesto corrente.

```cpp
static unsigned int __cdecl ScheduleGroupId();
```

### <a name="return-value"></a>Valore restituito

Se il contesto corrente è associato a un'utilità di pianificazione e si utilizza un gruppo di pianificazione, un identificatore per il gruppo di utilità di pianificazione su cui il contesto corrente sta lavorando; in caso contrario, il valore `-1` .

## <a name="unblock"></a><a name="unblock"></a> Sbloccare

Sblocca il contesto e ne determina l'eseguibile.

```cpp
virtual void Unblock() = 0;
```

### <a name="remarks"></a>Commenti

È perfettamente lecito che una chiamata al `Unblock` metodo venga prima di una chiamata corrispondente al metodo [Block](#block) . Fino a quando le chiamate ai `Block` `Unblock` metodi e sono correttamente abbinate, il runtime gestisce correttamente la corsa naturale di entrambi gli ordini. Una `Unblock` chiamata in arrivo prima di una `Block` chiamata nega semplicemente l'effetto della `Block` chiamata.

Esistono diverse eccezioni che possono essere generate da questo metodo. Se un contesto tenta di chiamare il `Unblock` metodo su se stesso, verrà generata un'eccezione [context_self_unblock](context-self-unblock-class.md) . Se le chiamate a `Block` e `Unblock` non sono abbinate correttamente (ad esempio, vengono effettuate due chiamate a `Unblock` per un contesto che è attualmente in esecuzione), verrà generata un'eccezione [context_unblock_unbalanced](context-unblock-unbalanced-class.md) .

Tenere presente che esiste un periodo critico tra il punto in cui il codice pubblica il contesto per un altro thread per poter chiamare il `Unblock` metodo e il punto in cui viene effettuata la chiamata al metodo effettivo `Block` . Durante questo periodo, non deve essere chiamare alcun metodo che può a sua volta bloccarsi e sbloccarsi per motivi propri (ad esempio acquisendo un blocco). Le chiamate al `Block` `Unblock` metodo e non tengono traccia del motivo del blocco e dello sblocco. Solo un oggetto deve avere la proprietà di `Block` una `Unblock` coppia e.

## <a name="virtualprocessorid"></a><a name="virtualprocessorid"></a> VirtualProcessorId

Restituisce un identificatore per il processore virtuale su cui è in esecuzione il contesto corrente.

```cpp
static unsigned int __cdecl VirtualProcessorId();
```

### <a name="return-value"></a>Valore restituito

Se il contesto corrente è associato a un'utilità di pianificazione, un identificatore per il processore virtuale su cui è in esecuzione il contesto corrente; in caso contrario, il valore `-1` .

### <a name="remarks"></a>Commenti

Il valore restituito da questo metodo è un campionamento istantaneo del processore virtuale su cui è in esecuzione il contesto corrente. Questo valore può essere non aggiornato nel momento in cui viene restituito e non può essere ritenuto affidabile. Questo metodo viene in genere utilizzato solo a scopo di debug o di traccia.

## <a name="yield"></a><a name="yield"></a> Rendimento

Restituisce l'esecuzione in modo da poter eseguire un altro contesto. Se non è disponibile un altro contesto a cui cedere l'esecuzione, l'utilità di pianificazione può cedere l'esecuzione a un altro thread del sistema operativo.

```cpp
static void __cdecl Yield();
```

### <a name="remarks"></a>Commenti

Tale metodo determinerà la creazione dell'utilità di pianificazione predefinita del processo e/o il collegamento al contesto di chiamata se non è presente alcuna utilità di pianificazione attualmente associata al contesto di chiamata.

## <a name="yieldexecution"></a><a name="yieldexecution"></a> YieldExecution

Restituisce l'esecuzione in modo da poter eseguire un altro contesto. Se non è disponibile un altro contesto a cui cedere l'esecuzione, l'utilità di pianificazione può cedere l'esecuzione a un altro thread del sistema operativo.

```cpp
static void __cdecl YieldExecution();
```

### <a name="remarks"></a>Commenti

Tale metodo determinerà la creazione dell'utilità di pianificazione predefinita del processo e/o il collegamento al contesto di chiamata se non è presente alcuna utilità di pianificazione attualmente associata al contesto di chiamata.

Questa funzione è una novità di Visual Studio 2015 ed è identica alla funzione [yield](#yield) ma non è in conflitto con la macro yield in Windows. h.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe Scheduler](scheduler-class.md)<br/>
[Utilità di pianificazione](../../../parallel/concrt/task-scheduler-concurrency-runtime.md)
