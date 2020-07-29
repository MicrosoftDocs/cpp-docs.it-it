---
title: Classe texture
ms.date: 11/04/2016
f1_keywords:
- texture
- AMP_GRAPHICS/texture
- AMP_GRAPHICS/concurrency::graphics::texture::texture
- AMP_GRAPHICS/concurrency::graphics::texture::copy_to
- AMP_GRAPHICS/concurrency::graphics::texture::data
- AMP_GRAPHICS/concurrency::graphics::texture::get
- AMP_GRAPHICS/concurrency::graphics::texture::get_associated_accelerator_view
- AMP_GRAPHICS/concurrency::graphics::texture::get_depth_pitch
- AMP_GRAPHICS/concurrency::graphics::texture::get_row_pitch
- AMP_GRAPHICS/concurrency::graphics::texture::set
- AMP_GRAPHICS/concurrency::graphics::texture::rank
- AMP_GRAPHICS/concurrency::graphics::texture::associated_accelerator_view
- AMP_GRAPHICS/concurrency::graphics::texture::depth_pitch
- AMP_GRAPHICS/concurrency::graphics::texture::row_pitch
ms.assetid: 16e85d4d-e80a-474a-995d-8bf63fbdf34c
ms.openlocfilehash: b8a37293166ec21aeb9410f05fb70c9753ec4f22
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87230415"
---
# <a name="texture-class"></a>Classe texture

Una trama è un'aggregazione di dati `accelerator_view` in un oggetto nel dominio dell'extent. Si tratta di una raccolta di variabili, una per ogni elemento in un dominio extent. Ogni variabile include un valore corrispondente al tipo primitivo C++ ( **`unsigned int`** , **`int`** , **`float`** , **`double`** ), un tipo scalare ( `norm` , o `unorm` ) o un tipo short vector.

## <a name="syntax"></a>Sintassi

```cpp
template <typename value_type,  int _Rank>
class texture;
```

### <a name="parameters"></a>Parametri

*value_type*<br/>
Tipo degli elementi nella trama.

*_Rank*<br/>
Rango della trama.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`scalar_type`|Tipi scalari.|
|`value_type`|Tipi di valore.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore di trama](#ctor)|Inizializza una nuova istanza della classe `texture`.|
|[~ distruttore trama](#ctor)|Elimina definitivamente l' `texture` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[copy_to](#copy_to)|Copia l' `texture` oggetto nella destinazione, eseguendo una copia completa.|
|[data](#data)|Restituisce un puntatore CPU ai dati non elaborati di questa trama.|
|[get](#get)|Restituisce il valore dell'elemento in corrispondenza dell'indice specificato.|
|[get_associated_accelerator_view](#get_associated_accelerator_view)|Restituisce la [accelerator_view](accelerator-view-class.md) che rappresenta la destinazione preferita per la copia della trama.|
|[get_depth_pitch](#get_depth_pitch)|Restituisce il numero di byte tra ciascuna sezione di profondità in una trama di gestione temporanea 3D sulla CPU.|
|[get_row_pitch](#get_row_pitch)|Restituisce il numero di byte tra ogni riga in una trama di staging 2D o 3D sulla CPU.|
|[set](#set)|Imposta il valore dell'elemento in corrispondenza dell'indice specificato.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operatore ()](#operator_call)|Restituisce il valore dell'elemento specificato dai parametri.|
|[operatore\[\]](#operator_at)|Restituisce l'elemento in corrispondenza dell'indice specificato.|
|[operatore =](#operator_eq)|Copia l'oggetto [texture](texture-class.md) specificato in questo oggetto.|

### <a name="public-constants"></a>Costanti pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[Costante di rango](#rank)|Ottiene il rango dell' `texture` oggetto.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[associated_accelerator_view](#associated_accelerator_view)|Ottiene l' [accelerator_view](accelerator-view-class.md) che rappresenta la destinazione preferita per la copia della trama.|
|[depth_pitch](#depth_pitch)|Ottiene il numero di byte tra ciascuna sezione di profondità in una trama di gestione temporanea 3D sulla CPU.|
|[row_pitch](#row_pitch)|Ottiene il numero di byte tra ogni riga in una trama di staging 2D o 3D sulla CPU.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`_Texture_base`

`texture`

## <a name="requirements"></a>Requisiti

**Intestazione:** amp_graphics. h

**Spazio dei nomi:** Concurrency:: graphics

## <a name="texture"></a><a name="dtor"></a>~ trama

Elimina definitivamente l' `texture` oggetto.

```cpp
~texture() restrict(cpu);
```

## <a name="associated_accelerator_view"></a><a name="associated_accelerator_view"></a>associated_accelerator_view

Ottiene l' [accelerator_view](accelerator-view-class.md) che rappresenta la destinazione preferita per la copia della trama.

```cpp
__declspec(property(get= get_associated_accelerator_view)) Concurrency::accelerator_view associated_accelerator_view;
```

## <a name="copy_to"></a><a name="copy_to"></a>copy_to

Copia l' `texture` oggetto nella destinazione, eseguendo una copia completa.

```cpp
void copy_to(texture& _Dest) const;
void copy_to(writeonly_texture_view<value_type, _Rank>& _Dest) const;
```

### <a name="parameters"></a>Parametri

*_Dest*<br/>
Oggetto in cui copiare.

*_Rank*<br/>
Rango della trama.

*value_type*<br/>
Tipo degli elementi nella trama.

## <a name="data"></a>Dati <a name="data"></a>

Restituisce un puntatore CPU ai dati non elaborati di questa trama.

```cpp
void* data() restrict(cpu);

const void* data() const restrict(cpu);
```

### <a name="return-value"></a>Valore restituito

Puntatore ai dati non elaborati della trama.

## <a name="depth_pitch"></a><a name="depth_pitch"></a>depth_pitch

Ottiene il numero di byte tra ciascuna sezione di profondità in una trama di gestione temporanea 3D sulla CPU.

```cpp
__declspec(property(get= get_depth_pitch)) unsigned int depth_pitch;
```

## <a name="get"></a><a name="get"></a>Ottieni

Restituisce il valore dell'elemento in corrispondenza dell'indice specificato.

```cpp
const value_type get(const index<_Rank>& _Index) const restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Index*<br/>
Indice dell'elemento.

### <a name="return-value"></a>Valore restituito

Valore dell'elemento in corrispondenza dell'indice specificato.

## <a name="get_associated_accelerator_view"></a><a name="get_associated_accelerator_view"></a>get_associated_accelerator_view

Restituisce la accelerator_view che rappresenta la destinazione preferita per la copia della trama.

```cpp
Concurrency::accelerator_view get_associated_accelerator_view() const restrict(cpu);
```

### <a name="return-value"></a>Valore restituito

[Accelerator_view](accelerator-view-class.md) che rappresenta la destinazione preferita per la copia della trama.

## <a name="get_depth_pitch"></a><a name="get_depth_pitch"></a>get_depth_pitch

Restituisce il numero di byte tra ciascuna sezione di profondità in una trama di gestione temporanea 3D sulla CPU.

```cpp
unsigned int get_depth_pitch() const restrict(cpu);
```

### <a name="return-value"></a>Valore restituito

Numero di byte tra ciascuna sezione di profondità in una trama di gestione temporanea 3D sulla CPU.

## <a name="get_row_pitch"></a><a name="get_row_pitch"></a>get_row_pitch

Restituisce il numero di byte tra ogni riga in una trama di gestione temporanea bidimensionale o tra ogni riga di una sezione di profondità in una trama di staging tridimensionale.

```cpp
unsigned int get_row_pitch() const restrict(cpu);
```

### <a name="return-value"></a>Valore restituito

Il numero di byte tra ogni riga in una trama di gestione temporanea bidimensionale o tra ogni riga di una sezione di profondità in una trama di gestione temporanea 3D.

## <a name="operator"></a><a name="operator_call"></a>operatore ()

Restituisce il valore dell'elemento specificato dai parametri.

```cpp
const value_type operator() (
    const index<_Rank>& _Index) const restrict(amp);

const value_type operator() (
    int _I0) const restrict(amp);

const value_type operator() (
    int _I0,
    int _I1) const restrict(amp);

const value_type operator() (
    int _I0,
    int _I1,
    int _I2) const restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Index*<br/>
Indice.

*_I0*<br/>
Componente più significativo dell'indice.

*_I1*<br/>
Componente successivo a quello più significativo dell'indice.

*_I2*<br/>
Componente meno significativo dell'indice.

*_Rank*<br/>
Rango dell'indice.

### <a name="return-value"></a>Valore restituito

Valore dell'elemento specificato dai parametri.

## <a name="operator"></a><a name="operator_at"></a>operator []

Restituisce l'elemento in corrispondenza dell'indice specificato.

```cpp
const value_type operator[] (const index<_Rank>& _Index) const restrict(amp);

const value_type operator[] (int _I0) const restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Index*<br/>
Indice.

*_I0*<br/>
Indice.

### <a name="return-value"></a>Valore restituito

Elemento in corrispondenza dell'indice specificato.

## <a name="operator"></a><a name="operator_eq"></a>operatore =

Copia l'oggetto [texture](texture-class.md) specificato in questo oggetto.

```cpp
texture& operator= (
    const texture& _Other);

texture& operator= (
    texture<value_type, _Rank>&& _Other);
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
`texture`Oggetto da cui eseguire la copia.

### <a name="return-value"></a>Valore restituito

Riferimento a questo `texture` oggetto.

## <a name="rank"></a><a name="rank"></a>Rank

Ottiene il rango dell' `texture` oggetto.

```cpp
static const int rank = _Rank;
```

## <a name="row_pitch"></a><a name="row_pitch"></a>row_pitch

Ottiene il numero di byte tra ogni riga in una trama di staging 2D o 3D sulla CPU.

```cpp
__declspec(property(get= get_row_pitch)) unsigned int row_pitch;
```

## <a name="set"></a><a name="set"></a>set

Imposta il valore dell'elemento in corrispondenza dell'indice specificato.

```cpp
void set(
    const index<_Rank>& _Index,
    const value_type& value) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Index*<br/>
Indice dell'elemento.

*_Rank*<br/>
Rango dell'indice.

*value*<br/>
Nuovo valore dell'elemento.

## <a name="texture"></a><a name="ctor"></a>trama

Inizializza una nuova istanza della classe `texture`.

```cpp
texture(const Concurrency::extent<_Rank>& _Ext) restrict(cpu);

texture(int _E0) restrict(cpu);

texture(int _E0, int _E1) restrict(cpu);

texture(int _E0, int _E1, int _E2) restrict(cpu);

texture(
    const Concurrency::extent<_Rank>& _Ext,
    const Concurrency::accelerator_view& _Av) restrict(cpu);

texture(
    int _E0,
    const Concurrency::accelerator_view& _Av) restrict(cpu);

texture(
    int _E0,
    int _E1,
    const Concurrency::accelerator_view& _Av) restrict(cpu);

texture(
    int _E0,
    int _E1,
    int _E2,
    const Concurrency::accelerator_view& _Av) restrict(cpu);

template<typename _Input_iterator>
texture(
    const Concurrency::extent<_Rank>& _Ext,
    _Input_iterator _Src_first,
    _Input_iterator _Src_last) restrict(cpu);

template<typename _Input_iterator>
texture(
    int _E0, _Input_iterator _Src_first, _Input_iterator _Src_last) restrict(cpu);

template<typename _Input_iterator>
texture(
    int _E0,
    int _E1,
    _Input_iterator _Src_first,
    _Input_iterator _Src_last) restrict(cpu);

template<typename _Input_iterator>
texture(
    int _E0,
    int _E1,
    int _E2,
    _Input_iterator _Src_first,
    _Input_iterator _Src_last) restrict(cpu);

template<typename _Input_iterator>
texture(
    const Concurrency::extent<_Rank>& _Ext,
    _Input_iterator _Src_first,
    _Input_iterator _Src_last,
    const Concurrency::accelerator_view& _Av) restrict(cpu);

template<typename _Input_iterator>
texture(
    int _E0,
    _Input_iterator _Src_first,
    _Input_iterator _Src_last,
    const Concurrency::accelerator_view& _Av) restrict(cpu);

template<typename _Input_iterator>
texture(
    int _E0,
    int _E1,
    _Input_iterator _Src_first,
    _Input_iterator _Src_last,
    const Concurrency::accelerator_view& _Av) restrict(cpu);

template<typename _Input_iterator>
texture(
    int _E0,
    int _E1,
    int _E2,
    _Input_iterator _Src_first,
    _Input_iterator _Src_last,
    const Concurrency::accelerator_view& _Av) restrict(cpu))  ;

texture(
    int _E0,
    unsigned int _Bits_per_scalar_element) restrict(cpu);

texture(
    int _E0,
    int _E1,
    unsigned int _Bits_per_scalar_element) restrict(cpu);

texture(
    int _E0,
    int _E1,
    int _E2,
    unsigned int _Bits_per_scalar_element) restrict(cpu);

texture(
    const Concurrency::extent<_Rank>& _Ext,
    unsigned int _Bits_per_scalar_element,
    const Concurrency::accelerator_view& _Av) restrict(cpu);

texture(
    int _E0,
    unsigned int _Bits_per_scalar_element,
    const Concurrency::accelerator_view& _Av)  ;

texture(
    int _E0,
    int _E1,
    unsigned int _Bits_per_scalar_element,
    const Concurrency::accelerator_view& _Av) restrict(cpu);

texture(
    int _E0,
    int _E1,
    int _E2,
    unsigned int _Bits_per_scalar_element,
    const Concurrency::accelerator_view& _Av) restrict(cpu);

texture(
    const Concurrency::extent<_Rank>& _Ext,
    _In_ void* _Source,
    unsigned int _Src_byte_size,
    unsigned int _Bits_per_scalar_element) restrict(cpu);

texture(
    int _E0,
    _In_ void* _Source,
    unsigned int _Src_byte_size,
    unsigned int _Bits_per_scalar_element) restrict(cpu);

texture(
    int _E0,
    int _E1,
    _In_ void* _Source,
    unsigned int _Src_byte_size,
    unsigned int _Bits_per_scalar_element) restrict(cpu);

texture(
    int _E0,
    int _E1,
    int _E2,
    _In_ void* _Source,
    unsigned int _Src_byte_size,
    unsigned int _Bits_per_scalar_element) restrict(cpu);

texture(
    const Concurrency::extent<_Rank>& _Ext,
    _In_ void* _Source,
    unsigned int _Src_byte_size,
    unsigned int _Bits_per_scalar_element,
    const Concurrency::accelerator_view& _Av)  ;

texture(
    int _E0,
    _In_ void* _Source,
    unsigned int _Src_byte_size,
    unsigned int _Bits_per_scalar_element,
    const Concurrency::accelerator_view& _Av) restrict(cpu);

texture(
    int _E0,
    int _E1,
    _In_ void* _Source,
    unsigned int _Src_byte_size,
    unsigned int _Bits_per_scalar_element,
    const Concurrency::accelerator_view& _Av) restrict(cpu);

texture(
    int _E0,
    int _E1,
    int _E2,
    _In_ void* _Source,
    unsigned int _Src_byte_size,
    unsigned int _Bits_per_scalar_element,
    const Concurrency::accelerator_view& _Av) restrict(cpu);

texture(
    const texture& _Src,
    const Concurrency::accelerator_view& _Acc_view);

texture(
    texture&& _Other);

texture(
    const Concurrency::extent<_Rank>& _Ext,
    unsigned int _Bits_per_scalar_element,
    const Concurrency::accelerator_view& _Av);

texture(
    const texture& _Src);
```

### <a name="parameters"></a>Parametri

*_Acc_view*<br/>
[Accelerator_view](accelerator-view-class.md) che specifica la posizione della trama.

*_Av*<br/>
[Accelerator_view](accelerator-view-class.md) che specifica la posizione della trama.

*_Associated_av*<br/>
Accelerator_view che specifica la destinazione preferita per le copie da o verso questa trama.

*_Bits_per_scalar_element*<br/>
Numero di bit per ogni elemento scalare nel tipo scalare sottostante della trama. In generale, il valore supportato è 8, 16, 32 e 64. Se viene specificato 0, il numero di bit corrisponde al scalar_type sottostante. 64 è valido solo per le trame basate su due.

*_Ext*<br/>
Extent in ogni dimensione della trama.

*_E0*<br/>
Componente più significativo della trama.

*_E1*<br/>
Componente successivo a quello più significativo della trama.

*_E2*<br/>
Componente meno significativo dell'extent della trama.

*_Input_iterator*<br/>
Tipo di iteratore di input.

*_Mipmap_levels*<br/>
Il numero di livelli di mipmap nella trama sottostante. Se si specifica 0, la trama avrà la gamma completa di livelli di mipmap fino alla dimensione minima possibile per l'extent specificato.

*_Rank*<br/>
Rango dell'extent.

*_Source*<br/>
Puntatore a un buffer dell'host.

*_Src*<br/>
Alla trama da copiare.

*_Src_byte_size*<br/>
Numero di byte nel buffer di origine.

*_Src_first*<br/>
Iteratore iniziale nel contenitore di origine.

*_Src_last*<br/>
Iteratore finale nel contenitore di origine.

*_Other*<br/>
Altra origine dati.

*_Rank*<br/>
Rango della sezione.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency::graphics](concurrency-graphics-namespace.md)
