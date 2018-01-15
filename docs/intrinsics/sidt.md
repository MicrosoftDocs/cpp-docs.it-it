---
title: __sidt | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: __sidt
dev_langs: C++
helpviewer_keywords:
- sidt instruction
- __sidt intrinsic
ms.assetid: 01e83d14-6e63-4dea-8f64-5a0339d69641
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: d67e671f2f374790c50e45777d62317d3899c383
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="sidt"></a>__sidt
**Sezione specifica Microsoft**  
  
 Archivia il valore del Registro di tabella descrittore interrupt (IDTR) in posizione di memoria specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __sidt(  
     void *Destination);  
```  
  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `Destination`|Un puntatore nella posizione di memoria in cui è archiviato il IDTR.|  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__sidt`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Il `__sidt` è equivalente alla funzione di `SIDT` istruzioni in linguaggio macchina. Per ulteriori informazioni, cercare il documento, "manuale dello sviluppatore di Software architettura Intel, Volume 2: riferimento al Set (istruzione)," al [Intel Corporation](http://go.microsoft.com/fwlink/p/?linkid=127) sito.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [__lidt](../intrinsics/lidt.md)