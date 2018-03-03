---
title: 2.4.3 singolo costrutto | Documenti Microsoft
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
ms.assetid: 15c180cd-e462-4b41-bf8c-cb8b1afb1a9b
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 72dc551986f149bda668c438ac5f51d01d530c51
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="243-single-construct"></a>2.4.3 Costrutto single
Il **singolo** direttiva identifica un costrutto che specifica che il blocco strutturato associato viene eseguito solo da un thread del team (non necessariamente il thread principale). La sintassi del **singolo** direttiva è come segue:  
  
```  
#pragma omp single [clause[[,] clause] ...] new-linestructured-block  
```  
  
 La clausola è uno dei valori seguenti:  
  
 **private (** *elenco variabili* **)**  
  
 **firstprivate (** *elenco variabili* **)**  
  
 **copyprivate (** *elenco variabili* **)**  
  
 **nowait**  
  
 È una barriera implicita dopo la **singolo** creare a meno che un **nowait** è specificata alcuna clausola.  
  
 Restrizioni per il **singolo** direttiva sono i seguenti:  
  
-   Una sola **nowait** clausola può essere incluso in un **singolo** direttiva.  
  
-   Il **copyprivate** clausola non deve essere usata con il **nowait** clausola.  
  
## <a name="cross-references"></a>Riferimenti:  
  
-   **privato**, **firstprivate**, e **copyprivate** clausole, vedere [sezione 2.7.2](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) nella pagina 25.