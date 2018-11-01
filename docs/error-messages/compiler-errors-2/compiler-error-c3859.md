---
title: Errore del compilatore C3859
ms.date: 11/04/2016
f1_keywords:
- C3859
helpviewer_keywords:
- C3859
ms.assetid: 40e93b25-4393-4467-90de-035434a665c7
ms.openlocfilehash: be6ccaab49cb329e862fb6068af1337eddbaac8f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50490277"
---
# <a name="compiler-error-c3859"></a>Errore del compilatore C3859

intervallo di memoria virtuale per PCH superato. Ricompilare utilizzando l'opzione della riga di comando '-Zmvalue' o un valore superiore.

L'intestazione precompilata è troppo piccola per la quantità di dati che il compilatore sta cercando di inserire. Usare la **/Zm** flag del compilatore per specificare un valore maggiore per il file di intestazione precompilata. Per altre informazioni, vedere [/Zm (specifica precompilato intestazione memoria limite di allocazione)](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md).