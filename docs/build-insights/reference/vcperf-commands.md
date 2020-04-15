---
title: 'Riferimento: comandi vcperf'
description: Informazioni di riferimento per l'utilità della riga di comando vcperf.exe.
ms.date: 11/03/2019
helpviewer_keywords:
- C++ Build Insights
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 9d3b0a9dbdfe922dc87f91006441e1f65d54c8a7
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323245"
---
# <a name="reference-vcperf-commands"></a>Riferimento: comandi vcperf

::: moniker range="<=vs-2017"

In Visual Studio 2019 sono disponibili gli strumenti di analisi della build in C. Per visualizzare la documentazione relativa a tale versione, impostare il controllo del selettore della versione di Visual Studio per questo articolo su Visual Studio 2019.To see the documentation for that version, set the Visual Studio **Version** selector control for this article to Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range="vs-2019"

In questo articolo vengono elencati e descritti i comandi disponibili in *vcperf.exe*e le relative modalità di utilizzo.

## <a name="commands-to-start-and-stop-traces"></a>Comandi per avviare e arrestare le tracce

*IMPORTANTE: i seguenti comandi richiedono tutti privilegi amministrativi.*

| Opzione           | Argomenti e descrizione |
|------------------|---------------------------|
| `/start`         | `[/nocpusampling]` `<sessionName>` |
|                  | Indica a *vcperf.exe di* avviare una traccia con il nome di sessione specificato. Può essere presente una sola sessione attiva alla volta su un determinato computer. <br/><br/> Se `/nocpusampling` viene specificata l'opzione, *vcperf.exe* non raccoglie campioni di CPU. Impedisce l'utilizzo della visualizzazione Utilizzo CPU (campione) in Analizzatore prestazioni Windows, ma riduce le tracce raccolte. <br/><br/> Una volta avviata la traccia, *vcperf.exe* viene restituito immediatamente. Gli eventi vengono raccolti a livello di sistema per tutti i processi in esecuzione nel computer. Ciò significa che non è necessario compilare il progetto dallo stesso prompt dei comandi di quello utilizzato per eseguire *vcperf.exe*. Ad esempio, è possibile compilare il progetto da Visual Studio.For example, you can build your project from Visual Studio. |
| `/stop`          | `<sessionName>` `<outputFile.etl>` |
|                  | Interrompe la traccia identificata dal nome della sessione specificato. Esegue un passaggio di post-elaborazione sulla traccia per generare un file visualizzabile in Windows Performance Analyzer (WPA). Per un'esperienza di visualizzazione ottimale, usa una versione di WPA che include il componente aggiuntivo Analisi di compilazione di C. Per ulteriori informazioni, vedere Per iniziare a usare le [informazioni dettagliate](/cpp/build-insights/get-started-with-cpp-build-insights)sulla compilazione in C. Il `<outputFile.etl>` parametro specifica dove salvare il file di output. |
| `/stopnoanalyze` | `<sessionName>` `<rawOutputFile.etl>` |
|                  | Interrompe la traccia identificata dal nome di sessione specificato e scrive i dati non elaborati non elaborati nel file di output specificato. Il file risultante non deve essere visualizzato in WPA. <br/><br/> La fase di post-elaborazione coinvolta nel `/stop` comando può talvolta essere lunga. È possibile `/stopnoanalyze` utilizzare il comando per ritardare questo passaggio di post-elaborazione. Utilizzare `/analyze` il comando quando si è pronti a produrre un file visualizzabile in Analizzatore prestazioni Windows. |

## <a name="miscellaneous-commands"></a>Comandi vari

| Opzione     | Argomenti e descrizione |
|------------|---------------------------|
| `/analyze` | `<rawInputFile.etl> <outputFile.etl>` |
|            | Accetta un file di traccia `/stopnoanalyze` non elaborato prodotto dal comando. Esegue un passaggio di post-elaborazione su questa traccia per generare un file visualizzabile in Analizzatore prestazioni Windows. Per un'esperienza di visualizzazione ottimale, usa una versione di WPA che include il componente aggiuntivo Analisi di compilazione di C. Per ulteriori informazioni, vedere Per iniziare a usare le [informazioni dettagliate](/cpp/build-insights/get-started-with-cpp-build-insights)sulla compilazione in C. |

## <a name="see-also"></a>Vedere anche

[Guida introduttiva a Informazioni dettagliate sulla compilazione in C](/cpp/build-insights/get-started-with-cpp-build-insights)\
[Esercitazione: Nozioni di base su Analizzatore prestazioni WindowsTutorial: Windows Performance Analyzer basics](/cpp/build-insights/tutorials/wpa-basics)\
[Riferimento: Visualizzazioni di Windows Performance Analyzer](wpa-views.md)\
[Windows Performance Analyzer](/windows-hardware/test/wpt/windows-performance-analyzer)

::: moniker-end
