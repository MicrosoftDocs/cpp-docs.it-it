---
title: __vmx_vmwrite
ms.date: 11/04/2016
f1_keywords:
- __vmx_vmwrite
helpviewer_keywords:
- __vmx_vmwrite intrinsic
- VMWRITE instruction
ms.assetid: 88139792-fd3f-4210-97ca-9d84f43a0252
ms.openlocfilehash: e52b1f181f00ce013a111d1a5a62abeff544e20a
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59037510"
---
# <a name="vmxvmwrite"></a>__vmx_vmwrite

**Sezione specifica Microsoft**

Scrive il valore specificato per il campo specificato nella struttura di controllo macchina virtuale corrente (VMCS).

## <a name="syntax"></a>Sintassi

```
unsigned char __vmx_vmwrite(
   size_t Field,
   size_t FieldValue
);
```

#### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Campo*|[in] Il campo VMCS da scrivere.|
|*FieldValue*|[in] Valore da scrivere nel campo VMCS.|

## <a name="return-value"></a>Valore restituito

0 ha avuto esito positivo dell'operazione.

1. l'operazione non riuscita con stato esteso disponibile nel `VM-instruction error field` della VMCS corrente.

2. l'operazione non riuscita senza stato disponibile.

## <a name="remarks"></a>Note

La funzione `__vmx_vmwrite` è equivalente alle `VMWRITE` istruzioni in linguaggio macchina. Il valore della `Field` parametro è un indice del campo codificato che è descritti nella documentazione di Intel. Per altre informazioni, cercare il documento, "Intel Virtualization Technical Specification per l'IA-32 architettura Intel," documento numero C97063-002, il [Intel Corporation](https://software.intel.com/articles/intel-sdm) del sito e quindi vedere Appendice C di tale documento.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__vmx_vmwrite`|X64|

**File di intestazione** \<intrin. h >

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[__vmx_vmread](../intrinsics/vmx-vmread.md)