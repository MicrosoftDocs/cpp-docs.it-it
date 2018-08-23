---
title: __vmx_vmptrld | Microsoft Docs
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
ms.openlocfilehash: f12ff4f0f109ac97f9e9e2e4f8d800455159a10b
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42541426"
---
# <a name="vmxvmptrld"></a>__vmx_vmptrld
**Sezione specifica Microsoft**  
  
 Carica il puntatore alla struttura di controllo di una macchina virtuale corrente (VMCS) dall'indirizzo specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int __vmx_vmptrld(   
   unsigned __int64 *VmcsPhysicalAddress   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] *`VmcsPhysicalAddress`  
 L'indirizzo in cui è archiviato il puntatore VMCS.  
  
## <a name="return-value"></a>Valore restituito  
 0  
 Operazione completata.  
  
 1  
 Operazione non riuscita con stato esteso disponibile in `VM-instruction error field` della VMCS corrente.  
  
 2  
 Operazione non riuscita senza stato disponibile.  
  
## <a name="remarks"></a>Note  
 Il puntatore VMCS è un indirizzo fisico a 64 bit.  
  
 Il `__vmx_vmptrld` è equivalente alla funzione il `VMPTRLD` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per altre informazioni, cercare il documento, "Intel Virtualization Technical Specification per l'IA-32 architettura Intel," documento numero C97063-002, il [Intel Corporation](http://go.microsoft.com/fwlink/p/?linkid=127) sito.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__vmx_vmptrld`|X64|  
  
 **File di intestazione** \<intrin. h >  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [__vmx_vmptrst](../intrinsics/vmx-vmptrst.md)