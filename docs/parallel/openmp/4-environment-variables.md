---
title: 4. Le variabili di ambiente | Documenti Microsoft
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
ms.assetid: 4ec7ed81-e9ca-46a1-84f8-8f9ce4587346
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: cef1bac78afbcc8b852c3bd42e0904e1963137c8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="4-environment-variables"></a>4. Variabili di ambiente
In questo capitolo descrive le variabili di ambiente OpenMP C e C++ API (o meccanismi specifici per la piattaforma equivalente) che controllano l'esecuzione del codice parallelo.  I nomi delle variabili di ambiente devono essere maiuscolo. I valori assegnati sono tra maiuscole e minuscole e possono avere spazi vuoti iniziali e finali.  Le modifiche ai valori dopo il programma di avvio vengono ignorate.  
  
 Le variabili di ambiente sono i seguenti:  
  
-   **OMP_SCHEDULE** imposta la dimensione di tipo e il blocco di pianificazione in fase di esecuzione.  
  
-   **OMP_NUM_THREADS** imposta il numero di thread da utilizzare durante l'esecuzione.  
  
-   **OMP_DYNAMIC** attiva o disattiva la regolazione dinamica del numero di thread.  
  
-   **OMP_NESTED** Abilita o disabilita il parallelismo annidato.  
  
 Negli esempi in questo capitolo viene illustrato solo come queste variabili possono essere impostate in ambienti shell (csh) Unix C. In Korn shell e gli ambienti DOS le azioni sono simili, come indicato di seguito:  
  
 csh:  
 SetEnv OMP_SCHEDULE "dinamico"  
  
 ksh:  
 esportare OMP_SCHEDULE = "dinamico"  
  
 DOS:  
 impostare OMP_SCHEDULE = "dinamico"