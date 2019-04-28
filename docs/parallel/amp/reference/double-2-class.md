---
title: Classe double_2
ms.date: 11/04/2016
f1_keywords:
- amp_short_vectors/Concurrency::graphics::double_2::set_x
- amp_short_vectors/Concurrency::graphics::double_2::operator+=
- amp_short_vectors/Concurrency::graphics::double_2::operator=
- amp_short_vectors/Concurrency::graphics::double_2::operator/=
- amp_short_vectors/Concurrency::graphics::double_2::operator*=
- amp_short_vectors/Concurrency::graphics::double_2::yx
- amp_short_vectors/Concurrency::graphics::double_2::y
- amp_short_vectors/Concurrency::graphics::double_2::xy
- amp_short_vectors/Concurrency::graphics::double_2::set_xy
- amp_short_vectors/Concurrency::graphics::double_2::get_yx
- amp_short_vectors/Concurrency::graphics::double_2::set_yx
- amp_short_vectors/Concurrency::graphics::double_2::get_xy
- amp_short_vectors/Concurrency::graphics::double_2::operator++
- amp_short_vectors/Concurrency::graphics::double_2::get_x
- amp_short_vectors/Concurrency::graphics::double_2::operator-=
- amp_short_vectors/Concurrency::graphics::double_2::rg
- amp_short_vectors/Concurrency::graphics::double_2::gr
- amp_short_vectors/Concurrency::graphics::double_2::get_y
- amp_short_vectors/Concurrency::graphics::double_2::x
- amp_short_vectors/Concurrency::graphics::double_2::r
- amp_short_vectors/Concurrency::graphics::double_2::operator--
- amp_short_vectors/Concurrency::graphics::double_2
- amp_short_vectors/Concurrency::graphics::double_2::operator-
- amp_short_vectors/Concurrency::graphics::double_2::g
- amp_short_vectors/Concurrency::graphics::double_2::set_y
ms.assetid: c19c2d21-3cbf-4ce5-b460-3b8253688f82
ms.openlocfilehash: 9482c2839c4963d533eb643fa0ef86a5c66636a4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62182332"
---
# <a name="double2-class"></a>Classe double_2

Rappresentano un vettore short di 2 doppia.

## <a name="syntax"></a>Sintassi

```
class double_2;
```

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`value_type`||

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore double_2](#ctor)|Di overload. Default costruttore inizializza tutti gli elementi con 0.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|double_2::get_x||
|double_2::get_xy||
|double_2::get_y||
|double_2::get_yx||
|double_2::ref_g||
|double_2::ref_r||
|double_2::ref_x||
|double_2::ref_y||
|double_2::set_x||
|double_2::set_xy||
|double_2::set_y||
|double_2::set_yx||

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|double_2::operator-||
|double_2::operator--||
|double_2::operator*=||
|double_2::operator/=||
|double_2::operator++||
|double_2::operator+=||
|double_2::operator=||
|double_2::operator-=||

### <a name="public-constants"></a>Costanti pubbliche

|Nome|Descrizione|
|----------|-----------------|
|Costante double_2::size||

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|double_2::g||
|double_2::gr||
|double_2::r||
|double_2::rg||
|double_2::x||
|double_2::xy||
|double_2::y||
|double_2::yx||

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`double_2`

## <a name="requirements"></a>Requisiti

**Intestazione:** amp_short_vectors.h

**Spazio dei nomi:** Concurrency:: Graphics

##  <a name="ctor"></a> double_2

Default costruttore inizializza tutti gli elementi con 0.

```
double_2() restrict(amp,
    cpu);

double_2(
    double _V0,
    double _V1) restrict(amp,
    cpu);

double_2(
    double _V) restrict(amp,
    cpu);

double_2(
    const double_2& _Other) restrict(amp,
    cpu);

explicit inline double_2(
    const uint_2& _Other) restrict(amp,
    cpu);

explicit inline double_2(
    const int_2& _Other) restrict(amp,
    cpu);

explicit inline double_2(
    const float_2& _Other) restrict(amp,
    cpu);

explicit inline double_2(
    const unorm_2& _Other) restrict(amp,
    cpu);

explicit inline double_2(
    const norm_2& _Other) restrict(amp,
    cpu);
```

### <a name="parameters"></a>Parametri

*_V0*<br/>
Il valore per inizializzare l'elemento 0.

*_V1*<br/>
Il valore per inizializzare l'elemento 1.

*_V*<br/>
Il valore di inizializzazione.

*_Other*<br/>
Oggetto utilizzato per inizializzare.

##  <a name="double_2__size"></a> Dimensioni

```
static const int size = 2;
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency::graphics](concurrency-graphics-namespace.md)
