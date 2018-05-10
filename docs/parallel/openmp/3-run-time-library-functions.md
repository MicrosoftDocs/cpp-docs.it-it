---
title: 3. Funzioni della libreria run-time | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: b226e512-6822-4cbe-a2ca-74cc2bb7e880
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d747f775509c6b3b2b95be51d95ea937816d3cd1
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="3-run-time-library-functions"></a>3. Funzioni della libreria run-time
In questa sezione descrive le funzioni di libreria di runtime OpenMP C e C++. L'intestazione  **\<omp.h >** dichiara due tipi, diverse funzioni che consentono di controllare l'ambiente di esecuzione parallela di query e bloccare le funzioni che possono essere usate per sincronizzare l'accesso ai dati.  
  
 Il tipo **omp_lock_t** è in grado di rappresentare un blocco è disponibile un tipo di oggetto o un blocco di proprietario di un thread. Questi blocchi vengono dette *blocchi semplici*.  
  
 Il tipo **omp_nest_lock_t** è un tipo di oggetto in grado di rappresentare che è disponibile un blocco o l'identità del thread che possiede il blocco e un *nidificazione conteggio* (descritte di seguito). Questi blocchi vengono dette *blocchi annidabile*.  
  
 Le funzioni della libreria sono funzioni esterne con collegamento "C".  
  
 Le descrizioni in questo capitolo sono divisi negli argomenti seguenti:  
  
-   Funzioni di ambiente di esecuzione (vedere [sezione 3.1](../../parallel/openmp/3-1-execution-environment-functions.md) nella pagina 35).  
  
-   Funzioni di blocco (vedere [sezione 3.2](../../parallel/openmp/3-2-lock-functions.md) nella pagina 41).