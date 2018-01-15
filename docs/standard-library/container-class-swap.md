---
title: Container Class::swap | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: swap method
ms.assetid: 898c219c-bc8e-4d14-a149-6240426c693f
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 09229429c64e895a722d52d203f0259cf69e6d24
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="container-classswap"></a>Container Class::swap
> [!NOTE]
>  Questo argomento è incluso nella documentazione di Visual C++ come esempio non funzionale dei contenitori usati nella libreria standard C++. Per altre informazioni, vedere [Contenitori della libreria standard C++](../standard-library/stl-containers.md).  
  
Scambia le sequenze controllate tra **\*this** e il relativo argomento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void swap(Container& right);
```  
  
## <a name="remarks"></a>Note  
Se **\*this.get\_allocator ==** _right_**.get_allocator**, esegue uno scambio in tempo costante. In caso contrario, esegue un numero di assegnazioni di elementi e chiamate al costruttore proporzionale al numero di elementi nelle due sequenze controllate.  
  
## <a name="see-also"></a>Vedere anche  
[Classe contenitore di esempio](../standard-library/sample-container-class.md)
