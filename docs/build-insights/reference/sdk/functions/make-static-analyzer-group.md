---
title: MakeStaticAnalyzerGroup
description: Informazioni di riferimento per la funzione MakeStaticAnalyzerGroup dell'SDK di Build Insights in C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- MakeStaticAnalyzerGroup
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 72f7f5d7a408436902394451a52dd66efe1d93f5
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323935"
---
# <a name="makestaticanalyzergroup"></a>MakeStaticAnalyzerGroup

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `MakeStaticAnalyzerGroup` funzione viene utilizzata per creare un gruppo di analizzatori statici che può essere passato a funzioni quali [Analyze](analyze.md) o [Relog](relog.md). I membri di un gruppo di analizzatori ricevono gli eventi uno per uno da sinistra a destra, fino a quando non vengono analizzati tutti gli eventi in una traccia.

## <a name="syntax"></a>Sintassi

```cpp
template <typename... TAnalyzerPtrs>
auto MakeStaticAnalyzerGroup(TAnalyzerPtrs... analyzers);
```

### <a name="parameters"></a>Parametri

*TAnalyzerPtr*\
Questo parametro è sempre dedotto.

*Analizzatori*\
Pacchetto di parametri di puntatori [IAnalyzer](../other-types/ianalyzer-class.md) inclusi nel gruppo di analizzatori statici. Questi puntatori possono `std::unique_ptr`essere `std::shared_ptr`non elaborati, , o .

### <a name="return-value"></a>Valore restituito

Gruppo di analizzatori statici. Usare la parola chiave **auto** per acquisire il valore restituito.

## <a name="remarks"></a>Osservazioni

A differenza dei gruppi analizzatori dinamici, i membri di un gruppo di analizzatori statici devono essere noti in fase di compilazione. Inoltre, un gruppo di analizzatori statici contiene puntatori [IAnalyzer](../other-types/ianalyzer-class.md) che non hanno comportamento polimorfico. Quando si usa un gruppo di analizzatori statici per analizzare una traccia ETW (Event Tracing for Windows), le chiamate all'interfaccia `IAnalyzer` si risolvono sempre nell'oggetto a cui fa riferimento direttamente il membro del gruppo di analizzatori. Questa perdita di flessibilità comporta la possibilità di tempi di elaborazione degli eventi più rapidi. Se i membri di un gruppo analizzatore non possono essere noti in `IAnalyzer` fase di compilazione o se è necessario un comportamento polimorfico nei puntatori, prendere in considerazione l'utilizzo di un gruppo di analizzatori dinamici. Per usare un gruppo di analizzatori dinamici, chiamare [MakeDynamicAnalyzerGroup](make-static-analyzer-group.md) invece.

::: moniker-end
