---
title: allocator
ms.date: 03/21/2019
f1_keywords:
- allocator_cpp
helpviewer_keywords:
- __declspec keyword [C++], allocator
- allocator __declspec keyword
ms.openlocfilehash: a26cf4d2b79d64ddc9f0b60982d778e33d0f200a
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87216648"
---
# `allocator`

**Specifico di Microsoft**

L' **`allocator`** identificatore di dichiarazione può essere applicato alle funzioni di allocazione della memoria personalizzate per rendere visibili le allocazioni tramite Event Tracing for Windows (ETW).

## <a name="syntax"></a>Sintassi

> **`__declspec(allocator)`**

## <a name="remarks"></a>Osservazioni

Il profiler della memoria nativa in Visual Studio funziona raccogliendo i dati degli eventi ETW di allocazione generati da durante il Runtime. Gli allocatori in CRT e Windows SDK sono stati annotati a livello di origine in modo che sia possibile acquisirne i dati di allocazione. Se si scrivono allocatori personalizzati, tutte le funzioni che restituiscono un puntatore alla memoria heap appena allocata possono essere decorate con `__declspec(allocator)` , come illustrato in questo esempio per malloc:

```cpp
__declspec(allocator) void* myMalloc(size_t size)
```

Per altre informazioni, vedere [misurare l'utilizzo della memoria in Visual Studio](/visualstudio/profiling/memory-usage) e [eventi heap ETW nativi personalizzati](/visualstudio/profiling/custom-native-etw-heap-events).

**TERMINA specifica Microsoft**
