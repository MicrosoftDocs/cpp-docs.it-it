---
title: __vmx_vmlaunch | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __vmx_vmlaunch
dev_langs:
- C++
helpviewer_keywords:
- VMLAUNCH instruction
- __vmx_vmlaunch intrinsic
ms.assetid: 708f7c38-b7c1-4ee7-bfc4-0daeb9cc9360
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 926195aa8dc612d3972634f8140ce3fff753a48f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33335023"
---
# <a name="vmxvmlaunch"></a>__vmx_vmlaunch
**Sezione specifica Microsoft**  
  
 Posiziona l'applicazione chiamante in stato di operazione non radice VMX (invio di VM) utilizzando la struttura di controllo di macchina virtuale corrente (VMCS).  
  
## <a name="syntax"></a>Sintassi  
  
```  
unsigned char __vmx_vmlaunch(  
   void);  
```  
  
## <a name="return-value"></a>Valore restituito  
  
|Valore|Significato|  
|-----------|-------------|  
|0|Operazione completata.|  
|1|Operazione non riuscita con stato esteso disponibile in `VM-instruction error field` della VMCS corrente.|  
|2|Operazione non riuscita senza stato disponibile.|  
  
## <a name="remarks"></a>Note  
 Un'applicazione può eseguire un'operazione di accesso VM utilizzando il [__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) o [__vmx_vmresume](../intrinsics/vmx-vmresume.md) (funzione). Il [__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) funzione può essere utilizzata solo con una VMCS il cui stato di avvio è `Clear`e [__vmx_vmresume](../intrinsics/vmx-vmresume.md) funzione può essere utilizzata solo con una VMCS il cui stato di avvio è `Launched`. Di conseguenza, utilizzare il [__vmx_vmclear](../intrinsics/vmx-vmclear.md) funzione per impostare lo stato di avvio di una VMCS a `Clear`e quindi usare il [__vmx_vmlaunch](../intrinsics/vmx-vmlaunch.md) funzione per la prima operazione di VM-invio e la [__vmx_vmresume](../intrinsics/vmx-vmresume.md) funzione per le operazioni di accesso VM successive.  
  
 Il `__vmx_vmlaunch` è equivalente alla funzione di `VMLAUNCH` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per ulteriori informazioni, cercare il documento, "Intel Virtualization tecnica specifica per l'architettura IA-32 Intel," documento C97063-002 numero il [Intel Corporation](http://go.microsoft.com/fwlink/p/?linkid=127) sito.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__vmx_vmlaunch`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin. h >  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [__vmx_vmresume](../intrinsics/vmx-vmresume.md)   
 [__vmx_vmclear](../intrinsics/vmx-vmclear.md)