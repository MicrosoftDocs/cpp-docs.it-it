---
title: __vmx_vmwrite | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __vmx_vmwrite
dev_langs:
- C++
helpviewer_keywords:
- __vmx_vmwrite intrinsic
- VMWRITE instruction
ms.assetid: 88139792-fd3f-4210-97ca-9d84f43a0252
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f333a37972a31b5815a05797bfabb603f5a26947
ms.sourcegitcommit: a738519aa491a493a8f213971354356c0e6a5f3a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/05/2018
ms.locfileid: "48820680"
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
|*Valore FieldValue*|[in] Valore da scrivere nel campo VMCS.|

## <a name="return-value"></a>Valore restituito

0 ha avuto esito positivo dell'operazione.

1. l'operazione non riuscita con stato esteso disponibile nel `VM-instruction error field` della VMCS corrente.

2. l'operazione non riuscita senza stato disponibile.

## <a name="remarks"></a>Note

Il `__vmx_vmwrite` è equivalente alla funzione il `VMWRITE` istruzioni in linguaggio macchina. Il valore della `Field` parametro è un indice del campo codificato che è descritti nella documentazione di Intel. Per altre informazioni, cercare il documento, "Intel Virtualization Technical Specification per l'IA-32 architettura Intel," documento numero C97063-002, il [Intel Corporation](https://software.intel.com/articles/intel-sdm) del sito e quindi vedere Appendice C di tale documento.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__vmx_vmwrite`|X64|

**File di intestazione** \<intrin. h >

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[__vmx_vmread](../intrinsics/vmx-vmread.md)