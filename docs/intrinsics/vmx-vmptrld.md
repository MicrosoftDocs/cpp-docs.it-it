---
title: __vmx_vmptrld | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __vmx_vmptrld
dev_langs:
- C++
helpviewer_keywords:
- __vmx_vmptrld intrinsic
- VMPTRLD instruction
ms.assetid: 95c9ec5b-1a81-41ba-983e-327bd6a65fcb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 599e15414a944602ee196f3910a1c5dd561c906d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="vmxvmptrld"></a>__vmx_vmptrld
**Sezione specifica Microsoft**  
  
 Carica il puntatore alla struttura di controllo di macchina virtuale corrente (VMCS) dall'indirizzo specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int __vmx_vmptrld(   
   unsigned __int64 *VmcsPhysicalAddress   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] *`VmcsPhysicalAddress`  
 L'indirizzo in cui è memorizzato il puntatore VMCS.  
  
## <a name="return-value"></a>Valore restituito  
 0  
 Operazione completata.  
  
 1  
 Operazione non riuscita con stato esteso disponibile in `VM-instruction error field` della VMCS corrente.  
  
 2  
 Operazione non riuscita senza stato disponibile.  
  
## <a name="remarks"></a>Note  
 Il puntatore VMCS è un indirizzo fisico a 64 bit.  
  
 Il `__vmx_vmptrld` è equivalente alla funzione di `VMPTRLD` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per ulteriori informazioni, cercare il documento, "Intel Virtualization tecnica specifica per l'architettura IA-32 Intel," documento C97063-002 numero il [Intel Corporation](http://go.microsoft.com/fwlink/p/?linkid=127) sito.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__vmx_vmptrld`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin. h >  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [__vmx_vmptrst](../intrinsics/vmx-vmptrst.md)