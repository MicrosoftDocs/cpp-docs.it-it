---
title: float_control | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- vc-pragma.float_control
- float_control_CPP
dev_langs:
- C++
helpviewer_keywords:
- float_control pragma
- pragmas, float_control
ms.assetid: 4f4ba5cf-3707-413e-927d-5ecdbc0a9a43
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a7ac671c938b80fc69b8214456efecf798e1e5f6
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33840355"
---
# <a name="floatcontrol"></a>float_control
Specifica il comportamento a virgola mobile per una funzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
float_control( value,setting [push] | push | pop )  
```  
  
## <a name="flags"></a>Flag  
 `value`, `setting` **[push]**  
 Specifica il comportamento a virgola mobile. `value` può essere **preciso** o **tranne**. Per altre informazioni, vedere [/fp (Specifica il comportamento della virgola mobile)](../build/reference/fp-specify-floating-point-behavior.md). `setting` può essere **su** o **off**.  
  
 Se `value` è **preciso**, le impostazioni per **preciso** e **tranne** vengono specificate. **ad eccezione di** può essere impostato solo su **su** quando **preciso** è impostata su **su**.  
  
 Se l'opzione facoltativa **push** token viene aggiunto, corrente l'impostazione per `value` viene inserita nello stack del compilatore interno.  
  
 **push**  
 Inserire l'impostazione `float_control` corrente nello stack del compilatore interno  
  
 **pop**  
 Rimuove il `float_control` impostazione dall'inizio dello stack del compilatore interno e lo rende il nuovo `float_control` impostazione.  
  
## <a name="remarks"></a>Note  
 Non è possibile disattivare `float_control precise` off quando **tranne** si trova in. Analogamente, **preciso** non può essere disattivato quando `fenv_access` si trova in. Per passare dal modello di tipo strict a un modello di tipo fast con il pragma `float_control`, utilizzare il codice seguente:  
  
```  
#pragma float_control(except, off)  
#pragma fenv_access(off)  
#pragma float_control(precise, off)  
```  
  
 Per passare dal modello di tipo fast a un modello di tipo strict con il pragma `float_control`, utilizzare il codice seguente:  
  
```  
#pragma float_control(precise, on)  
#pragma fenv_access(on)  
#pragma float_control(except, on)  
```  
  
 Altri pragma a virgola mobile sono i seguenti:  
  
-   [fenv_access](../preprocessor/fenv-access.md)  
  
-   [fp_contract](../preprocessor/fp-contract.md)  
  
## <a name="example"></a>Esempio  
 Il seguente esempio mostra come acquisire un'eccezione a virgola mobile dell'overflow utilizzando il pragma `float_control`.  
  
```  
// pragma_directive_float_control.cpp  
// compile with: /EHa  
#include <stdio.h>  
#include <float.h>  
  
double func( ) {  
   return 1.1e75;  
}  
  
#pragma float_control (except,on)  
  
int main( ) {  
   float u[1];  
   unsigned int currentControl;  
   errno_t err;  
  
   err = _controlfp_s(&currentControl, ~_EM_OVERFLOW, _MCW_EM);  
   if (err != 0)  
      printf_s("_controlfp_s failed!\n");  
  
   try  {  
      u[0] = func();  
      printf_s ("Fail");     
      return(1);  
   }   
  
   catch (...)  {  
      printf_s ("Pass");  
      return(0);  
   }  
}  
```  
  
```Output  
Pass  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
