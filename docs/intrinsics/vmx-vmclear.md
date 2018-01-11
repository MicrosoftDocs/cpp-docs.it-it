---
title: __vmx_vmclear | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: __vmx_vmclear
dev_langs: C++
helpviewer_keywords:
- VMCLEAR instruction
- __vmx_vmclear intrinsic
ms.assetid: e3eb98e4-50fc-4c93-9bac-340fd1f0a466
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: af15108bfa2bce0af3f442d5fdd6dceddbd6cca9
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
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
|[in] `VmcsPhysicalAddress`|Puntatore a una posizione di memoria a 64 bit che contiene l'indirizzo fisico della VMCS da cancellare.|  
  
## <a name="return-value"></a>Valore restituito  
  
|Valore|Significato|  
|-----------|-------------|  
|0|Operazione completata.|  
|1|Operazione non riuscita con stato esteso disponibile in `VM-instruction error field` della VMCS corrente.|  
|2|Operazione non riuscita senza stato disponibile.|  
  
## <a name="remarks"></a>Note  
 Un'applicazione può eseguire un'operazione di accesso VM utilizzando il [__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) o [__vmx_vmresume](../intrinsics/vmx-vmresume.md) (funzione). Il [__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) funzione può essere utilizzata solo con una VMCS il cui stato di avvio è `Clear`e [__vmx_vmresume](../intrinsics/vmx-vmresume.md) funzione può essere utilizzata solo con una VMCS il cui stato di avvio è `Launched`. Di conseguenza, utilizzare il [__vmx_vmclear](../intrinsics/vmx-vmclear.md) funzione per impostare lo stato di avvio di una VMCS a `Clear`. Utilizzare il [__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) funzione per la prima operazione immettere VM e [__vmx_vmresume](../intrinsics/vmx-vmresume.md) funzione per le operazioni di accesso VM successive.  
  
 Il `__vmx_vmclear` è equivalente alla funzione di `VMCLEAR` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per ulteriori informazioni, cercare il documento, "Intel Virtualization tecnica specifica per l'architettura IA-32 Intel," documento C97063-002 numero il [Intel Corporation](http://go.microsoft.com/fwlink/p/?linkid=127) sito.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__vmx_vmclear`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin. h >  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md)   
 [__vmx_vmresume](../intrinsics/vmx-vmresume.md)