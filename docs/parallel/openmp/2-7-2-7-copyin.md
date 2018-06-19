---
title: 2.7.2.7 copyin | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 76cfb9f8-bf65-4585-adbf-fd933f5606b4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7ee711bfb24e7a2a1cbada1a7e01a243e204f4a8
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33689376"
---
# <a name="2727-copyin"></a>2.7.2.7 copyin
Il **copyin** clausola fornisce un meccanismo per assegnare lo stesso valore per **threadprivate** variabili per ogni thread del team, l'esecuzione di tale area. Per ogni variabile specificata in un **copyin** clausola, il valore della variabile nel thread principale del team viene copiato, come se mediante assegnazione, per le copie del thread privato all'inizio di tale area. La sintassi del **copyin** clausola è il seguente:  
  
```  
  
copyin(  
variable-list  
)  
  
```  
  
 Le restrizioni per il **copyin** clausola sono i seguenti:  
  
-   Una variabile specificata nella **copyin** clausola deve avere un operatore di assegnazione di copia accessibile e non ambigua.  
  
-   Una variabile specificata nella **copyin** clausola deve essere un **threadprivate** variabile.