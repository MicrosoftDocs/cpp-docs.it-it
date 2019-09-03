---
title: __vmx_vmread
ms.date: 09/02/2019
f1_keywords:
- __vmx_vmread
helpviewer_keywords:
- VMREAD instruction
- __vmx_vmread intrinsic
ms.assetid: 08bdd7a0-6435-4ea6-b9a0-f592d870e5aa
ms.openlocfilehash: 409835ac29d6f2e839de62291cc5b142166a465c
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70219440"
---
# <a name="__vmx_vmread"></a>__vmx_vmread

**Sezione specifica Microsoft**

Legge un campo specificato dalla struttura di controllo della macchina virtuale (VMCS) corrente e lo inserisce nella posizione specificata.

## <a name="syntax"></a>Sintassi

```C
unsigned char __vmx_vmread(
   size_t Field,
   size_t *FieldValue
);
```

### <a name="parameters"></a>Parametri

*Campo*\
in Campo VMCS da leggere.

*FieldValue*\
in Puntatore alla posizione in cui archiviare il valore letto dal campo VMCS specificato dal `Field` parametro.

## <a name="return-value"></a>Valore restituito

|Value|Significato|
|-----------|-------------|
|0|Operazione completata.|
|1|Operazione non riuscita con stato esteso disponibile in `VM-instruction error field` della VMCS corrente.|
|2|Operazione non riuscita senza stato disponibile.|

## <a name="remarks"></a>Note

La funzione `__vmx_vmread` è equivalente alle `VMREAD` istruzioni in linguaggio macchina. Il valore del `Field` parametro è un indice di campo codificato descritto nella documentazione di Intel. Per ulteriori informazioni, cercare l'Appendice C della "specifica tecnica di virtualizzazione Intel per l'architettura Intel IA-32" nel sito di [Intel Corporation](https://software.intel.com/articles/intel-sdm) .

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__vmx_vmread`|X64|

**File di intestazione** \<> intrin. h

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__vmx_vmwrite](../intrinsics/vmx-vmwrite.md)
