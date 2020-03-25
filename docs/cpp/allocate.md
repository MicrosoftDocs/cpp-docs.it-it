---
title: allocate
ms.date: 11/04/2016
f1_keywords:
- allocate_cpp
helpviewer_keywords:
- __declspec keyword [C++], allocate
- allocate __declspec keyword
ms.assetid: 67828b31-de60-4c0e-b0a6-ef3aab22641d
ms.openlocfilehash: 6d9429aa7c079f0f99a936019e5945092dc1f006
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80181525"
---
# <a name="allocate"></a>allocate

**Sezione specifica Microsoft**

L'identificatore di Dichiarazione **allocate** assegna un nome a un segmento di dati in cui verrà allocato l'elemento dati.

## <a name="syntax"></a>Sintassi

```
   __declspec(allocate("segname")) declarator
```

## <a name="remarks"></a>Osservazioni

Il nome *nomeseg* deve essere dichiarato utilizzando uno dei seguenti pragma:

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
