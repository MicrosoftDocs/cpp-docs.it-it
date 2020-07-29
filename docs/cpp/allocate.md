---
title: allocate
ms.date: 11/04/2016
f1_keywords:
- allocate_cpp
helpviewer_keywords:
- __declspec keyword [C++], allocate
- allocate __declspec keyword
ms.assetid: 67828b31-de60-4c0e-b0a6-ef3aab22641d
ms.openlocfilehash: 0bf31423cd76c838cbeffa7458bbccb89592bf43
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227621"
---
# <a name="allocate"></a>allocate

**Specifico di Microsoft**

L' **`allocate`** identificatore di dichiarazione denomina un segmento di dati in cui verrà allocato l'elemento dati.

## <a name="syntax"></a>Sintassi

> **`__declspec(allocate("`***nomeseg* **`))`** *dichiaratore*

## <a name="remarks"></a>Osservazioni

Il nome *nomeseg* deve essere dichiarato utilizzando uno dei seguenti pragma:

- [code_seg](../preprocessor/code-seg.md)

- [const_seg](../preprocessor/const-seg.md)

- [data_seg](../preprocessor/data-seg.md)

- [init_seg](../preprocessor/init-seg.md)

- [sezione](../preprocessor/section.md)

## <a name="example"></a>Esempio

```cpp
// allocate.cpp
#pragma section("mycode", read)
__declspec(allocate("mycode"))  int i = 0;

int main() {
}
```

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[`__declspec`](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
