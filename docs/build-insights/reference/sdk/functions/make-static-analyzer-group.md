---
title: MakeStaticAnalyzerGroup
description: Riferimento C++ alla funzione MakeStaticAnalyzerGroup di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- MakeStaticAnalyzerGroup
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 5eabb0fcbb0a0bb0eea0f4e6bbf27b8e4c53c3ab
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78332817"
---
# <a name="makestaticanalyzergroup"></a>MakeStaticAnalyzerGroup

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La funzione `MakeStaticAnalyzerGroup` viene utilizzata per creare un gruppo analizzatore statico che può essere passato a funzioni come [Analyze](analyze.md) o [relog](relog.md). I membri di un gruppo analizzatore ricevono gli eventi uno alla volta da sinistra a destra, fino a quando non vengono analizzati tutti gli eventi in una traccia.

## <a name="syntax"></a>Sintassi

```cpp
template <typename... TAnalyzerPtrs>
auto MakeStaticAnalyzerGroup(TAnalyzerPtrs... analyzers);
```

### <a name="parameters"></a>Parametri

\ *TAnalyzerPtrs*
Questo parametro viene sempre dedotto.

*analizzatori*\
Pacchetto di parametri dei puntatori [IAnalyzer](../other-types/ianalyzer-class.md) inclusi nel gruppo di analizzatori statici. Questi puntatori possono essere RAW, `std::unique_ptr`o `std::shared_ptr`.

### <a name="return-value"></a>Valore restituito

Gruppo di analizzatori statici. Usare la parola chiave **auto** per acquisire il valore restituito.

## <a name="remarks"></a>Osservazioni

A differenza dei gruppi di analizzatore dinamici, i membri di un gruppo di analizzatori statici devono essere noti in fase di compilazione. Inoltre, un gruppo analizzatore statico contiene puntatori [IAnalyzer](../other-types/ianalyzer-class.md) che non hanno un comportamento polimorfico. Quando si utilizza un gruppo analizzatore statico per analizzare una traccia di Event Tracing for Windows (ETW), le chiamate all'interfaccia `IAnalyzer` vengono sempre risolte nell'oggetto a cui fa riferimento direttamente il membro del gruppo analizzatore. Questa perdita di flessibilità è costituita dalla possibilità di tempi di elaborazione degli eventi più veloci. Se i membri di un gruppo analizzatore non possono essere noti in fase di compilazione o se è necessario un comportamento polimorfico nei puntatori `IAnalyzer`, provare a usare un gruppo analizzatore dinamico. Per usare un gruppo di analizzatori dinamici, chiamare invece [MakeDynamicAnalyzerGroup](make-static-analyzer-group.md) .

::: moniker-end
