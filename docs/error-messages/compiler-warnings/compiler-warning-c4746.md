---
description: 'Altre informazioni su: avviso del compilatore C4746'
title: Avviso del compilatore C4746
ms.date: 11/04/2016
f1_keywords:
- C4746
helpviewer_keywords:
- C4746
ms.assetid: 5e79ab46-6031-499a-a986-716c866b6c0e
ms.openlocfilehash: 09c6b6968e7180e19955d84fdb69c9113509c39c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97315036"
---
# <a name="compiler-warning-c4746"></a>Avviso del compilatore C4746

l'accesso volatile di ' \<expression> ' è soggetto all'impostazione/volatile: [iso&#124;MS]. provare a usare __iso_volatile_load funzioni intrinseche/Store.

C4746 viene generato ogni volta che si accede ad una variabile volatile direttamente. È progettato per consentire agli sviluppatori di identificare i percorsi di codice interessati dal modello volatile specifico attualmente specificato (che può essere controllato con l'opzione del compilatore [/volatile](../../build/reference/volatile-volatile-keyword-interpretation.md) ). In particolare, può essere utile per individuare barriere di memoria hardware generate dal compilatore quando /volatile:ms viene utilizzato.

Le funzioni intrinseche __iso_volatile_load/store possono essere utilizzate per accedere in modo esplicito alla memoria volatile senza essere influenzate dal modello volatile. Utilizzando queste funzioni intrinseche non verrà generato C4746.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .
