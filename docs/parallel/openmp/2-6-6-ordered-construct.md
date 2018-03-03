---
title: 2.6.6 costrutto ordered | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 5b3c1ba5-cfb8-4b05-865b-f446ae1c9f7c
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e09a9d756cd068df9345034e26a4f152d3ac19fe
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="266-ordered-construct"></a>2.6.6 Costrutto ordered
Il seguente blocco strutturato un **ordinati** direttiva viene eseguita nell'ordine in cui vengono eseguite iterazioni in un ciclo sequenza. La sintassi del **ordinati** direttiva è come segue:  
  
```  
#pragma omp ordered new-linestructured-block  
```  
  
 Un **ordinati** direttiva deve essere compresa l'estensione dinamica di un **per** o **parallela per** costruire. Il **per** o **parallela per** direttiva a cui il **ordinati** costrutto binding deve avere un **ordinati** clausola specificata come descritto in [Sezione 2.4.1](../../parallel/openmp/2-4-1-for-construct.md) nella pagina 11. L'esecuzione di un **per** o **parallela per** costruire con un **ordinati** clausola, **ordinati** costrutti vengono eseguiti esclusivamente nel ordine in cui essere eseguite durante l'esecuzione del ciclo sequenza.  
  
 Restrizioni per il **ordinati** direttiva sono i seguenti:  
  
-   Un'iterazione di un ciclo con un **per** costrutto non deve essere eseguito più volte la stessa direttiva ordinata e non è necessario eseguire più **ordinati** direttiva.