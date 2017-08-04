---
title: Prestazioni delle librerie multithread | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- threading [C++], performance
- libraries, multithreaded
- performance, multithreading
- multithreaded libraries
ms.assetid: faa5d808-087c-463d-8f0d-8c478d137296
caps.latest.revision: 4
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: b2a6f6535092043fe2f32c08fbb522ff3c367063
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="multithreaded-libraries-performance"></a>Prestazioni librerie multithread
CRT a thread singolo non è più disponibile. In questo argomento viene illustrato come ottenere prestazioni massime dalle librerie con multithreading.  
  
## <a name="maximizing-performance"></a>Massimizzazione delle prestazioni  
 Le prestazioni delle librerie con multithreading sono state migliorate e sono vicine alle prestazioni delle librerie a thread singolo, ora eliminate. Per i casi in cui sono richieste prestazioni superiori, esistono alcune nuove funzionalità.  
  
-   Il blocco di flusso indipendente consente di bloccare un flusso e quindi di usare le [funzioni _nolock](../c-runtime-library/nolock-functions.md) che accedono direttamente al flusso. Consente l'utilizzo del blocco da eseguire al di fuori dei cicli critici.  
  
-   Le impostazioni locali per thread riducono il costo di accesso alle impostazioni locali per gli scenari con multithreading (vedere [_configthreadlocale](../c-runtime-library/reference/configthreadlocale.md)).  
  
-   Le funzioni dipendenti dalle impostazioni locali (con nomi che terminano in _l) accettano le impostazioni locali come parametro, rimuovendo costo sostanziale (ad esempio, [printf, _printf_l, wprintf, _wprintf_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)).  
  
-   Le ottimizzazioni per le tabelle codici comuni riducono il costo di molte operazioni brevi.  
  
-   Se si definisce [_CRT_DISABLE_PERFCRIT_LOCKS](../c-runtime-library/crt-disable-perfcrit-locks.md), per tutte le operazioni I/O viene forzato l'uso di un modello I/O a thread singolo e dei form _nolock delle funzioni. Questo consente alle applicazioni a thread singolo altamente basate su I/O di ottenere migliori prestazioni.  
  
-   L'esposizione dell'handle heap CRT consente di abilitare Windows Low Fragmentation Heap (LFH) per l'heap CRT, che consente di migliorare notevolmente le prestazioni negli scenari altamente ridimensionati.  
  
## <a name="see-also"></a>Vedere anche  
 [CRT Library Features](../c-runtime-library/crt-library-features.md) (Funzionalità della libreria CRT)
