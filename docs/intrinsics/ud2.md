---
title: __ud2 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __ud2
dev_langs:
- C++
helpviewer_keywords:
- UD2 instruction
- __ud2 intrinsic
ms.assetid: 0831cd5a-8b65-402e-bb57-11e1d5d7ffd2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: eeb63aa411278c2ca6b2217d9243331b57cd7624
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42545810"
---
# <a name="ud2"></a>__ud2
**Sezione specifica Microsoft**  
  
 Genera un'istruzione non definita.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __ud2();  
```  
  
## <a name="remarks"></a>Note  
 L'elaboratore genera un'eccezione opcode non è valido se si esegue un'istruzione non definita.  
  
 Il `__ud2` è equivalente alla funzione il `UD2` istruzioni in linguaggio macchina ed è disponibile solo in modalità kernel. Per altre informazioni, cercare il documento, "manuale dello sviluppatore di Software architettura Intel, Volume 2: riferimento di Set di istruzioni," al [Intel Corporation](http://go.microsoft.com/fwlink/p/?linkid=127) sito.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__ud2`|x86, x64|  
  
 **File di intestazione** \<intrin. h >  
  
**Fine sezione specifica Microsoft**  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene eseguita un'istruzione non definita, che genera un'eccezione. Il gestore di eccezioni modifica quindi il codice restituito compreso tra zero e uno.  
  
```  
// __ud2_intrinsic.cpp  
#include <stdio.h>  
#include <intrin.h>  
#include <excpt.h>  
// compile with /EHa  
  
int main() {  
  
// Initialize the return code to 0.  
 int ret = 0;  
  
// Attempt to execute an undefined instruction.  
  printf("Before __ud2(). Return code = %d.\n", ret);  
  __try {   
  __ud2();   
  }  
  
// Catch any exceptions and set the return code to 1.  
  __except(EXCEPTION_EXECUTE_HANDLER){  
  printf("  In the exception handler.\n");  
  ret = 1;  
  }  
  
// Report the value of the return code.   
  printf("After __ud2().  Return code = %d.\n", ret);  
  return ret;  
}  
```  
  
```Output  
Before __ud2(). Return code = 0.  
  In the exception handler.  
After __ud2().  Return code = 1.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)