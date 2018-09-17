---
title: __vmx_on | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __vmx_on
dev_langs:
- C++
helpviewer_keywords:
- VMXON instruction
- __vmx_on intrinsic
ms.assetid: 16804991-6a75-4adf-8ec2-bc95acfa4801
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9cefe61fc6fb651933a76cfc36b3039d48ea9de9
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45713401"
---
# <a name="vmxon"></a>__vmx_on
**Sezione specifica Microsoft**  
  
 Attiva l'operazione della macchina virtuale (VMX) le estensioni del processore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
unsigned char __vmx_on(  
   unsigned __int64 *VmsSupportPhysicalAddress  
);  
```  
  
#### <a name="parameters"></a>Parametri  
*VmsSupportPhysicalAddress*<br/>
[in] Puntatore a un indirizzo fisico a 64 bit che punta a una struttura di controllo di una macchina virtuale (VMCS).  
  
## <a name="return-value"></a>Valore restituito  
  
|Valore|Significato|  
|-----------|-------------|  
|0|Operazione completata.|  
|1|Operazione non riuscita con stato esteso disponibile in `VM-instruction error field` della VMCS corrente.|  
|2|Operazione non riuscita senza stato disponibile.|  
  
## <a name="remarks"></a>Note  
 Il `__vmx_on` corrisponde all'impostazione di `VMXON` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per altre informazioni, cercare il documento, "Intel Virtualization Technical Specification per l'IA-32 architettura Intel," documento numero C97063-002, il [Intel Corporation](https://software.intel.com/en-us/articles/intel-sdm) sito.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__vmx_on`|X64|  
  
 **File di intestazione** \<intrin. h >  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)