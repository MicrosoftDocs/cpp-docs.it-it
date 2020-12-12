---
description: 'Altre informazioni su: unorm_2 Class'
title: Classe unorm_2
ms.date: 11/04/2016
f1_keywords:
- amp_short_vectors/Concurrency::graphics::unnorm_2::operator+=
- amp_short_vectors/Concurrency::graphics::unnorm_2::y
- amp_short_vectors/Concurrency::graphics::unnorm_2::set_y
- amp_short_vectors/Concurrency::graphics::unnorm_2::x
- amp_short_vectors/Concurrency::graphics::unnorm_2::get_yx
- amp_short_vectors/Concurrency::graphics::unnorm_2::operator--
- amp_short_vectors/Concurrency::graphics::unnorm_2::set_xy
- amp_short_vectors/Concurrency::graphics::unnorm_2::operator*=
- amp_short_vectors/Concurrency::graphics::unnorm_2::xy
- amp_short_vectors/Concurrency::graphics::unnorm_2::get_y
- amp_short_vectors/Concurrency::graphics::unnorm_2::operator=
- amp_short_vectors/Concurrency::graphics::unnorm_2::set_x
- amp_short_vectors/Concurrency::graphics::unnorm_2::rg
- amp_short_vectors/Concurrency::graphics::unorm_2
- amp_short_vectors/Concurrency::graphics::unnorm_2::operator-=
- amp_short_vectors/Concurrency::graphics::unnorm_2::operator/=
- amp_short_vectors/Concurrency::graphics::unnorm_2::get_xy
- amp_short_vectors/Concurrency::graphics::unnorm_2::set_yx
- amp_short_vectors/Concurrency::graphics::unnorm_2::yx
- amp_short_vectors/Concurrency::graphics::unnorm_2::gr
- amp_short_vectors/Concurrency::graphics::unnorm_2::r
- amp_short_vectors/Concurrency::graphics::unnorm_2::operator-
- amp_short_vectors/Concurrency::graphics::unnorm_2::get_x
- amp_short_vectors/Concurrency::graphics::unnorm_2::g
- amp_short_vectors/Concurrency::graphics::unnorm_2::operator++
ms.assetid: 62e88ea7-e29f-4f62-95ce-61a1f39f5e34
ms.openlocfilehash: 1a91c1c203466f6ece535d45d5c2c828c8150dbd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97326376"
---
# <a name="unorm_2-class"></a>Classe unorm_2

Rappresenta un breve vettore di due numeri normali senza segno.

## <a name="syntax"></a>Sintassi

```cpp
class unorm_2;
```

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|`value_type`||

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[Costruttore unorm_2](#ctor)|Di overload. Costruttore predefinito, Inizializza tutti gli elementi con 0.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|unorm_2:: get_x||
|unorm_2:: get_xy||
|unorm_2:: get_y||
|unorm_2:: get_yx||
|unorm_2:: ref_g||
|unorm_2:: ref_r||
|unorm_2:: ref_x||
|unorm_2:: ref_y||
|unorm_2:: set_x||
|unorm_2:: set_xy||
|unorm_2:: set_y||
|unorm_2:: set_yx||

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|unorm_2:: operator--||
|unorm_2:: operator * =||
|unorm_2:: operator/=||
|unorm_2:: operator + +||
|unorm_2:: operator + =||
|unorm_2:: operator =||
|unorm_2:: operator-=||

### <a name="public-constants"></a>Costanti pubbliche

|Nome|Description|
|----------|-----------------|
|Costante unorm_2::size||

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|unorm_2:: g||
|unorm_2:: gr||
|unorm_2:: r||
|unorm_2:: RG||
|unorm_2:: x||
|unorm_2:: XY||
|unorm_2:: y||
|unorm_2:: YX||

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`unorm_2`

## <a name="requirements"></a>Requisiti

**Intestazione:** amp_short_vectors. h

**Spazio dei nomi:** Concurrency:: graphics

## <a name="unorm_2"></a><a name="ctor"></a> unorm_2

Costruttore predefinito, Inizializza tutti gli elementi con 0.

```cpp
unorm_2() restrict(amp,
    cpu);

unorm_2(
    unorm _V0,
    unorm _V1) restrict(amp,
    cpu);

unorm_2(
    float _V0,
    float _V1) restrict(amp,
    cpu);

unorm_2(
    unorm _V) restrict(amp,
    cpu);

explicit unorm_2(
    float _V) restrict(amp,
    cpu);

unorm_2(
    const unorm_2& _Other) restrict(amp,
    cpu);

explicit inline unorm_2(
    const uint_2& _Other) restrict(amp,
    cpu);

explicit inline unorm_2(
    const int_2& _Other) restrict(amp,
    cpu);

explicit inline unorm_2(
    const float_2& _Other) restrict(amp,
    cpu);

explicit inline unorm_2(
    const norm_2& _Other) restrict(amp,
    cpu);

explicit inline unorm_2(
    const double_2& _Other) restrict(amp,
    cpu);
```

### <a name="parameters"></a>Parametri

*_V0*<br/>
Valore per inizializzare l'elemento 0.

*_V1*<br/>
Valore per l'inizializzazione dell'elemento 1.

*_V*<br/>
Valore per l'inizializzazione.

*_Other*<br/>
Oggetto utilizzato per inizializzare.

## <a name="size"></a><a name="unorm_2__size"></a> dimensioni

```cpp
static const int size = 2;
```

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency::graphics](concurrency-graphics-namespace.md)
