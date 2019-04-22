---
title: _AddressOfReturnAddress
ms.date: 11/04/2016
f1_keywords:
- _AddressOfReturnAddress_cpp
- _AddressOfReturnAddress
helpviewer_keywords:
- _AddressOfReturnAddress intrinsic
- AddressOfReturnAddress intrinsic
ms.assetid: c7e10b8c-445e-4236-a602-e2d90200f70a
ms.openlocfilehash: 79d1e4645c60fb4231a53aaefdcf1fe0f3c876c4
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59024777"
---
# <a name="addressofreturnaddress"></a>_AddressOfReturnAddress

**Sezione specifica Microsoft**

Fornisce l'indirizzo della posizione di memoria che contiene l'indirizzo restituito della funzione corrente. Questo indirizzo non può essere utilizzato per accedere altre posizioni di memoria (ad esempio, gli argomenti della funzione).

## <a name="syntax"></a>Sintassi

```
void * _AddressOfReturnAddress();
```

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`_AddressOfReturnAddress`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Quando `_AddressOfReturnAddress` viene usato in un programma compilato con [/clr](../build/reference/clr-common-language-runtime-compilation.md), la funzione contenente il `_AddressOfReturnAddress` chiamata viene compilata come una funzione nativa. Quando una funzione compilata come gestiti le chiamate in cui la funzione contenente `_AddressOfReturnAddress`, `_AddressOfReturnAddress` potrebbero non comportarsi come previsto.

Questa routine è disponibile solo come funzione intrinseca.

## <a name="example"></a>Esempio

```
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

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)