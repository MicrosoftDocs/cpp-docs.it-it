---
title: allocate
ms.date: 11/04/2016
f1_keywords:
- allocate_cpp
helpviewer_keywords:
- __declspec keyword [C++], allocate
- allocate __declspec keyword
ms.assetid: 67828b31-de60-4c0e-b0a6-ef3aab22641d
ms.openlocfilehash: a2284395b09c34b0d22c4499bf804cfcc3a74c4d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50452520"
---
# <a name="allocate"></a>allocate

**Sezione specifica Microsoft**

Il **allocare** identificatore di dichiarazione denomina un segmento di dati in cui verrà allocato l'elemento di dati.

## <a name="syntax"></a>Sintassi

```
   __declspec(allocate("segname")) declarator
```

## <a name="remarks"></a>Note

Il nome *segname* deve essere dichiarato utilizzando uno dei seguenti pragma:

- [code_seg](../preprocessor/code-seg.md)

- [const_seg](../preprocessor/const-seg.md)

- [data_seg](../preprocessor/data-seg.md)

- [init_seg](../preprocessor/init-seg.md)

- [section](../preprocessor/section.md)

## <a name="example"></a>Esempio

```cpp
// allocate.cpp
#pragma section("mycode", read)
__declspec(allocate("mycode"))  int i = 0;

int main() {
}
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)