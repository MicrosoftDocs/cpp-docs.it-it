---
description: 'Altre informazioni su: classe Array'
title: Classe array
ms.date: 11/04/2016
f1_keywords:
- array
- AMP/array
- AMP/Concurrency::array::array
- AMP/Concurrency::array::copy_to
- AMP/Concurrency::array::data
- AMP/Concurrency::array::get_accelerator_view
- AMP/Concurrency::array::get_associated_accelerator_view
- AMP/Concurrency::array::get_cpu_access_type
- AMP/Concurrency::array::get_extent
- AMP/Concurrency::array::reinterpret_as
- AMP/Concurrency::array::section
- AMP/Concurrency::array::view_as
- AMP/Concurrency::array::rank
- AMP/Concurrency::array::accelerator_view
- AMP/Concurrency::array::associated_accelerator_view
- AMP/Concurrency::array::cpu_access_type
- AMP/Concurrency::array::extent
helpviewer_keywords:
- array class
ms.assetid: 0832b6c1-40f0-421d-9104-6b1baa0c63a7
ms.openlocfilehash: df74ab714fc2865cce71300e094b693664694b31
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97247891"
---
# <a name="array-class"></a>Classe array

Rappresenta un contenitore di dati utilizzato per spostare i dati in un tasto di scelta rapida.

## <a name="syntax"></a>Sintassi

```cpp
template <typename value_type, int _Rank>
friend class array;
```

### <a name="parameters"></a>Parametri

*value_type*<br/>
Tipo di elemento dei dati.

*_Rank*<br/>
Specifica il numero di dimensioni della matrice.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[Costruttore di matrici](#ctor)|Inizializza una nuova istanza della classe `array`.|
|[distruttore ~ Array](#dtor)|Elimina definitivamente l' `array` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[copy_to](#copy_to)|Copia il contenuto della matrice in un'altra matrice.|
|[data](#data)|Restituisce un puntatore ai dati non elaborati della matrice.|
|[get_accelerator_view](#get_accelerator_view)|Restituisce il [accelerator_view](accelerator-view-class.md) oggetto che rappresenta la posizione in cui è allocata la matrice. È possibile accedere a questa proprietà solo sulla CPU.|
|[get_associated_accelerator_view](#get_associated_accelerator_view)|Ottiene il secondo [accelerator_view](accelerator-view-class.md) oggetto passato come parametro quando viene chiamato un costruttore di gestione temporanea per creare un'istanza dell' `array` oggetto.|
|[get_cpu_access_type](#get_cpu_access_type)|Restituisce il [access_type](concurrency-namespace-enums-amp.md#access_type) della matrice. È possibile accedere a questo metodo solo sulla CPU.|
|[get_extent](#get_extent)|Restituisce l'oggetto [extent](extent-class.md) della matrice.|
|[reinterpret_as](#reinterpret_as)|Restituisce una matrice unidimensionale che contiene tutti gli elementi dell' `array` oggetto.|
|[sezione](#section)|Restituisce una sottosezione dell' `array` oggetto in corrispondenza dell'origine specificata e, facoltativamente, con l'extent specificato.|
|[view_as](#view_as)|Restituisce un oggetto [array_view](array-view-class.md) costruito dall' `array` oggetto.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[operatore std:: Vector &lt; value_type&gt;](#operator_vec)|USA `copy(*this, vector)` per convertire in modo implicito la matrice in un oggetto std::[vector](../../../standard-library/vector-class.md) .|
|[operatore ()](#operator_call)|Restituisce il valore dell'elemento specificato dai parametri.|
|[operatore\[\]](#operator_at)|Restituisce l'elemento in corrispondenza dell'indice specificato.|
|[operatore =](#operator_eq)|Copia il contenuto dell'oggetto specificato `array` in questo.|

### <a name="public-constants"></a>Costanti pubbliche

|Nome|Description|
|----------|-----------------|
|[Costante di rango](#rank)|Archivia il rango della matrice.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[accelerator_view](#accelerator_view)|Ottiene l'oggetto [accelerator_view](accelerator-view-class.md) che rappresenta la posizione in cui la matrice viene allocata. È possibile accedere a questa proprietà solo sulla CPU.|
|[associated_accelerator_view](#associated_accelerator_view)|Ottiene il secondo [accelerator_view](accelerator-view-class.md) oggetto passato come parametro quando viene chiamato un costruttore di gestione temporanea per creare un'istanza dell' `array` oggetto.|
|[cpu_access_type](#cpu_access_type)|Ottiene la [access_type](concurrency-namespace-enums-amp.md#access_type) che rappresenta il modo in cui la CPU può accedere all'archiviazione della matrice.|
|[extent](#extent)|Ottiene l'extent che definisce la forma della matrice.|

## <a name="remarks"></a>Commenti

Il tipo `array<T,N>` rappresenta una matrice *N*-dimensionale densa e normale (non irregolare) che si trova in una posizione specifica, ad esempio un acceleratore o la CPU. Il tipo di dati degli elementi nella matrice è `T` , che deve essere di un tipo compatibile con l'acceleratore di destinazione. Sebbene il rango, `N` , (della matrice sia determinato in modo statico ed è parte del tipo, l'extent della matrice viene determinato dal runtime ed è espresso mediante la classe `extent<N>` .

Una matrice può avere un numero qualsiasi di dimensioni, sebbene alcune funzionalità siano specializzate per `array` gli oggetti con rango uno, due e tre. Se si omette l'argomento Dimension, il valore predefinito è 1.

I dati della matrice sono disposti in modo contiguo nella memoria. Gli elementi che differiscono di uno nella dimensione meno significativa sono adiacenti in memoria.

Le matrici vengono considerate logicamente tipi di valore, perché quando una matrice viene copiata in un'altra matrice, viene eseguita una copia completa. Due matrici non puntano mai agli stessi dati.

Il `array<T,N>` tipo viene usato in diversi scenari:

- Come contenitore di dati che può essere usato nei calcoli in un tasto di scelta rapida.

- Come contenitore di dati per contenere memoria sulla CPU dell'host, che può essere usata per copiare da e verso altre matrici.

- Come oggetto di staging che funge da intermediario veloce nelle copie da host a dispositivo.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`array`

## <a name="requirements"></a>Requisiti

**Intestazione:** amp.h

**Spazio dei nomi:** Concorrenza

## <a name="array"></a><a name="dtor"></a> matrice ~

Elimina definitivamente l' `array` oggetto.

```cpp
~array() restrict(cpu);
```

## <a name="accelerator_view"></a><a name="accelerator_view"></a> accelerator_view

Ottiene l'oggetto [accelerator_view](accelerator-view-class.md) che rappresenta la posizione in cui la matrice viene allocata. È possibile accedere a questa proprietà solo sulla CPU.

```cpp
__declspec(property(get= get_accelerator_view)) Concurrency::accelerator_view accelerator_view;
```

## <a name="array"></a>Matrice <a name="ctor"></a>

Inizializza una nuova istanza della [classe Array](array-class.md). Non esiste alcun costruttore predefinito per `array<T,N>` . Tutti i costruttori vengono eseguiti solo sulla CPU. Non possono essere eseguite su una destinazione Direct3D.

```cpp
explicit array(
    const Concurrency::extent<_Rank>& _Extent) restrict(cpu);

explicit array(
    int _E0) restrict(cpu);

explicit array(
    int _E0,
    int _E1) restrict(cpu);

explicit array(
    int _E0,
    int _E1,
    int _E2) restrict(cpu);

array(
    const Concurrency::extent<_Rank>& _Extent,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

array(
    int _E0,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

array(
    int _E0,
    int _E1,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

array(
    int _E0,
    int _E1,
    int _E2,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

array(
    const Concurrency::extent<_Rank>& _Extent,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

array(
    int _E0,
    accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

array(
    int _E0,
    int _E1,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

array(
    int _E0,
    int _E1,
    int _E2,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

template <typename _InputIterator>
array(
    const Concurrency::extent<_Rank>& _Extent,
    _InputIterator _Src_first,
    _InputIterator _Src_last) restrict(cpu);

template <typename _InputIterator>
array(
    const Concurrency::extent<_Rank>& _Extent,
    _InputIterator _Src_first) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    _InputIterator _Src_first,
    _InputIterator _Src_last) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    _InputIterator _Src_first) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    int _E1,
    _InputIterator _Src_first,
    _InputIterator _Src_last) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    int _E1,
    _InputIterator _Src_first) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    int _E1,
    int _E2,
    _InputIterator _Src_first,
    _InputIterator _Src_last) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    int _E1,
    int _E2,
    _InputIterator _Src_first) restrict(cpu);

template <typename _InputIterator>
array(
    const Concurrency::extent<_Rank>& _Extent,
    _InputIterator _Src_first,
    _InputIterator _Src_last,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

template <typename _InputIterator>
array(
    const Concurrency::extent<_Rank>& _Extent,
    _InputIterator _Src_first,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    _InputIterator _Src_first,
    _InputIterator _Src_last,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    _InputIterator _Src_first,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    int _E1,
    _InputIterator _Src_first,
    _InputIterator _Src_last,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    int _E1,
    _InputIterator _Src_first,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    int _E1,
    int _E2,
    _InputIterator _Src_first,
    _InputIterator _Src_last,
    Concurrency::accelerator_view _Av,
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    int _E1,
    int _E2,
    _InputIterator _Src_first,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

template <typename _InputIterator>
array(
    const Concurrency::extent<_Rank>& _Extent,
    _InputIterator _Src_first,
    _InputIterator _Src_last,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

template <typename _InputIterator>
array(
    const Concurrency::extent<_Rank>& _Extent,
    _InputIterator _Src_first,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    _InputIterator _Src_first,
    _InputIterator _Src_last,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0, _InputIterator _Src_first,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    int _E1, _InputIterator _Src_first, _InputIterator _Src_last,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    int _E1, _InputIterator _Src_first,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    int _E1,
    int _E2, _InputIterator _Src_first, _InputIterator _Src_last,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    int _E1,
    int _E2, _InputIterator _Src_first,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

explicit array(
    const array_view<const value_type, _Rank>& _Src) restrict(cpu);

array(
    const array_view<const value_type, _Rank>& _Src,
    accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

array(
    const array_view<const value_type, _Rank>& _Src,
    accelerator_view _Av,
    accelerator_view _Associated_Av) restrict(cpu);

array(const array& _Other) restrict(cpu);

array(array&& _Other) restrict(cpu);
```

### <a name="parameters"></a>Parametri

*_Associated_Av*<br/>
Accelerator_view che specifica il percorso di destinazione preferito della matrice.

*_Av*<br/>
Oggetto [accelerator_view](accelerator-view-class.md) che specifica la posizione della matrice.

*_Cpu_access_type*<br/>
[Access_type](concurrency-namespace-enums-amp.md#access_type) desiderato per la matrice sulla CPU. Questo parametro ha un valore predefinito `access_type_auto` che lascia la determinazione della CPU `access_type` al runtime. `access_type`È possibile eseguire query sulla CPU effettiva per la matrice utilizzando il `get_cpu_access_type` metodo.

*_Extent*<br/>
Extent in ogni dimensione della matrice.

*_E0*<br/>
Componente più significativo dell'extent di questa sezione.

*_E1*<br/>
Componente più vicino a quello più significativo dell'extent di questa sezione.

*_E2*<br/>
Componente meno significativo dell'extent di questa sezione.

*_InputIterator*<br/>
Tipo di iteratore di input.

*_Src*<br/>
Oggetto da copiare.

*_Src_first*<br/>
Iteratore iniziale nel contenitore di origine.

*_Src_last*<br/>
Iteratore finale nel contenitore di origine.

*_Other*<br/>
Altra origine dati.

*_Rank*<br/>
Rango della sezione.

*value_type*<br/>
Tipo di dati degli elementi copiati.

## <a name="associated_accelerator_view"></a><a name="associated_accelerator_view"></a> associated_accelerator_view

Ottiene il secondo [accelerator_view](accelerator-view-class.md) oggetto passato come parametro quando viene chiamato un costruttore di gestione temporanea per creare un'istanza dell' `array` oggetto.

```cpp
__declspec(property(get= get_associated_accelerator_view)) Concurrency::accelerator_view associated_accelerator_view;
```

## <a name="copy_to"></a><a name="copy_to"></a> copy_to

Copia il contenuto dell'oggetto `array` in un altro `array` .

```cpp
void copy_to(
    array<value_type, _Rank>& _Dest) const ;

void copy_to(
    array_view<value_type, _Rank>& _Dest) const ;
```

### <a name="parameters"></a>Parametri

*_Dest*<br/>
Oggetto [array_view](array-view-class.md) in cui eseguire la copia.

## <a name="cpu_access_type"></a><a name="cpu_access_type"></a> cpu_access_type

Ottiene la access_type della CPU consentita per questa matrice.

```cpp
__declspec(property(get= get_cpu_access_type)) access_type cpu_access_type;
```

## <a name="data"></a>Dati <a name="data"></a>

Restituisce un puntatore ai dati non elaborati dell'oggetto `array` .

```cpp
value_type* data() restrict(amp, cpu);

const value_type* data() const restrict(amp, cpu);
```

### <a name="return-value"></a>Valore restituito

Puntatore ai dati non elaborati della matrice.

## <a name="extent"></a><a name="extent"></a> extent

Ottiene l'oggetto [extent](extent-class.md) che definisce la forma dell'oggetto `array` .

```cpp
__declspec(property(get= get_extent)) Concurrency::extent<_Rank> extent;
```

## <a name="get_accelerator_view"></a><a name="get_accelerator_view"></a> get_accelerator_view

Restituisce l'oggetto [accelerator_view](accelerator-view-class.md) che rappresenta il percorso in cui l' `array` oggetto è allocato. È possibile accedere a questa proprietà solo sulla CPU.

```cpp
Concurrency::accelerator_view get_accelerator_view() const;
```

### <a name="return-value"></a>Valore restituito

`accelerator_view`Oggetto che rappresenta la posizione in cui l' `array` oggetto viene allocato.

## <a name="get_associated_accelerator_view"></a><a name="get_associated_accelerator_view"></a> get_associated_accelerator_view

Ottiene il secondo [accelerator_view](accelerator-view-class.md) oggetto passato come parametro quando viene chiamato un costruttore di gestione temporanea per creare un'istanza dell' `array` oggetto.

```cpp
Concurrency::accelerator_view get_associated_accelerator_view() const ;
```

### <a name="return-value"></a>Valore restituito

Secondo [accelerator_view](accelerator-view-class.md) oggetto passato al costruttore di gestione temporanea.

## <a name="get_cpu_access_type"></a><a name="get_cpu_access_type"></a> get_cpu_access_type

Restituisce la access_type della CPU consentita per questa matrice.

```cpp
access_type get_cpu_access_type() const restrict(cpu);
```

### <a name="return-value"></a>Valore restituito

## <a name="get_extent"></a><a name="get_extent"></a> get_extent

Restituisce l'oggetto [extent](extent-class.md) della `array` .

```cpp
Concurrency::extent<_Rank> get_extent() const restrict(amp,cpu);
```

### <a name="return-value"></a>Valore restituito

Oggetto `extent` dell'oggetto `array`.

## <a name="operator-stdvectorltvalue_typegt"></a><a name="operator_vec"></a> operatore std:: Vector &lt; value_type&gt;

USA `copy(*this, vector)` per convertire in modo implicito la matrice in un oggetto std:: Vector.

```cpp
operator std::vector<value_type>() const restrict(cpu);
```

### <a name="parameters"></a>Parametri

*value_type*<br/>
Tipo di dati degli elementi del vettore.

### <a name="return-value"></a>Valore restituito

Oggetto di tipo `vector<T>` che contiene una copia dei dati contenuti nella matrice.

## <a name="operator"></a><a name="operator_call"></a> operatore ()

Restituisce il valore dell'elemento specificato dai parametri.

```cpp
value_type& operator() (const index<_Rank>& _Index) restrict(amp,cpu);

const value_type& operator() (const index<_Rank>& _Index) cons  t restrict(amp,cpu);

value_type& operator() (int _I0, int _I1) restrict(amp,cpu);

const value_type& operator() (int _I0, int _I1) const restrict(amp,cpu)  ;

value_type& operator() (int _I0, int _I1, int _I2) restrict(amp,cpu);

const value_type& operator() (int _I0, int _I1, int _I2) const restrict(amp,cpu);

typename details::_Projection_result_type<value_type,_Rank>::_Result_type operator()(int _I) restrict(amp,cpu);

typename details::_Projection_result_type<value_type,_Rank>::_Const_result_type operator()(int _I) const restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Index*<br/>
Posizione dell'elemento.

*_I0*<br/>
Componente più significativo dell'origine di questa sezione.

*_I1*<br/>
Componente successivo a quello più significativo dell'origine di questa sezione.

*_I2*<br/>
Componente meno significativo dell'origine di questa sezione.

*_I*<br/>
Posizione dell'elemento.

### <a name="return-value"></a>Valore restituito

Valore dell'elemento specificato dai parametri.

## <a name="operator"></a><a name="operator_at"></a> operator []

Restituisce l'elemento in corrispondenza dell'indice specificato.

```cpp
value_type& operator[](const index<_Rank>& _Index) restrict(amp,cpu);

const value_type& operator[]
    (const index<_Rank>& _Index) const restrict(amp,cpu);

typename details::_Projection_result_type<value_type,_Rank>::_Result_type operator[](int _i) restrict(amp,cpu);

typename details::_Projection_result_type<value_type,_Rank>::_Const_result_type operator[](int _i) const restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Index*<br/>
Indice.

*_I*<br/>
Indice.

### <a name="return-value"></a>Valore restituito

Elemento in corrispondenza dell'indice specificato.

## <a name="operator"></a><a name="operator_eq"></a> operatore =

Copia il contenuto dell'oggetto specificato `array` .

```cpp
array& operator= (const array& _Other) restrict(cpu);

array& operator= (array&& _Other) restrict(cpu);

array& operator= (
    const array_view<const value_type, _Rank>& _Src) restrict(cpu);
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
`array`Oggetto da cui eseguire la copia.

*_Src*<br/>
`array`Oggetto da cui eseguire la copia.

### <a name="return-value"></a>Valore restituito

Riferimento a questo `array` oggetto.

## <a name="rank"></a><a name="rank"></a> Rank

Archivia il rango dell'oggetto `array` .

```cpp
static const int rank = _Rank;
```

## <a name="reinterpret_as"></a><a name="reinterpret_as"></a> reinterpret_as

Reinterpreta la matrice tramite un array_view unidimensionale, che facoltativamente può avere un tipo di valore diverso dalla matrice di origine.

### <a name="syntax"></a>Sintassi

```cpp
template <typename _Value_type2>
array_view<_Value_type2,1> reinterpret_as() restrict(amp,cpu);

template <typename _Value_type2>
array_view<const _Value_type2, 1> reinterpret_as() const restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Value_type2*<br/>
Tipo di dati dei dati restituiti.

### <a name="return-value"></a>Valore restituito

Oggetto array_view o const array_view basato sulla matrice, con il tipo di elemento reinterpretato da T a ElementType e il numero di dimensioni ridotto da N a 1.

### <a name="remarks"></a>Commenti

A volte è utile visualizzare una matrice multidimensionale come se fosse una matrice lineare, unidimensionale, possibilmente con un tipo di valore diverso dalla matrice di origine. Per ottenere questo risultato, è possibile usare questo metodo.
**Attenzione** La reinterpretazione di un oggetto Array utilizzando un tipo di valore diverso è un'operazione potenzialmente non sicura. Si consiglia di usare questa funzionalità con cautela.

Il codice seguente fornisce un esempio.

```cpp
struct RGB { float r; float g; float b; };

array<RGB,3>  a = ...;
array_view<float,1> v = a.reinterpret_as<float>();

assert(v.extent == 3*a.extent);
```

## <a name="section"></a><a name="section"></a> sezione

Restituisce una sottosezione dell' `array` oggetto in corrispondenza dell'origine specificata e, facoltativamente, con l'extent specificato.

```cpp
array_view<value_type,_Rank> section(
    const Concurrency::index<_Rank>& _Section_origin,
    const Concurrency::extent<_Rank>& _Section_extent) restrict(amp,cpu);

array_view<const value_type,_Rank> section(
    const Concurrency::index<_Rank>& _Section_origin,
    const Concurrency::extent<_Rank>& _Section_extent) const restrict(amp,cpu);

array_view<value_type,_Rank> section(
    const Concurrency::extent<_Rank>& _Ext) restrict(amp,cpu);

array_view<const value_type,_Rank> section(
    const Concurrency::extent<_Rank>& _Ext) const restrict(amp,cpu);

array_view<value_type,_Rank> section(
    const index<_Rank>& _Idx) restrict(amp,cpu);

array_view<const value_type,_Rank> section(
    const index<_Rank>& _Idx) const restrict(amp,cpu);

array_view<value_type,1> section(
    int _I0,
    int _E0) restrict(amp,cpu);

array_view<const value_type,1> section(
    int _I0,
    int _E0) const restrict(amp,cpu);

array_view<value_type,2> section(
    int _I0,
    int _I1,
    int _E0,
    int _E1) restrict(amp,cpu);

array_view<const value_type,2> section(
    int _I0,
    int _I1,
    int _E0,
    int _E1) const restrict(amp,cpu);

array_view<value_type,3> section(
    int _I0,
    int _I1,
    int _I2,
    int _E0,
    int _E1,
    int _E2) restrict(amp,cpu);

array_view<const value_type,3> section(
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

*value_type*<br/>
Tipo di dati degli elementi copiati.

### <a name="return-value"></a>Valore restituito

Restituisce una sottosezione dell' `array` oggetto in corrispondenza dell'origine specificata e, facoltativamente, con l'extent specificato. Quando `index` viene specificato solo l'oggetto, la sottosezione contiene tutti gli elementi della griglia associata che hanno indici maggiori degli indici degli elementi nell' `index` oggetto.

## <a name="view_as"></a><a name="view_as"></a> view_as

Reinterpreta questa matrice come [array_view](array-view-class.md) di un rango diverso.

```cpp
template <int _New_rank>
array_view<value_type,_New_rank> view_as(
    const Concurrency::extent<_New_rank>& _View_extent) restrict(amp,cpu);

template <int _New_rank>
array_view<const value_type,_New_rank> view_as(
    const Concurrency::extent<_New_rank>& _View_extent) const restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_New_rank*<br/>
Rango dell' `extent` oggetto passato come parametro.

*_View_extent*<br/>
Extent utilizzato per costruire il nuovo oggetto [array_view](array-view-class.md) .

*value_type*<br/>
Tipo di dati degli elementi nell' `array` oggetto originale e nell' `array_view` oggetto restituito.

### <a name="return-value"></a>Valore restituito

Oggetto [array_view](array-view-class.md) costruito.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
