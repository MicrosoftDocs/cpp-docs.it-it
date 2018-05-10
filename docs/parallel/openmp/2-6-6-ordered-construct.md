---
title: 2.6.6 costrutto ordered | Documenti Microsoft
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
ms.openlocfilehash: fa66d9fb8a0a9af2fc33497690bfe67a3ea5d717
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="266-ordered-construct"></a>2.6.6 Costrutto ordered
Il seguente blocco strutturato un **ordinati** direttiva viene eseguita nell'ordine in cui vengono eseguite iterazioni in un ciclo sequenza. La sintassi del **ordinati** direttiva è come segue:  
  
```  
#pragma omp ordered new-linestructured-block  
```  
  
 Un **ordinati** direttiva deve essere compresa l'estensione dinamica di un **per** o **parallela per** costruire. Il **per** o **parallela per** direttiva a cui il **ordinati** costrutto binding deve avere un **ordinati** clausola specificata come descritto in [Sezione 2.4.1](../../parallel/openmp/2-4-1-for-construct.md) nella pagina 11. L'esecuzione di un **per** o **parallela per** costruire con un **ordinati** clausola, **ordinati** costrutti vengono eseguiti esclusivamente nel ordine in cui essere eseguite durante l'esecuzione del ciclo sequenza.  
  
 Restrizioni per il **ordinati** direttiva sono i seguenti:  
  
-   Un'iterazione di un ciclo con un **per** costrutto non deve essere eseguito più volte la stessa direttiva ordinata e non è necessario eseguire più **ordinati** direttiva.