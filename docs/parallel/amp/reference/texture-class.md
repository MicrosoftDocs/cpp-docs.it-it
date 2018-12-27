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
ms.openlocfilehash: 8e427206379f1e7d094362411f074ad9cafb43fd
ms.sourcegitcommit: 53f75afaf3c0b3ed481c5503357ed2b7b87aac6d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2018
ms.locfileid: "53657539"
---
# <a name="texture-class"></a>Classe texture

Una texture è un aggregato di dati in un `accelerator_view` nel dominio dell'extent. È una raccolta di variabili, una per ogni elemento in un dominio di extent. Ogni variabile contiene un valore che corrisponde al tipo primitivo C++ ( `unsigned int`, `int`, `float`, `double`), un tipo scalare ( `norm`, o `unorm`), o un tipo vettore short.

## <a name="syntax"></a>Sintassi

```
template <typename value_type,  int _Rank>
class texture;
```

#### <a name="parameters"></a>Parametri

*value_type*<br/>
Il tipo degli elementi nella trama.

*_Rank*<br/>
Numero di dimensioni della trama.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`scalar_type`|Tipi scalari.|
|`value_type`|Tipi di valore.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore texture](#ctor)|Inizializza una nuova istanza della classe `texture`.|
|[~ texture distruttore](#ctor)|Elimina definitivamente il `texture` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[copy_to](#copy_to)|Copie di `texture` oggetto nella destinazione, eseguendo una copia completa.|
|[data](#data)|Restituisce un puntatore della CPU per i dati non elaborati della trama.|
|[get](#get)|Restituisce il valore dell'elemento in corrispondenza dell'indice specificato.|
|[get_associated_accelerator_view](#get_associated_accelerator_view)|Restituisce il [accelerator_view](accelerator-view-class.md) vale a dire la destinazione preferita per questa trama da copiare.|
|[get_depth_pitch](#get_depth_pitch)|Restituisce il numero di byte tra ciascuna sezione di profondità in una trama sulla CPU di gestione temporanea 3D.|
|[get_row_pitch](#get_row_pitch)|Restituisce il numero di byte tra ciascuna riga in un 2D o 3D sulla CPU trama di gestione temporanea.|
|[set](#set)|Imposta il valore dell'elemento in corrispondenza dell'indice specificato.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operator()](#operator_call)|Restituisce il valore dell'elemento specificato dai parametri.|
|[operator\[\]](#operator_at)|Restituisce l'elemento in corrispondenza dell'indice specificato.|
|[operator=](#operator_eq)|Copia l'oggetto specificato [trama](texture-class.md) a questo oggetto.|

### <a name="public-constants"></a>Costanti pubbliche

|nome|Descrizione|
|----------|-----------------|
|[Rank (costante)](#rank)|Ottiene il rango del `texture` oggetto.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[associated_accelerator_view](#associated_accelerator_view)|Ottiene il [accelerator_view](accelerator-view-class.md) vale a dire la destinazione preferita per questa trama da copiare.|
|[depth_pitch](#depth_pitch)|Ottiene il numero di byte tra ciascuna sezione di profondità in una trama di gestione temporanea 3D sulla CPU.|
|[row_pitch](#row_pitch)|Ottiene il numero di byte tra ciascuna riga in un 2D o 3D trama di gestione temporanea nella CPU.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`_Texture_base`

`texture`

## <a name="requirements"></a>Requisiti

**Intestazione:** amp_graphics. h

**Namespace:** Concurrency:: Graphics

##  <a name="dtor"></a> ~ texture

Elimina definitivamente il `texture` oggetto.

```
~texture() restrict(cpu);
```

##  <a name="associated_accelerator_view"></a> associated_accelerator_view

Ottiene il [accelerator_view](accelerator-view-class.md) vale a dire la destinazione preferita per questa trama da copiare.

```
__declspec(property(get= get_associated_accelerator_view)) Concurrency::accelerator_view associated_accelerator_view;
```

##  <a name="copy_to"></a> copy_to

Copie di `texture` oggetto nella destinazione, eseguendo una copia completa.

```
void copy_to(texture& _Dest) const;
void copy_to(writeonly_texture_view<value_type, _Rank>& _Dest) const;
```

### <a name="parameters"></a>Parametri

*Dest*<br/>
Oggetto da copiare.

*_Rank*<br/>
Numero di dimensioni della trama.

*value_type*<br/>
Il tipo degli elementi nella trama.

##  <a name="data"></a> Dati

Restituisce un puntatore della CPU per i dati non elaborati della trama.

```
void* data() restrict(cpu);

const void* data() const restrict(cpu);
```

### <a name="return-value"></a>Valore restituito

Puntatore ai dati non elaborati della trama.

##  <a name="depth_pitch"></a> depth_pitch

Ottiene il numero di byte tra ciascuna sezione di profondità in una trama di gestione temporanea 3D sulla CPU.

```
__declspec(property(get= get_depth_pitch)) unsigned int depth_pitch;
```

##  <a name="get"></a> get

Restituisce il valore dell'elemento in corrispondenza dell'indice specificato.

```
const value_type get(const index<_Rank>& _Index) const restrict(amp);
```

### <a name="parameters"></a>Parametri

*Index*<br/>
L'indice dell'elemento.

### <a name="return-value"></a>Valore restituito

Valore dell'elemento in corrispondenza dell'indice specificato.

##  <a name="get_associated_accelerator_view"></a> get_associated_accelerator_view

Restituisce l'oggetto accelerator_view di destinazione preferita per questa trama da copiare.

```
Concurrency::accelerator_view get_associated_accelerator_view() const restrict(cpu);
```

### <a name="return-value"></a>Valore restituito

Il [accelerator_view](accelerator-view-class.md) vale a dire la destinazione preferita per questa trama da copiare.

##  <a name="get_depth_pitch"></a> get_depth_pitch

Restituisce il numero di byte tra ciascuna sezione di profondità in una trama sulla CPU di gestione temporanea 3D.

```
unsigned int get_depth_pitch() const restrict(cpu);
```

### <a name="return-value"></a>Valore restituito

Il numero di byte tra ciascuna sezione di profondità in una trama sulla CPU di gestione temporanea 3D.

##  <a name="get_row_pitch"></a> get_row_pitch

Restituisce il numero di byte tra ogni riga in una trama di gestione temporanea 2-dimensionale, o tra ogni riga di una sezione di profondità in a trama di gestione temporanea 3D.

```
unsigned int get_row_pitch() const restrict(cpu);
```

### <a name="return-value"></a>Valore restituito

Il numero di byte tra ogni riga in una trama di gestione temporanea 2-dimensionale, o tra ogni riga di una sezione di profondità in a trama di gestione temporanea 3D.

##  <a name="operator_call"></a> operator)

Restituisce il valore dell'elemento specificato dai parametri.

```
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

*Index*<br/>
Indice.

*_I0*<br/>
Il componente più significativo dell'indice.

*_I1*<br/>
Il componente successivo-a-più significativo dell'indice.

*_I2*<br/>
Il componente meno significativo dell'indice.

*_Rank*<br/>
Numero di dimensioni dell'indice.

### <a name="return-value"></a>Valore restituito

Il valore dell'elemento specificato dai parametri.

##  <a name="operator_at"></a> operator]

Restituisce l'elemento in corrispondenza dell'indice specificato.

```
const value_type operator[] (const index<_Rank>& _Index) const restrict(amp);

const value_type operator[] (int _I0) const restrict(amp);
```

### <a name="parameters"></a>Parametri

*Index*<br/>
Indice.

*_I0*<br/>
Indice.

### <a name="return-value"></a>Valore restituito

L'elemento in corrispondenza dell'indice specificato.

##  <a name="operator_eq"></a> operator=

Copia l'oggetto specificato [trama](texture-class.md) a questo oggetto.

```
texture& operator= (
    const texture& _Other);

texture& operator= (
    texture<value_type, _Rank>&& _Other);
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
Il `texture` da copiare dall'oggetto.

### <a name="return-value"></a>Valore restituito

Un riferimento a questo `texture` oggetto.

##  <a name="rank"></a> numero di dimensioni

Ottiene il rango del `texture` oggetto.

```
static const int rank = _Rank;
```

##  <a name="row_pitch"></a> row_pitch

Ottiene il numero di byte tra ciascuna riga in un 2D o 3D trama di gestione temporanea nella CPU.

```
__declspec(property(get= get_row_pitch)) unsigned int row_pitch;
```

##  <a name="set"></a> Set

Imposta il valore dell'elemento in corrispondenza dell'indice specificato.

```
void set(
    const index<_Rank>& _Index,
    const value_type& value) restrict(amp);
```

### <a name="parameters"></a>Parametri

*Index*<br/>
L'indice dell'elemento.

*_Rank*<br/>
Numero di dimensioni dell'indice.

*value*<br/>
Nuovo valore dell'elemento.

##  <a name="ctor"></a> Trama

Inizializza una nuova istanza della classe `texture`.

```
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
Il [accelerator_view](accelerator-view-class.md) che specifica il percorso della trama.

*_Av*<br/>
Il [accelerator_view](accelerator-view-class.md) che specifica il percorso della trama.

*_Associated_av*<br/>
Un accelerator_view che specifica la destinazione preferita per la copia da o verso questa trama.

*_Bits_per_scalar_element*<br/>
Il numero di bit per ogni elemento scalare nel tipo scalare sottostante della trama. In generale, valore supportato è 8, 16, 32 e 64. Se si specifica 0, il numero di bit è lo stesso come il scalar_type sottostante. 64 è valido solo per le trame con base doppia.

*Ext*<br/>
L'extent in ogni dimensione della trama.

*_E0*<br/>
Componente più significativo della trama.

*_E1*<br/>
Il componente più vicino per la maggior parte-significativo della trama.

*_E2*<br/>
Componente meno significativo dell'extent della trama.

*_Input_iterator*<br/>
Tipo di iteratore di input.

*_Mipmap_levels*<br/>
Il numero di livelli mipmap nella trama sottostante. Se si specifica 0, la trama disporrà l'intera gamma di livelli di mipmap fino a dimensioni minori per l'estensione specificata.

*_Rank*<br/>
Numero di dimensioni dell'extent.

*_Source*<br/>
Un puntatore a un buffer host.

*_Src*<br/>
Alla trama da copiare.

*_Src_byte_size*<br/>
Il numero di byte nel buffer di origine.

*_Src_first*<br/>
Un iteratore iniziale nel contenitore di origine.

*_Src_last*<br/>
Iteratore di fine del contenitore sorgente.

*_Other*<br/>
Altra origine dati.

*_Rank*<br/>
Numero di dimensioni della sezione.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency::graphics](concurrency-graphics-namespace.md)
