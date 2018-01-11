---
title: Programmi multithread | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- threading [C++], about threading
- multithreading [C++], about threads
ms.assetid: 02443596-f7e1-48d0-b3a4-39ee0e54e444
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0ff73b4d3a1c8ee6971fbd3f88f491c2a5c76311
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="multithread-programs"></a>Programmi multithread
Un thread è fondamentalmente un percorso di esecuzione tramite un programma. È anche la più piccola unità di esecuzione in Win32. Un thread è costituito da uno stack, lo stato di registri della CPU e una voce nell'elenco di esecuzione dell'utilità di pianificazione del sistema. Ogni thread condivide tutte le risorse del processo.  
  
 Un processo è costituito da uno o più thread e il codice, dati e altre risorse di un programma in memoria. Risorse programma tipici sono file aperti, semafori e memoria allocata in modo dinamico. Un programma viene eseguito quando l'utilità di pianificazione di sistema assegnato a uno dei relativi thread di controllo di esecuzione. L'utilità di pianificazione determina quali thread deve essere eseguito e quando deve essere eseguito. Thread di priorità più bassa potrebbe essere necessario attendere thread ad alta priorità completare le attività. Nei computer multiprocessore, l'utilità di pianificazione è possibile spostare singoli thread a processori diversi per bilanciare il carico della CPU.  
  
 Ogni thread in un processo a opera in modo indipendente. A meno che non si renderle visibili tra loro, i thread vengono eseguiti singolarmente e non sono consapevoli di altri thread in un processo. Thread condividono risorse comuni, tuttavia, deve coordinare il proprio lavoro tramite i semafori o un altro metodo di comunicazione interprocesso. Per ulteriori informazioni sulla sincronizzazione dei thread, vedere [la scrittura di un programma multithread Win32](../parallel/writing-a-multithreaded-win32-program.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Multithreading con C e Win32](../parallel/multithreading-with-c-and-win32.md)