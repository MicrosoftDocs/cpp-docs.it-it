---
title: __sidt | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __sidt
dev_langs:
- C++
helpviewer_keywords:
- sidt instruction
- __sidt intrinsic
ms.assetid: 01e83d14-6e63-4dea-8f64-5a0339d69641
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 29e41b0edd9b2a3da1046888f16a55e19f2d9f20
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33324512"
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