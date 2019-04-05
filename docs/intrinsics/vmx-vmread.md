---
title: __vmx_vmread
ms.date: 11/04/2016
f1_keywords:
- __vmx_vmread
helpviewer_keywords:
- VMREAD instruction
- __vmx_vmread intrinsic
ms.assetid: 08bdd7a0-6435-4ea6-b9a0-f592d870e5aa
ms.openlocfilehash: 5c7b72ba3bf1bd60324704b774bcedaf5612240f
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59028386"
---
# <a name="vmxvmread"></a>__vmx_vmread

**Sezione specifica Microsoft**

Legge un campo specificato dalla struttura di controllo macchina virtuale corrente (VMCS) e lo inserisce nella posizione specificata.

## <a name="syntax"></a>Sintassi

```
unsigned char __vmx_vmread(
   size_t Field,
   size_t *FieldValue
);
```

#### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*Campo*|[in] Il campo VMCS da leggere.|
|*FieldValue*|[in] Leggere un puntatore alla posizione per archiviare il valore del campo VMCS specificato da di `Field` parametro.|

## <a name="return-value"></a>Valore restituito

|Value|Significato|
|-----------|-------------|
|0|Operazione completata.|
|1|Operazione non riuscita con stato esteso disponibile in `VM-instruction error field` della VMCS corrente.|
|2|Operazione non riuscita senza stato disponibile.|

## <a name="remarks"></a>Note

La funzione `__vmx_vmread` è equivalente alle `VMREAD` istruzioni in linguaggio macchina. Il valore della `Field` parametro è un indice del campo codificato che è descritti nella documentazione di Intel. Per altre informazioni, cercare il documento, "Intel Virtualization Technical Specification per l'IA-32 architettura Intel," documento numero C97063-002, il [Intel Corporation](https://software.intel.com/articles/intel-sdm) del sito, quindi vedere Appendice C di documento .

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__vmx_vmread`|X64|

**File di intestazione** \<intrin. h >

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[__vmx_vmwrite](../intrinsics/vmx-vmwrite.md)