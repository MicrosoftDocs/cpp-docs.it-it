---
title: 2.4.2 costrutto sections | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: e9e6e3ea-7fc9-4925-8f68-92b8a5bb1e76
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 35ae940e37b40cbb9c883c4d7d6bca7b0fa65520
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46410547"
---
# <a name="242-sections-construct"></a>2.4.2 Costrutto sections

Il **sezioni** direttiva identifica un costrutto di condivisione del lavoro noniterative che specifica un set di costrutti che devono essere suddivisi tra i thread in un team. Ogni sezione viene eseguita una sola volta da un thread del team. La sintassi del **sezioni** direttiva è come segue:

```
#pragma omp sections [clause[[,] clause] ...] new-line
   {
   [#pragma omp section new-line]
      structured-block
   [#pragma omp section new-linestructured-block ]
...
}
```

La clausola è uno dei seguenti:

**private (** *variabile-list* **)**

**firstprivate (** *variabile-list* **)**

**lastprivate(** *variable-list* **)**

**Reduction (** *operator* **:***elenco variabili* **)** 

**nowait**

Ogni sezione è preceduta da un **sezione** direttiva, sebbene le **sezione** direttiva è facoltativa per la prima sezione. Il **sezione** direttive devono essere racchiuso tra l'ambito lessicale delle **sezioni** direttiva. È una barriera implicita alla fine di una **sezioni** costruire, a meno che un **nowait** è specificato.

Restrizioni per il **sezioni** direttiva sono i seguenti:

- Oggetto **sezione** direttiva non deve trovarsi all'esterno dell'ambito lessicale delle **sezioni** direttiva.

- Una sola **nowait** clausola può apparire in un **sezioni** direttiva.

## <a name="cross-references"></a>Tra i riferimenti:

- **privato**, **firstprivate**, **lastprivate**, e **riduzione** clausole, vedere [sezione 2.7.2](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) a pagina 25.