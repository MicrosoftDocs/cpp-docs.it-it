---
title: Avviso del compilatore C4746
ms.date: 11/04/2016
ms.assetid: 5e79ab46-6031-499a-a986-716c866b6c0e
ms.openlocfilehash: 1b79eed2134b8c6310e508e56b3388c6f38fe4b7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50625888"
---
# <a name="compiler-warning-c4746"></a>Avviso del compilatore C4746

accesso volatile di '\<espressione >' è soggetto a /volatile: [iso&#124;ms] impostazione; considerare l'uso di funzioni intrinseche iso_volatile_load/store.

C4746 viene generato ogni volta che si accede ad una variabile volatile direttamente. Consente di aiutare gli sviluppatori di identificare i percorsi di codice che sono interessati dal modello volatile specificato attualmente (che può essere controllato con il [/volatile](../../build/reference/volatile-volatile-keyword-interpretation.md) opzione del compilatore). In particolare, può essere utile per individuare barriere di memoria hardware generate dal compilatore quando /volatile:ms viene utilizzato.

Le funzioni intrinseche __iso_volatile_load/store possono essere utilizzate per accedere in modo esplicito alla memoria volatile senza essere influenzate dal modello volatile. Utilizzando queste funzioni intrinseche non verrà generato C4746.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .