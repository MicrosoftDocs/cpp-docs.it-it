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
ms.openlocfilehash: 96d20916210b0fe55817dceb86d388a33f8e238b
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42541602"
---
# <a name="sidt"></a>__sidt
**Sezione specifica Microsoft**  
  
 Archivia il valore del Registro di tabella del descrittore di interrupt (IDTR) nella posizione di memoria specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __sidt(  
     void *Destination);  
```  
  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `Destination`|Puntatore alla posizione di memoria in cui è archiviato il IDTR.|  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__sidt`|x86, x64|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Il `__sidt` è equivalente alla funzione il `SIDT` istruzioni in linguaggio macchina. Per altre informazioni, cercare il documento, "manuale dello sviluppatore di Software architettura Intel, Volume 2: riferimento di Set di istruzioni," al [Intel Corporation](http://go.microsoft.com/fwlink/p/?linkid=127) sito.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [__lidt](../intrinsics/lidt.md)