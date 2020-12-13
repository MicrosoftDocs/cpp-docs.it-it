---
description: 'Altre informazioni su: __vmx_on'
title: __vmx_on
ms.date: 09/02/2019
f1_keywords:
- __vmx_on
helpviewer_keywords:
- VMXON instruction
- __vmx_on intrinsic
ms.assetid: 16804991-6a75-4adf-8ec2-bc95acfa4801
ms.openlocfilehash: a1e9171fe64a239b592f0d27ec49d4159b46523d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333568"
---
# <a name="__vmx_on"></a>__vmx_on

**Specifico di Microsoft**

Attiva l'operazione di estensioni della macchina virtuale (VMX) nel processore.

## <a name="syntax"></a>Sintassi

```C
unsigned char __vmx_on(
   unsigned __int64 *VmsSupportPhysicalAddress
);
```

### <a name="parameters"></a>Parametri

*VmsSupportPhysicalAddress*\
in Puntatore a un indirizzo fisico a 64 bit che punta a una struttura di controllo della macchina virtuale (VMCS).

## <a name="return-value"></a>Valore restituito

|Valore|Significato|
|-----------|-------------|
|0|Operazione completata.|
|1|Operazione non riuscita con stato esteso disponibile in `VM-instruction error field` della VMCS corrente.|
|2|Operazione non riuscita senza stato disponibile.|

## <a name="remarks"></a>Commenti

La `__vmx_on` funzione corrisponde all' `VMXON` istruzione del computer. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per ulteriori informazioni, cercare il documento "specifica tecnica di virtualizzazione Intel per l'architettura Intel IA-32", numero documento C97063-002, nel sito [Intel Corporation](https://software.intel.com/articles/intel-sdm) .

## <a name="requirements"></a>Requisiti

|Intrinsic|Architettura|
|---------------|------------------|
|`__vmx_on`|x64|

**File di intestazione** \<intrin.h>

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
