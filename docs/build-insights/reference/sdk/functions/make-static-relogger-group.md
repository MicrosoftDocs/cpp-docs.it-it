---
title: MakeStaticReloggerGroup
description: Riferimento C++ alla funzione MakeStaticReloggerGroup di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- MakeStaticReloggerGroup
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 06927af89b16d9de1148e555868dd2022c59b171
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78332810"
---
# <a name="makestaticreloggergroup"></a>MakeStaticReloggerGroup

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La funzione `MakeStaticReloggerGroup` viene utilizzata per creare un gruppo di relogger statici che può essere passato a funzioni come [relog](relog.md). I membri di un gruppo di relogger ricevono gli eventi uno alla volta da sinistra a destra fino a quando non vengono elaborati tutti gli eventi in una traccia.

## <a name="syntax"></a>Sintassi

```cpp
template <typename... TReloggerPtrs>
auto MakeStaticReloggerGroup(TReloggerPtrs... reloggers);
```

### <a name="parameters"></a>Parametri

\ *TReloggerPtrs*
Questo parametro viene sempre dedotto.

*rilogger*\
Un pacchetto di parametri di puntatori [IRelogger](../other-types/irelogger-class.md) incluso nel gruppo statico relogger. Questi puntatori possono essere RAW, `std::unique_ptr`o `std::shared_ptr`. I puntatori [IAnalyzer](../other-types/ianalyzer-class.md) sono considerati anche `IRelogger` puntatori a causa di una relazione di ereditarietà.

### <a name="return-value"></a>Valore restituito

Un gruppo statico di relogger. Usare la parola chiave **auto** per acquisire il valore restituito.

## <a name="remarks"></a>Osservazioni

A differenza dei gruppi di relogger dinamici, i membri di un gruppo statico di relogger devono essere noti in fase di compilazione. Inoltre, un gruppo static relogger contiene puntatori [IRelogger](../other-types/irelogger-class.md) che non hanno un comportamento polimorfico. Quando si usa un gruppo di relogger statici per analizzare una traccia di Event Tracing for Windows (ETW), le chiamate all'interfaccia `IRelogger` vengono sempre risolte nell'oggetto a cui punta il membro del gruppo relogger. Questa perdita di flessibilità è costituita dalla possibilità di tempi di elaborazione degli eventi più veloci. Se i membri di un gruppo di relogger non possono essere noti in fase di compilazione o se è necessario un comportamento polimorfico nei puntatori `IRelogger`, provare a usare un gruppo di relogger dinamico. È possibile usare un gruppo di relogger dinamici chiamando invece [MakeDynamicReloggerGroup](make-dynamic-relogger-group.md) .

::: moniker-end
