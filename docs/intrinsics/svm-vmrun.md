---
title: __svm_vmrun | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __svm_vmrun
dev_langs:
- C++
helpviewer_keywords:
- __svm_vmrun intrinsic
- VMRUN instruction
ms.assetid: ae98a781-fc17-47b2-b40f-86fcebf1867b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3777492212bbff368902acf589f0a3c46ea4ac18
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45718679"
---
# <a name="svmvmrun"></a>__svm_vmrun
**Sezione specifica Microsoft**  
  
 Avvia l'esecuzione del codice guest macchina virtuale corrispondente al blocco di controllo (VMCB) della macchina virtuale specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __svm_vmrun(  
   size_t VmcbPhysicalAddress  
);  
```  
  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|*VmcbPhysicalAddress*|[in] L'indirizzo fisico del VMCB.|  
  
## <a name="remarks"></a>Note  
 Il `__svm_vmrun` funzione utilizza una quantità minima di informazioni di VMCB per avviare l'esecuzione del codice guest macchina virtuale. Usare la [__svm_vmsave](../intrinsics/svm-vmsave.md) oppure [__svm_vmload](../intrinsics/svm-vmload.md) funzionare se sono necessarie altre informazioni per la gestione di un interrupt complesso oppure passare a un altro guest.  
  
 Il `__svm_vmrun` è equivalente alla funzione il `VMRUN` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per altre informazioni, cercare il documento, "Volume manuale per programmatori dell'architettura AMD64 2: programmazione di sistema," numero documento 24593, revisione 3.11 o versione successiva, nelle [corporation AMD](https://developer.amd.com/resources/developer-guides-manuals/) sito.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__svm_vmrun`|x86, x64|  
  
 **File di intestazione** \<intrin. h >  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [__svm_vmsave](../intrinsics/svm-vmsave.md)   
 [__svm_vmload](../intrinsics/svm-vmload.md)