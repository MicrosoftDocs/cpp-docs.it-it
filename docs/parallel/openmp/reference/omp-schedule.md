---
title: OMP_SCHEDULE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- OMP_SCHEDULE
dev_langs:
- C++
helpviewer_keywords:
- OMP_SCHEDULE OpenMP environment variable
ms.assetid: 2295a801-e584-4d2f-826f-7ca4c88846a6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5052aaadc673e38a844ea5b0d1e11ff3a96f3fbe
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33691755"
---
# <a name="ompschedule"></a>OMP_SCHEDULE
Modifica il comportamento del [pianificazione](../../../parallel/openmp/reference/schedule.md) clausola quando `schedule(runtime)` è specificato in un `for` o `parallel for` direttiva.  
  
## <a name="syntax"></a>Sintassi  
  
```  
set OMP_SCHEDULE[=type[,size]]  
```  
  
## <a name="remarks"></a>Note  
 dove  
  
 `size` (facoltativo)  
 Specifica le dimensioni di iterazioni. `size` Deve essere un numero intero positivo. Il valore predefinito è 1, tranne quando `type` è statico. Non è valido quando `type` è `runtime`.  
  
 `type`  
 Il tipo di pianificazione:  
  
-   `dynamic`  
  
-   `guided`  
  
-   `runtime`  
  
-   `static`  
  
## <a name="remarks"></a>Note  
 Il valore predefinito in Visual C++ nell'implementazione dello standard OpenMP è `OMP_SCHEDULE=static,0`.  
  
 Per ulteriori informazioni, vedere [OMP_SCHEDULE 4.1](../../../parallel/openmp/4-1-omp-schedule.md).  
  
## <a name="example"></a>Esempio  
 Il comando seguente imposta il **OMP_SCHEDULE** variabile di ambiente:  
  
```  
set OMP_SCHEDULE="guided,2"  
```  
  
 Il comando seguente consente di visualizzare l'impostazione corrente del **OMP_SCHEDULE** variabile di ambiente:  
  
```  
set OMP_SCHEDULE  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Variabili di ambiente](../../../parallel/openmp/reference/openmp-environment-variables.md)