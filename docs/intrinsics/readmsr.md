---
title: __readmsr | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __readmsr
dev_langs:
- C++
helpviewer_keywords:
- Read Model Specific Register
- rdmsr instruction
- __readmsr intrinsic
ms.assetid: 7ab1f8e8-72cb-4ce4-817d-3e728a3c9716
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b3be04079de11642b2641260fdfe997d3fcb48d6
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42539626"
---
# <a name="readmsr"></a>__readmsr
**Sezione specifica Microsoft**  
  
 Genera il `rdmsr` istruzione, che legge il Registro di specifica del modello specificato da `register` e restituisce il valore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
__int64 __readmsr(   
   int register   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `register`  
 Il registro specifico del modello per la lettura.  
  
## <a name="return-value"></a>Valore restituito  
 Il valore del registro specificato.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__readmsr`|x86, x64|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Questa funzione di disponibile solo in modalità kernel e la routine è disponibile solo come funzione intrinseca.  
  
 Per altre informazioni, vedere la documentazione AMD.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)