---
title: __readmsr | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: __readmsr
dev_langs: C++
helpviewer_keywords:
- Read Model Specific Register
- rdmsr instruction
- __readmsr intrinsic
ms.assetid: 7ab1f8e8-72cb-4ce4-817d-3e728a3c9716
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ec257195fafc6a63f6ac3cdc0b143643ae3ea9fb
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="readmsr"></a>__readmsr
**Sezione specifica Microsoft**  
  
 Genera il `rdmsr` istruzione, che legge il Registro di specifiche del modello specificato da `register` e restituisce il valore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
__int64 __readmsr(   
   int register   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `register`  
 Registro specifico di modello per la lettura.  
  
## <a name="return-value"></a>Valore restituito  
 Il valore nel registro specificato.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__readmsr`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Questa funzione è disponibile solo in modalità kernel e la routine è disponibile solo come funzione intrinseca.  
  
 Per ulteriori informazioni, vedere la documentazione AMD.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)