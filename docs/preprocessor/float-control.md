---
title: float_control | Microsoft Docs
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
ms.openlocfilehash: b9b94e5b8eccdc63735c7cb25faa7eacb1e23670
ms.sourcegitcommit: d4c803bd3a684d7951bf88dcecf1f14af43ae411
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/10/2018
ms.locfileid: "42538445"
---
# <a name="floatcontrol"></a>float_control
Specifica il comportamento a virgola mobile per una funzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
float_control( value,setting [push] | push | pop )  
```  
  
## <a name="flags"></a>Flag  
 
*valore*, *impostazione* *[push]*  
Specifica il comportamento a virgola mobile. *valore* può essere `precise` o `except`. Per altre informazioni, vedere [/fp (Specifica il comportamento della virgola mobile)](../build/reference/fp-specify-floating-point-behavior.md). *l'impostazione* può essere `on` o `off`.  
  
Se *valore* viene `precise`, le impostazioni per `precise` e `except` siano state specificate. `except` può essere impostato solo su `on` quando si `precise` è impostata su `on`.  
  
Se l'opzione facoltativa *push* token viene aggiunto, corrente l'impostazione per *valore* viene inserita nello stack del compilatore interno.  
  
*push*  
Eseguire il push corrente **float_control** impostazione sullo stack del compilatore interno  
  
*pop*  
Rimuove il **float_control** impostazione dall'inizio dello stack del compilatore interno e lo rende la nuova **float_control** impostazione.  
  
## <a name="remarks"></a>Note  
 
Non è possibile disattivare `float_control precise` da quando `except` è attivo. Analogamente, `precise` non può essere disattivato quando `fenv_access` è attivo. Per passare dal modello di tipo strict a un modello di tipo fast con il **float_control** pragma, usare il codice seguente:  
  
```  
#pragma float_control(except, off)  
#pragma fenv_access(off)  
#pragma float_control(precise, off)  
```  
  
Per passare dal modello di tipo fast a un modello di tipo strict con il **float_control** pragma, usare il codice seguente:  
  
```  
#pragma float_control(precise, on)  
#pragma fenv_access(on)  
#pragma float_control(except, on)  
```  
  
Altri pragma a virgola mobile sono i seguenti:  
  
- [fenv_access](../preprocessor/fenv-access.md)  
  
- [fp_contract](../preprocessor/fp-contract.md)  
  
## <a name="example"></a>Esempio  
 
L'esempio seguente viene illustrato come intercettare un'eccezione a virgola mobile dell'overflow utilizzando il pragma **float_control**.  
  
```cpp  
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
