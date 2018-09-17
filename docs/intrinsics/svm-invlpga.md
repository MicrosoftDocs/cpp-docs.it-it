---
title: __svm_invlpga | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __svm_invlpga
dev_langs:
- C++
helpviewer_keywords:
- __svm_invlpga intrinsic
- INVLPGA instruction
ms.assetid: aa6578ce-8278-464b-8815-a0fc45330915
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c2f962ec4a348cca7ffdf43852cb01d673f3fb18
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45706602"
---
# <a name="svminvlpga"></a>__svm_invlpga
**Sezione specifica Microsoft**  
  
 Invalida la voce di mapping indirizzo nel translation lookaside buffer del computer. I parametri specificano l'indirizzo virtuale e un identificatore dello spazio di indirizzi della pagina da invalidare.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __svm_invlpga(  
     void *Va,  
     int ASID);  
```  
  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|*Valutazione della vulnerabilità*|[in] L'indirizzo virtuale della pagina da invalidare.|  
|*ASID*|[in] L'indirizzo dello spazio identificatore (ASID) della pagina da invalidare.|  
  
## <a name="remarks"></a>Note  
 Il `__svm_invlpga` è equivalente alla funzione il `INVLPGA` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per altre informazioni, cercare il documento, "Volume manuale per programmatori dell'architettura AMD64 2: programmazione di sistema," documento numero 24593, revisione 3.11, la [corporation AMD](https://developer.amd.com/resources/developer-guides-manuals/) sito.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__svm_invlpga`|x86, x64|  
  
 **File di intestazione** \<intrin. h >  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)