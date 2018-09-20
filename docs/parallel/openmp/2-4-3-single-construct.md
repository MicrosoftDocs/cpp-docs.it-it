---
title: 2.4.3 costrutto di single | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 15c180cd-e462-4b41-bf8c-cb8b1afb1a9b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 81abf5324c215b9011ecbd774626a213c2eda653
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46376500"
---
# <a name="243-single-construct"></a>2.4.3 Costrutto single

Il **singolo** direttiva identifica un costrutto che specifica che il blocco strutturato associato viene eseguito da un solo thread del team (non necessariamente il thread principale). La sintassi del **singolo** direttiva è come segue:

```
#pragma omp single [clause[[,] clause] ...] new-linestructured-block
```

La clausola è uno dei seguenti:

**private (** *variabile-list* **)**

**firstprivate (** *variabile-list* **)**

**copyprivate (** *variabile-list* **)**

**nowait**

È presente una barriera implicita dopo il **singolo** costruire, a meno che un **nowait** è specificata alcuna clausola.

Restrizioni per il **singolo** direttiva sono i seguenti:

- Una sola **nowait** clausola può apparire in un **singolo** direttiva.

- Il **copyprivate** clausola non deve essere usata con i **nowait** clausola.

## <a name="cross-references"></a>Tra i riferimenti:

- **privato**, **firstprivate**, e **copyprivate** clausole, vedere [sezione 2.7.2](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) a pagina 25.