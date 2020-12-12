---
description: 'Altre informazioni su: writeonly_texture_view Class'
title: Classe writeonly_texture_view
ms.date: 11/04/2016
f1_keywords:
- writeonly_texture_view
- AMP_GRAPHICS/writeonly_texture_view
- AMP_GRAPHICS/Concurrency::graphics::writeonly_texture_view
- AMP_GRAPHICS/Concurrency::graphics::writeonly_texture_view::set
- AMP_GRAPHICS/Concurrency::graphics::rank Constant
ms.assetid: 8d117ad3-0a1c-41ae-b29c-7c95fdd4d04d
ms.openlocfilehash: 17e9ed49c5fb3c976343d8c3ad8690d7f41b166d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97314518"
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

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|`scalar_type`||
|`value_type`|Tipo degli elementi nella trama.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[Costruttore writeonly_texture_view](#ctor)|Inizializza una nuova istanza della classe `writeonly_texture_view`.|
|[Distruttore ~ writeonly_texture_view](#ctor)|Elimina definitivamente l' `writeonly_texture_view` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[set](#set)|Imposta il valore dell'elemento in corrispondenza dell'indice specificato.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[operatore =](#operator_eq)|Copia l' `writeonly_texture_view` oggetto specificato in questo oggetto.|

### <a name="public-constants"></a>Costanti pubbliche

|Nome|Description|
|----------|-----------------|
|[Costante di rango](#rank)|Ottiene il rango dell' `writeonly_texture_view` oggetto.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`_Texture_base`

`writeonly_texture_view`

## <a name="requirements"></a>Requisiti

**Intestazione:** amp_graphics. h

**Spazio dei nomi:** Concurrency:: graphics

## <a name="writeonly_texture_view"></a><a name="dtor"></a> ~ writeonly_texture_view

Elimina definitivamente l' `writeonly_texture_view` oggetto.

```cpp
~writeonly_texture_view() restrict(amp,cpu);
```

## <a name="operator"></a><a name="operator_eq"></a> operatore =

Copia l' `writeonly_texture_view` oggetto specificato in questo oggetto.

```cpp
writeonly_texture_view<value_type, _Rank>& operator= (
    const writeonly_texture_view<value_type, _Rank>& _Other) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
`writeonly_texture_view` oggetto da cui eseguire la copia.

### <a name="return-value"></a>Valore restituito

Riferimento a questo `writeonly_texture_view` oggetto.

## <a name="rank"></a><a name="rank"></a> Rank

Ottiene il rango dell' `writeonly_texture_view` oggetto.

```cpp
static const int rank = _Rank;
```

## <a name="set"></a><a name="set"></a> set

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

## <a name="writeonly_texture_view"></a><a name="ctor"></a> writeonly_texture_view

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
Trama utilizzata per creare l'oggetto `writeonly_texture_view` .

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency::graphics](concurrency-graphics-namespace.md)
