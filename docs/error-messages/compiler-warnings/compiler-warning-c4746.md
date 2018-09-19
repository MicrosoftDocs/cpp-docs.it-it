---
title: Avviso del compilatore C4746 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
dev_langs:
- C++
ms.assetid: 5e79ab46-6031-499a-a986-716c866b6c0e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5e6abce7ebbcdc41effed05ccf54337e3976c34e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46054870"
---
# <a name="compiler-warning-c4746"></a>Avviso del compilatore C4746

accesso volatile di '\<espressione >' è soggetto a /volatile: [iso&#124;ms] impostazione; considerare l'uso di funzioni intrinseche iso_volatile_load/store.

C4746 viene generato ogni volta che si accede ad una variabile volatile direttamente. Consente di aiutare gli sviluppatori di identificare i percorsi di codice che sono interessati dal modello volatile specificato attualmente (che può essere controllato con il [/volatile](../../build/reference/volatile-volatile-keyword-interpretation.md) opzione del compilatore). In particolare, può essere utile per individuare barriere di memoria hardware generate dal compilatore quando /volatile:ms viene utilizzato.

Le funzioni intrinseche __iso_volatile_load/store possono essere utilizzate per accedere in modo esplicito alla memoria volatile senza essere influenzate dal modello volatile. Utilizzando queste funzioni intrinseche non verrà generato C4746.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .