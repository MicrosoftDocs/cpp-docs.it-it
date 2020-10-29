---
title: MakeStaticReloggerGroup
description: Riferimento alla funzione MakeStaticReloggerGroup di C++ Build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- MakeStaticReloggerGroup
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 1d49f15a14675f265e1f63ef8795f442f49ad5d4
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92920203"
---
# <a name="makestaticreloggergroup"></a>MakeStaticReloggerGroup

::: moniker range="<=msvc-140"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di **versione** di Visual Studio per questo articolo su visual studio 2017 o visual studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=msvc-150"

La `MakeStaticReloggerGroup` funzione viene usata per creare un gruppo di relogger statico che può essere passato a funzioni come [relog](relog.md). I membri di un gruppo di relogger ricevono gli eventi uno alla volta da sinistra a destra fino a quando non vengono elaborati tutti gli eventi in una traccia.

## <a name="syntax"></a>Sintassi

```cpp
template <typename... TReloggerPtrs>
auto MakeStaticReloggerGroup(TReloggerPtrs... reloggers);
```

### <a name="parameters"></a>Parametri

*TReloggerPtrs*\
Questo parametro viene sempre dedotto.

*rilogger*\
Pacchetto di parametri di [`IRelogger`](../other-types/irelogger-class.md) puntatori incluso nel gruppo statico relogger. Questi puntatori possono essere RAW, `std::unique_ptr` o `std::shared_ptr` . [`IAnalyzer`](../other-types/ianalyzer-class.md) i puntatori sono considerati anche `IRelogger` puntatori a causa di una relazione di ereditarietà.

### <a name="return-value"></a>Valore restituito

Un gruppo statico di relogger. Usare la **`auto`** parola chiave per acquisire il valore restituito.

## <a name="remarks"></a>Osservazioni

A differenza dei gruppi di relogger dinamici, i membri di un gruppo statico di relogger devono essere noti in fase di compilazione. Inoltre, un gruppo statico di relogger contiene [`IRelogger`](../other-types/irelogger-class.md) puntatori che non hanno un comportamento polimorfico. Quando si usa un gruppo statico di relogger per analizzare una traccia di Event Tracing for Windows (ETW), le chiamate all' `IRelogger` interfaccia vengono sempre risolte nell'oggetto a cui punta il membro del gruppo relogger. Questa perdita di flessibilità è costituita dalla possibilità di tempi di elaborazione degli eventi più veloci. Se i membri di un gruppo di relogger non possono essere noti in fase di compilazione o se è necessario un comportamento polimorfico nei `IRelogger` puntatori, provare a usare un gruppo di relogger dinamico. È possibile utilizzare un gruppo di relogger dinamici chiamando in [`MakeDynamicReloggerGroup`](make-dynamic-relogger-group.md) alternativa.

::: moniker-end
