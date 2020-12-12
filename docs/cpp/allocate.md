---
description: 'Altre informazioni su: alloca'
title: allocate
ms.date: 11/04/2016
f1_keywords:
- allocate_cpp
helpviewer_keywords:
- __declspec keyword [C++], allocate
- allocate __declspec keyword
ms.assetid: 67828b31-de60-4c0e-b0a6-ef3aab22641d
ms.openlocfilehash: 0a30b113ca9271dc53777073ea0a80bac0f16bcb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97288282"
---
# <a name="allocate"></a>allocate

**Specifico di Microsoft**

L' **`allocate`** identificatore di dichiarazione denomina un segmento di dati in cui verrà allocato l'elemento dati.

## <a name="syntax"></a>Sintassi

> **`__declspec(allocate("`***nomeseg* **`))`** *dichiaratore*

## <a name="remarks"></a>Commenti

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

## <a name="see-also"></a>Vedi anche

[`__declspec`](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
