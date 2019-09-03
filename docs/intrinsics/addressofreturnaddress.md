---
title: _AddressOfReturnAddress
ms.date: 09/02/2019
f1_keywords:
- _AddressOfReturnAddress_cpp
- _AddressOfReturnAddress
helpviewer_keywords:
- _AddressOfReturnAddress intrinsic
- AddressOfReturnAddress intrinsic
ms.assetid: c7e10b8c-445e-4236-a602-e2d90200f70a
ms.openlocfilehash: d705029c30fdbc117c4c6e96923691e43e072e23
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70221066"
---
# <a name="_addressofreturnaddress"></a>_AddressOfReturnAddress

**Sezione specifica Microsoft**

Fornisce l'indirizzo della posizione di memoria che contiene l'indirizzo mittente della funzione corrente. Questo indirizzo non può essere usato per accedere ad altre posizioni di memoria, ad esempio gli argomenti della funzione.

## <a name="syntax"></a>Sintassi

```C
void * _AddressOfReturnAddress();
```

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`_AddressOfReturnAddress`|x86, x64, ARM, ARM64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Quando `_AddressOfReturnAddress` viene usato in un programma compilato con [/CLR](../build/reference/clr-common-language-runtime-compilation.md), la funzione che contiene `_AddressOfReturnAddress` la chiamata viene compilata come funzione nativa. Quando una funzione compilata come chiamata gestita nella funzione `_AddressOfReturnAddress`che `_AddressOfReturnAddress` contiene, potrebbe non comportarsi come previsto.

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

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[Parole chiave](../cpp/keywords-cpp.md)
