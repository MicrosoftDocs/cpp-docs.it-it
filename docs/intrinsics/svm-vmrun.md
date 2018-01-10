---
title: __svm_vmrun | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: __svm_vmrun
dev_langs: C++
helpviewer_keywords:
- __svm_vmrun intrinsic
- VMRUN instruction
ms.assetid: ae98a781-fc17-47b2-b40f-86fcebf1867b
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 000e798dce3fba367a8666d4b5c97bd25fd53253
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="svmvmrun"></a>__svm_vmrun
**Sezione specifica Microsoft**  
  
 Avvia l'esecuzione del codice macchina virtuale guest che corrisponde al blocco di controllo della macchina virtuale specificata (VMCB).  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __svm_vmrun(  
   size_t VmcbPhysicalAddress  
);  
```  
  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `VmcbPhysicalAddress`|L'indirizzo fisico del VMCB.|  
  
## <a name="remarks"></a>Note  
 Il `__svm_vmrun` funzione utilizza una quantità minima di informazioni di VMCB per iniziare a eseguire il codice guest della macchina virtuale. Utilizzare il [__svm_vmsave](../intrinsics/svm-vmsave.md) o [__svm_vmload](../intrinsics/svm-vmload.md) funzione se sono necessarie ulteriori informazioni per gestire un complesso interrupt o passare a un altro guest.  
  
 Il `__svm_vmrun` è equivalente alla funzione di `VMRUN` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per ulteriori informazioni, cercare il documento, "Volume manuale del programmatore di architettura AMD64 2: programmazione di sistema," numero documento 24593, revisione 3.11 o versione successiva, nel [corporation AMD](http://go.microsoft.com/fwlink/p/?linkid=23746) sito.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__svm_vmrun`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin. h >  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [__svm_vmsave](../intrinsics/svm-vmsave.md)   
 [__svm_vmload](../intrinsics/svm-vmload.md)