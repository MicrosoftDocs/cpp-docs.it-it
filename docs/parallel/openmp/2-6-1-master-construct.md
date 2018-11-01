---
title: 2.6.1 Costrutto master
ms.date: 11/04/2016
ms.assetid: c092064b-ea57-4d4e-9c99-a004d65656fe
ms.openlocfilehash: 0501b1fdfbd36829cee2793fc0f7bb03daeda900
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50475530"
---
# <a name="261-master-construct"></a>2.6.1 Costrutto master

Il **master** direttiva identifica un costrutto che specifica un blocco strutturato che viene eseguito dal thread master del team. La sintassi del **master** direttiva è come segue:

```
#pragma omp master new-linestructured-block
```

Altri thread del team non viene eseguito il blocco strutturato associato. Non vi è alcuna barriera implicita in ingresso a o Esci dal costrutto master.