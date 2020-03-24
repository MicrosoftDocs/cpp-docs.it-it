---
title: Operatore __alignof
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
ms.openlocfilehash: 6bddce29dd97d965303a58cc72aa97dfe8cbd8d7
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80181538"
---
# <a name="__alignof-operator"></a>Operatore __alignof

In c++ 11 è stato introdotto l'operatore **alignof** che restituisce l'allineamento, in byte, del tipo specificato. Per garantire la massima portabilità, è consigliabile usare l'operatore alignof invece dell'operatore __alignof specifico di Microsoft.

**Sezione specifica Microsoft**

Restituisce un valore di tipo `size_t` che rappresenta il requisito di allineamento del tipo.

## <a name="syntax"></a>Sintassi

```cpp
  __alignof( type )
```

## <a name="remarks"></a>Osservazioni

Ad esempio:

|Expression|valore|
|----------------|-----------|
|**__alignof (Char)**|1|
|**__alignof (breve)**|2|
|**__alignof (int)**|4|
|**__alignof (\__int64)**|8|
|**__alignof (float)**|4|
|**__alignof (Double)**|8|
|**__alignof (Char\*)**|4|

Il valore **__alignof** corrisponde al valore per `sizeof` per i tipi di base. Si consideri, in ogni caso, il seguente esempio:

```cpp
typedef struct { int a; double b; } S;
// __alignof(S) == 8
```

In questo caso, il valore **__alignof** è il requisito di allineamento dell'elemento più grande nella struttura.

Analogamente, per

```cpp
typedef __declspec(align(32)) struct { int a; } S;
```

`__alignof(S)` è uguale a `32`.

Un utilizzo per **__alignof** è costituito da un parametro per una delle routine di allocazione della memoria. Ad esempio, data la seguente struttura definita `S`, si potrebbe chiamare una routine di allocazione della memoria denominata `aligned_malloc` per allocare memoria su un particolare limite di allineamento.

```cpp
typedef __declspec(align(32)) struct { int a; double b; } S;
int n = 50; // array size
S* p = (S*)aligned_malloc(n * sizeof(S), __alignof(S));
```

Per compatibilità con le versioni precedenti, **_alignof** è un sinonimo di **__alignof** a meno che non sia specificata l'opzione del compilatore [/za \(Disable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md) .

Per altre informazioni sulla modifica dell'allineamento, vedere:

- [pack](../preprocessor/pack.md)

- [align](../cpp/align-cpp.md)

- [__unaligned](../cpp/unaligned.md)

- [/Zp (allineamento membri struct)](../build/reference/zp-struct-member-alignment.md)

- [Esempi di allineamento della struttura](../build/x64-software-conventions.md#examples-of-structure-alignment) (specifico per x64)

Per altre informazioni sulle differenze nell'allineamento nel codice per x86 e x64, vedere:

- [Conflitti con il compilatore x86](../build/x64-software-conventions.md#conflicts-with-the-x86-compiler)

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
