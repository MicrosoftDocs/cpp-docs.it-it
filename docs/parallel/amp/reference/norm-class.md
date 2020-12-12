---
description: 'Altre informazioni su: classe Norm'
title: Classe norm
ms.date: 11/04/2016
f1_keywords:
- AMP_SHORT_VECTORS/norm
- AMP_SHORT_VECTORS/Concurrency::graphics::norm Constructor
ms.assetid: 73002f3d-c25e-4119-bcd3-4c46c9b6abf1
ms.openlocfilehash: 29e376e5e42212c87ae244c7a606a38d6a07ddf1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327644"
---
# <a name="norm-class"></a>Classe norm

Rappresenta un numero norm. Ogni elemento è un numero a virgola mobile compreso nell'intervallo [-1.0 f, 1.0 f].

## <a name="syntax"></a>Sintassi

```cpp
class norm;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[Costruttore Norm](#ctor)|Di overload. Costruttore predefinito. Inizializzare su 0,0 f.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|Norm:: operator-||
|Norm:: operator--||
|Norm:: operator float|Operatore di conversione. Converte il numero di norma in un valore a virgola mobile.|
|Norm:: operator * =||
|Norm:: operator/=||
|Norm:: operator + +||
|Norm:: operator + =||
|Norm:: operator =||
|Norm:: operator-=||

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`norm`

## <a name="requirements"></a>Requisiti

**Intestazione:** amp_short_vectors. h

**Spazio dei nomi:** Concurrency:: graphics

## <a name="norm"></a><a name="ctor"></a> norma

Costruttore predefinito. Inizializzare su 0,0 f.

```cpp
norm(
    void) restrict(amp,
    cpu);

explicit norm(
    float _V) restrict(amp,
    cpu);

explicit norm(
    unsigned int _V) restrict(amp,
    cpu);

explicit norm(
    int _V) restrict(amp,
    cpu);

explicit norm(
    double _V) restrict(amp,
    cpu);

norm(
    const norm& _Other) restrict(amp,
    cpu);

norm(
    const unorm& _Other) restrict(amp,
    cpu);
```

### <a name="parameters"></a>Parametri

*_V*<br/>
Valore utilizzato per inizializzare.

*_Other*<br/>
Oggetto utilizzato per inizializzare.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency::graphics](concurrency-graphics-namespace.md)
