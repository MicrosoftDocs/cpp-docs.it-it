---
title: MakeDynamicAnalyzerGroup
description: Informazioni di riferimento per la funzione MakeDynamicAnalyzerGroup dell'SDK di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- MakeDynamicAnalyzerGroup
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 148eeea41f29ac6dd75653feed7f3f3f8c301911
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323967"
---
# <a name="makedynamicanalyzergroup"></a>MakeDynamicAnalyzerGroup

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `MakeDynamicAnalyzerGroup` funzione viene utilizzata per creare un gruppo di analizzatori dinamici. I membri di un gruppo di analizzatori ricevono gli eventi uno per uno da sinistra a destra, fino a quando non vengono analizzati tutti gli eventi in una traccia.

## <a name="syntax"></a>Sintassi

```cpp
auto MakeDynamicAnalyzerGroup(std::vector<IAnalyzer*> analyzers);

auto MakeDynamicAnalyzerGroup(std::vector<std::shared_ptr<IAnalyzer>> analyzers);

auto MakeDynamicAnalyzerGroup(std::vector<std::unique_ptr<IAnalyzer>> analyzers);
```

### <a name="parameters"></a>Parametri

*Analizzatori*\
Vettore di puntatori [IAnalyzer](../other-types/ianalyzer-class.md) inclusi nel gruppo di analizzatori dinamici. Questi puntatori possono `std::unique_ptr`essere `std::shared_ptr`non elaborati, , o .

### <a name="return-value"></a>Valore restituito

Un gruppo di analizzatori dinamici. Usare la parola chiave **auto** per acquisire il valore restituito.

## <a name="remarks"></a>Osservazioni

A differenza dei gruppi analizzatori statici, i membri di un gruppo di analizzatori dinamici non devono essere noti in fase di compilazione. È possibile scegliere i membri del gruppo analyzer in fase di esecuzione in base all'input del programma o in base ad altri valori sconosciuti in fase di compilazione. A differenza dei gruppi di analizzatori statici, i puntatori [IAnalyzer](../other-types/ianalyzer-class.md) all'interno di un gruppo di analizzatori dinamici hanno un comportamento polimorfico e le chiamate di funzione virtuale vengono inviate correttamente. Questa flessibilità ha il costo di un tempo di elaborazione degli eventi possibilmente più lento. Quando tutti i membri del gruppo analyzer sono noti in fase di compilazione e se non è necessario un comportamento polimorfico, prendere in considerazione l'utilizzo di un gruppo di analizzatori statici. Per usare un gruppo di analizzatori statici, chiamare [MakeStaticAnalyzerGroup](make-static-analyzer-group.md) invece.

Un gruppo di analizzatori dinamici può essere incapsulato all'interno di un gruppo di analizzatori statici. Viene eseguita passando il relativo indirizzo a [MakeStaticAnalyzerGroup](make-static-analyzer-group.md). Utilizzare questa tecnica per passare i gruppi di analizzatori dinamici a funzioni quali [Analyze](analyze.md), che accettano solo gruppi di analizzatori statici.

::: moniker-end
