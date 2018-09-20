---
title: Classe array_view | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-amp
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- array_view class
ms.assetid: 7e7ec9bc-05a2-4372-b05d-752b50006c5a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8c78d95afbadb0d3612dcdbca1714ae8c3a06454
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46426341"
---
# <a name="arrayview-class"></a>Classe array_view

Rappresenta una visualizzazione N-dimensionale sui dati presenti in un altro contenitore.

## <a name="syntax"></a>Sintassi

```
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

#### <a name="parameters"></a>Parametri

*value_type*<br/>
Il tipo di dati degli elementi nel `array_view` oggetto.

*_Rank*<br/>
Il rango del `array_view` oggetto.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore array_view](#ctor)|Inizializza una nuova istanza della classe `array_view`. Nessun costruttore predefinito per `array<T,N>`. Tutti i costruttori sono limitati per l'esecuzione solo sulla CPU e non possono essere eseguiti in una destinazione Direct3D.|
|[~ array_view, distruttore](#ctor)|Elimina definitivamente il `array_view` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[copy_to](#copy_to)|Copia il contenuto del `array_view` oggetto nella destinazione specificata chiamando `copy(*this, dest)`.|
|[data](#data)|Restituisce un puntatore ai dati non elaborati del `array_view`.|
|[discard_data](#discard_data)|Rimuove i dati correnti sottostante in questa vista.|
|[get_extent](#get_extent)|Restituisce l'oggetto extent dell'oggetto array_view.|
|[get_ref](#get_ref)|Restituisce un riferimento all'elemento indicizzato.|
|[get_source_accelerator_view](#get_source_accelerator_view)|Restituisce il [accelerator_view](accelerator-view-class.md) in cui l'origine dati del `array_view` si trova.|
|[refresh](#refresh)|Invia una notifica la `array_view` oggetto che sua memoria associata è stata modificata all'esterno di `array_view` interfaccia. Una chiamata a questo metodo esegue il rendering di tutte le informazioni memorizzate nella cache non aggiornato.|
|[reinterpret_as](#reinterpret_as)|Restituisce una matrice unidimensionale che contiene tutti gli elementi di `array_view` oggetto.|
|[section](#section)|Restituisce una sottosezione del `array_view` oggetto all'origine specificata e, facoltativamente, con l'extent specificato.|
|[synchronize](#synchronize)|Sincronizza le modifiche apportate al `array_view` oggetto nuovamente ai dati di origine.|
|[synchronize_async](#synchronize_async)|Sincronizza in modo asincrono le modifiche apportate al `array_view` oggetto nuovamente ai dati di origine.|
|[synchronize_to](#synchronize_to)|Sincronizza le modifiche apportate per il `array_view` oggetto all'entità specificata [accelerator_view](accelerator-view-class.md).|
|[synchronize_to_async](#synchronize_to_async)|Sincronizza in modo asincrono le modifiche apportate al `array_view` oggetto all'entità specificata [accelerator_view](accelerator-view-class.md).|
|[view_as](#view_as)|Genera un `array_view` oggetto di una dimensione differente usando questo `array_view` dati dell'oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operator()](#operator_call)|Restituisce il valore dell'elemento specificato dal parametro o parametri.|
|[operator]](#operator_at)|Restituisce l'elemento specificato dai parametri.|
|[operator=](#operator_eq)|Copia il contenuto dell'oggetto specificato `array_view` in questo oggetto.|

### <a name="public-constants"></a>Costanti pubbliche

|nome|Descrizione|
|----------|-----------------|
|[Rank (costante)](#rank)|Memorizza il rango del `array_view` oggetto.|

### <a name="data-members"></a>Membri di dati

|nome|Descrizione|
|----------|-----------------|
|[extent](#extent)|Ottiene l'oggetto `extent` che definisce la forma dell'oggetto `array_view`.|
|[source_accelerator_view](#source_accelerator_view)|Ottiene il [accelerator_view](accelerator-view-class.md) in cui l'origine dati del `array_view` trova|
|[value_type](#value_type)|Il tipo del valore di `array_view` e matrice associata.|

## <a name="remarks"></a>Note

Il `array_view` classe rappresenta una visualizzazione dei dati contenuta in un [array](array-class.md) oggetto o una sottosezione di un `array` oggetto.

È possibile accedere la `array_view` dell'oggetto in cui si trovano i dati di origine (localmente) o su un acceleratore differente oppure a un dominio di coerenza (in modalità remota). Quando l'oggetto si accede in remoto, le visualizzazioni vengono copiate e memorizzati nella cache in base alle esigenze. Ad eccezione degli effetti della memorizzazione nella cache automatica, `array_view` gli oggetti hanno un profilo di prestazioni simile a quella di `array` oggetti. È presente una lieve riduzione delle prestazioni quando si accede ai dati tramite le viste.

Esistono tre scenari di utilizzo remoto:

- Una visualizzazione a un puntatore di memoria di sistema viene passata tramite un [parallel_for_each](../../../parallel/concrt/reference/concurrency-namespace-functions.md#parallel_for_each) le chiamate a un acceleratore e si accede all'acceleratore.

- Una view ad un array che si trova su un acceleratore viene passata tramite un `parallel_for_each` le chiamate a un altro acceleratore e viene acceduta là.

- Una view ad un array che si trova su un acceleratore viene eseguita sulla CPU.

In uno di questi scenari, le View referenziate vengono copiate dal runtime alla sede remota e, se modificate dalle chiamate al `array_view` oggetto, vengono copiati nel percorso locale. Il runtime può ottimizzare il processo di copia delle modifiche, può copiare solo gli elementi modificati o può copiare anche le parti invariate. Sovrapposizione `array_view` gli oggetti in un'origine dati non è garantiti l'integrità referenziale in una posizione remota.

È necessario sincronizzare qualsiasi accesso multithreading alla stessa origine dati.

Il runtime effettua le seguenti garanzie relativamente alla memorizzazione dei dati in `array_view` oggetti:

- Tutti gli accessi ben sincronizzati da una `array` oggetto e un `array_view` oggetto su di esso nell'ordine del programma una delazione accade-prima della relazione.

- Tutti gli accessi ben sincronizzati che si sovrappongono `array_view` oggetti sullo stesso acceleratore su un unico `array` oggetto sono in alias attraverso il `array` oggetto. Causano una totale si verifica-prima di relazione che obbedisce all'ordine del programma. Non è disponibile nessuna memorizzazione nella cache. Se il `array_view` gli oggetti vengono eseguiti su acceleratori diversi, l'ordine di accesso è indefinito, creando una race condition.

Quando si crea un' `array_view` dell'oggetto utilizzando un puntatore nella memoria di sistema, è necessario modificare la visualizzazione `array_view` oggetto solo attraverso il `array_view` puntatore. In alternativa, è necessario chiamare `refresh()` su uno dei `array_view` gli oggetti connessi al puntatore di sistema, se la memoria nativa sottostante viene modificata direttamente, anziché attraverso il `array_view` oggetto.

Qualsiasi azione notifica il `array_view` dell'oggetto che la memoria nativa sottostante viene modificata e che tutte le copie che si trovano su un acceleratore sono obsolete. Se si seguono queste linee guida, le viste basate su puntatore sono identiche a quelle fornite alle View dei dati in parallelo le matrici.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`_Array_view_shape`

`_Array_view_base`

`array_view`

## <a name="requirements"></a>Requisiti

**Intestazione:** amp.h

**Spazio dei nomi:** Concurrency

##  <a name="dtor"></a> ~ array_view

Elimina definitivamente il `array_view` oggetto.

```
~array_view()restrict(amp,cpu);
```

##  <a name="ctor"></a> array_view

Inizializza una nuova istanza della classe `array_view`.

```
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
Il tipo di elemento di una matrice di tipo C da cui vengono forniti i dati.

*_Container*<br/>
Un argomento di modello che è necessario specificare un contenitore lineare che supporta `data()` e `size()` membri.

*_E0*<br/>
Componente più significativo dell'extent di questa sezione.

*_E1*<br/>
Il componente successivo-a-più significativo dell'extent di questa sezione.

*_E2*<br/>
Componente meno significativo dell'extent di questa sezione.

*_Extent*<br/>
L'extent in ogni dimensione di questo `array_view`.

*_Other*<br/>
Un oggetto di tipo `array_view<T,N>` da cui inizializzare la nuova `array_view`.

*Dimen_sioni*<br/>
Le dimensioni di una matrice di tipo C da cui vengono forniti i dati.

*_Src*<br/>
Puntatore ai dati di origine che verranno copiati nel nuova matrice.

##  <a name="copy_to"></a> copy_to

Copia il contenuto del `array_view` all'oggetto di destinazione specificata chiamando `copy(*this, dest)`.

```
void copy_to(
    array<value_type, _Rank>& _Dest) const;

void copy_to(
    array_view<value_type, _Rank>& _Dest) const;

```

### <a name="parameters"></a>Parametri

*Dest*<br/>
Oggetto da copiare.

##  <a name="data"></a> Dati

Restituisce un puntatore ai dati non elaborati del `array_view`.

```
value_type* data() const restrict(amp,
    cpu);

const value_type* data() const restrict(amp,
    cpu);
```

### <a name="return-value"></a>Valore restituito

Un puntatore ai dati non elaborati del `array_view`.

##  <a name="discard_data"></a> discard_data

Rimuove i dati correnti sottostante in questa vista. Si tratta di un hint di ottimizzazione per il runtime usato per evitare di copiare il contenuto corrente della visualizzazione a una destinazione `accelerator_view` che è possibile accedervi in e relativo utilizzo è consigliato se il contenuto esistente non è necessaria. Questo metodo è un no-op quando utilizzato in un contesto Restrict (amp)

```
void discard_data() const restrict(cpu);
```

##  <a name="extent"></a> extent

Ottiene l'oggetto `extent` che definisce la forma dell'oggetto `array_view`.

```
__declspec(property(get= get_extent)) Concurrency::extent<_Rank> extent;
```

##  <a name="get_extent"></a> get_extent

Restituisce il [extent](extent-class.md) oggetto del `array_view` oggetto.

```
Concurrency::extent<_Rank> get_extent() const restrict(cpu, amp);
```

### <a name="return-value"></a>Valore restituito

Il `extent` oggetto del `array_view` oggetto

##  <a name="get_ref"></a> get_ref

Ottenere un riferimento all'elemento indicizzato da index. A differenza di altri operatori di indicizzazione per accedere ad array_view sulla CPU, questo metodo non sincronizza in modo implicito i contenuti di array_view con la CPU. Dopo aver array_view in una posizione remota o l'esecuzione di un'operazione di copia questo array_view gli utenti sono responsabili di sincronizzare in modo esplicito array_view con la CPU prima di chiamare questo metodo. In caso contrario, produce un comportamento non definito.

```
value_type& get_ref(
    const index<_Rank>& _Index) const restrict(amp, cpu);
```

### <a name="parameters"></a>Parametri

*Index*<br/>
Indice.

### <a name="return-value"></a>Valore restituito

Riferimento all'elemento indicizzato da Index

##  <a name="get_source_accelerator_view"></a> get_source_accelerator_view

Restituisce l'oggetto accelerator_view in cui si trova l'origine dati dell'oggetto array_view. Se l'oggetto array_view non dispone di un'origine dati, questa API genera un'eccezione runtime_exception

```
accelerator_view get_source_accelerator_view() const;

```

### <a name="return-value"></a>Valore restituito

##  <a name="operator_call"></a> operator)

Restituisce il valore dell'elemento specificato dal parametro o parametri.

```
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

*Index*<br/>
Il percorso dell'elemento.

*_I0*<br/>
Indice della prima dimensione.

*_I1*<br/>
Indice della seconda dimensione.

*_I2*<br/>
Indice nella terza dimensione.

*_I*<br/>
Il percorso dell'elemento.

### <a name="return-value"></a>Valore restituito

Il valore dell'elemento specificato dal parametro o parametri.

##  <a name="operator_at"></a> operator]

Restituisce l'elemento specificato dai parametri.

```
typename details::_Projection_result_type<value_type,_Rank>::_Const_result_type operator[] (
    int _I) const restrict(amp,cpu);

value_type& operator[] (
    const index<_Rank>& _Index) const restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*Index*<br/>
Indice.

*_I*<br/>
Indice.

### <a name="return-value"></a>Valore restituito

Il valore dell'elemento in corrispondenza dell'indice o un `array_view` proiettato sulla dimensione più significativa.

##  <a name="operator_eq"></a> operator=

Copia il contenuto dell'oggetto specificato `array_view` a questo oggetto.

```
array_view& operator= (
    const array_view& _Other) restrict(amp,cpu);

array_view& operator= (
    const array_view<value_type, _Rank>& _Other) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
Il `array_view` da copiare dall'oggetto.

### <a name="return-value"></a>Valore restituito

Un riferimento a questo `array_view` oggetto.

##  <a name="rank"></a> numero di dimensioni

Memorizza il rango del `array_view` oggetto.

```
static const int rank = _Rank;
```

##  <a name="refresh"></a> aggiornamento

Invia una notifica la `array_view` oggetto che sua memoria associata è stata modificata all'esterno di `array_view` interfaccia. Una chiamata a questo metodo esegue il rendering di tutte le informazioni memorizzate nella cache non aggiornato.

```
void refresh() const restrict(cpu);
```
## <a name="reinterpret_as"></a> reinterpret_as

Reinterpreta l'oggetto array_view attraverso un oggetto array_view unidimensionale, che come opzione può avere un tipo di valore differente rispetto all'oggetto array_view di origine.

### <a name="syntax"></a>Sintassi

```
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
Il tipo di dati della nuova `array_view` oggetto.

### <a name="return-value"></a>Valore restituito

Un' `array_view` oggetto o una const `array_view` oggetto basato su questo `array_view`, con il tipo di elemento convertito da `T` al `_Value_type2`, e il grado ridotto da *N* su 1.

### <a name="remarks"></a>Note

Talvolta è utile visualizzare una matrice multidimensionale come una matrice unidimensionale, lineare, che potrebbe avere un tipo di valore diverso dalla matrice di origine. È possibile ottenere questo risultato in un `array_view` utilizzando questo metodo.

**Avviso** la reinterpretazione di un oggetto array_view utilizzando un tipo di valore differente è un'operazione potenzialmente non sicura. Questa funzionalità deve essere usata con cautela.

Di seguito è riportato un esempio:

```cpp
struct RGB { float r; float g; float b; };

array<RGB,3>  a = ...;
array_view<float,1> v = a.reinterpret_as<float>();

assert(v.extent == 3*a.extent);
```

##  <a name="section"></a> Sezione

Restituisce una sottosezione del `array_view` oggetto all'origine specificata e, facoltativamente, con l'extent specificato.

```
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
Il componente successivo-a-più significativo dell'extent di questa sezione.

*_E2*<br/>
Componente meno significativo dell'extent di questa sezione.

*Ext*<br/>
Il [extent](extent-class.md) oggetto che specifica l'extent della sezione. L'origine è 0.

*IDX*<br/>
Il [indice](index-class.md) oggetto che specifica la posizione dell'origine. La sottosezione rappresenta il resto dell'extent.

*_I0*<br/>
Componente più significativo dell'origine di questa sezione.

*_I1*<br/>
Il componente successivo-a-più significativo dell'origine di questa sezione.

*_I2*<br/>
Componente meno significativo dell'origine di questa sezione.

*_Rank*<br/>
Numero di dimensioni della sezione.

*_Section_extent*<br/>
Il [extent](extent-class.md) oggetto che specifica l'extent della sezione.

*_Section_origin*<br/>
Il [indice](index-class.md) oggetto che specifica la posizione dell'origine.

### <a name="return-value"></a>Valore restituito

Una sottosezione del `array_view` oggetto all'origine specificata e, facoltativamente, con l'extent specificato. Quando solo il `index` oggetto è specificato, la sottosezione contiene tutti gli elementi nell'extent associato che hanno indici maggiori degli indici degli elementi nel `index` oggetto.

##  <a name="source_accelerator_view"></a> source_accelerator_view

Ottiene l'oggetto accelerator_view di origine che è associato questo oggetto array_view.

```
__declspec(property(get= get_source_accelerator_view)) accelerator_view source_accelerator_view;
```

##  <a name="synchronize"></a> la sincronizzazione

Sincronizza le modifiche apportate al `array_view` oggetto nuovamente ai dati di origine.

```
void synchronize(access_type _Access_type = access_type_read) const restrict(cpu);

void synchronize() const restrict(cpu);
```

### <a name="parameters"></a>Parametri

*_Access_type*<br/>
Il destinatario [access_type](concurrency-namespace-enums-amp.md#access_type) nella destinazione [accelerator_view](accelerator-view-class.md). Questo parametro ha un valore predefinito di `access_type_read`.

##  <a name="synchronize_async"></a> synchronize_async

Sincronizza in modo asincrono le modifiche apportate al `array_view` oggetto nuovamente ai dati di origine.

```
concurrency::completion_future synchronize_async(access_type _Access_type = access_type_read) const restrict(cpu);

concurrency::completion_future synchronize_async() const restrict(cpu);
```

### <a name="parameters"></a>Parametri

*_Access_type*<br/>
Il destinatario [access_type](concurrency-namespace-enums-amp.md#access_type) nella destinazione [accelerator_view](accelerator-view-class.md). Questo parametro ha un valore predefinito di `access_type_read`.

### <a name="return-value"></a>Valore restituito

Una future sulla quale attendere il completamento dell'operazione.

##  <a name="synchronize_to"></a> synchronize_to

Sincronizza le modifiche apportate a questo oggetto array_view nell'oggetto accelerator_view specificato.

```
void synchronize_to(
    const accelerator_view& _Accl_view,
    access_type _Access_type = access_type_read) const restrict(cpu);

void synchronize_to(
    const accelerator_view& _Accl_view) const restrict(cpu);
```

### <a name="parameters"></a>Parametri

*_Accl_view*<br/>
Oggetto accelerator_view di destinazione eseguire la sincronizzazione.

*_Access_type*<br/>
L'oggetto access_type desiderato sull'oggetto accelerator_view di destinazione. Questo parametro ha un valore predefinito di access_type_read.

##  <a name="synchronize_to_async"></a> synchronize_to_async

Sincronizza in modo asincrono le modifiche apportate a questo oggetto array_view nell'oggetto accelerator_view specificato.

```
concurrency::completion_future synchronize_to_async(
    const accelerator_view& _Accl_view,
    access_type _Access_type = access_type_read) const restrict(cpu);

concurrency::completion_future synchronize_to_async(
    const accelerator_view& _Accl_view) const restrict(cpu);
```

### <a name="parameters"></a>Parametri

*_Accl_view*<br/>
Oggetto accelerator_view di destinazione eseguire la sincronizzazione.

*_Access_type*<br/>
L'oggetto access_type desiderato sull'oggetto accelerator_view di destinazione. Questo parametro ha un valore predefinito di access_type_read.

### <a name="return-value"></a>Valore restituito

Una future sulla quale attendere il completamento dell'operazione.

##  <a name="value_type"></a> value_type

Il tipo di valore di array_view e della matrice associata.

```
typedef typenamevalue_type value_type;
```

##  <a name="view_as"></a> view_as

Reinterpreta questo `array_view` come un `array_view` di una dimensione differente.

```
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
Il numero di dimensioni del nuovo `array_view` oggetto.

*_View_extent*<br/>
Rimodellante `extent`.

*value_type*<br/>
Il tipo di dati degli elementi in entrambi originale [matrice](array-class.md) oggetto e il valore restituito `array_view` oggetto.

### <a name="return-value"></a>Valore restituito

Il `array_view` oggetto costruito.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
