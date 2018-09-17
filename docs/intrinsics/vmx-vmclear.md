---
title: vmx_vmclear | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __vmx_vmclear
dev_langs:
- C++
helpviewer_keywords:
- VMCLEAR instruction
- __vmx_vmclear intrinsic
ms.assetid: e3eb98e4-50fc-4c93-9bac-340fd1f0a466
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fd5661a2b6aa257c91babcc3d17b1babb0b4d2c2
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45707161"
---
# <a name="vmxvmclear"></a>__vmx_vmclear
**Sezione specifica Microsoft**  
  
 Inizializza la struttura di controllo della macchina virtuale specificata (VMCS) e imposta lo stato di avvio su `Clear`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
unsigned char __vmx_vmclear(  
   unsigned __int64 *VmcsPhysicalAddress  
);  
```  
  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|*VmcsPhysicalAddress*|[in] Puntatore a una posizione di memoria a 64 bit che contiene l'indirizzo fisico della VMCS da cancellare.|  
  
## <a name="return-value"></a>Valore restituito  
  
|Valore|Significato|  
|-----------|-------------|  
|0|Operazione completata.|  
|1|Operazione non riuscita con stato esteso disponibile in `VM-instruction error field` della VMCS corrente.|  
|2|Operazione non riuscita senza stato disponibile.|  
  
## <a name="remarks"></a>Note  
 Un'applicazione può eseguire un'operazione della macchina virtuale usando il [vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) oppure [__vmx_vmresume](../intrinsics/vmx-vmresume.md) (funzione). Il [vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) funzione può essere utilizzata solo con una VMCS il cui stato di avvio viene `Clear`e il [__vmx_vmresume](../intrinsics/vmx-vmresume.md) funzione può essere utilizzata solo con una VMCS il cui stato di avvio è `Launched`. Di conseguenza, usare il [vmx_vmclear](../intrinsics/vmx-vmclear.md) funzione per impostare lo stato di avvio di una VMCS a `Clear`. Usare la [vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) funzione per la prima operazione della macchina virtuale e il [__vmx_vmresume](../intrinsics/vmx-vmresume.md) funzione per le operazioni successive della macchina virtuale.  
  
 Il `__vmx_vmclear` è equivalente alla funzione il `VMCLEAR` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per altre informazioni, cercare il documento, "Intel Virtualization Technical Specification per l'IA-32 architettura Intel," documento numero C97063-002, il [Intel Corporation](https://software.intel.com/en-us/articles/intel-sdm) sito.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__vmx_vmclear`|X64|  
  
 **File di intestazione** \<intrin. h >  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md)   
 [__vmx_vmresume](../intrinsics/vmx-vmresume.md)