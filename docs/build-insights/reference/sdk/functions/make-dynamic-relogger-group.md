---
title: MakeDynamicReloggerGroup
description: Riferimento C++ alla funzione MakeDynamicReloggerGroup di build Insights SDK.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- MakeDynamicReloggerGroup
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 4ad394d3ba2982e7ee4f2a497fef2ea65a3c1769
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2020
ms.locfileid: "78332824"
---
# <a name="makedynamicreloggergroup"></a>MakeDynamicReloggerGroup

::: moniker range="<=vs-2015"

C++ Build Insights SDK è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione relativa a queste versioni, impostare il controllo selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

La funzione `MakeDynamicReloggerGroup` viene utilizzata per creare un gruppo di relogger dinamici. I membri di un gruppo di relogger ricevono gli eventi uno alla volta da sinistra a destra fino a quando non vengono elaborati tutti gli eventi in una traccia.

## <a name="syntax"></a>Sintassi

```cpp
auto MakeDynamicReloggerGroup(std::vector<IRelogger*> reloggers);

auto MakeDynamicReloggerGroup(std::vector<std::shared_ptr<IRelogger>> reloggers);

auto MakeDynamicReloggerGroup(std::vector<std::unique_ptr<IRelogger>> reloggers);
```

### <a name="parameters"></a>Parametri

*rilogger*\
Vettore di puntatori [IRelogger](../other-types/irelogger-class.md) inclusi nel gruppo Dynamic relogger. Questi puntatori possono essere RAW, `std::unique_ptr`o `std::shared_ptr`. I puntatori [IAnalyzer](../other-types/ianalyzer-class.md) sono considerati anche `IRelogger` puntatori a causa di una relazione di ereditarietà.

### <a name="return-value"></a>Valore restituito

Gruppo di relogger dinamico. Usare la parola chiave **auto** per acquisire il valore restituito.

## <a name="remarks"></a>Osservazioni

A differenza dei gruppi di relogger statici, i membri di un gruppo di relogger dinamici non devono essere noti in fase di compilazione. È possibile scegliere i membri del gruppo relogger in fase di esecuzione in base all'input del programma o in base ad altri valori sconosciuti in fase di compilazione. A differenza dei gruppi di relogger statici, i puntatori [IRelogger](../other-types/irelogger-class.md) all'interno di un gruppo di relogger dinamici hanno un comportamento polimorfico e le chiamate di funzioni virtuali vengono inviate correttamente. Questa flessibilità comporta il costo di un tempo di elaborazione degli eventi probabilmente più lento. Quando tutti i membri del gruppo relogger sono noti in fase di compilazione e se non è necessario un comportamento polimorfico, provare a usare un gruppo di relogger statico. Per usare un gruppo statico di relogger, chiamare invece [MakeStaticReloggerGroup](make-static-relogger-group.md) .

Un gruppo di relogger dinamici può essere incapsulato all'interno di un gruppo statico di relogger. Il relativo indirizzo viene passato a [MakeStaticReloggerGroup](make-static-relogger-group.md). Usare questa tecnica per passare gruppi di relogger dinamici a funzioni come [relog](relog.md), che accettano solo i gruppi statici di relogger.

::: moniker-end
