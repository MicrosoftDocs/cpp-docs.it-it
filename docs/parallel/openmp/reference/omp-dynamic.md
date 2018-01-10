---
title: OMP_DYNAMIC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: OMP_DYNAMIC
dev_langs: C++
helpviewer_keywords: OMP_DYNAMIC OpenMP environment variable
ms.assetid: e306049d-b644-4b73-8b63-46c835bff98b
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 900f3e4ddd0e9901e72ed65f12bc036d87a6956e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ompdynamic"></a>OMP_DYNAMIC
Specifica se il tempo di esecuzione di OpenMP è possibile modificare il numero di thread in un'area parallela.  
  
## <a name="syntax"></a>Sintassi  
  
```  
set OMP_DYNAMIC[=TRUE | =FALSE]  
```  
  
## <a name="remarks"></a>Note  
 Il `OMP_DYNAMIC` variabile di ambiente può essere sostituita dal [omp_set_dynamic](../../../parallel/openmp/reference/omp-set-dynamic.md) (funzione).  
  
 Il valore predefinito in Visual C++ nell'implementazione dello standard OpenMP è `OMP_DYNAMIC=FALSE`.  
  
 Per ulteriori informazioni, vedere [OMP_DYNAMIC 4.3](../../../parallel/openmp/4-3-omp-dynamic.md).  
  
## <a name="example"></a>Esempio  
 Il comando seguente imposta il `OMP_DYNAMIC` variabile di ambiente su TRUE:  
  
```  
set OMP_DYNAMIC=TRUE  
```  
  
 Il comando seguente consente di visualizzare l'impostazione corrente del `OMP_DYNAMIC` variabile di ambiente:  
  
```  
set OMP_DYNAMIC  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Variabili di ambiente](../../../parallel/openmp/reference/openmp-environment-variables.md)