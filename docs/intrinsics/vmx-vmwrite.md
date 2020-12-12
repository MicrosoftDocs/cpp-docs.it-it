---
description: 'Altre informazioni su: __vmx_vmwrite'
title: __vmx_vmwrite
ms.date: 09/02/2019
f1_keywords:
- __vmx_vmwrite
helpviewer_keywords:
- __vmx_vmwrite intrinsic
- VMWRITE instruction
ms.assetid: 88139792-fd3f-4210-97ca-9d84f43a0252
ms.openlocfilehash: d8902d51b05fa96faf22cbb6d80400e1f67c5f3e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97257303"
---
# <a name="__vmx_vmwrite"></a>__vmx_vmwrite

**Specifico di Microsoft**

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

## <a name="remarks"></a>Commenti

La funzione `__vmx_vmwrite` è equivalente alle `VMWRITE` istruzioni in linguaggio macchina. Il valore del `Field` parametro è un indice di campo codificato descritto nella documentazione di Intel. Per ulteriori informazioni, cercare l'Appendice C della "specifica tecnica di virtualizzazione Intel per l'architettura Intel IA-32" nel sito di [Intel Corporation](https://software.intel.com/articles/intel-sdm) .

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__vmx_vmwrite`|x64|

**File di intestazione** \<intrin.h>

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__vmx_vmread](../intrinsics/vmx-vmread.md)
