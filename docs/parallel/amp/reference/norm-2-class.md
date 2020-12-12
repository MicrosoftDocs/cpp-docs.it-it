---
description: 'Altre informazioni su: norm_2 Class'
title: Classe norm_2
ms.date: 11/04/2016
f1_keywords:
- amp_short_vectors/Concurrency::graphics::norm_2::set_x
- amp_short_vectors/Concurrency::graphics::norm_2::set_xy
- amp_short_vectors/Concurrency::graphics::norm_2::g
- amp_short_vectors/Concurrency::graphics::norm_2::get_yx
- amp_short_vectors/Concurrency::graphics::norm_2::set_yx
- amp_short_vectors/Concurrency::graphics::norm_2::operator-=
- amp_short_vectors/Concurrency::graphics::norm_2::operator/=
- amp_short_vectors/Concurrency::graphics::norm_2::operator*=
- amp_short_vectors/Concurrency::graphics::norm_2::yx
- amp_short_vectors/Concurrency::graphics::norm_2::y
- amp_short_vectors/Concurrency::graphics::norm_2::xy
- amp_short_vectors/Concurrency::graphics::norm_2::operator++
- amp_short_vectors/Concurrency::graphics::norm_2::operator-
- amp_short_vectors/Concurrency::graphics::norm_2::rg
- amp_short_vectors/Concurrency::graphics::norm_2::operator=
- amp_short_vectors/Concurrency::graphics::norm_2::get_y
- amp_short_vectors/Concurrency::graphics::norm_2::r
- amp_short_vectors/Concurrency::graphics::norm_2::get_x
- amp_short_vectors/Concurrency::graphics::norm_2::get_xy
- amp_short_vectors/Concurrency::graphics::norm_2::gr
- amp_short_vectors/Concurrency::graphics::norm_2::set_y
- amp_short_vectors/Concurrency::graphics::norm_2::x
- amp_short_vectors/Concurrency::graphics::norm_2::operator+=
- amp_short_vectors/Concurrency::graphics::norm_2
- amp_short_vectors/Concurrency::graphics::norm_2::operator--
ms.assetid: 80703f9b-61f4-414a-93fd-bc774f7d3393
ms.openlocfilehash: 5b4b19d83672a88828d3cad8be7f22a2f54a431e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97329987"
---
# <a name="norm_2-class"></a>Classe norm_2

Rappresenta un vettore breve di due numeri normali.

## <a name="syntax"></a>Sintassi

```cpp
class norm_2;
```

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|`value_type`||

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[Costruttore norm_2](#ctor)|Di overload. Costruttore predefinito, Inizializza tutti gli elementi con 0.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|norm_2:: get_x||
|norm_2:: get_xy||
|norm_2:: get_y||
|norm_2:: get_yx||
|norm_2:: ref_g||
|norm_2:: ref_r||
|norm_2:: ref_x||
|norm_2:: ref_y||
|norm_2:: set_x||
|norm_2:: set_xy||
|norm_2:: set_y||
|norm_2:: set_yx||

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|norm_2:: operator-||
|norm_2:: operator--||
|norm_2:: operator * =||
|norm_2:: operator/=||
|norm_2:: operator + +||
|norm_2:: operator + =||
|norm_2:: operator =||
|norm_2:: operator-=||

### <a name="public-constants"></a>Costanti pubbliche

|Nome|Description|
|----------|-----------------|
|[dimensioni costanti](#norm_2__size)||

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|norm_2:: g||
|norm_2:: gr||
|norm_2:: r||
|norm_2:: RG||
|norm_2:: x||
|norm_2:: XY||
|norm_2:: y||
|norm_2:: YX||

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`norm_2`

## <a name="requirements"></a>Requisiti

**Intestazione:** amp_short_vectors. h

**Spazio dei nomi:** Concurrency:: graphics

## <a name="norm_2"></a><a name="ctor"></a> norm_2

Costruttore predefinito, Inizializza tutti gli elementi con 0.

```cpp
norm_2() restrict(amp,
    cpu);

norm_2(
    norm _V0,
    norm _V1) restrict(amp,
    cpu);

norm_2(
    float _V0,
    float _V1) restrict(amp,
    cpu);

norm_2(
    unorm _V0,
    unorm _V1) restrict(amp,
    cpu);

norm_2(
    norm _V) restrict(amp,
    cpu);

explicit norm_2(
    float _V) restrict(amp,
    cpu);

norm_2(
    const norm_2& _Other) restrict(amp,
    cpu);

explicit inline norm_2(
    const uint_2& _Other) restrict(amp,
    cpu);

explicit inline norm_2(
    const int_2& _Other) restrict(amp,
    cpu);

explicit inline norm_2(
    const float_2& _Other) restrict(amp,
    cpu);

explicit inline norm_2(
    const unorm_2& _Other) restrict(amp,
    cpu);

explicit inline norm_2(
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

## <a name="size"></a><a name="norm_2__size"></a> dimensioni

```cpp
static const int size = 2;
```

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency::graphics](concurrency-graphics-namespace.md)
