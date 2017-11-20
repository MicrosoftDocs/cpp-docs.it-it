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
ms.openlocfilehash: 13d083c596dcbaa275ed8d0f05ded2c5cb5547eb
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="container-classswap"></a>Container Class::swap
> [!NOTE]
>  Questo argomento è incluso nella documentazione di Visual C++ come esempio non funzionante dei contenitori usati nella libreria standard di C++. Per altre informazioni, vedere [C++ Standard Library Containers](../standard-library/stl-containers.md) (Contenitori della libreria standard di C++).  
  
Scambia le sequenze controllate tra **\*this** e il relativo argomento.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void swap(Container& right);
```  
  
## <a name="remarks"></a>Note  
Se **\*this.get\_allocator ==** _right_**.get_allocator**, esegue uno scambio in tempo costante. In caso contrario, esegue un numero di assegnazioni di elementi e chiamate al costruttore proporzionale al numero di elementi nelle due sequenze controllate.  
  
## <a name="see-also"></a>Vedere anche  
[Sample Container Class](../standard-library/sample-container-class.md) (Classe contenitore di esempio)
