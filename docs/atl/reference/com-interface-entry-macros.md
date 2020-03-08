---
title: Macro di immissione dell'interfaccia COM
ms.date: 03/28/2017
f1_keywords:
- atlcom/ATL::COM_INTERFACE_ENTRY
- atlcom/ATL::COM_INTERFACE_ENTRY_IID
- atlcom/ATL::COM_INTERFACE_ENTRY_AGGREGATE
- atlcom/ATL::COM_INTERFACE_ENTRY_AGGREGATE_BLIND
- atlcom/ATL::COM_INTERFACE_ENTRY_AUTOAGGREGATE
- atlcom/ATL::COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND
- atlcom/ATL::COM_INTERFACE_ENTRY_BREAK
- atlcom/ATL::COM_INTERFACE_ENTRY_CACHED_TEAR_OFF
- atlcom/ATL::COM_INTERFACE_ENTRY_TEAR_OFF
- atlcom/ATL::COM_INTERFACE_ENTRY_CHAIN
- atlcom/ATL::COM_INTERFACE_ENTRY_FUNC
- atlcom/ATL::COM_INTERFACE_ENTRY_FUNC_BLIND
- atlcom/ATL::COM_INTERFACE_ENTRY_NOINTERFACE
helpviewer_keywords:
- COM interfaces, COM interface entry macros
ms.assetid: 19dcb768-2e1f-4b8d-a618-453a01a4bd00
ms.openlocfilehash: 1e1674bad1164e640939d430a860beac7a6e4208
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78855666"
---
# <a name="com_interface_entry-macros"></a>Macro COM_INTERFACE_ENTRY

Queste macro immettono le interfacce di un oggetto nella relativa mappa COM, in modo che sia possibile accedervi tramite `QueryInterface`. L'ordine delle voci nella mappa COM è che le interfacce degli ordini verranno controllate per un IID corrispondente durante `QueryInterface`.

|||
|-|-|
|[COM_INTERFACE_ENTRY](#com_interface_entry)|Immette le interfacce nella mappa dell'interfaccia COM.|
|[COM_INTERFACE_ENTRY2](#com_interface_entry2)|Usare questa macro per evitare ambiguità tra due rami di ereditarietà.|
|[COM_INTERFACE_ENTRY_IID](#com_interface_entry_iid)|Usare questa macro per immettere l'interfaccia nella mappa COM e specificare il relativo IID.|
|[COM_INTERFACE_ENTRY2_IID](#com_interface_entry2_iid)|Come [COM_INTERFACE_ENTRY2](#com_interface_entry2), ad eccezione del fatto che è possibile specificare un IID diverso.|
|[COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate)|Quando viene eseguita una query sull'interfaccia identificata da *IID* , `COM_INTERFACE_ENTRY_AGGREGATE` inoltra al `punk`.|
|[COM_INTERFACE_ENTRY_AGGREGATE_BLIND](#com_interface_entry_aggregate_blind)|Come [COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate), ad eccezione del fatto che l'esecuzione di query per qualsiasi IID comporta l'invio della query a *punk*.|
|[COM_INTERFACE_ENTRY_AUTOAGGREGATE](#com_interface_entry_autoaggregate)|Come [COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate), tranne se *punk* è null, crea automaticamente l'aggregazione descritta dal *CLSID*.|
|[COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND](#com_interface_entry_autoaggregate_blind)|Come [COM_INTERFACE_ENTRY_AUTOAGGREGATE](#com_interface_entry_autoaggregate), ad eccezione del fatto che l'esecuzione di query per qualsiasi IID comporta l'invio della query a *punk*e se *punk* è null, creando automaticamente l'aggregazione descritta dal *CLSID*.|
|[COM_INTERFACE_ENTRY_BREAK](#com_interface_entry_break)|Fa in modo che il programma chiami [DebugBreak](/windows/win32/api/debugapi/nf-debugapi-debugbreak) quando viene eseguita una query sull'interfaccia specificata.|
|[COM_INTERFACE_ENTRY_CACHED_TEAR_OFF](#com_interface_entry_cached_tear_off)|Salva i dati specifici dell'interfaccia per ogni istanza.|
|[COM_INTERFACE_ENTRY_TEAR_OFF](#com_interface_entry_tear_off)|Espone le interfacce di strappo.|
|[COM_INTERFACE_ENTRY_CHAIN](#com_interface_entry_chain)|Elabora la mappa COM della classe di base quando l'elaborazione raggiunge questa voce nella mappa COM.|
|[COM_INTERFACE_ENTRY_FUNC](#com_interface_entry_func)|Meccanismo generale per l'associazione alla logica di `QueryInterface` di ATL.|
|[COM_INTERFACE_ENTRY_FUNC_BLIND](#com_interface_entry_func_blind)|Come [COM_INTERFACE_ENTRY_FUNC](#com_interface_entry_func), ad eccezione del fatto che l'esecuzione di query per qualsiasi IID genera una chiamata a *Func*.|
|[COM_INTERFACE_ENTRY_NOINTERFACE](#com_interface_entry_nointerface)|Restituisce E_NOINTERFACE e termina l'elaborazione della mappa COM quando viene eseguita una query sull'interfaccia specificata.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="com_interface_entry"></a>COM_INTERFACE_ENTRY

Immette le interfacce nella mappa dell'interfaccia COM.

### <a name="syntax"></a>Sintassi

```
COM_INTERFACE_ENTRY( x )
```

### <a name="parameters"></a>Parametri

*x*<br/>
in Nome di un'interfaccia che l'oggetto della classe deriva direttamente da.

### <a name="remarks"></a>Osservazioni

Si tratta in genere del tipo di voce usato più di frequente.

### <a name="example"></a>Esempio

```cpp
BEGIN_COM_MAP(CThisExample)
   COM_INTERFACE_ENTRY(IThisExample)
   COM_INTERFACE_ENTRY(IDispatch)
   COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()
```

### <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="com_interface_entry2"></a>COM_INTERFACE_ENTRY2

Usare questa macro per evitare ambiguità tra due rami di ereditarietà.

```
COM_INTERFACE_ENTRY2(x, x2)
```

### <a name="parameters"></a>Parametri

*x*<br/>
in Nome di un'interfaccia che si desidera esporre dall'oggetto.

*X2*<br/>
in Nome del ramo di ereditarietà da cui viene esposta la *x* .

### <a name="remarks"></a>Osservazioni

Se, ad esempio, si deriva l'oggetto classe da due interfacce duali, si espone `IDispatch` utilizzando COM_INTERFACE_ENTRY2 poiché è possibile ottenere `IDispatch` da una delle interfacce.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#118](../../atl/codesnippet/cpp/com-map-macros_2.h)]

##  <a name="com_interface_entry_iid"></a>COM_INTERFACE_ENTRY_IID

Usare questa macro per immettere l'interfaccia nella mappa COM e specificare il relativo IID.

```
COM_INTERFACE_ENTRY_IID(iid, x)
```

### <a name="parameters"></a>Parametri

*IID*<br/>
in GUID dell'interfaccia esposta.

*x*<br/>
in Nome della classe il cui vtable verrà esposto come interfaccia identificata da *IID*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#117](../../atl/codesnippet/cpp/com-map-macros_3.h)]

##  <a name="com_interface_entry2_iid"></a>COM_INTERFACE_ENTRY2_IID

Come [COM_INTERFACE_ENTRY2](#com_interface_entry2), ad eccezione del fatto che è possibile specificare un IID diverso.

```
COM_INTERFACE_ENTRY2_IID(iid, x, x2)
```

### <a name="parameters"></a>Parametri

*IID*<br/>
in GUID specificato per l'interfaccia.

*x*<br/>
in Nome di un'interfaccia derivata direttamente dall'oggetto classe.

*X2*<br/>
in Nome di una seconda interfaccia derivata direttamente dall'oggetto classe.

##  <a name="com_interface_entry_aggregate"></a>COM_INTERFACE_ENTRY_AGGREGATE

Quando viene eseguita una query sull'interfaccia identificata da *IID* , COM_INTERFACE_ENTRY_AGGREGATE inoltra a *punk*.

```
COM_INTERFACE_ENTRY_AGGREGATE(iid, punk)
```

### <a name="parameters"></a>Parametri

*IID*<br/>
in GUID dell'interfaccia sottoposta a query per.

*punk*<br/>
in Nome di un puntatore `IUnknown`.

### <a name="remarks"></a>Osservazioni

Si presuppone che il parametro *punk* punti all'oggetto sconosciuto interno di un'aggregazione o a null, nel qual caso la voce viene ignorata. In genere, è `CoCreate` l'aggregazione in `FinalConstruct`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#112](../../atl/codesnippet/cpp/com-map-macros_4.h)]

##  <a name="com_interface_entry_aggregate_blind"></a>COM_INTERFACE_ENTRY_AGGREGATE_BLIND

Come [COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate), ad eccezione del fatto che l'esecuzione di query per qualsiasi IID comporta l'invio della query a *punk*.

```
COM_INTERFACE_ENTRY_AGGREGATE_BLIND(punk)
```

### <a name="parameters"></a>Parametri

*punk*<br/>
in Nome di un puntatore `IUnknown`.

### <a name="remarks"></a>Osservazioni

Se la query dell'interfaccia ha esito negativo, l'elaborazione della mappa COM continua.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#113](../../atl/codesnippet/cpp/com-map-macros_5.h)]

##  <a name="com_interface_entry_autoaggregate"></a>COM_INTERFACE_ENTRY_AUTOAGGREGATE

Come [COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate), tranne se *punk* è null, crea automaticamente l'aggregazione descritta dal *CLSID*.

```
COM_INTERFACE_ENTRY_AUTOAGGREGATE(iid, punk, clsid)
```

### <a name="parameters"></a>Parametri

*IID*<br/>
in GUID dell'interfaccia sottoposta a query per.

*punk*<br/>
in Nome di un puntatore `IUnknown`. Deve essere un membro della classe che contiene la mappa COM.

*CLSID*<br/>
in Identificatore dell'aggregazione che verrà creata se *punk* è null.

### <a name="remarks"></a>Osservazioni

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#114](../../atl/codesnippet/cpp/com-map-macros_6.h)]

##  <a name="com_interface_entry_autoaggregate_blind"></a>COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND

Come [COM_INTERFACE_ENTRY_AUTOAGGREGATE](#com_interface_entry_autoaggregate), ad eccezione del fatto che l'esecuzione di query per qualsiasi IID comporta l'invio della query a *punk*e se *punk* è null, creando automaticamente l'aggregazione descritta dal *CLSID*.

```
COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND(punk, clsid)
```

### <a name="parameters"></a>Parametri

*punk*<br/>
in Nome di un puntatore `IUnknown`. Deve essere un membro della classe che contiene la mappa COM.

*CLSID*<br/>
in Identificatore dell'aggregazione che verrà creata se *punk* è null.

### <a name="remarks"></a>Osservazioni

Se la query dell'interfaccia ha esito negativo, l'elaborazione della mappa COM continua.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#115](../../atl/codesnippet/cpp/com-map-macros_7.h)]

##  <a name="com_interface_entry_break"></a>COM_INTERFACE_ENTRY_BREAK

Fa in modo che il programma chiami [DebugBreak](/windows/win32/api/debugapi/nf-debugapi-debugbreak) quando viene eseguita una query sull'interfaccia specificata.

```
COM_INTERFACE_ENTRY_BREAK(x)
```

### <a name="parameters"></a>Parametri

*x*<br/>
in Testo usato per costruire l'identificatore di interfaccia.

### <a name="remarks"></a>Osservazioni

L'IID dell'interfaccia verrà costruito aggiungendo *x* a `IID_`. Se, ad esempio, *x* è `IPersistStorage`, l'IID verrà `IID_IPersistStorage`.

##  <a name="com_interface_entry_cached_tear_off"></a>COM_INTERFACE_ENTRY_CACHED_TEAR_OFF

Salva i dati specifici dell'interfaccia per ogni istanza.

```
COM_INTERFACE_ENTRY_CACHED_TEAR_OFF(iid, x, punk)
```

### <a name="parameters"></a>Parametri

*IID*<br/>
in GUID dell'interfaccia tear-off.

*x*<br/>
in Nome della classe che implementa l'interfaccia.

*punk*<br/>
in Nome di un puntatore `IUnknown`. Deve essere un membro della classe che contiene la mappa COM. Deve essere inizializzato su NULL nel costruttore dell'oggetto della classe.

### <a name="remarks"></a>Osservazioni

Se l'interfaccia non viene utilizzata, in questo caso viene ridotta la dimensione complessiva dell'istanza dell'oggetto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#54](../../atl/codesnippet/cpp/com-map-macros_8.h)]

##  <a name="com_interface_entry_tear_off"></a>COM_INTERFACE_ENTRY_TEAR_OFF

Espone le interfacce di strappo.

```
COM_INTERFACE_ENTRY_TEAR_OFF(iid, x)
```

### <a name="parameters"></a>Parametri

*IID*<br/>
in GUID dell'interfaccia tear-off.

*x*<br/>
in Nome della classe che implementa l'interfaccia.

### <a name="remarks"></a>Osservazioni

Un'interfaccia di strappo viene implementata come un oggetto separato di cui viene creata un'istanza ogni volta che viene eseguita una query sull'interfaccia che rappresenta. In genere, l'interfaccia viene compilata come un tear-off se l'interfaccia viene utilizzata raramente, perché in questo modo viene salvato un puntatore vtable in ogni istanza dell'oggetto principale. Lo strappo viene eliminato quando il conteggio dei riferimenti diventa zero. La classe che implementa lo strappo deve essere derivata da `CComTearOffObjectBase` e avere una propria mappa COM.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_COM#1](../../atl/codesnippet/cpp/com-map-macros_1.h)]

##  <a name="com_interface_entry_chain"></a>COM_INTERFACE_ENTRY_CHAIN

Elabora la mappa COM della classe di base quando l'elaborazione raggiunge questa voce nella mappa COM.

```
COM_INTERFACE_ENTRY_CHAIN(classname)
```

### <a name="parameters"></a>Parametri

*nomeclasse*<br/>
in Classe di base dell'oggetto corrente.

### <a name="remarks"></a>Osservazioni

Ad esempio, nel codice seguente:

[!code-cpp[NVC_ATL_Windowing#116](../../atl/codesnippet/cpp/com-map-macros_9.h)]

Si noti che la prima voce nella mappa COM deve essere un'interfaccia nell'oggetto che contiene la mappa COM. Pertanto, non è possibile avviare le voci della mappa COM con COM_INTERFACE_ENTRY_CHAIN, che determina la ricerca della mappa COM di un oggetto diverso nel punto in cui **COM_INTERFACE_ENTRY_CHAIN (** `COtherObject` **)** viene visualizzato nella mappa com dell'oggetto. Se si desidera innanzitutto eseguire la ricerca nella mappa COM di un altro oggetto, aggiungere una voce di interfaccia per `IUnknown` alla mappa COM, quindi concatenare la mappa COM dell'altro oggetto. Ad esempio:

[!code-cpp[NVC_ATL_Windowing#111](../../atl/codesnippet/cpp/com-map-macros_10.h)]

##  <a name="com_interface_entry_func"></a>COM_INTERFACE_ENTRY_FUNC

Meccanismo generale per l'associazione alla logica di `QueryInterface` di ATL.

```
COM_INTERFACE_ENTRY_FUNC(iid, dw, func)
```

### <a name="parameters"></a>Parametri

*IID*<br/>
in GUID dell'interfaccia esposta.

*dw*<br/>
in Parametro passato a *Func*.

*func*<br/>
in Puntatore a funzione che restituirà *IID*.

### <a name="remarks"></a>Osservazioni

Se *IID* corrisponde all'IID dell'interfaccia su cui viene eseguita la query, viene chiamata la funzione specificata da *Func* . La dichiarazione per la funzione deve essere:

`HRESULT WINAPI func(void* pv, REFIID riid, LPVOID* ppv, DWORD_PTR dw);`

Quando la funzione viene chiamata, `pv` punta all'oggetto classe. Il parametro *riid* fa riferimento all'interfaccia su cui viene eseguita la query, `ppv` è il puntatore alla posizione in cui la funzione deve archiviare il puntatore all'interfaccia e *DW* è il parametro specificato nella voce. La funzione deve impostare \* `ppv` su NULL e restituire E_NOINTERFACE o S_FALSE se sceglie di non restituire un'interfaccia. Con E_NOINTERFACE viene terminata l'elaborazione della mappa COM. Con S_FALSE, l'elaborazione della mappa COM continua, anche se non è stato restituito alcun puntatore di interfaccia. Se la funzione restituisce un puntatore a interfaccia, deve restituire S_OK.

##  <a name="com_interface_entry_func_blind"></a>COM_INTERFACE_ENTRY_FUNC_BLIND

Come [COM_INTERFACE_ENTRY_FUNC](#com_interface_entry_func), ad eccezione del fatto che l'esecuzione di query per qualsiasi IID genera una chiamata a *Func*.

```
COM_INTERFACE_ENTRY_FUNC_BLIND(dw, func)
```

### <a name="parameters"></a>Parametri

*dw*<br/>
in Parametro passato a *Func*.

*func*<br/>
in Funzione che viene chiamata quando viene elaborata questa voce nella mappa COM.

### <a name="remarks"></a>Osservazioni

Qualsiasi errore provocherà il proseguimento dell'elaborazione sulla mappa COM. Se la funzione restituisce un puntatore a interfaccia, deve restituire S_OK.

##  <a name="com_interface_entry_nointerface"></a>COM_INTERFACE_ENTRY_NOINTERFACE

Restituisce E_NOINTERFACE e termina l'elaborazione della mappa COM quando viene eseguita una query sull'interfaccia specificata.

```
COM_INTERFACE_ENTRY_NOINTERFACE(x)
```

### <a name="parameters"></a>Parametri

*x*<br/>
in Testo usato per costruire l'identificatore di interfaccia.

### <a name="remarks"></a>Osservazioni

È possibile utilizzare questa macro per impedire l'utilizzo di un'interfaccia in un particolare caso. Ad esempio, è possibile inserire questa macro nella mappa COM immediatamente prima di COM_INTERFACE_ENTRY_AGGREGATE_BLIND per impedire che una query per l'interfaccia venga trasmessa all'oggetto sconosciuto interno dell'aggregazione.

L'IID dell'interfaccia verrà costruito aggiungendo *x* a `IID_`. Se, ad esempio, *x* è `IPersistStorage`, l'IID verrà `IID_IPersistStorage`.
