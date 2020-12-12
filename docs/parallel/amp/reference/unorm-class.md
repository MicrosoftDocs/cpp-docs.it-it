---
description: 'Altre informazioni su: classe unorm'
title: Classe unorm
ms.date: 11/04/2016
f1_keywords:
- unorm
- AMP_SHORT_VECTORS/unorm
- AMP_SHORT_VECTORS/Concurrency::graphics::unorm Constructor
ms.assetid: bc30bd20-6452-4d5f-9158-3b11c4c16ed2
ms.openlocfilehash: 947660d046ea41025e70aa4e6521e3c8f34c0a94
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97314527"
---
# <a name="unorm-class"></a>Classe unorm

Rappresenta un numero unorm. Ogni elemento è un numero a virgola mobile compreso nell'intervallo [0,0 f, 1.0 f].

## <a name="syntax"></a>Sintassi

```cpp
class unorm;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[Costruttore unorm](#ctor)|Di overload. Costruttore predefinito. Inizializzare su 0,0 f.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|Operatore unorm:: operator--||
|unorm:: operator float|Operatore di conversione. Converte il numero unorm in un valore a virgola mobile.|
|unorm:: operator * =||
|unorm:: operator/=||
|unorm:: operator + +||
|unorm:: operator + =||
|unorm:: operator =||
|unorm:: operator-=||

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`unorm`

## <a name="requirements"></a>Requisiti

**Intestazione:** amp_short_vectors. h

**Spazio dei nomi:** Concurrency:: graphics

## <a name="unorm"></a><a name="ctor"></a> unorm

Costruttore predefinito. Inizializzare su 0,0 f.

```cpp
unorm(
    void) restrict(amp,
    cpu);

explicit unorm(
    float _V) restrict(amp,
    cpu);

explicit unorm(
    unsigned int _V) restrict(amp,
    cpu);

explicit unorm(
    int _V) restrict(amp,
    cpu);

explicit unorm(
    double _V) restrict(amp,
    cpu);

unorm(
    const unorm& _Other) restrict(amp,
    cpu);

inline explicit unorm(
    const norm& _Other) restrict(amp,
    cpu);
```

### <a name="parameters"></a>Parametri

*_V*<br/>
Valore utilizzato per inizializzare.

*_Other*<br/>
Oggetto norm utilizzato per inizializzare.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency::graphics](concurrency-graphics-namespace.md)
