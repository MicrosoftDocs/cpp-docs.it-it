---
title: MakeStaticAnalyzerGroup
description: Riferimento alla funzione MakeStaticAnalyzerGroup di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- MakeStaticAnalyzerGroup
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 81c5654c78e086af1c33d0791768ceea52575c51
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87224175"
---
# <a name="makestaticanalyzergroup"></a>MakeStaticAnalyzerGroup

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `MakeStaticAnalyzerGroup` funzione viene usata per creare un gruppo analizzatore statico che può essere passato a funzioni come [`Analyze`](analyze.md) o [`Relog`](relog.md) . I membri di un gruppo analizzatore ricevono gli eventi uno alla volta da sinistra a destra, fino a quando non vengono analizzati tutti gli eventi in una traccia.

## <a name="syntax"></a>Sintassi

```cpp
template <typename... TAnalyzerPtrs>
auto MakeStaticAnalyzerGroup(TAnalyzerPtrs... analyzers);
```

### <a name="parameters"></a>Parametri

*TAnalyzerPtrs*\
Questo parametro viene sempre dedotto.

*analizzatori*\
Pacchetto di parametri dei [`IAnalyzer`](../other-types/ianalyzer-class.md) puntatori inclusi nel gruppo dell'analizzatore statico. Questi puntatori possono essere RAW, `std::unique_ptr` o `std::shared_ptr` .

### <a name="return-value"></a>Valore restituito

Gruppo di analizzatori statici. Usare la **`auto`** parola chiave per acquisire il valore restituito.

## <a name="remarks"></a>Osservazioni

A differenza dei gruppi di analizzatore dinamici, i membri di un gruppo di analizzatori statici devono essere noti in fase di compilazione. Inoltre, un gruppo analizzatore statico contiene [`IAnalyzer`](../other-types/ianalyzer-class.md) puntatori che non hanno un comportamento polimorfico. Quando si utilizza un gruppo analizzatore statico per analizzare una traccia di Event Tracing for Windows (ETW), le chiamate all' `IAnalyzer` interfaccia vengono sempre risolte nell'oggetto a cui fa riferimento direttamente il membro del gruppo dell'analizzatore. Questa perdita di flessibilità è costituita dalla possibilità di tempi di elaborazione degli eventi più veloci. Se i membri di un gruppo analizzatore non possono essere noti in fase di compilazione o se è necessario un comportamento polimorfico nei `IAnalyzer` puntatori, provare a usare un gruppo analizzatore dinamico. Per usare un gruppo di analizzatori dinamici, chiamare in [`MakeDynamicAnalyzerGroup`](make-static-analyzer-group.md) alternativa.

::: moniker-end
