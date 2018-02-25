---
title: __vmx_vmwrite | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- __vmx_vmwrite
dev_langs:
- C++
helpviewer_keywords:
- __vmx_vmwrite intrinsic
- VMWRITE instruction
ms.assetid: 88139792-fd3f-4210-97ca-9d84f43a0252
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 08cd68256e1219df36ce6f9ea22165938fba44af
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
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
|[in] `Field`|Il campo VMCS da scrivere.|  
|[in] `FieldValue`|Valore da scrivere nel campo VMCS.|  
  
## <a name="return-value"></a>Valore restituito  
 0  
 Operazione completata.  
  
 1  
 Operazione non riuscita con stato esteso disponibile in `VM-instruction error field` della VMCS corrente.  
  
 2  
 Operazione non riuscita senza stato disponibile.  
  
## <a name="remarks"></a>Note  
 Il `__vmx_vmwrite` è equivalente alla funzione di `VMWRITE` istruzioni in linguaggio macchina. Il valore di `Field` parametro è un indice codificato campo descritto nella documentazione di Intel. Per ulteriori informazioni, cercare il documento, "Intel Virtualization tecnica specifica per l'architettura IA-32 Intel," documento C97063-002 numero il [Intel Corporation](http://go.microsoft.com/fwlink/p/?linkid=127) del sito e quindi consultare l'appendice C di tale documento.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__vmx_vmwrite`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin. h >  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [__vmx_vmread](../intrinsics/vmx-vmread.md)