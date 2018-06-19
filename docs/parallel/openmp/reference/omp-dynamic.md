---
title: OMP_DYNAMIC | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- OMP_DYNAMIC
dev_langs:
- C++
helpviewer_keywords:
- OMP_DYNAMIC OpenMP environment variable
ms.assetid: e306049d-b644-4b73-8b63-46c835bff98b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: de4a81d861bf72943a67356577da37c36df63f69
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33695811"
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