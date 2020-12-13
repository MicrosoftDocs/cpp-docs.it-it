---
description: 'Altre informazioni su: __emul, __emulu'
title: __emul, __emulu
ms.date: 09/02/2019
f1_keywords:
- __emulu_cpp
- __emul
- __emul_cpp
- __emulu
helpviewer_keywords:
- __emul intrinsic
- __emulu intrinsic
ms.assetid: 79545236-cca2-40b8-a4e1-8abce9b26311
ms.openlocfilehash: cdcbd14e4e72bcaf7d2c7fd5f098a291e32227cc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97337052"
---
# <a name="__emul-__emulu"></a>__emul, __emulu

**Specifico di Microsoft**

Esegue le moltiplicazioni che possono essere rilevate da un intero a 32 bit.

## <a name="syntax"></a>Sintassi

```C
__int64 __emul(
   int a,
   int b
);
unsigned __int64 __emulu(
   unsigned int a,
   unsigned int b
);
```

### <a name="parameters"></a>Parametri

*un*\
in Primo operando Integer della moltiplicazione.

*b*\
in Secondo operando Integer della moltiplicazione.

## <a name="return-value"></a>Valore restituito

Risultato della moltiplicazione.

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__emul`|x86, x64|
|`__emulu`|x86, x64|

**File di intestazione** \<intrin.h>

## <a name="remarks"></a>Commenti

`__emul` accetta valori con segno a 2 32 bit e restituisce il risultato della moltiplicazione come valore intero con segno a 64 bit.

`__emulu` accetta valori Unsigned Integer a 2 32 bit e restituisce il risultato della moltiplicazione come valore Unsigned Integer a 64 bit.

## <a name="example"></a>Esempio

```cpp
// emul.cpp
// compile with: /EHsc
// processor: x86, x64
#include <iostream>
#include <intrin.h>
using namespace std;

#pragma intrinsic(__emul)
#pragma intrinsic(__emulu)

int main()
{
   int a = -268435456;
   int b = 2;

   __int64 result = __emul(a, b);

   cout << a << " * " << b << " = " << result << endl;

   unsigned int ua = 0xFFFFFFFF; // Dec value: 4294967295
   unsigned int ub = 0xF000000;  // Dec value: 251658240

   unsigned __int64 uresult = __emulu(ua, ub);

   cout << ua << " * " << ub << " = " << uresult << endl;

}
```

## <a name="output"></a>Output

```Output
-268435456 * 2 = -536870912
4294967295 * 251658240 = 1080863910317260800
```

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
