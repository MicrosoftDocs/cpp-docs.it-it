---
title: 3.1.5 funzione omp_get_num_procs | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: bbfbf17b-0c68-4ba6-a25d-07c36ecb551f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f1632dfd4f84ad85a7ca1fbcfd80752d94ba2fda
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46428512"
---
# <a name="315-ompgetnumprocs-function"></a>3.1.5 Funzione omp_get_num_procs

Il `omp_get_num_procs` funzione restituisce il numero di processori disponibili per il programma al momento della chiamata di funzione. Il formato è il seguente:

```
#include <omp.h>
int omp_get_num_procs(void);
```