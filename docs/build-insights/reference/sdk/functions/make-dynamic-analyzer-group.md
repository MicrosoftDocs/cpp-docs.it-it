---
title: MakeDynamicAnalyzerGroup
description: Riferimento C++ alla funzione MakeDynamicAnalyzerGroup di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- MakeDynamicAnalyzerGroup
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: f409d685c6af6514b73cd837d668a962c1a0d01a
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78332831"
---
# <a name="makedynamicanalyzergroup"></a>MakeDynamicAnalyzerGroup

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La funzione `MakeDynamicAnalyzerGroup` viene utilizzata per creare un gruppo analizzatore dinamico. I membri di un gruppo analizzatore ricevono gli eventi uno alla volta da sinistra a destra, fino a quando non vengono analizzati tutti gli eventi in una traccia.

## <a name="syntax"></a>Sintassi

```cpp
auto MakeDynamicAnalyzerGroup(std::vector<IAnalyzer*> analyzers);

auto MakeDynamicAnalyzerGroup(std::vector<std::shared_ptr<IAnalyzer>> analyzers);

auto MakeDynamicAnalyzerGroup(std::vector<std::unique_ptr<IAnalyzer>> analyzers);
```

### <a name="parameters"></a>Parametri

*analizzatori*\
Vettore di puntatori [IAnalyzer](../other-types/ianalyzer-class.md) inclusi nel gruppo analizzatore dinamico. Questi puntatori possono essere RAW, `std::unique_ptr`o `std::shared_ptr`.

### <a name="return-value"></a>Valore restituito

Un gruppo analizzatore dinamico. Usare la parola chiave **auto** per acquisire il valore restituito.

## <a name="remarks"></a>Osservazioni

A differenza dei gruppi di analizzatori statici, i membri di un gruppo di analizzatori dinamici non devono essere noti in fase di compilazione. È possibile scegliere i membri del gruppo analizzatore in fase di esecuzione in base all'input del programma o in base ad altri valori sconosciuti in fase di compilazione. A differenza dei gruppi di analizzatori statici, i puntatori [IAnalyzer](../other-types/ianalyzer-class.md) all'interno di un gruppo di analizzatori dinamici hanno un comportamento polimorfico e le chiamate alle funzioni virtuali vengono inviate correttamente. Questa flessibilità comporta il costo di un tempo di elaborazione degli eventi probabilmente più lento. Quando tutti i membri del gruppo analizzatore sono noti in fase di compilazione e se non è necessario un comportamento polimorfico, provare a usare un gruppo di analizzatori statici. Per usare un gruppo di analizzatori statici, chiamare invece [MakeStaticAnalyzerGroup](make-static-analyzer-group.md) .

Un gruppo analizzatore dinamico può essere incapsulato all'interno di un gruppo analizzatore statico. Questa operazione viene eseguita passando il relativo indirizzo a [MakeStaticAnalyzerGroup](make-static-analyzer-group.md). Usare questa tecnica per passare gruppi di analizzatori dinamici a funzioni come [Analyze](analyze.md)che accettano solo gruppi di analizzatori statici.

::: moniker-end
