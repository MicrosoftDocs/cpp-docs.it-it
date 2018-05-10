---
title: 2.6.1 costrutto di master | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: c092064b-ea57-4d4e-9c99-a004d65656fe
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a60a8df380fdcc0052d8fe2d070c8d926bcb28f8
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="261-master-construct"></a>2.6.1 Costrutto master
Il **master** direttiva identifica un costrutto che specifica un blocco strutturato che viene eseguito dal thread principale del team. La sintassi del **master** direttiva è come segue:  
  
```  
#pragma omp master new-linestructured-block  
```  
  
 Altri thread del team non viene eseguito il blocco strutturato associato. Non sussiste alcun barriera implicita nel voce da o in uscita dal costrutto master.