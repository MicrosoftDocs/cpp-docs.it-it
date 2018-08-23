---
title: Shared (OpenMP) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- Shared
dev_langs:
- C++
helpviewer_keywords:
- shared OpenMP clause
ms.assetid: 7887dc95-67a2-462f-a3a2-8e0632bf5d04
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b2bc1a0bbf56623feccd4d3bd96f1e719e192d48
ms.sourcegitcommit: e9ce38decc9f986edab5543de3464b11ebccb123
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/13/2018
ms.locfileid: "42541234"
---
# <a name="shared-openmp"></a>shared (OpenMP)
Specifica che una o più variabili devono essere condivise tra tutti i thread.  
  
## <a name="syntax"></a>Sintassi  
  
```  
shared(var)  
```  
  
## <a name="remarks"></a>Note  
 dove  
  
 `var`  
 Uno o più variabili da condividere. Se è specificata più di una variabile, separare i nomi delle variabili con una virgola.  
  
## <a name="remarks"></a>Note  
 È possibile condividere le variabili tra i thread con il [copyprivate](../../../parallel/openmp/reference/copyprivate.md) clausola.  
  
 `shared` si applica alle direttive seguenti:  
  
-   [for](../../../parallel/openmp/reference/for-openmp.md)  
  
-   [parallel](../../../parallel/openmp/reference/parallel.md)  
  
-   [Sezioni](../../../parallel/openmp/reference/sections-openmp.md)  
  
 Per altre informazioni, vedere [2.7.2.4 condiviso](../../../parallel/openmp/2-7-2-4-shared.md).  
  
## <a name="example"></a>Esempio  
 Visualizzare [privati](../../../parallel/openmp/reference/private-openmp.md) per un esempio d'uso `shared`.  
  
## <a name="see-also"></a>Vedere anche  
 [Clausole](../../../parallel/openmp/reference/openmp-clauses.md)