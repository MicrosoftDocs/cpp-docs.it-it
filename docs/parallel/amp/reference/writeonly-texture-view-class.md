---
title: Classe writeonly_texture_view
ms.date: 11/04/2016
f1_keywords:
- writeonly_texture_view
- AMP_GRAPHICS/writeonly_texture_view
- AMP_GRAPHICS/Concurrency::graphics::writeonly_texture_view
- AMP_GRAPHICS/Concurrency::graphics::writeonly_texture_view::set
- AMP_GRAPHICS/Concurrency::graphics::rank Constant
ms.assetid: 8d117ad3-0a1c-41ae-b29c-7c95fdd4d04d
ms.openlocfilehash: 8978a548ed246c59d7e7f007f1180685c7343a14
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77126240"
---
# <a name="writeonly_texture_view-class"></a>Classe writeonly_texture_view

Fornisce l'accesso WriteOnly a una trama.

## <a name="syntax"></a>Sintassi

```cpp
template <
    typename value_type,
    int _Rank
>
class writeonly_texture_view;

template <
    typename value_type,
    int _Rank
>
class writeonly_texture_view<value_type, _Rank> : public details::_Texture_base<value_type, _Rank>;
```

### <a name="parameters"></a>Parametri

*value_type*<br/>
Tipo degli elementi nella trama.

*_Rank*<br/>
Rango della trama.

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`scalar_type`||
|`value_type`|Tipo degli elementi nella trama.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore writeonly_texture_view](#ctor)|Inizializza una nuova istanza della classe `writeonly_texture_view`.|
|[Distruttore ~ writeonly_texture_view](#ctor)|Elimina definitivamente l'oggetto `writeonly_texture_view`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[set](#set)|Imposta il valore dell'elemento in corrispondenza dell'indice specificato.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operator=](#operator_eq)|Copia l'oggetto `writeonly_texture_view` specificato in questo oggetto.|

### <a name="public-constants"></a>Costanti pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[Costante di rango](#rank)|Ottiene il rango dell'oggetto `writeonly_texture_view`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`_Texture_base`

`writeonly_texture_view`

## <a name="requirements"></a>Requisiti

**Intestazione:** amp_graphics. h

**Spazio dei nomi:** Concurrency:: graphics

## <a name="dtor"></a>~ writeonly_texture_view

Elimina definitivamente l'oggetto `writeonly_texture_view`.

```cpp
~writeonly_texture_view() restrict(amp,cpu);
```

## <a name="operator_eq"></a>operatore =

Copia l'oggetto `writeonly_texture_view` specificato in questo oggetto.

```cpp
writeonly_texture_view<value_type, _Rank>& operator= (
    const writeonly_texture_view<value_type, _Rank>& _Other) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
`writeonly_texture_view` oggetto da cui eseguire la copia.

### <a name="return-value"></a>Valore restituito

Riferimento a questo oggetto `writeonly_texture_view`.

## <a name="rank"></a>Rank

Ottiene il rango dell'oggetto `writeonly_texture_view`.

```cpp
static const int rank = _Rank;
```

## <a name="set"></a>set

Imposta il valore dell'elemento in corrispondenza dell'indice specificato.

```cpp
void set(
    const index<_Rank>& _Index,
    const value_type& value) const restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Index*<br/>
Indice dell'elemento.

*value*<br/>
Nuovo valore dell'elemento.

## <a name="ctor"></a>writeonly_texture_view

Inizializza una nuova istanza della classe `writeonly_texture_view`.

```cpp
writeonly_texture_view(
    texture<value_type,
    _Rank>& _Src) restrict(amp);

writeonly_texture_view(
    const writeonly_texture_view<value_type,
    _Rank>& _Src) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Rank*<br/>
Rango della trama.

*value_type*<br/>
Tipo degli elementi nella trama.

*_Src*<br/>
Trama utilizzata per creare la `writeonly_texture_view`.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency::graphics](concurrency-graphics-namespace.md)
