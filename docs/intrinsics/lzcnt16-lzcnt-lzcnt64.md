---
title: __lzcnt16, __lzcnt, __lzcnt64
ms.date: 11/04/2016
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
ms.openlocfilehash: 7b1e499eff8c8c7de59dc6f96cb1060ce845e27d
ms.sourcegitcommit: afd6fac7c519dbc47a4befaece14a919d4e0a8a2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2018
ms.locfileid: "51523455"
---
# <a name="lzcnt16-lzcnt-lzcnt64"></a>__lzcnt16, __lzcnt, __lzcnt64

**Sezione specifica Microsoft**

Conta il numero di leader zeri in 16, 32 o a 64 bit.

## <a name="syntax"></a>Sintassi

```
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

#### <a name="parameters"></a>Parametri

*valore*<br/>
[in] Il 16, 32 o intero senza segno a 64 bit a cercare di zeri iniziali.

## <a name="return-value"></a>Valore restituito

Il numero di bit in zero iniziali di `value` parametro. Se `value` è uguale a zero, il valore restituito è la dimensione dell'operando di input (16, 32 o 64). Se più bit significativo di `value` è 1, il valore restituito è uguale a zero.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__lzcnt16`|AMD: Manipolazione dei Bit avanzate (ABM)<br /><br /> Intel: Haswell|
|`__lzcnt`|AMD: Manipolazione dei Bit avanzate (ABM)<br /><br /> Intel: Haswell|
|`__lzcnt64`|AMD: Avanzate di manipolazione dei Bit (ABM) in modalità a 64 bit.<br /><br /> Intel: Haswell|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Ognuna di queste funzioni intrinseche genera il `lzcnt` (istruzione).  Le dimensioni del valore che la `lzcnt` istruzione restituisce un valore è quello utilizzato per la dimensione del relativo argomento.  In modalità a 32 bit non è nessun a 64 bit per utilizzo generico registri, pertanto non 64-bit `lzcnt`.

Per determinare il supporto hardware per il `lzcnt` chiamata di istruzione il `__cpuid` intrinseco con `InfoType=0x80000001` e bit di controllo 5 di `CPUInfo[2] (ECX)`. Questo bit sarà 1 se l'istruzione è supportata e 0 in caso contrario. Se si esegue codice che usa questa funzione intrinseca in hardware che non supporta il `lzcnt` (istruzione), i risultati sono imprevedibili.

Nei processori Intel che non supportano il `lzcnt` (istruzione), la codifica dei byte (istruzione) viene eseguita come `bsr` (bit analisi inversa). Se la portabilità del codice costituisce un problema, provare a usare il `_BitScanReverse` intrinseca invece. Per altre informazioni, vedere [_BitScanReverse, _BitScanReverse64](../intrinsics/bitscanreverse-bitscanreverse64.md).

## <a name="example"></a>Esempio

```
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

Parti del contenuto sono Copyright 2007 avanzate Micro dispositivi, Inc. Tutti i diritti sono riservati. Riprodotto con l'autorizzazione di Advanced Micro dispositivi, Inc.

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
