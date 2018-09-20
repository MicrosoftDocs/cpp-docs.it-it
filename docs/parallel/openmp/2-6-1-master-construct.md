---
title: 2.6.1 costrutto di master | Microsoft Docs
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
ms.openlocfilehash: 8d82ae673e428c635172f35f9b0f682aa65dc2b8
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46445633"
---
# <a name="261-master-construct"></a>2.6.1 Costrutto master

Il **master** direttiva identifica un costrutto che specifica un blocco strutturato che viene eseguito dal thread master del team. La sintassi del **master** direttiva è come segue:

```
#pragma omp master new-linestructured-block
```

Altri thread del team non viene eseguito il blocco strutturato associato. Non vi è alcuna barriera implicita in ingresso a o Esci dal costrutto master.