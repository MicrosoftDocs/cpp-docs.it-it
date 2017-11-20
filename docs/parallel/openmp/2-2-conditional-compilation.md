---
title: 2.2 compilazione condizionale | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 8f9c914d-736c-48cf-899d-c8029dbe1e32
caps.latest.revision: "4"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: ddfb754e3aa4142b6d070f2b5fe20ac7a63512e9
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="22-conditional-compilation"></a>2.2 Compilazione condizionale
La _**OPENMP** nome della macro viene definita da implementazioni conformi OpenMP come costante decimale *yyyymm*, che sarà l'anno e mese della specifica approvata. Questa macro non deve essere oggetto di un **#define** o **#undef** direttiva di pre-elaborazione.  
  
```  
#ifdef _OPENMP  
iam = omp_get_thread_num() + index;  
#endif  
```  
  
 Se i fornitori di definiscono le estensioni per OpenMP, specificano potrebbe macro predefinite aggiuntive.