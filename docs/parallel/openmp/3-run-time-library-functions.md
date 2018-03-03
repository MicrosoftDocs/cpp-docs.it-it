---
title: 3. Funzioni della libreria run-time | Documenti Microsoft
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
ms.assetid: b226e512-6822-4cbe-a2ca-74cc2bb7e880
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f1cbedf8782c9c5ccb25bda3f8b43df8a526f268
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="3-run-time-library-functions"></a>3. Funzioni della libreria run-time
In questa sezione descrive le funzioni di libreria di runtime OpenMP C e C++. L'intestazione  **\<omp.h >** dichiara due tipi, diverse funzioni che consentono di controllare l'ambiente di esecuzione parallela di query e bloccare le funzioni che possono essere usate per sincronizzare l'accesso ai dati.  
  
 Il tipo **omp_lock_t** è in grado di rappresentare un blocco è disponibile un tipo di oggetto o un blocco di proprietario di un thread. Questi blocchi vengono dette *blocchi semplici*.  
  
 Il tipo **omp_nest_lock_t** è un tipo di oggetto in grado di rappresentare che è disponibile un blocco o l'identità del thread che possiede il blocco e un *nidificazione conteggio* (descritte di seguito). Questi blocchi vengono dette *blocchi annidabile*.  
  
 Le funzioni della libreria sono funzioni esterne con collegamento "C".  
  
 Le descrizioni in questo capitolo sono divisi negli argomenti seguenti:  
  
-   Funzioni di ambiente di esecuzione (vedere [sezione 3.1](../../parallel/openmp/3-1-execution-environment-functions.md) nella pagina 35).  
  
-   Funzioni di blocco (vedere [sezione 3.2](../../parallel/openmp/3-2-lock-functions.md) nella pagina 41).