---
title: Introduzione a C++ Build Insights
description: Panoramica di alto livello delle informazioni dettagliate sulla compilazione di C++.
ms.date: 11/03/2019
helpviewer_keywords:
- C++ Build Insights
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: c4ebbb280a5cccaa35b5efc7f90e9b570600c47b
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92923634"
---
# <a name="get-started-with-c-build-insights"></a>Introduzione a C++ Build Insights

::: moniker range="<=msvc-150"

Gli strumenti di build Insights per C++ sono disponibili in Visual Studio 2019. Per visualizzare la documentazione relativa a tale versione, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range="msvc-160"

C++ Build Insights è una raccolta di strumenti che offre una maggiore visibilità nella catena di strumenti Microsoft Visual C++ (MSVC). Gli strumenti raccolgono i dati sulle compilazioni C++ e li presentano in un formato che può aiutare a rispondere a domande comuni, ad esempio:

- Le compilazioni sono sufficientemente parallele?
- Cosa è necessario includere nell'intestazione precompilata (PCH)?
- È necessario concentrarsi su un collo di bottiglia specifico per aumentare le velocità di compilazione?

I componenti principali di questa tecnologia sono:

- *vcperf.exe* , un'utilità da riga di comando che è possibile usare per raccogliere tracce per le compilazioni,
- estensione di Windows Performance Analyzer (WPA) che consente di visualizzare le tracce di compilazione in WPA e
- C++ Build Insights SDK, un Software Development Kit per la creazione di strumenti personalizzati che usano i dati di build Insights di C++.

## <a name="documentation-sections"></a>Sezioni della documentazione

[Esercitazione: vcperf e Windows Performance Analyzer](tutorials/vcperf-and-wpa.md)\
Informazioni su come raccogliere le tracce di compilazione per i progetti C++ e come visualizzarle in WPA.

[Esercitazione: Nozioni fondamentali sulle prestazioni di Windows](tutorials/wpa-basics.md)\
Individuare utili suggerimenti per WPA per l'analisi delle tracce di compilazione.

[SDK per Build Insights per C++](reference/sdk/overview.md)\
Panoramica di C++ Build Insights SDK.

## <a name="articles"></a>Articoli

Leggere questi articoli dal Blog ufficiale del team di C++ per altre informazioni su C++ Build Insights:

[Introduzione a C++ Build Insights](https://devblogs.microsoft.com/cppblog/introducing-c-build-insights/)

[Analizzare le compilazioni a livello di codice con C++ Build Insights SDK](https://devblogs.microsoft.com/cppblog/analyze-your-builds-programmatically-with-the-c-build-insights-sdk/)

[Ricerca di colli di bottiglia di compilazione con informazioni dettagliate sulla compilazione C++](https://devblogs.microsoft.com/cppblog/finding-build-bottlenecks-with-cpp-build-insights/)

[Build più veloci con suggerimenti PCH da informazioni dettagliate sulla compilazione C++](https://devblogs.microsoft.com/cppblog/faster-builds-with-pch-suggestions-from-c-build-insights/)

::: moniker-end
