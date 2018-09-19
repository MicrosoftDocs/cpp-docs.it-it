---
title: Errore del compilatore C2220 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2220
dev_langs:
- C++
helpviewer_keywords:
- C2220
ms.assetid: d610802c-64d7-40ad-a2a6-0ed0b6815a6c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7f4179b396e732ceeea20aeb9428d841a357a6d1
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46051321"
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