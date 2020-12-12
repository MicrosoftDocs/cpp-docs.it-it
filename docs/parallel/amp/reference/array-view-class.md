---
description: 'Altre informazioni su: array_view Class'
title: Classe array_view
ms.date: 11/04/2016
f1_keywords:
- array_view
- AMP/array_view
- AMP/Concurrency::array_view::array_view
- AMP/Concurrency::array_view::copy_to
- AMP/Concurrency::array_view::data
- AMP/Concurrency::array_view::discard_data
- AMP/Concurrency::array_view::get_extent
- AMP/Concurrency::array_view::get_ref
- AMP/Concurrency::array_view::get_source_accelerator_view
- AMP/Concurrency::array_view::refresh
- AMP/Concurrency::array_view::reinterpret_as
- AMP/Concurrency::array_view::section
- AMP/Concurrency::array_view::synchronize
- AMP/Concurrency::array_view::synchronize_async
- AMP/Concurrency::array_view::synchronize_to
- AMP/Concurrency::array_view::synchronize_to_async
- AMP/Concurrency::array_view::view_as
- AMP/Concurrency::array_view::rank
- AMP/Concurrency::array_view::extent
- AMP/Concurrency::array_view::source_accelerator_view
- AMP/Concurrency::array_view::value_type
helpviewer_keywords:
- array_view class
ms.assetid: 7e7ec9bc-05a2-4372-b05d-752b50006c5a
ms.openlocfilehash: 170eb51a437fd56b9b9e74bb22e5b84d3478b4bd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97247878"
---
# <a name="array_view-class"></a>Classe array_view

Rappresenta una visualizzazione N-dimensionale sui dati contenuti in un altro contenitore.

## <a name="syntax"></a>Sintassi

```cpp
template <
    typename value_type,
    int _Rank = 1
>
class array_view : public _Array_view_base<_Rank, sizeof(value_type)/sizeof(int)>;

template <
    typename value_type,
    int _Rank
>
class array_view<const value_type, _Rank> : public _Array_view_base<_Rank, sizeof(value_type)/sizeof(int)>;
```

### <a name="parameters"></a>Parametri

*value_type*<br/>
Tipo di dati degli elementi nell' `array_view` oggetto.

*_Rank*<br/>
Rango dell' `array_view` oggetto.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[Costruttore array_view](#ctor)|Inizializza una nuova istanza della classe `array_view`. Non esiste alcun costruttore predefinito per `array<T,N>` . Tutti i costruttori sono limitati per l'esecuzione solo sulla CPU e non possono essere eseguiti in una destinazione Direct3D.|
|[distruttore ~ array_view](#ctor)|Elimina definitivamente l' `array_view` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[copy_to](#copy_to)|Copia il contenuto dell' `array_view` oggetto nella destinazione specificata chiamando `copy(*this, dest)` .|
|[data](#data)|Restituisce un puntatore ai dati non elaborati dell'oggetto `array_view` .|
|[discard_data](#discard_data)|Elimina i dati correnti sottostanti questa visualizzazione.|
|[get_extent](#get_extent)|Restituisce l'oggetto extent dell'oggetto array_view.|
|[get_ref](#get_ref)|Restituisce un riferimento all'elemento indicizzato.|
|[get_source_accelerator_view](#get_source_accelerator_view)|Restituisce l' [accelerator_view](accelerator-view-class.md) in cui si trova l'origine dati dell'oggetto `array_view` .|
|[Refresh](#refresh)|Notifica all' `array_view` oggetto che la memoria associata è stata modificata all'esterno dell' `array_view` interfaccia. Una chiamata a questo metodo esegue il rendering di tutte le informazioni memorizzate nella cache obsolete.|
|[reinterpret_as](#reinterpret_as)|Restituisce una matrice unidimensionale che contiene tutti gli elementi dell' `array_view` oggetto.|
|[sezione](#section)|Restituisce una sottosezione dell'oggetto presente all' `array_view` origine specificata e, facoltativamente, con l'extent specificato.|
|[sincronizzare](#synchronize)|Sincronizza le modifiche apportate all' `array_view` oggetto di nuovo ai dati di origine.|
|[synchronize_async](#synchronize_async)|Sincronizza in modo asincrono le modifiche apportate all' `array_view` oggetto di nuovo ai dati di origine.|
|[synchronize_to](#synchronize_to)|Sincronizza tutte le modifiche apportate all' `array_view` oggetto all' [accelerator_view](accelerator-view-class.md)specificato.|
|[synchronize_to_async](#synchronize_to_async)|Sincronizza in modo asincrono le modifiche apportate all' `array_view` oggetto all' [accelerator_view](accelerator-view-class.md)specificato.|
|[view_as](#view_as)|Produce un `array_view` oggetto di un rango diverso usando `array_view` i dati di questo oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[operatore ()](#operator_call)|Restituisce il valore dell'elemento specificato dal parametro o dai parametri.|
|[operatore\[\]](#operator_at)|Restituisce l'elemento specificato dai parametri.|
|[operatore =](#operator_eq)|Copia il contenuto dell'oggetto specificato `array_view` in questo.|

### <a name="public-constants"></a>Costanti pubbliche

|Nome|Description|
|----------|-----------------|
|[Costante di rango](#rank)|Archivia il rango dell' `array_view` oggetto.|

### <a name="data-members"></a>Membri dei dati

|Nome|Description|
|----------|-----------------|
|[extent](#extent)|Ottiene l'oggetto `extent` che definisce la forma dell'oggetto `array_view`.|
|[source_accelerator_view](#source_accelerator_view)|Ottiene l' [accelerator_view](accelerator-view-class.md) in cui si trova l'origine dati dell'oggetto. `array_view`|
|[value_type](#value_type)|Tipo di valore di `array_view` e della matrice associata.|

## <a name="remarks"></a>Commenti

La `array_view` classe rappresenta una visualizzazione dei dati contenuti in un oggetto [matrice](array-class.md) o in una sottosezione di un `array` oggetto.

È possibile accedere all' `array_view` oggetto in cui si trovano i dati di origine (in locale) o in un altro acceleratore o in un dominio di coerenza (in modalità remota). Quando si accede all'oggetto in modalità remota, le visualizzazioni vengono copiate e memorizzate nella cache, se necessario. Ad eccezione degli effetti della memorizzazione nella cache automatica, `array_view` gli oggetti hanno un profilo di prestazioni simile a quello degli `array` oggetti. Si verifica una lieve riduzione delle prestazioni quando si accede ai dati tramite le visualizzazioni.

Esistono tre scenari di utilizzo remoto:

- Una vista a un puntatore di memoria di sistema viene passata tramite una [parallel_for_each](../../../parallel/concrt/reference/concurrency-namespace-functions.md#parallel_for_each) chiamata a un tasto di scelta rapida e accessibile sull'acceleratore.

- Una visualizzazione di una matrice che si trova in un tasto di scelta rapida viene passata tramite una `parallel_for_each` chiamata a un altro acceleratore ed è possibile accedervi.

- Una vista a una matrice che si trova in un tasto di scelta rapida è accessibile sulla CPU.

In uno di questi scenari, le viste a cui viene fatto riferimento vengono copiate dal runtime nel percorso remoto e, se modificate dalle chiamate all' `array_view` oggetto, vengono copiate di nuovo nel percorso locale. Il runtime può ottimizzare il processo di copia delle modifiche, può copiare solo gli elementi modificati o potrebbe copiare anche parti invariate. `array_view`Non è garantito che gli oggetti sovrapposti in un'origine dati mantengano l'integrità referenziale in una posizione remota.

È necessario sincronizzare qualsiasi accesso multithread alla stessa origine dati.

Il runtime apporta le garanzie seguenti relative alla memorizzazione nella cache dei dati negli `array_view` oggetti:

- Tutti gli accessi ben sincronizzati a un `array` oggetto e a un `array_view` oggetto in base all'ordine del programma obbediscono a una relazione di successo seriale-prima.

- Tutti gli accessi ben sincronizzati a oggetti sovrapposti `array_view` sullo stesso acceleratore in un singolo `array` oggetto vengono associati a un alias tramite l' `array` oggetto. Provocano una relazione totale-prima che rispetta l'ordine del programma. Nessuna memorizzazione nella cache. Se gli `array_view` oggetti sono in esecuzione su acceleratori diversi, l'ordine di accesso non è definito, creando un race condition.

Quando si crea un `array_view` oggetto utilizzando un puntatore nella memoria di sistema, è necessario modificare l' `array_view` oggetto visualizzazione solo tramite il `array_view` puntatore. In alternativa, è necessario chiamare `refresh()` su uno degli `array_view` oggetti collegati al puntatore di sistema, se la memoria nativa sottostante viene modificata direttamente, anziché tramite l' `array_view` oggetto.

Entrambe le azioni notificano all' `array_view` oggetto che la memoria nativa sottostante viene modificata e che tutte le copie che si trovano in un acceleratore sono obsolete. Se si seguono queste linee guida, le visualizzazioni basate su puntatore sono identiche a quelle fornite alle visualizzazioni di matrici di dati paralleli.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`_Array_view_shape`

`_Array_view_base`

`array_view`

## <a name="requirements"></a>Requisiti

**Intestazione:** amp.h

**Spazio dei nomi:** Concorrenza

## <a name="array_view"></a><a name="dtor"></a> ~ array_view

Elimina definitivamente l' `array_view` oggetto.

```cpp
~array_view()restrict(amp,cpu);
```

## <a name="array_view"></a><a name="ctor"></a> array_view

Inizializza una nuova istanza della classe `array_view`.

```cpp
array_view(
    array<value_type, _Rank>& _Src)restrict(amp,cpu);

array_view(
    const array_view& _Other)restrict(amp,cpu);

explicit array_view(
    const Concurrency::extent<_Rank>& _Extent) restrict(cpu);

template <
    typename _Container
>
array_view(
    const Concurrency::extent<_Rank>& _Extent,
    _Container& _Src) restrict(cpu);

array_view(
    const Concurrency::extent<_Rank>& _Extent,
    value_type* _Src)restrict(amp,cpu);

explicit array_view(
    int _E0) restrict(cpu);

template <
    typename _Container
>
explicit array_view(
    _Container& _Src,
    typename std::enable_if<details::_Is_container<_Container>::type::value, void **>::type = 0) restrict(cpu);

template <
    typename _Container
>
explicit array_view(
    int _E0,
    _Container& _Src) restrict(cpu);

explicit array_view(
    int _E0,
    int _E1) __CPU_ONLY;

template <
    typename _Container
>
explicit array_view(
    int _E0,
    int _E1,
    _Container& _Src) restrict(cpu);

explicit array_view(
    int _E0,
    int _E1,
    int _E2) __CPU_ONLY;

template <
    typename _Container
>
explicit array_view(
    int _E0,
    int _E1,
    int _E2,
    _Container& _Src);

explicit array_view(
    int _E0,
    _In_ value_type* _Src)restrict(amp,cpu);

template <
    typename _Arr_type,
    int _Size
>
explicit array_view(
    _In_ _Arr_type (& _Src) [_Size]) restrict(amp,cpu);

explicit array_view(
    int _E0,
    int _E1,
    _In_ value_type* _Src)restrict(amp,cpu);

explicit array_view(
    int _E0,
    int _E1,
    int _E2,
    _In_ value_type* _Src)restrict(amp,cpu);

array_view(
    const array<value_type, _Rank>& _Src)restrict(amp,cpu);

array_view(
    const array_view<value_type, _Rank>& _Src)restrict(amp,cpu);

array_view(
    const array_view<const value_type, _Rank>& _Src)restrict(amp,cpu);

template <
    typename _Container
>
array_view(
    const Concurrency::extent<_Rank>& _Extent,
    const _Container& _Src) restrict(cpu);

template <
    typename _Container
>
explicit array_view(
    const _Container& _Src,
    typename std::enable_if<details::_Is_container<_Container>::type::value, void **>::type = 0) restrict(cpu);

array_view(
    const Concurrency::extent<_Rank>& _Extent,
    const value_type* _Src)restrict(amp,cpu);

template <
    typename _Arr_type,
    int _Size
>
explicit array_view(
    const _In_ _Arr_type (& _Src) [_Size]) restrict(amp,cpu);

template <
    typename _Container
>
array_view(
    int _E0,
    const _Container& _Src);

template <
    typename _Container
>
array_view(
    int _E0,
    int _E1,
    const _Container& _Src);

template <
    typename _Container
>
array_view(
    int _E0,
    int _E1,
    int _E2,
    const _Container& _Src);

array_view(
    int _E0,
    const value_type* _Src)restrict(amp,cpu);

array_view(
    int _E0,
    int _E1,
    const value_type* _Src) restrict(amp,cpu);

array_view(
    int _E0,
    int _E1,
    int _E2,
    const value_type* _Src) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Arr_type*<br/>
Tipo di elemento di una matrice di tipo C da cui vengono forniti i dati.

*_Container*<br/>
Argomento di modello che deve specificare un contenitore lineare che supporta `data()` `size()` i membri e.

*_E0*<br/>
Componente più significativo dell'extent di questa sezione.

*_E1*<br/>
Componente più vicino a quello più significativo dell'extent di questa sezione.

*_E2*<br/>
Componente meno significativo dell'extent di questa sezione.

*_Extent*<br/>
Extent in ogni dimensione dell'oggetto `array_view` .

*_Other*<br/>
Oggetto di tipo `array_view<T,N>` da cui inizializzare il nuovo oggetto `array_view` .

*_Size*<br/>
Dimensioni di una matrice di tipo C da cui vengono forniti i dati.

*_Src*<br/>
Puntatore ai dati di origine che verranno copiati nella nuova matrice.

## <a name="copy_to"></a><a name="copy_to"></a> copy_to

Copia il contenuto dell' `array_view` oggetto nell'oggetto di destinazione specificato chiamando `copy(*this, dest)` .

```cpp
void copy_to(
    array<value_type, _Rank>& _Dest) const;

void copy_to(
    array_view<value_type, _Rank>& _Dest) const;
```

### <a name="parameters"></a>Parametri

*_Dest*<br/>
Oggetto in cui copiare.

## <a name="data"></a>Dati <a name="data"></a>

Restituisce un puntatore ai dati non elaborati dell'oggetto `array_view` .

```cpp
value_type* data() const restrict(amp,
    cpu);

const value_type* data() const restrict(amp,
    cpu);
```

### <a name="return-value"></a>Valore restituito

Puntatore ai dati non elaborati dell'oggetto `array_view` .

## <a name="discard_data"></a><a name="discard_data"></a> discard_data

Elimina i dati correnti sottostanti questa visualizzazione. Si tratta di un hint di ottimizzazione per il runtime utilizzato per evitare di copiare il contenuto corrente della visualizzazione in una destinazione a `accelerator_view` cui è stato eseguito l'accesso e l'utilizzo è consigliato se il contenuto esistente non è necessario. Questo metodo è un no-op se usato in un contesto restrict (amp)

```cpp
void discard_data() const restrict(cpu);
```

## <a name="extent"></a><a name="extent"></a> extent

Ottiene l'oggetto `extent` che definisce la forma dell'oggetto `array_view`.

```cpp
__declspec(property(get= get_extent)) Concurrency::extent<_Rank> extent;
```

## <a name="get_extent"></a><a name="get_extent"></a> get_extent

Restituisce l'oggetto [extent](extent-class.md) dell' `array_view` oggetto.

```cpp
Concurrency::extent<_Rank> get_extent() const restrict(cpu, amp);
```

### <a name="return-value"></a>Valore restituito

`extent`Oggetto dell'oggetto. `array_view`

## <a name="get_ref"></a><a name="get_ref"></a> get_ref

Ottenere un riferimento all'elemento indicizzato da _Index. A differenza degli altri operatori di indicizzazione per accedere alla array_view sulla CPU, questo metodo non sincronizza in modo implicito il contenuto di questo array_view alla CPU. Dopo aver eseguito l'accesso al array_view in una posizione remota o aver eseguito un'operazione di copia che implica questa array_view gli utenti sono responsabili della sincronizzazione esplicita del array_view alla CPU prima di chiamare questo metodo. In caso contrario, viene restituito un comportamento non definito.

```cpp
value_type& get_ref(
    const index<_Rank>& _Index) const restrict(amp, cpu);
```

### <a name="parameters"></a>Parametri

*_Index*<br/>
Indice.

### <a name="return-value"></a>Valore restituito

Riferimento all'elemento indicizzato da _Index

## <a name="get_source_accelerator_view"></a><a name="get_source_accelerator_view"></a> get_source_accelerator_view

Restituisce il accelerator_view in cui si trova l'origine dati del array_view. Se il array_view non dispone di un'origine dati, questa API genera un'runtime_exception

```cpp
accelerator_view get_source_accelerator_view() const;
```

### <a name="return-value"></a>Valore restituito

## <a name="operator"></a><a name="operator_call"></a> operatore ()

Restituisce il valore dell'elemento specificato dal parametro o dai parametri.

```cpp
value_type& operator() (
    const index<_Rank>& _Index) const restrict(amp,cpu);

typename details::_Projection_result_type<value_type,_Rank>::_Result_type operator() (
    int _I) const restrict(amp,cpu);

value_type& operator() (
    int _I0,
    int _I1) const restrict(amp,cpu);

value_type& operator() (
    int _I0,
    int _I1,
    int _I2) const restrict(amp,cpu);

typename details::_Projection_result_type<value_type,_Rank>::_Const_result_type operator() (
    int _I) const restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Index*<br/>
Posizione dell'elemento.

*_I0*<br/>
Indice nella prima dimensione.

*_I1*<br/>
Indice nella seconda dimensione.

*_I2*<br/>
Indice nella terza dimensione.

*_I*<br/>
Posizione dell'elemento.

### <a name="return-value"></a>Valore restituito

Valore dell'elemento specificato dal parametro o dai parametri.

## <a name="operator"></a><a name="operator_at"></a> operator []

Restituisce l'elemento specificato dai parametri.

```cpp
typename details::_Projection_result_type<value_type,_Rank>::_Const_result_type operator[] (
    int _I) const restrict(amp,cpu);

value_type& operator[] (
    const index<_Rank>& _Index) const restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Index*<br/>
Indice.

*_I*<br/>
Indice.

### <a name="return-value"></a>Valore restituito

Valore dell'elemento in corrispondenza dell'indice o oggetto `array_view` proiettato sulla dimensione più significativa.

## <a name="operator"></a><a name="operator_eq"></a> operatore =

Copia il contenuto dell'oggetto specificato `array_view` in questo oggetto.

```cpp
array_view& operator= (
    const array_view& _Other) restrict(amp,cpu);

array_view& operator= (
    const array_view<value_type, _Rank>& _Other) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
`array_view`Oggetto da cui eseguire la copia.

### <a name="return-value"></a>Valore restituito

Riferimento a questo `array_view` oggetto.

## <a name="rank"></a><a name="rank"></a> Rank

Archivia il rango dell' `array_view` oggetto.

```cpp
static const int rank = _Rank;
```

## <a name="refresh"></a><a name="refresh"></a> Refresh

Notifica all' `array_view` oggetto che la memoria associata è stata modificata all'esterno dell' `array_view` interfaccia. Una chiamata a questo metodo esegue il rendering di tutte le informazioni memorizzate nella cache obsolete.

```cpp
void refresh() const restrict(cpu);
```

## <a name="reinterpret_as"></a><a name="reinterpret_as"></a> reinterpret_as

Reinterpreta la array_view tramite una array_view unidimensionale, che può avere un tipo di valore diverso rispetto al array_view di origine.

### <a name="syntax"></a>Sintassi

```cpp
template <
    typename _Value_type2
>
array_view< _Value_type2, _Rank> reinterpret_as() const restrict(amp,cpu);

template <
    typename _Value_type2
>
array_view<const _Value_type2, _Rank> reinterpret_as() const restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Value_type2*<br/>
Tipo di dati del nuovo `array_view` oggetto.

### <a name="return-value"></a>Valore restituito

`array_view`Oggetto o oggetto const `array_view` basato su `array_view` , con il tipo di elemento convertito da `T` a `_Value_type2` e il rango ridotto da *N* a 1.

### <a name="remarks"></a>Commenti

A volte è utile visualizzare una matrice multidimensionale come matrice lineare, unidimensionale, che può avere un tipo di valore diverso dalla matrice di origine. È possibile ottenere questo risultato in un oggetto `array_view` utilizzando questo metodo.

**Avviso** di La reinterpretazione di un oggetto array_view usando un tipo di valore diverso è un'operazione potenzialmente non sicura. Questa funzionalità deve essere utilizzata con cautela.

Ecco un esempio:

```cpp
struct RGB { float r; float g; float b; };

array<RGB,3>  a = ...;
array_view<float,1> v = a.reinterpret_as<float>();

assert(v.extent == 3*a.extent);
```

## <a name="section"></a><a name="section"></a> sezione

Restituisce una sottosezione dell'oggetto presente all' `array_view` origine specificata e, facoltativamente, con l'extent specificato.

```cpp
array_view section(
    const Concurrency::index<_Rank>& _Section_origin,
    const Concurrency::extent<_Rank>& _Section_extent) const restrict(amp,cpu);

array_view section(
    const Concurrency::index<_Rank>& _Idx) const restrict(amp,cpu);

array_view section(
    const Concurrency::extent<_Rank>& _Ext) const restrict(amp,cpu);

array_view section(
    int _I0,
    int _E0) const restrict(amp,cpu);

array_view section(
    int _I0,
    int _I1,
    int _E0,
    int _E1) const restrict(amp,cpu);

array_view section(
    int _I0,
    int _I1,
    int _I2,
    int _E0,
    int _E1,
    int _E2) const restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_E0*<br/>
Componente più significativo dell'extent di questa sezione.

*_E1*<br/>
Componente più vicino a quello più significativo dell'extent di questa sezione.

*_E2*<br/>
Componente meno significativo dell'extent di questa sezione.

*_Ext*<br/>
Oggetto [extent](extent-class.md) che specifica l'extent della sezione. L'origine è 0.

*_Idx*<br/>
Oggetto [index](index-class.md) che specifica la posizione dell'origine. La sottosezione è il resto dell'extent.

*_I0*<br/>
Componente più significativo dell'origine di questa sezione.

*_I1*<br/>
Componente successivo a quello più significativo dell'origine di questa sezione.

*_I2*<br/>
Componente meno significativo dell'origine di questa sezione.

*_Rank*<br/>
Rango della sezione.

*_Section_extent*<br/>
Oggetto [extent](extent-class.md) che specifica l'extent della sezione.

*_Section_origin*<br/>
Oggetto [index](index-class.md) che specifica la posizione dell'origine.

### <a name="return-value"></a>Valore restituito

Sottosezione dell' `array_view` oggetto in corrispondenza dell'origine specificata e, facoltativamente, con l'extent specificato. Quando `index` viene specificato solo l'oggetto, la sottosezione contiene tutti gli elementi nell'extent associato che hanno indici maggiori degli indici degli elementi nell' `index` oggetto.

## <a name="source_accelerator_view"></a><a name="source_accelerator_view"></a> source_accelerator_view

Ottiene la accelerator_view di origine a cui è associata la array_view.

```cpp
__declspec(property(get= get_source_accelerator_view)) accelerator_view source_accelerator_view;
```

## <a name="synchronize"></a><a name="synchronize"></a> sincronizzare

Sincronizza le modifiche apportate all' `array_view` oggetto di nuovo ai dati di origine.

```cpp
void synchronize(access_type _Access_type = access_type_read) const restrict(cpu);

void synchronize() const restrict(cpu);
```

### <a name="parameters"></a>Parametri

*_Access_type*<br/>
[Access_type](concurrency-namespace-enums-amp.md#access_type) desiderate nella [accelerator_view](accelerator-view-class.md)di destinazione. Il valore predefinito di questo parametro è `access_type_read` .

## <a name="synchronize_async"></a><a name="synchronize_async"></a> synchronize_async

Sincronizza in modo asincrono le modifiche apportate all' `array_view` oggetto di nuovo ai dati di origine.

```cpp
concurrency::completion_future synchronize_async(access_type _Access_type = access_type_read) const restrict(cpu);

concurrency::completion_future synchronize_async() const restrict(cpu);
```

### <a name="parameters"></a>Parametri

*_Access_type*<br/>
[Access_type](concurrency-namespace-enums-amp.md#access_type) desiderate nella [accelerator_view](accelerator-view-class.md)di destinazione. Il valore predefinito di questo parametro è `access_type_read` .

### <a name="return-value"></a>Valore restituito

Un futuro su cui attendere il completamento dell'operazione.

## <a name="synchronize_to"></a><a name="synchronize_to"></a> synchronize_to

Sincronizza tutte le modifiche apportate a questo array_view al accelerator_view specificato.

```cpp
void synchronize_to(
    const accelerator_view& _Accl_view,
    access_type _Access_type = access_type_read) const restrict(cpu);

void synchronize_to(
    const accelerator_view& _Accl_view) const restrict(cpu);
```

### <a name="parameters"></a>Parametri

*_Accl_view*<br/>
Accelerator_view di destinazione in cui eseguire la sincronizzazione.

*_Access_type*<br/>
Access_type desiderate nella accelerator_view di destinazione. Il valore predefinito di questo parametro è access_type_read.

## <a name="synchronize_to_async"></a><a name="synchronize_to_async"></a> synchronize_to_async

Sincronizza in modo asincrono le modifiche apportate a questo array_view al accelerator_view specificato.

```cpp
concurrency::completion_future synchronize_to_async(
    const accelerator_view& _Accl_view,
    access_type _Access_type = access_type_read) const restrict(cpu);

concurrency::completion_future synchronize_to_async(
    const accelerator_view& _Accl_view) const restrict(cpu);
```

### <a name="parameters"></a>Parametri

*_Accl_view*<br/>
Accelerator_view di destinazione in cui eseguire la sincronizzazione.

*_Access_type*<br/>
Access_type desiderate nella accelerator_view di destinazione. Il valore predefinito di questo parametro è access_type_read.

### <a name="return-value"></a>Valore restituito

Un futuro su cui attendere il completamento dell'operazione.

## <a name="value_type"></a><a name="value_type"></a> value_type

Tipo di valore del array_view e della matrice associata.

```cpp
typedef typenamevalue_type value_type;
```

## <a name="view_as"></a><a name="view_as"></a> view_as

Reinterpreta questo `array_view` oggetto come oggetto `array_view` di un rango diverso.

```cpp
template <
    int _New_rank
>
array_view<value_type,_New_rank> view_as(
    const Concurrency::extent<_New_rank>& _View_extent) const restrict(amp,cpu);

template <
    int _New_rank
>
array_view<const value_type,_New_rank> view_as(
    const Concurrency::extent<_New_rank> _View_extent) const restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_New_rank*<br/>
Rango del nuovo `array_view` oggetto.

*_View_extent*<br/>
Rishaping `extent` .

*value_type*<br/>
Tipo di dati degli elementi nell'oggetto [matrice](array-class.md) originale e nell' `array_view` oggetto restituito.

### <a name="return-value"></a>Valore restituito

`array_view`Oggetto costruito.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
