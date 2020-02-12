---
title: Classe uint_2
ms.date: 11/04/2016
f1_keywords:
- amp_short_vectors/Concurrency::graphics::uint_2::set_xy
- amp_short_vectors/Concurrency::graphics::uint_2::y
- amp_short_vectors/Concurrency::graphics::uint_2::gr
- amp_short_vectors/Concurrency::graphics::uint_2::operator-
- amp_short_vectors/Concurrency::graphics::uint_2::get_x
- amp_short_vectors/Concurrency::graphics::uint_2::operator-=
- amp_short_vectors/Concurrency::graphics::uint_2::r
- amp_short_vectors/Concurrency::graphics::uint_2::yx
- amp_short_vectors/Concurrency::graphics::uint_2::operator--
- amp_short_vectors/Concurrency::graphics::uint_2::set_yx
- amp_short_vectors/Concurrency::graphics::uint_2::operator=
- amp_short_vectors/Concurrency::graphics::uint_2::set_x
- amp_short_vectors/Concurrency::graphics::uint_2::operator+=
- amp_short_vectors/Concurrency::graphics::uint_2::get_y
- amp_short_vectors/Concurrency::graphics::uint_2::xy
- amp_short_vectors/Concurrency::graphics::uint_2::x
- amp_short_vectors/Concurrency::graphics::uint_2::get_xy
- amp_short_vectors/Concurrency::graphics::uint_2::set_y
- amp_short_vectors/Concurrency::graphics::uint_2
- amp_short_vectors/Concurrency::graphics::uint_2::operator*=
- amp_short_vectors/Concurrency::graphics::uint_2::get_yx
- amp_short_vectors/Concurrency::graphics::uint_2::operator/=
- amp_short_vectors/Concurrency::graphics::uint_2::g
- amp_short_vectors/Concurrency::graphics::uint_2::operator++
- amp_short_vectors/Concurrency::graphics::uint_2::rg
ms.assetid: 9fcc9129-72b1-4da7-9012-4d3be15f1c52
ms.openlocfilehash: 5f01e4d50dc3fab8d7cb909d1ea2f3d1801f0db0
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77126210"
---
# <a name="uint_2-class"></a>Classe uint_2

Rappresenta un vettore breve di due interi senza segno.

## <a name="syntax"></a>Sintassi

```cpp
class uint_2;
```

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`value_type`||

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore uint_2](#ctor)|Di overload. Costruttore predefinito, Inizializza tutti gli elementi con 0.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|uint_2::get_x||
|uint_2::get_xy||
|uint_2::get_y||
|uint_2::get_yx||
|uint_2::ref_g_Method||
|uint_2::ref_r_Method||
|uint_2::ref_x_Method||
|uint_2::ref_y_Method||
|uint_2::set_x||
|uint_2::set_xy||
|uint_2::set_y||
|uint_2::set_yx||

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|uint_2::operator--||
|uint_2::operator%=||
|uint_2::operator&=||
|uint_2::operator*=||
|uint_2::operator/=||
|uint_2::operator^=||
|uint_2::operator&#124;=||
|uint_2::operator~||
|uint_2::operator++||
|uint_2::operator+=||
|uint_2:: operator <\<=||
|uint_2::operator=||
|uint_2::operator-=||
|uint_2::operator>>=||

### <a name="public-constants"></a>Costanti pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[dimensioni costanti](#uint_2__size)||

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|uint_2::g||
|uint_2::gr||
|uint_2::r||
|uint_2::rg||
|uint_2::x||
|uint_2::xy||
|uint_2::y||
|uint_2::yx||

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`uint_2`

## <a name="requirements"></a>Requisiti

**Intestazione:** amp_short_vectors. h

**Spazio dei nomi:** Concurrency:: graphics

## <a name="ctor"></a>uint_2

Costruttore predefinito, Inizializza tutti gli elementi con 0.

```cpp
uint_2() restrict(amp,
    cpu);

uint_2(
    unsigned int _V0,
    unsigned int _V1) restrict(amp,
    cpu);

uint_2(
    unsigned int _V) restrict(amp,
    cpu);

uint_2(
    const uint_2& _Other) restrict(amp,
    cpu);

explicit inline uint_2(
    const int_2& _Other) restrict(amp,
    cpu);

explicit inline uint_2(
    const float_2& _Other) restrict(amp,
    cpu);

explicit inline uint_2(
    const unorm_2& _Other) restrict(amp,
    cpu);

explicit inline uint_2(
    const norm_2& _Other) restrict(amp,
    cpu);

explicit inline uint_2(
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

## <a name="uint_2__size"></a>dimensioni

```cpp
static const int size = 2;
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency::graphics](concurrency-graphics-namespace.md)
