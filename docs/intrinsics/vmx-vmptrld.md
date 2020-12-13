---
description: 'Altre informazioni su: __vmx_vmptrld'
title: __vmx_vmptrld
ms.date: 09/02/2019
f1_keywords:
- __vmx_vmptrld
helpviewer_keywords:
- __vmx_vmptrld intrinsic
- VMPTRLD instruction
ms.assetid: 95c9ec5b-1a81-41ba-983e-327bd6a65fcb
ms.openlocfilehash: 850311e4423940ebd34a203e6d43ec961b3258f4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333531"
---
# <a name="__vmx_vmptrld"></a>__vmx_vmptrld

**Specifico di Microsoft**

Carica il puntatore alla struttura di controllo della macchina virtuale (VMCS) corrente dall'indirizzo specificato.

## <a name="syntax"></a>Sintassi

```C
int __vmx_vmptrld(
   unsigned __int64 *VmcsPhysicalAddress
);
```

### <a name="parameters"></a>Parametri

*VmcsPhysicalAddress*\
in Indirizzo in cui è archiviato il puntatore VMCS.

## <a name="return-value"></a>Valore restituito

0
Operazione completata.

1
Operazione non riuscita con stato esteso disponibile in `VM-instruction error field` della VMCS corrente.

2
Operazione non riuscita senza stato disponibile.

## <a name="remarks"></a>Commenti

Il puntatore VMCS è un indirizzo fisico a 64 bit.

La funzione `__vmx_vmptrld` è equivalente alle `VMPTRLD` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per ulteriori informazioni, cercare il documento "specifica tecnica di virtualizzazione Intel per l'architettura Intel IA-32", numero documento C97063-002, nel sito [Intel Corporation](https://software.intel.com/articles/intel-sdm) .

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__vmx_vmptrld`|x64|

**File di intestazione** \<intrin.h>

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)\
[__vmx_vmptrst](../intrinsics/vmx-vmptrst.md)
