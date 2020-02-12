---
title: Struttura short_vector
ms.date: 11/04/2016
f1_keywords:
- short_vector
- AMP_SHORT_VECTORS/short_vector
- AMP_SHORT_VECTORS/Concurrency::graphics::short_vector::short_vector Constructor
ms.assetid: e4f50b8f-1150-437d-b58c-79c5fb883708
ms.openlocfilehash: 531b8d53eac8d997b7e8ca4d29aad7d34ef90e22
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77126435"
---
# <a name="short_vector-structure"></a>Struttura short_vector

short_vector fornisce definizioni di metaprogrammazione utili per la programmazione di vettori Short in modo generico.

## <a name="syntax"></a>Sintassi

```cpp
template<
    typename _Scalar_type,
    int _Size
>
struct short_vector;
template<>
struct short_vector<unsigned int, 1>;
template<>
struct short_vector<unsigned int, 2>;
template<>
struct short_vector<unsigned int, 3>;
template<>
struct short_vector<unsigned int, 4>;
template<>
struct short_vector<int, 1>;
template<>
struct short_vector<int, 2>;
template<>
struct short_vector<int, 3>;
template<>
struct short_vector<int, 4>;
template<>
struct short_vector<float, 1>;
template<>
struct short_vector<float, 2>;
template<>
struct short_vector<float, 3>;
template<>
struct short_vector<float, 4>;
template<>
struct short_vector<unorm, 1>;
template<>
struct short_vector<unorm, 2>;
template<>
struct short_vector<unorm, 3>;
template<>
struct short_vector<unorm, 4>;
template<>
struct short_vector<norm, 1>;
template<>
struct short_vector<norm, 2>;
template<>
struct short_vector<norm, 3>;
template<>
struct short_vector<norm, 4>;
template<>
struct short_vector<double, 1>;
template<>
struct short_vector<double, 2>;
template<>
struct short_vector<double, 3>;
template<>
struct short_vector<double, 4>;
```

### <a name="parameters"></a>Parametri

*_Scalar_type*<br/>

*_Size*<br/>

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`type`||

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore short_vector:: short_vector](#ctor)||

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`short_vector`

## <a name="requirements"></a>Requisiti

**Intestazione:** amp_short_vectors. h

**Spazio dei nomi:** Concurrency:: graphics

## <a name="ctor"></a>Costruttore short_vector:: short_vector

```cpp
short_vector();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency::graphics](concurrency-graphics-namespace.md)
