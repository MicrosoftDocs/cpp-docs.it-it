---
title: OMP_NESTED | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- OMP_NESTED
dev_langs:
- C++
helpviewer_keywords:
- OMP_NESTED OpenMP environment variable
ms.assetid: c43f5287-a548-40d0-bd54-0c6b2b9f9a53
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 363a125cb7f9858b1ef4105234344d2a8d35b707
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="ompnested"></a>OMP_NESTED
Specifica se è abilitato il parallelismo annidato, a meno che non parallelismo annidato è abilitato o disabilitato con `omp_set_nested`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
set OMP_NESTED[=TRUE | =FALSE]  
```  
  
## <a name="remarks"></a>Note  
 Il `OMP_NESTED` variabile di ambiente può essere sostituita dal [omp_set_nested](../../../parallel/openmp/reference/omp-set-nested.md) (funzione).  
  
 Il valore predefinito in Visual C++ nell'implementazione dello standard OpenMP è `OMP_DYNAMIC=FALSE`.  
  
 Per ulteriori informazioni, vedere [OMP_NESTED 4.4](../../../parallel/openmp/4-4-omp-nested.md).  
  
## <a name="example"></a>Esempio  
 Il comando seguente imposta il `OMP_NESTED` variabile di ambiente su TRUE:  
  
```  
set OMP_NESTED=TRUE  
```  
  
 Il comando seguente consente di visualizzare l'impostazione corrente del `OMP_NESTED` variabile di ambiente:  
  
```  
set OMP_NESTED  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Variabili di ambiente](../../../parallel/openmp/reference/openmp-environment-variables.md)