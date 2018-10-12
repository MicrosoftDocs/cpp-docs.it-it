---
title: operatore alignof | Microsoft Docs
ms.custom: ''
ms.date: 10/09/2018
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- alignas_cpp
- __alignof_cpp
- alignof_cpp
- __alignof
- _alignof
dev_langs:
- C++
helpviewer_keywords:
- alignas [C++]
- alignment of structures
- __alignof keyword [C++]
- alignof [C++]
- types [C++], alignment requirements
ms.assetid: acb1eed7-6398-40bd-b0c5-684ceb64afbc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d1852f6d277f54ecb3c232d63262c34465512546
ms.sourcegitcommit: 8480f16893f09911f08a58caf684405404f7ac8e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/12/2018
ms.locfileid: "49163725"
---
# <a name="alignof-operator"></a>Operatore __alignof

C++11 introduce le **alignof** operatore che restituisce l'allineamento, espressa in byte, del tipo specificato. Per garantire la massima portabilità, è consigliabile usare l'operatore alignof invece dell'operatore __alignof specifico di Microsoft.

**Sezione specifica Microsoft**

Restituisce un valore di tipo `size_t` vale a dire il requisito di allineamento del tipo.

## <a name="syntax"></a>Sintassi

```cpp
  __alignof( type )
```

## <a name="remarks"></a>Note

Ad esempio:

|Espressione|Valore|
|----------------|-----------|
|**__alignof( char )**|1|
|**__alignof( short )**|2|
|**__alignof( int )**|4|
|**__alignof( \__int64 )**|8|
|**__alignof( float )**|4|
|**alignof (double)**|8|
|**__alignof( char\* )**|4|

Il **alignof** valore è identico al valore per `sizeof` per i tipi di base. Si consideri, in ogni caso, il seguente esempio:

```cpp
typedef struct { int a; double b; } S;
// __alignof(S) == 8
```

In questo caso, il **alignof** valore è il requisito di allineamento dell'elemento più grande nella struttura.

Analogamente, per

```cpp
typedef __declspec(align(32)) struct { int a; } S;
```

`__alignof(S)` è uguale a `32`.

È possibile utilizzare **alignof** sarebbe come parametro a una delle proprie routine di allocazione della memoria. Ad esempio, data la seguente struttura definita `S`, si potrebbe chiamare una routine di allocazione della memoria denominata `aligned_malloc` per allocare memoria su un particolare limite di allineamento.

```cpp
typedef __declspec(align(32)) struct { int a; double b; } S;
int n = 50; // array size
S* p = (S*)aligned_malloc(n * sizeof(S), __alignof(S));
```

Per garantire la compatibilità con le versioni precedenti, **_alignof** è un sinonimo **alignof** , a meno che l'opzione del compilatore [/Za \(Disabilita estensioni linguaggio)](../build/reference/za-ze-disable-language-extensions.md) è specificato.

Per altre informazioni sulla modifica dell'allineamento, vedere:

- [pack](../preprocessor/pack.md)

- [align](../cpp/align-cpp.md)

- [__unaligned](../cpp/unaligned.md)

- [/Zp (allineamento membri struct)](../build/reference/zp-struct-member-alignment.md)

- [Esempi di allineamento di strutture](../build/examples-of-structure-alignment.md) (specifico per x64)

Per altre informazioni sulle differenze nell'allineamento nel codice per x86 e x64, vedere:

- [Conflitti con il compilatore x86](../build/conflicts-with-the-x86-compiler.md)

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)