---
title: MakeDynamicAnalyzerGroup
description: Riferimento alla funzione MakeDynamicAnalyzerGroup di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- MakeDynamicAnalyzerGroup
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: c4c244066b41837a8dd95b44bab2b096134ed5d4
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87224201"
---
# <a name="makedynamicanalyzergroup"></a>MakeDynamicAnalyzerGroup

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `MakeDynamicAnalyzerGroup` funzione viene usata per creare un gruppo analizzatore dinamico. I membri di un gruppo analizzatore ricevono gli eventi uno alla volta da sinistra a destra, fino a quando non vengono analizzati tutti gli eventi in una traccia.

## <a name="syntax"></a>Sintassi

```cpp
auto MakeDynamicAnalyzerGroup(std::vector<IAnalyzer*> analyzers);

auto MakeDynamicAnalyzerGroup(std::vector<std::shared_ptr<IAnalyzer>> analyzers);

auto MakeDynamicAnalyzerGroup(std::vector<std::unique_ptr<IAnalyzer>> analyzers);
```

### <a name="parameters"></a>Parametri

*analizzatori*\
Vettore di puntatori [IAnalyzer](../other-types/ianalyzer-class.md) inclusi nel gruppo analizzatore dinamico. Questi puntatori possono essere RAW, `std::unique_ptr` o `std::shared_ptr` .

### <a name="return-value"></a>Valore restituito

Un gruppo analizzatore dinamico. Usare la **`auto`** parola chiave per acquisire il valore restituito.

## <a name="remarks"></a>Osservazioni

A differenza dei gruppi di analizzatori statici, i membri di un gruppo di analizzatori dinamici non devono essere noti in fase di compilazione. È possibile scegliere i membri del gruppo analizzatore in fase di esecuzione in base all'input del programma o in base ad altri valori sconosciuti in fase di compilazione. A differenza dei gruppi di analizzatori statici, [`IAnalyzer`](../other-types/ianalyzer-class.md) i puntatori in un gruppo di analizzatori dinamici hanno un comportamento polimorfico e le chiamate di funzioni virtuali vengono inviate correttamente. Questa flessibilità comporta il costo di un tempo di elaborazione degli eventi probabilmente più lento. Quando tutti i membri del gruppo analizzatore sono noti in fase di compilazione e se non è necessario un comportamento polimorfico, provare a usare un gruppo di analizzatori statici. Per usare un gruppo di analizzatori statici, chiamare in [`MakeStaticAnalyzerGroup`](make-static-analyzer-group.md) alternativa.

Un gruppo analizzatore dinamico può essere incapsulato all'interno di un gruppo analizzatore statico. Questa operazione viene eseguita passando il relativo indirizzo a [`MakeStaticAnalyzerGroup`](make-static-analyzer-group.md) . Usare questa tecnica per passare gruppi di analizzatori dinamici a funzioni come [`Analyze`](analyze.md) , che accettano solo gruppi di analizzatori statici.

::: moniker-end
