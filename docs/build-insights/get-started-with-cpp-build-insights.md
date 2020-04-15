---
title: Introduzione a C++ Build Insights
description: Una panoramica di alto livello di approfondimenti sulla build di C.
ms.date: 11/03/2019
helpviewer_keywords:
- C++ Build Insights
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 3a75dfe3bf1263cce53d70b764607cad4eec86d5
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81325720"
---
# <a name="get-started-with-c-build-insights"></a>Introduzione a C++ Build Insights

::: moniker range="<=vs-2017"

In Visual Studio 2019 sono disponibili gli strumenti di analisi della build in C. Per visualizzare la documentazione relativa a tale versione, impostare il controllo del selettore della versione di Visual Studio per questo articolo su Visual Studio 2019.To see the documentation for that version, set the Visual Studio **Version** selector control for this article to Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range="vs-2019"

Le informazioni dettagliate sulla compilazione in Cè sono una raccolta di strumenti che offre una maggiore visibilità nella catena di strumenti di Microsoft Visual C (MSVC). Gli strumenti raccolgono i dati relativi alle compilazioni di C, quindi li presentano in un formato che consente di rispondere alle domande più comuni, ad esempio:The tools collect data about your C's builds, and present it in a format that can help you answer questions, like:

- Le mie costruzioni sono sufficientemente parallelizzate?
- Cosa devo includere nella mia intestazione precompilata (PCH)?
- C'è un collo di bottiglia specifico su cui dovrei concentrarmi per aumentare la velocità di compilazione?

I componenti principali di questa tecnologia sono:

- *vcperf.exe*, un'utilità della riga di comando che è possibile utilizzare per raccogliere tracce per le compilazioni,
- un'estensione di Windows Performance Analyzer (WPA) che consente di visualizzare le tracce di compilazione in WPA,
- l'SDK di approfondimenti sulla compilazione di C, un kit di sviluppo software per la creazione di strumenti personalizzati che utilizzano i dati di Build Insights.

Clicca sui link qui sotto per iniziare rapidamente con questi componenti:

[Esercitazione: vcperf e Windows Performance Analyzer](tutorials/vcperf-and-wpa.md)\
Informazioni su come raccogliere le tracce di compilazione per i progetti in linguaggio C, nonché su come visualizzarle in WPA.

[Esercitazione: Nozioni di base sulle prestazioni di WindowsTutorial: Windows Performance Basics](tutorials/wpa-basics.md)\
Scopri utili suggerimenti WPA per analizzare le tue tracce di compilazione.

[SDK di approfondimenti per la compilazione in C](reference/sdk/overview.md)\
Una panoramica dell'SDK per le informazioni dettagliate sulla compilazione in C.

::: moniker-end
