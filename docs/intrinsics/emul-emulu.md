---
title: __emul, __emulu
ms.date: 11/04/2016
f1_keywords:
- __emulu_cpp
- __emul
- __emul_cpp
- __emulu
helpviewer_keywords:
- __emul intrinsic
- __emulu intrinsic
ms.assetid: 79545236-cca2-40b8-a4e1-8abce9b26311
ms.openlocfilehash: 9144ce4f25d2e8e5554602533c13d5619e15360a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50542454"
---
# <a name="emul-emulu"></a>__emul, __emulu

**Sezione specifica Microsoft**

Consente di eseguire moltiplicazioni di overflow ciò che può contenere un numero intero a 32 bit.

## <a name="syntax"></a>Sintassi

```
__int64 __emul(
   int a,
   int b
);
unsigned __int64 __emulu(
   unsigned int a,
   unsigned int b
);
```

#### <a name="parameters"></a>Parametri

*a*<br/>
[in] Il primo operando integer della moltiplicazione.

*b*<br/>
[in] Il secondo operando integer della moltiplicazione.

## <a name="return-value"></a>Valore restituito

Il risultato della moltiplicazione.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__emul`|x86, x64|
|`__emulu`|x86, x64|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

`__emul` accetta due valori con segno a 32 bit e restituisce il risultato della moltiplicazione come valore intero con segno a 64 bit.

`__emulu` accetta due valori interi senza segno a 32 bit e restituisce il risultato della moltiplicazione come valore intero senza segno a 64 bit.

## <a name="example"></a>Esempio

```
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

```
-268435456 * 2 = -536870912
4294967295 * 251658240 = 1080863910317260800
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)