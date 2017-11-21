---
title: OMP_SCHEDULE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: OMP_SCHEDULE
dev_langs: C++
helpviewer_keywords: OMP_SCHEDULE OpenMP environment variable
ms.assetid: 2295a801-e584-4d2f-826f-7ca4c88846a6
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: c29ec07f9a912fb66adc391465885da8030cc466
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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
 Specifica le dimensioni di iterazioni. `size`deve essere un numero intero positivo. Il valore predefinito è 1, tranne quando `type` è statico. Non è valido quando `type` è `runtime`.  
  
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