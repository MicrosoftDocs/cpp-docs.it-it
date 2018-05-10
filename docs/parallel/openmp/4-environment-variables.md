---
title: 4. Le variabili di ambiente | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 4ec7ed81-e9ca-46a1-84f8-8f9ce4587346
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: edd4f795a3511358d2b95b93e180b9b21b964dd2
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="4-environment-variables"></a>4. Variabili di ambiente
In questo capitolo descrive le variabili di ambiente OpenMP C e C++ API (o meccanismi specifici per la piattaforma equivalente) che controllano l'esecuzione del codice parallelo.  I nomi delle variabili di ambiente devono essere maiuscolo. I valori assegnati sono tra maiuscole e minuscole e possono avere spazi vuoti iniziali e finali.  Le modifiche ai valori dopo il programma di avvio vengono ignorate.  
  
 Le variabili di ambiente sono i seguenti:  
  
-   **OMP_SCHEDULE** imposta le dimensioni di blocco e tipo di pianificazione in fase di esecuzione.  
  
-   **OMP_NUM_THREADS** imposta il numero di thread da utilizzare durante l'esecuzione.  
  
-   **OMP_DYNAMIC** Abilita o disabilita la regolazione dinamica del numero di thread.  
  
-   **OMP_NESTED** Abilita o disabilita il parallelismo annidato.  
  
 Negli esempi in questo capitolo viene illustrato solo come queste variabili possono essere impostate in ambienti shell (csh) Unix C. In Korn shell e gli ambienti DOS le azioni sono simili, come indicato di seguito:  
  
 csh:  
 SetEnv OMP_SCHEDULE "dinamico"  
  
 ksh:  
 esportare OMP_SCHEDULE = "dinamico"  
  
 DOS:  
 impostare OMP_SCHEDULE = "dinamico"