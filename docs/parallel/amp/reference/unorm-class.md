---
title: Classe unorm | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-amp
ms.topic: reference
f1_keywords:
- unorm
- AMP_SHORT_VECTORS/unorm
- AMP_SHORT_VECTORS/Concurrency::graphics::unorm Constructor
dev_langs:
- C++
ms.assetid: bc30bd20-6452-4d5f-9158-3b11c4c16ed2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 131a928c5943ab9bf4dcc327b044d76e5646ede7
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46377383"
---
# <a name="unorm-class"></a>Classe unorm

Rappresenta un numero unorm. Ogni elemento è mobile punto numero compreso nell'intervallo [0.0f, 1.0f].

## <a name="syntax"></a>Sintassi

```
class unorm;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore unorm](#ctor)|Di overload. Costruttore predefinito. L'inizializzazione su 0.0f.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|unorm::operator--||
|unorm::operator float|Operatore di conversione. Convertire il numero di unorm in Mobile valore del punto.|
|unorm::operator*=||
|unorm::operator/=||
|unorm::operator + +||
|unorm::operator+=||
|unorm::operator=||
|unorm::operator-=||

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`unorm`

## <a name="requirements"></a>Requisiti

**Intestazione:** amp_short_vectors.h

**Namespace:** Concurrency:: Graphics

##  <a name="ctor"></a> unorm

Costruttore predefinito. L'inizializzazione su 0.0f.

```
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

*ISOLA*<br/>
Il valore utilizzato per inizializzare.

*_Other*<br/>
L'oggetto di norma utilizzato per inizializzare.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency::graphics](concurrency-graphics-namespace.md)
