---
title: Errore del compilatore C2220
ms.date: 11/04/2016
f1_keywords:
- C2220
helpviewer_keywords:
- C2220
ms.assetid: d610802c-64d7-40ad-a2a6-0ed0b6815a6c
ms.openlocfilehash: 3ff730c6fea7d2c57c4ec3054fc627cdc6227e2d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50603411"
---
# <a name="compiler-error-c2220"></a>Errore del compilatore C2220

Avviso considerato come errore - Nessun file di oggetto generato

[/WX](../../build/reference/compiler-option-warning-level.md) indica al compilatore di considerare tutti gli avvisi come errori. Poiché si è verificato un errore, non è stato generato alcun oggetto o file eseguibile.

Questo errore viene visualizzata solo quando la **/WX** flag è impostato e viene generato un avviso durante la compilazione. Per correggere questo errore, è necessario eliminare ogni avviso nel progetto.

### <a name="to-fix-use-one-of-the-following-techniques"></a>Per risolvere il problema, utilizzare una delle seguenti tecniche

- Correggere i problemi che causano gli avvisi nel progetto.

- Compilare a un livello di avviso inferiore, ad esempio, usare **/w3** invece di **/W4**.

- Usare un [avviso](../../preprocessor/warning.md) pragma per disabilitare o eliminare un avviso specifico.

- Non usare **/WX** da compilare.