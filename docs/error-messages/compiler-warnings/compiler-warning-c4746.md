---
title: Avviso del compilatore C4746
ms.date: 11/04/2016
f1_keywords:
- C4746
helpviewer_keywords:
- C4746
ms.assetid: 5e79ab46-6031-499a-a986-716c866b6c0e
ms.openlocfilehash: 7179e2e6d4ec44355e7338ffc4e9ba36f5de47e4
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80165106"
---
# <a name="compiler-warning-c4746"></a>Avviso del compilatore C4746

l'accesso volatile di '\<Expression >' è soggetto all'impostazione/volatile:&#124;[ISO MS]; si consiglia di utilizzare __iso_volatile_load funzioni intrinseche/Store.

C4746 viene generato ogni volta che si accede ad una variabile volatile direttamente. È progettato per consentire agli sviluppatori di identificare i percorsi di codice interessati dal modello volatile specifico attualmente specificato (che può essere controllato con l'opzione del compilatore [/volatile](../../build/reference/volatile-volatile-keyword-interpretation.md) ). In particolare, può essere utile per individuare barriere di memoria hardware generate dal compilatore quando /volatile:ms viene utilizzato.

Le funzioni intrinseche __iso_volatile_load/store possono essere utilizzate per accedere in modo esplicito alla memoria volatile senza essere influenzate dal modello volatile. Utilizzando queste funzioni intrinseche non verrà generato C4746.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .
