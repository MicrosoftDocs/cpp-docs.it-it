---
title: __vmx_vmwrite
ms.date: 09/02/2019
f1_keywords:
- __vmx_vmwrite
helpviewer_keywords:
- __vmx_vmwrite intrinsic
- VMWRITE instruction
ms.assetid: 88139792-fd3f-4210-97ca-9d84f43a0252
ms.openlocfilehash: cdc5590858f160db24bf75ef11c8f20b204a3152
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70219400"
---
# <a name="__vmx_vmwrite"></a>__vmx_vmwrite

**Sezione specifica Microsoft**

Scrive il valore specificato nel campo specificato nella struttura di controllo della macchina virtuale corrente (VMCS).

## <a name="syntax"></a>Sintassi

```C
unsigned char __vmx_vmwrite(
   size_t Field,
   size_t FieldValue
);
```

### <a name="parameters"></a>Parametri

*Campo*\
in Campo VMCS da scrivere.

*FieldValue*\
in Valore da scrivere nel campo VMCS.

## <a name="return-value"></a>Valore restituito

0
Operazione completata.

1
Operazione non riuscita con stato esteso disponibile in `VM-instruction error field` della VMCS corrente.

2
Operazione non riuscita senza stato disponibile.

## <a name="remarks"></a>Note

La funzione `__vmx_vmwrite` è equivalente alle `VMWRITE` istruzioni in linguaggio macchina. Il valore del `Field` parametro è un indice di campo codificato descritto nella documentazione di Intel. Per ulteriori informazioni, cercare l'Appendice C della "specifica tecnica di virtualizzazione Intel per l'architettura Intel IA-32" nel sito di [Intel Corporation](https://software.intel.com/articles/intel-sdm) .

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__vmx_vmwrite`|X64|

**File di intestazione** \<> intrin. h

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__vmx_vmread](../intrinsics/vmx-vmread.md)
