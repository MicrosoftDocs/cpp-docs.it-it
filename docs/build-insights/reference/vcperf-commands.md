---
title: 'Informazioni di riferimento: comandi vcperf'
description: Informazioni di riferimento per l'utilità da riga di comando vcperf.exe.
ms.date: 11/03/2019
helpviewer_keywords:
- C++ Build Insights
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 42ca422e11824bdbdad4e42e7b55950317095703
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92922205"
---
# <a name="reference-vcperf-commands"></a>Informazioni di riferimento: comandi vcperf

::: moniker range="<=msvc-150"

Gli strumenti di build Insights per C++ sono disponibili in Visual Studio 2019. Per visualizzare la documentazione relativa a tale versione, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range="msvc-160"

In questo articolo vengono elencati e descritti i comandi disponibili in *vcperf.exe* e come utilizzarli.

## <a name="commands-to-start-and-stop-traces"></a>Comandi per avviare e arrestare le tracce

*IMPORTANTE: i comandi seguenti richiedono tutti privilegi amministrativi.*

| Opzione           | Argomenti e descrizione |
|------------------|---------------------------|
| `/start`         | `[/nocpusampling]` `<sessionName>` |
|                  | Indica *vcperf.exe* per avviare una traccia sotto il nome della sessione specificato. In un determinato computer può essere presente una sola sessione attiva alla volta. <br/><br/> Se `/nocpusampling` si specifica l'opzione, *vcperf.exe* non raccoglie gli esempi di CPU. Impedisce l'utilizzo della vista utilizzo CPU (campionata) in Windows Performance Analyzer, ma rende più piccole le tracce raccolte. <br/><br/> Una volta avviata la traccia, *vcperf.exe* restituisce immediatamente il risultato. Gli eventi vengono raccolti a livello di sistema per tutti i processi in esecuzione nel computer. Ciò significa che non è necessario compilare il progetto dallo stesso prompt dei comandi di quello utilizzato per eseguire *vcperf.exe* . Ad esempio, è possibile compilare il progetto da Visual Studio. |
| `/stop`          | `<sessionName>` `<outputFile.etl>` |
|                  | Arresta la traccia identificata dal nome della sessione specificato. Esegue un passaggio di post-elaborazione sulla traccia per generare un file visualizzabile in Windows Performance Analyzer (WPA). Per una migliore esperienza di visualizzazione, usare una versione di WPA che includa il componente aggiuntivo C++ Build Insights. Per altre informazioni, vedere [Introduzione a C++ Build Insights](../get-started-with-cpp-build-insights.md). Il `<outputFile.etl>` parametro specifica la posizione in cui salvare il file di output. |
| `/stopnoanalyze` | `<sessionName>` `<rawOutputFile.etl>` |
|                  | Arresta la traccia identificata dal nome della sessione specificato e scrive i dati non elaborati e non elaborati nel file di output specificato. Il file risultante non è progettato per essere visualizzato in WPA. <br/><br/> Il passaggio di post-elaborazione richiesto nel `/stop` comando può talvolta essere lungo. È possibile usare il `/stopnoanalyze` comando per ritardare questo passaggio di post-elaborazione. Usare il `/analyze` comando quando si è pronti per produrre un file visualizzabile in Windows Performance Analyzer. |

## <a name="miscellaneous-commands"></a>Comandi vari

| Opzione     | Argomenti e descrizione |
|------------|---------------------------|
| `/analyze` | `<rawInputFile.etl> <outputFile.etl>` |
|            | Accetta un file di traccia non elaborato prodotto dal `/stopnoanalyze` comando. Esegue un passaggio di post-elaborazione in questa traccia per generare un file visualizzabile in Windows Performance Analyzer. Per una migliore esperienza di visualizzazione, usare una versione di WPA che includa il componente aggiuntivo C++ Build Insights. Per altre informazioni, vedere [Introduzione a C++ Build Insights](../get-started-with-cpp-build-insights.md). |

## <a name="see-also"></a>Vedere anche

[Introduzione a C++ Build Insights](../get-started-with-cpp-build-insights.md)\
[Esercitazione: Nozioni di base su Windows Performance Analyzer](../tutorials/wpa-basics.md)\
[Informazioni di riferimento: visualizzazioni di Windows Performance Analyzer](wpa-views.md)\
[Windows Performance Analyzer](/windows-hardware/test/wpt/windows-performance-analyzer)

::: moniker-end
