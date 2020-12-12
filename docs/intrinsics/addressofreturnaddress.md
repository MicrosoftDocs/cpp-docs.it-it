---
description: 'Altre informazioni su: _AddressOfReturnAddress'
title: _AddressOfReturnAddress
ms.date: 09/02/2019
f1_keywords:
- _AddressOfReturnAddress_cpp
- _AddressOfReturnAddress
helpviewer_keywords:
- _AddressOfReturnAddress intrinsic
- AddressOfReturnAddress intrinsic
ms.assetid: c7e10b8c-445e-4236-a602-e2d90200f70a
ms.openlocfilehash: 1a79ccbe7ddc2865d8225a62cd0d294f0bc66b4a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331927"
---
# <a name="_addressofreturnaddress"></a>_AddressOfReturnAddress

**Specifico di Microsoft**

Fornisce l'indirizzo della posizione di memoria che contiene l'indirizzo mittente della funzione corrente. Questo indirizzo non può essere usato per accedere ad altre posizioni di memoria, ad esempio gli argomenti della funzione.

## <a name="syntax"></a>Sintassi

```C
void * _AddressOfReturnAddress();
```

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`_AddressOfReturnAddress`|x86, x64, ARM, ARM64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

Quando `_AddressOfReturnAddress` viene usato in un programma compilato con [/CLR](../build/reference/clr-common-language-runtime-compilation.md), la funzione che contiene la `_AddressOfReturnAddress` chiamata viene compilata come funzione nativa. Quando una funzione compilata come chiamata gestita nella funzione che contiene `_AddressOfReturnAddress` , `_AddressOfReturnAddress` potrebbe non comportarsi come previsto.

Questa routine è disponibile solo come funzione intrinseca.

## <a name="example"></a>Esempio

```cpp
// compiler_intrinsics_AddressOfReturnAddress.cpp
// processor: x86, x64
#include <stdio.h>
#include <intrin.h>

// This function will print three values:
//   (1) The address retrieved from _AddressOfReturnAdress
//   (2) The return address stored at the location returned in (1)
//   (3) The return address retrieved the _ReturnAddress* intrinsic
// Note that (2) and (3) should be the same address.
__declspec(noinline)
void func() {
   void* pvAddressOfReturnAddress = _AddressOfReturnAddress();
   printf_s("%p\n", pvAddressOfReturnAddress);
   printf_s("%p\n", *((void**) pvAddressOfReturnAddress));
   printf_s("%p\n", _ReturnAddress());
}

int main() {
   func();
}
```

```Output
0012FF78
00401058
00401058
```

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[Parole chiave](../cpp/keywords-cpp.md)
