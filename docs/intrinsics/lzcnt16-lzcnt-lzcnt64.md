---
title: __lzcnt16, __lzcnt, __lzcnt64
ms.date: 09/02/2019
f1_keywords:
- __lzcnt64
- __lzcnt16
- __lzcnt
helpviewer_keywords:
- __lzcnt intrinsic
- lzcnt instruction
- lzcnt16 intrinsic
- lzcnt intrinsic
- __lzcnt16 intrinsic
- lzcnt64 intrinsic
- __lzcnt64 intrinsic
ms.assetid: 412113e7-052e-46e5-8bfa-d5ad72abc10e
ms.openlocfilehash: fcd801717974a230fbd19cc7802d8f6a011774f7
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70221797"
---
# <a name="__lzcnt16-__lzcnt-__lzcnt64"></a>__lzcnt16, __lzcnt, __lzcnt64

**Sezione specifica Microsoft**

Conta il numero di zeri iniziali in un intero a 16, 32 o 64 bit.

## <a name="syntax"></a>Sintassi

```C
unsigned short __lzcnt16(
   unsigned short value
);
unsigned int __lzcnt(
   unsigned int value
);
unsigned __int64 __lzcnt64(
   unsigned __int64 value
);
```

### <a name="parameters"></a>Parametri

*value*\
in Unsigned Integer a 16, 32 o 64 bit per l'analisi degli zeri iniziali.

## <a name="return-value"></a>Valore restituito

Numero di bit iniziali zero nel `value` parametro. Se `value` è zero, il valore restituito corrisponde alla dimensione dell'operando di input (16, 32 o 64). Se il bit più significativo di `value` è uno, il valore restituito è zero.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__lzcnt16`|AMD Manipolazione di bit avanzata (ABM)<br /><br /> Intel Haswell|
|`__lzcnt`|AMD Manipolazione di bit avanzata (ABM)<br /><br /> Intel Haswell|
|`__lzcnt64`|AMD Advanced Bit Manipulation (ABM) in modalità a 64 bit.<br /><br /> Intel Haswell|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Ognuna delle funzioni intrinseche genera l' `lzcnt` istruzione.  La dimensione del valore restituito dall' `lzcnt` istruzione è uguale a quella del relativo argomento.  In modalità a 32 bit non sono disponibili registri per utilizzo generico a 64 bit, quindi il 64 bit `lzcnt` non è supportato.

Per determinare il supporto hardware per `lzcnt` l'istruzione, chiamare `__cpuid` l'oggetto `InfoType=0x80000001` intrinseco con e verificare `CPUInfo[2] (ECX)`il bit 5 di. Questo bit sarà 1 se l'istruzione è supportata; in caso contrario, 0. Se si esegue codice che usa la funzione intrinseca su hardware che non `lzcnt` supporta l'istruzione, i risultati sono imprevedibili.

Nei processori Intel che non supportano l' `lzcnt` istruzione, la codifica dei byte di istruzioni viene `bsr` eseguita come (analisi bit inversa). Se la portabilità del codice rappresenta un problema, è consigliabile `_BitScanReverse` utilizzare invece la funzione intrinseca. Per ulteriori informazioni, vedere [_BitScanReverse, _BitScanReverse64](../intrinsics/bitscanreverse-bitscanreverse64.md).

## <a name="example"></a>Esempio

```cpp
// Compile this test with: /EHsc
#include <iostream>
#include <intrin.h>
using namespace std;

int main()
{
  unsigned short us[3] = {0, 0xFF, 0xFFFF};
  unsigned short usr;
  unsigned int   ui[4] = {0, 0xFF, 0xFFFF, 0xFFFFFFFF};
  unsigned int   uir;

  for (int i=0; i<3; i++) {
    usr = __lzcnt16(us[i]);
    cout << "__lzcnt16(0x" << hex << us[i] << ") = " << dec << usr << endl;
  }

  for (int i=0; i<4; i++) {
    uir = __lzcnt(ui[i]);
    cout << "__lzcnt(0x" << hex << ui[i] << ") = " << dec << uir << endl;
  }
}
```

```Output
__lzcnt16(0x0) = 16
__lzcnt16(0xff) = 8
__lzcnt16(0xffff) = 0
__lzcnt(0x0) = 32
__lzcnt(0xff) = 24
__lzcnt(0xffff) = 16
__lzcnt(0xffffffff) = 0
```

**Fine sezione specifica Microsoft**

Parti di questo contenuto sono Copyright 2007 di Advanced Micro Devices, Inc. Tutti i diritti sono riservati. Riprodotto con l'autorizzazione da Advanced Micro Devices, Inc.

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
