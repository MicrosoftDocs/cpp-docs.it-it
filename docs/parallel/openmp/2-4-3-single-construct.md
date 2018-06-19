---
title: 2.4.3 singolo costrutto | Documenti Microsoft
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
ms.openlocfilehash: db3f9ca834fb3f35c95732698fd02e16f31b4225
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33690582"
---
# <a name="243-single-construct"></a>2.4.3 Costrutto single
Il **singolo** direttiva identifica un costrutto che specifica che il blocco strutturato associato viene eseguito solo da un thread del team (non necessariamente il thread principale). La sintassi del **singolo** direttiva è come segue:  
  
```  
#pragma omp single [clause[[,] clause] ...] new-linestructured-block  
```  
  
 La clausola è uno dei valori seguenti:  
  
 **private (** *variabile-list* **)**  
  
 **firstprivate (** *variabile-list* **)**  
  
 **copyprivate (** *variabile-list* **)**  
  
 **nowait**  
  
 È una barriera implicita dopo la **singolo** creare a meno che un **nowait** è specificata alcuna clausola.  
  
 Restrizioni per il **singolo** direttiva sono i seguenti:  
  
-   Una sola **nowait** clausola può essere incluso in un **singolo** direttiva.  
  
-   Il **copyprivate** clausola non deve essere usata con il **nowait** clausola.  
  
## <a name="cross-references"></a>Riferimenti:  
  
-   **private**, **firstprivate**, e **copyprivate** clausole, vedere [sezione 2.7.2](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) nella pagina 25.