---
title: 2.6.6 costrutto ordered | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 5b3c1ba5-cfb8-4b05-865b-f446ae1c9f7c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7b83c3dfc13b231a1314343a1dff496acf7a99b6
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46412197"
---
# <a name="266-ordered-construct"></a>2.6.6 Costrutto ordered

Il seguente blocco strutturato un' **ordinati** direttiva viene eseguita nell'ordine in cui le iterazioni vengono eseguite in un ciclo sequenziale. La sintassi del **ordinati** direttiva è come segue:

```
#pragma omp ordered new-linestructured-block
```

Un **ordinati** direttiva deve essere entro l'ambito dinamico di un **per** oppure **parallele per** costruire. Il **per** o **parallele per** direttiva a cui il **ordinati** associa costrutto deve avere un **ordinati** clausola specificata come descritto in [Sezione 2.4.1](../../parallel/openmp/2-4-1-for-construct.md) nella pagina 11. L'esecuzione di un **per** o **parallele per** costruire con un' **ordinati** clausola, **ordinati** costrutti vengono eseguiti esclusivamente nel ordine in cui verrebbero eseguite durante l'esecuzione sequenza del ciclo.

Restrizioni per il **ordinati** direttiva sono i seguenti:

- Un'iterazione di un ciclo con un **per** costrutto non deve eseguire più volte la stessa direttiva ordinata e non è necessario eseguire più **ordinati** direttiva.