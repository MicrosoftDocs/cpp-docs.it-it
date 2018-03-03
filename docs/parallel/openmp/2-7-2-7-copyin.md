---
title: 2.7.2.7 copyin | Documenti Microsoft
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
ms.assetid: 76cfb9f8-bf65-4585-adbf-fd933f5606b4
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5ba09b70b3a3591b1f8b427ac107576cfcac7935
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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