---
description: 'Altre informazioni su: operatore alignof'
title: Operatore alignof
ms.date: 12/17/2018
f1_keywords:
- __alignof_cpp
- alignof_cpp
- __alignof
- _alignof
helpviewer_keywords:
- alignas [C++]
- alignment of structures
- __alignof keyword [C++]
- alignof [C++]
- types [C++], alignment requirements
ms.assetid: acb1eed7-6398-40bd-b0c5-684ceb64afbc
ms.openlocfilehash: b7e053b932ed631d8b03dc1b89f6857905740e5a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97288305"
---
# <a name="alignof-operator"></a>Operatore alignof

L' **`alignof`** operatore restituisce l'allineamento in byte del tipo specificato come valore di tipo **`size_t`** .

## <a name="syntax"></a>Sintassi

```cpp
alignof( type )
```

## <a name="remarks"></a>Osservazioni

Ad esempio:

| Expression | Valore |
|--|--|
| **`alignof( char )`** | 1 |
| **`alignof( short )`** | 2 |
| **`alignof( int )`** | 4 |
| **`alignof( long long )`** | 8 |
| **`alignof( float )`** | 4 |
| **`alignof( double )`** | 8 |

Il **`alignof`** valore è uguale al valore di per i **`sizeof`** tipi di base. Si consideri, in ogni caso, il seguente esempio:

```cpp
typedef struct { int a; double b; } S;
// alignof(S) == 8
```

In questo caso, il **`alignof`** valore è il requisito di allineamento dell'elemento più grande nella struttura.

Analogamente, per

```cpp
typedef __declspec(align(32)) struct { int a; } S;
```

`alignof(S)` è uguale a `32`.

Un uso di è costituito da **`alignof`** un parametro per una delle routine di allocazione della memoria. Ad esempio, data la seguente struttura definita `S`, si potrebbe chiamare una routine di allocazione della memoria denominata `aligned_malloc` per allocare memoria su un particolare limite di allineamento.

```cpp
typedef __declspec(align(32)) struct { int a; double b; } S;
int n = 50; // array size
S* p = (S*)aligned_malloc(n * sizeof(S), alignof(S));
```

Per altre informazioni sulla modifica dell'allineamento, vedere:

- [pack](../preprocessor/pack.md)

- [allineare](../cpp/align-cpp.md)

- [__unaligned](../cpp/unaligned.md)

- [/ZP (allineamento membri struct)](../build/reference/zp-struct-member-alignment.md)

- [Esempi di allineamento della struttura](../build/x64-software-conventions.md#examples-of-structure-alignment) (specifico per x64)

Per altre informazioni sulle differenze nell'allineamento nel codice per x86 e x64, vedere:

- [Conflitti con il compilatore x86](../build/x64-software-conventions.md#conflicts-with-the-x86-compiler)

### <a name="microsoft-specific"></a>Specifico di Microsoft

**`alignof`** e **`__alignof`** sono sinonimi nel compilatore Microsoft. Prima che divenisse parte dello standard in C++ 11, l'operatore specifico di Microsoft **`__alignof`** forniva questa funzionalità. Per la massima portabilità, è consigliabile usare l' **`alignof`** operatore anziché l'operatore specifico di Microsoft **`__alignof`** .

Per compatibilità con le versioni precedenti, **`_alignof`** è un sinonimo di, a **`__alignof`** meno che non sia specificata l'opzione del compilatore [ `/Za` \( Disable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md) .

## <a name="see-also"></a>Vedi anche

[Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
