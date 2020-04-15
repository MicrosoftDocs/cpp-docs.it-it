---
title: MakeStaticReloggerGroup
description: Informazioni di riferimento per la funzione MakeStaticReloggerGroup dell'SDK di C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- MakeStaticReloggerGroup
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: 75b638537cb8e0cdeeb5476a3f5277e8e90d9baf
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323906"
---
# <a name="makestaticreloggergroup"></a>MakeStaticReloggerGroup

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `MakeStaticReloggerGroup` funzione viene utilizzata per creare un gruppo di relogger statico che può essere passato a funzioni quali [Relog](relog.md). I membri di un gruppo relogger ricevono eventi uno per uno da sinistra a destra finché non sono stati elaborati tutti gli eventi in una traccia.

## <a name="syntax"></a>Sintassi

```cpp
template <typename... TReloggerPtrs>
auto MakeStaticReloggerGroup(TReloggerPtrs... reloggers);
```

### <a name="parameters"></a>Parametri

*TReloggerPtrs*\
Questo parametro è sempre dedotto.

*reloggers*\
Un pacchetto di parametri di puntatori [IRelogger](../other-types/irelogger-class.md) incluso nel gruppo di relogger statico. Questi puntatori possono `std::unique_ptr`essere `std::shared_ptr`non elaborati, , o . [Anche](../other-types/ianalyzer-class.md) i puntatori `IRelogger` IAnalyzer sono considerati puntatori a causa di una relazione di ereditarietà.

### <a name="return-value"></a>Valore restituito

Gruppo relogger statico. Usare la parola chiave **auto** per acquisire il valore restituito.

## <a name="remarks"></a>Osservazioni

A differenza dei gruppi di relogger dinamici, i membri di un gruppo di relogger statici devono essere noti in fase di compilazione. Inoltre, un gruppo di relogger statico contiene puntatori [IRelogger](../other-types/irelogger-class.md) che non hanno un comportamento polimorfico. Quando si utilizza un gruppo relogger statico per analizzare una traccia `IRelogger` ETW (Event Tracing for Windows), le chiamate all'interfaccia si risolvono sempre nell'oggetto a cui fa riferimento direttamente il membro del gruppo relogger. Questa perdita di flessibilità comporta la possibilità di tempi di elaborazione degli eventi più rapidi. Se i membri di un gruppo relogger non possono essere noti in fase `IRelogger` di compilazione o se è necessario un comportamento polimorfico sui puntatori, prendere in considerazione l'utilizzo di un gruppo relogger dinamico. È possibile utilizzare un gruppo di relogger dinamico chiamando [MakeDynamicReloggerGroup](make-dynamic-relogger-group.md) invece.

::: moniker-end
