---
title: fenv_access | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- vc-pragma.fenv_access
- fenv_access_CPP
dev_langs:
- C++
helpviewer_keywords:
- pragmas, fenv_access
- fenv_access pragma
ms.assetid: 2ccea292-0ae4-42ce-9c67-cc189299857b
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f06c699ba20d09ec1d013f9464af02935da9f9c1
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="fenvaccess"></a>fenv_access
Disabilita (Attivato) o abilita (Disattivato) le ottimizzazioni che potrebbero modificare test dei flag e le variazioni delle modalità.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#pragma fenv_access [ON | OFF]  
```  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita, `fenv_access` è disattivato.  
  
 Per ulteriori informazioni sul comportamento della virgola mobile, vedere [/fp (specifica il comportamento a virgola mobile)](../build/reference/fp-specify-floating-point-behavior.md).  
  
 I tipi di ottimizzazioni soggette a `fenv_access` sono i seguenti:  
  
-   Eliminazione di sottoespressioni comuni globali  
  
-   Movimento di codice  
  
-   Riduzione di costanti  
  
 Altri pragma a virgola mobile sono i seguenti:  
  
-   [float_control](../preprocessor/float-control.md)  
  
-   [fp_contract](../preprocessor/fp-contract.md)  
  
## <a name="example"></a>Esempio  
  
```  
// pragma_directive_fenv_access_x86.cpp  
// compile with: /O2  
// processor: x86  
#include <stdio.h>  
#include <float.h>   
#include <errno.h>  
#pragma fenv_access (on)  
  
int main() {  
   double z, b = 0.1, t = 0.1;  
   unsigned int currentControl;  
   errno_t err;  
  
   err = _controlfp_s(&currentControl, _PC_24, _MCW_PC);  
   if (err != 0) {  
      printf_s("The function _controlfp_s failed!\n");  
      return -1;  
   }  
   z = b * t;  
   printf_s ("out=%.15e\n",z);  
}  
```  
  
```Output  
out=9.999999776482582e-003  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente riguarda compilatori che creano file di output per processori Itanium. **/fp: precise** mantiene i risultati intermedi in precisione estesa in cui i valori maggiori di FLT_MAX (3.402823466 e + 38F) possono essere calcolati e risultato della somma avranno 1.0 risultato, come se fosse calcolato manualmente. **/fp: strict** mantiene i risultati intermedi nella precisione di origine (float) in modo la prima addizione restituisca infinito, mantenuto in tutto l'espressione.  
  
```  
// pragma_directive_fenv_access_IPF.cpp  
// compile with: /O2 /fp:precise  
// processor: IPF  
// compiling with /fp:precise prints 1.0F  
// compile with /fp:strict to print infinity  
  
#include <stdio.h>  
float arr[5] = {3.402823465e+38F,   
               3.402823462e+38F,  
               3.402823464e+38F,  
               3.402823463e+38F,  
               1.0F};  
  
int main() {  
   float sum = 0;  
   sum = arr[0] + arr[1] - arr[2] - arr[3] + arr[4];  
   printf_s("%f\n", sum);  
}  
```  
  
```Output  
1.000000  
```  
  
## <a name="example"></a>Esempio  
 Si noti che nell'esempio precedente, quando `#pragma fenv_access (on)` viene trasformato in commento l'output è diverso perché la valutazione viene eseguita in fase di compilazione, in cui non viene utilizzata la modalità di controllo.  
  
```  
// pragma_directive_fenv_access_2.cpp  
// compile with: /O2  
#include <stdio.h>  
#include <float.h>   
  
int main() {  
   double z, b = 0.1, t = 0.1;  
   unsigned int currentControl;  
   errno_t err;  
  
   err = _controlfp_s(&currentControl, _PC_24, _MCW_PC);  
   if (err != 0) {  
      printf_s("The function _controlfp_s failed!\n");  
      return -1;  
   }  
   z = b * t;  
   printf_s ("out=%.15e\n",z);  
}  
```  
  
```Output  
out=1.000000000000000e-002  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)