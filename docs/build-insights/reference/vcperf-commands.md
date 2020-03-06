---
title: 'Informazioni di riferimento: comandi vcperf'
description: Riferimento per l'utilità da riga di comando vcperf. exe.
ms.date: 11/03/2019
helpviewer_keywords:
- C++ Build Insights
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: b85320ce4517eb41410c59a11bd79553405b8402
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78332222"
---
# <a name="reference-vcperf-commands"></a>Informazioni di riferimento: comandi vcperf

::: moniker range="<=vs-2017"

Gli C++ strumenti di build Insights sono disponibili in Visual Studio 2019. Per visualizzare la documentazione relativa a tale versione, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2019.

::: moniker-end
::: moniker range="vs-2019"

In questo articolo vengono elencati e descritti i comandi disponibili in *vcperf. exe*e come utilizzarli.

## <a name="commands-to-start-and-stop-traces"></a>Comandi per avviare e arrestare le tracce

*IMPORTANTE: i comandi seguenti richiedono tutti privilegi amministrativi.*

| Opzione           | Argomenti e descrizione |
|------------------|---------------------------|
| `/start`         | `[/nocpusampling]` `<sessionName>` |
|                  | Indica a *vcperf. exe* di avviare una traccia nel nome della sessione specificato. In un determinato computer può essere presente una sola sessione attiva alla volta. <br/><br/> Se viene specificata l'opzione `/nocpusampling`, *vcperf. exe* non raccoglie gli esempi di CPU. Impedisce l'utilizzo della vista utilizzo CPU (campionata) in Windows Performance Analyzer, ma rende più piccole le tracce raccolte. <br/><br/> Una volta avviata la traccia, *vcperf. exe* viene restituito immediatamente. Gli eventi vengono raccolti a livello di sistema per tutti i processi in esecuzione nel computer. Ciò significa che non è necessario compilare il progetto dallo stesso prompt dei comandi di quello utilizzato per eseguire *vcperf. exe*. Ad esempio, è possibile compilare il progetto da Visual Studio. |
| `/stop`          | `<sessionName>` `<outputFile.etl>` |
|                  | Arresta la traccia identificata dal nome della sessione specificato. Esegue un passaggio di post-elaborazione sulla traccia per generare un file visualizzabile in Windows Performance Analyzer (WPA). Per una migliore esperienza di visualizzazione, usare una versione di WPA che includa il C++ componente aggiuntivo Build Insights. Per altre informazioni, vedere [Introduzione a C++ Build Insights](/cpp/build-insights/get-started-with-cpp-build-insights). Il parametro `<outputFile.etl>` specifica dove salvare il file di output. |
| `/stopnoanalyze` | `<sessionName>` `<rawOutputFile.etl>` |
|                  | Arresta la traccia identificata dal nome della sessione specificato e scrive i dati non elaborati e non elaborati nel file di output specificato. Il file risultante non è progettato per essere visualizzato in WPA. <br/><br/> Il passaggio di post-elaborazione necessario per il `/stop` comando può talvolta essere lungo. È possibile usare il comando `/stopnoanalyze` per ritardare questo passaggio di post-elaborazione. Usare il comando `/analyze` quando si è pronti per produrre un file visualizzabile in Windows Performance Analyzer. |

## <a name="miscellaneous-commands"></a>Comandi vari

| Opzione     | Argomenti e descrizione |
|------------|---------------------------|
| `/analyze` | `<rawInputFile.etl> <outputFile.etl>` |
|            | Accetta un file di traccia non elaborato generato dal comando `/stopnoanalyze`. Esegue un passaggio di post-elaborazione in questa traccia per generare un file visualizzabile in Windows Performance Analyzer. Per una migliore esperienza di visualizzazione, usare una versione di WPA che includa il C++ componente aggiuntivo Build Insights. Per altre informazioni, vedere [Introduzione a C++ Build Insights](/cpp/build-insights/get-started-with-cpp-build-insights). |

## <a name="see-also"></a>Vedere anche

[Introduzione a C++ Build Insights](/cpp/build-insights/get-started-with-cpp-build-insights)\
[Esercitazione: Nozioni di base su Windows Performance Analyzer](/cpp/build-insights/tutorials/wpa-basics)\
Informazioni di [riferimento: viste di Windows Performance Analyzer](wpa-views.md)\
[Windows Performance Analyzer](/windows-hardware/test/wpt/windows-performance-analyzer)

::: moniker-end
