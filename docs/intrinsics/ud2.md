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
ms.openlocfilehash: c282456f74fa86940e3d1ffc77d0226a28ed0b80
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33326163"
---
# <a name="ud2"></a>__ud2
**Sezione specifica Microsoft**  
  
 Genera un'istruzione non definita.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __ud2();  
```  
  
## <a name="remarks"></a>Note  
 Se si esegue un'istruzione non definita, il processore genera un'eccezione di codice operativo non valido.  
  
 Il `__ud2` è equivalente alla funzione di `UD2` istruzioni in linguaggio macchina ed è disponibile solo in modalità kernel. Per ulteriori informazioni, cercare il documento, "manuale dello sviluppatore di Software architettura Intel, Volume 2: riferimento al Set (istruzione)," al [Intel Corporation](http://go.microsoft.com/fwlink/p/?linkid=127) sito.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__ud2`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin. h >  
  
**Fine sezione specifica Microsoft**  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene eseguita un'istruzione non definita, che genera un'eccezione. Il gestore di eccezioni passa quindi il codice restituito da zero a uno.  
  
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