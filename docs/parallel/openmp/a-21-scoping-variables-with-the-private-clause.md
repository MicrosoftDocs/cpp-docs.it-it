---
title: A.21 definizione dell'ambito delle variabili con la clausola private | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 7cdb4a7f-af24-44ac-9d33-e43840bc8f3d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fa68f0ebb5857e3f093e1985bd5f20105bb925c1
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46392788"
---
# <a name="a21---scoping-variables-with-the-private-clause"></a>A.21   Definizione dell'ambito delle variabili con la clausola private

I valori della `i` e `j` nell'esempio seguente non sono definiti in uscita dall'area parallela:

```
int i, j;
i = 1;
j = 2;
#pragma omp parallel private(i) firstprivate(j)
{
  i = 3;
  j = j + 2;
}
printf_s("%d %d\n", i, j);
```

Per altre informazioni sul `private` clausola, vedere [sezione 2.7.2.1](../../parallel/openmp/2-7-2-1-private.md) a pagina 25.