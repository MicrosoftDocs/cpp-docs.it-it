---
title: OMP_NESTED | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- OMP_NESTED
dev_langs:
- C++
helpviewer_keywords:
- OMP_NESTED OpenMP environment variable
ms.assetid: c43f5287-a548-40d0-bd54-0c6b2b9f9a53
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c6b51df88ae700f81cf84250cc06ae24c9131fec
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33691222"
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