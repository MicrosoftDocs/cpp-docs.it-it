---
title: MakeDynamicReloggerGroup (Gruppo MakeDynamicReloggerGroup)
description: Informazioni di riferimento per la funzione MakeDynamicReloggerGroup dell'SDK di C.
ms.date: 02/12/2020
helpviewer_keywords:
- C++ Build Insights
- C++ Build Insights SDK
- MakeDynamicReloggerGroup
- throughput analysis
- build time analysis
- vcperf.exe
ms.openlocfilehash: f49e37f8e1a8b9ca9a800d20b2891a54453095ef
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81323945"
---
# <a name="makedynamicreloggergroup"></a>MakeDynamicReloggerGroup (Gruppo MakeDynamicReloggerGroup)

::: moniker range="<=vs-2015"

L'SDK di approfondimenti per la compilazione in Cè è compatibile con Visual Studio 2017 e versioni successive. Per visualizzare la documentazione di queste versioni, impostare il controllo del selettore di versione di Visual Studio per questo articolo su Visual Studio 2017 o Visual Studio 2019.To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. Si trova nella parte superiore del sommario in questa pagina.

::: moniker-end
::: moniker range=">=vs-2017"

La `MakeDynamicReloggerGroup` funzione viene utilizzata per creare un gruppo di relogger dinamico. I membri di un gruppo relogger ricevono eventi uno per uno da sinistra a destra finché non sono stati elaborati tutti gli eventi in una traccia.

## <a name="syntax"></a>Sintassi

```cpp
auto MakeDynamicReloggerGroup(std::vector<IRelogger*> reloggers);

auto MakeDynamicReloggerGroup(std::vector<std::shared_ptr<IRelogger>> reloggers);

auto MakeDynamicReloggerGroup(std::vector<std::unique_ptr<IRelogger>> reloggers);
```

### <a name="parameters"></a>Parametri

*reloggers*\
Vettore di puntatori [IRelogger](../other-types/irelogger-class.md) inclusi nel gruppo di relogger dinamici. Questi puntatori possono `std::unique_ptr`essere `std::shared_ptr`non elaborati, , o . [Anche](../other-types/ianalyzer-class.md) i puntatori `IRelogger` IAnalyzer sono considerati puntatori a causa di una relazione di ereditarietà.

### <a name="return-value"></a>Valore restituito

Un gruppo relogger dinamico. Usare la parola chiave **auto** per acquisire il valore restituito.

## <a name="remarks"></a>Osservazioni

A differenza dei gruppi di relogger statici, i membri di un gruppo di relogger dinamico non devono essere noti in fase di compilazione. È possibile scegliere i membri del gruppo relogger in fase di esecuzione in base all'input del programma o in base ad altri valori sconosciuti in fase di compilazione. A differenza dei gruppi di relogger statici, i puntatori [IRelogger](../other-types/irelogger-class.md) all'interno di un gruppo relogger dinamico hanno un comportamento polimorfico e le chiamate alle funzioni virtuali vengono inviate correttamente. Questa flessibilità ha il costo di un tempo di elaborazione degli eventi possibilmente più lento. Quando tutti i membri del gruppo relogger sono noti in fase di compilazione e se non è necessario un comportamento polimorfico, prendere in considerazione l'utilizzo di un gruppo relogger statico. Per usare un gruppo relogger statico, chiamare [MakeStaticReloggerGroup](make-static-relogger-group.md) invece.

Un gruppo di relogger dinamico può essere incapsulato all'interno di un gruppo di relogger statico. Si passa il relativo indirizzo a [MakeStaticReloggerGroup](make-static-relogger-group.md). Utilizzare questa tecnica per passare gruppi di relogger dinamici a funzioni quali [Relog](relog.md), che accettano solo gruppi di relogger statici.

::: moniker-end
