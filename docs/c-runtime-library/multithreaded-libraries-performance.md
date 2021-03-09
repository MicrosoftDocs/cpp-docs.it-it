---
title: Prestazioni librerie multithread
description: Panoramica su come ottenere le migliori prestazioni dalle librerie multithreading di Microsoft C Runtime.
ms.date: 11/04/2016
ms.topic: conceptual
helpviewer_keywords:
- threading [C++], performance
- libraries, multithreaded
- performance, multithreading
- multithreaded libraries
ms.assetid: faa5d808-087c-463d-8f0d-8c478d137296
ms.openlocfilehash: 39d77d52dbc8ac2e725cf46c98c5462df701e3eb
ms.sourcegitcommit: 90c300b74f6556cb5d989802d2e80d79542f55e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/09/2021
ms.locfileid: "102514668"
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

## <a name="see-also"></a>Vedi anche

[Runtime C (CRT) e file della libreria standard C++ (STL) `.lib`](../c-runtime-library/crt-library-features.md)
