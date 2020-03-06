---
title: Introduzione a C++ Build Insights
description: Panoramica di alto livello sulle informazioni C++ di compilazione.
ms.date: 11/03/2019
helpviewer_keywords:
- C++ Build Insights
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 2a5799fecc885b96f4278e0f5077662ce5fd7c8f
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78332007"
---
# <a name="get-started-with-c-build-insights"></a>Introduzione a C++ Build Insights

::: moniker range="<=vs-2017"

Gli C++ strumenti di build Insights sono disponibili in Visual Studio 2019. Per visualizzare la documentazione relativa a tale versione, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2019.

::: moniker-end
::: moniker range="vs-2019"

C++Build Insights è una raccolta di strumenti che offre una maggiore visibilità sulla catena di strumenti C++ Microsoft Visual (MSVC). Gli strumenti raccolgono i dati C++ sulle compilazioni e la presentano in un formato che può aiutare a rispondere a domande comuni, ad esempio:

- Le compilazioni sono sufficientemente parallele?
- Cosa è necessario includere nell'intestazione precompilata (PCH)?
- È necessario concentrarsi su un collo di bottiglia specifico per aumentare le velocità di compilazione?

I componenti principali di questa tecnologia sono:

- *vcperf. exe*, un'utilità da riga di comando che è possibile usare per raccogliere tracce per le compilazioni,
- estensione di Windows Performance Analyzer (WPA) che consente di visualizzare le tracce di compilazione in WPA e
- Build C++ Insights SDK, un Software Development Kit per la creazione di strumenti personalizzati che usano i C++ dati di build Insights.

Fare clic sui collegamenti seguenti per iniziare rapidamente con i componenti seguenti:

[Esercitazione: vcperf e Windows Performance Analyzer](tutorials/vcperf-and-wpa.md)\
Informazioni su come raccogliere le tracce di compilazione C++ per i progetti e come visualizzarle in WPA.

[Esercitazione: Nozioni di base sulle prestazioni di Windows](tutorials/wpa-basics.md)\
Individuare utili suggerimenti per WPA per l'analisi delle tracce di compilazione.

[\ SDK per Build Insights C++ ](reference/sdk/overview.md)
Panoramica di C++ Build Insights SDK.

::: moniker-end
