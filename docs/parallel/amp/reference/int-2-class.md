---
description: 'Altre informazioni su: int_2 Class'
title: Classe int_2
ms.date: 11/04/2016
f1_keywords:
- amp_short_vectors/Concurrency::graphics::int_2::y
- amp_short_vectors/Concurrency::graphics::int_2::set_x
- amp_short_vectors/Concurrency::graphics::int_2::set_y
- amp_short_vectors/Concurrency::graphics::int_2::get_yx
- amp_short_vectors/Concurrency::graphics::int_2::operator++
- amp_short_vectors/Concurrency::graphics::int_2::x
- amp_short_vectors/Concurrency::graphics::int_2::set_yx
- amp_short_vectors/Concurrency::graphics::int_2::operator/=
- amp_short_vectors/Concurrency::graphics::int_2::get_y
- amp_short_vectors/Concurrency::graphics::int_2::gr
- amp_short_vectors/Concurrency::graphics::int_2::operator*=
- amp_short_vectors/Concurrency::graphics::int_2::r
- amp_short_vectors/Concurrency::graphics::int_2::get_xy
- amp_short_vectors/Concurrency::graphics::int_2::operator=
- amp_short_vectors/Concurrency::graphics::int_2::g
- amp_short_vectors/Concurrency::graphics::int_2::rg
- amp_short_vectors/Concurrency::graphics::int_2::xy
- amp_short_vectors/Concurrency::graphics::int_2::operator-=
- amp_short_vectors/Concurrency::graphics::int_2::get_x
- amp_short_vectors/Concurrency::graphics::int_2::yx
- amp_short_vectors/Concurrency::graphics::int_2
- amp_short_vectors/Concurrency::graphics::int_2::operator-
- amp_short_vectors/Concurrency::graphics::int_2::set_xy
- amp_short_vectors/Concurrency::graphics::int_2::operator+=
- amp_short_vectors/Concurrency::graphics::int_2::operator--
ms.assetid: 258b02e9-f1ee-46c2-8edd-dc9f69184846
ms.openlocfilehash: 7ee3f2726ce5c96a51a8246933c8d2d9d9eacc38
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330035"
---
# <a name="int_2-class"></a>Classe int_2

Rappresenta un vettore breve di due Integer.

## <a name="syntax"></a>Sintassi

```cpp
class int_2;
```

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|`value_type`||

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[Costruttore int_2](#ctor)|Di overload. Costruttore predefinito, Inizializza tutti gli elementi con 0.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|int_2:: get_x||
|int_2:: get_xy||
|int_2:: get_y||
|int_2:: get_yx||
|int_2:: ref_g||
|int_2:: ref_r||
|int_2:: ref_x||
|int_2:: ref_y||
|int_2:: set_x||
|int_2:: set_xy||
|int_2:: set_y||
|int_2:: set_yx||

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|int_2:: operator-||
|int_2:: operator--||
|int_2:: operator% =||
|int_2:: operator&=||
|int_2:: operator * =||
|int_2:: operator/=||
|int_2:: operator ^ =||
|int_2:: operator&#124;=||
|int_2:: operator ~||
|int_2:: operator + +||
|int_2:: operator + =||
|int_2:: operator<\<=||
|int_2:: operator =||
|int_2:: operator-=||
|int_2:: operator>>=||

### <a name="public-constants"></a>Costanti pubbliche

|Nome|Description|
|----------|-----------------|
|[dimensioni costanti](#int_2__size)||

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|int_2:: g||
|int_2:: gr||
|int_2:: r||
|int_2:: RG||
|int_2:: x||
|int_2:: XY||
|int_2:: y||
|int_2:: YX||

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`int_2`

## <a name="requirements"></a>Requisiti

**Intestazione:** amp_short_vectors. h

**Spazio dei nomi:** Concurrency:: graphics

## <a name="int_2"></a><a name="ctor"></a> int_2

Costruttore predefinito, Inizializza tutti gli elementi con 0.

```cpp
int_2() restrict(amp,
    cpu);

int_2(
    int _V0,
    int _V1) restrict(amp,
    cpu);

int_2(
    int _V) restrict(amp,
    cpu);

int_2(
    const int_2& _Other) restrict(amp,
    cpu);

explicit inline int_2(
    const uint_2& _Other) restrict(amp,
    cpu);

explicit inline int_2(
    const float_2& _Other) restrict(amp,
    cpu);

explicit inline int_2(
    const unorm_2& _Other) restrict(amp,
    cpu);

explicit inline int_2(
    const norm_2& _Other) restrict(amp,
    cpu);

explicit inline int_2(
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

## <a name="size"></a><a name="int_2__size"></a> dimensioni

```cpp
static const int size = 2;
```

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency::graphics](concurrency-graphics-namespace.md)
