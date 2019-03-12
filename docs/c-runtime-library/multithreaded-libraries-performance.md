---
title: Prestazioni librerie multithread
ms.date: 11/04/2016
helpviewer_keywords:
- threading [C++], performance
- libraries, multithreaded
- performance, multithreading
- multithreaded libraries
ms.assetid: faa5d808-087c-463d-8f0d-8c478d137296
ms.openlocfilehash: 48f491b6d82acb566669302e4d607e85faf9012a
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57748363"
---
# <a name="multithreaded-libraries-performance"></a>Prestazioni librerie multithread

CRT a thread singolo non è più disponibile. In questo argomento viene illustrato come ottenere prestazioni massime dalle librerie con multithreading.

## <a name="maximizing-performance"></a>Massimizzazione delle prestazioni

Le prestazioni delle librerie con multithreading sono state migliorate e sono vicine alle prestazioni delle librerie a thread singolo, ora eliminate. Per i casi in cui sono richieste prestazioni superiori, esistono alcune nuove funzionalità.

- Il blocco di flusso indipendente consente di bloccare un flusso e quindi di usare le [funzioni _nolock](../c-runtime-library/nolock-functions.md) che accedono direttamente al flusso. Consente l'utilizzo del blocco da eseguire al di fuori dei cicli critici.

- Le impostazioni locali per thread riducono il costo di accesso alle impostazioni locali per gli scenari con multithreading (vedere [_configthreadlocale](../c-runtime-library/reference/configthreadlocale.md)).

- Le funzioni dipendenti dalle impostazioni locali (con nomi che terminano in _l) accettano le impostazioni locali come parametro, rimuovendo costo sostanziale (ad esempio, [printf, _printf_l, wprintf, _wprintf_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)).

- Le ottimizzazioni per le tabelle codici comuni riducono il costo di molte operazioni brevi.

- Se si definisce [_CRT_DISABLE_PERFCRIT_LOCKS](../c-runtime-library/crt-disable-perfcrit-locks.md), per tutte le operazioni I/O viene forzato l'uso di un modello I/O a thread singolo e dei form _nolock delle funzioni. Questo consente alle applicazioni a thread singolo altamente basate su I/O di ottenere migliori prestazioni.

- L'esposizione dell'handle heap CRT consente di abilitare Windows Low Fragmentation Heap (LFH) per l'heap CRT, che consente di migliorare notevolmente le prestazioni negli scenari altamente ridimensionati.

## <a name="see-also"></a>Vedere anche

[Funzionalità della libreria CRT](../c-runtime-library/crt-library-features.md)
