---
title: Compilatore avviso (livello 1) C4656 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4656
dev_langs:
- C++
helpviewer_keywords:
- C4656
ms.assetid: b5aaef74-2320-4345-a6ae-b813881a491c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3334b9448dd6e9d47ed0b3ee3e4dfb9dfc57b57f
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46032412"
---
# <a name="compiler-warning-level-1-c4656"></a>Avviso del compilatore (livello 1) C4656

'symbol': tipo di dati nuovo o è stato modificato rispetto all'ultima compilazione o definito diversamente altrove

Dall'ultima compilazione riuscita, è stato modificato o aggiunto un tipo di dati che risulta quindi nuovo nel codice sorgente. Modifica e continuazione non supporta le modifiche ai tipi di dati.

Questo avviso verrà seguito da [Errore irreversibile C1092](../../error-messages/compiler-errors-1/fatal-error-c1092.md). Per altre informazioni, vedere [Modifiche al codice supportate](/visualstudio/debugger/supported-code-changes-cpp).

### <a name="to-remove-this-warning-without-ending-the-current-debug-session"></a>Per rimuovere questo avviso senza terminare la sessione di debug corrente

1. Modificare il tipo di dati allo stato precedente all'errore.

1. Scegliere **Applica modifiche del codice** dal menu **Debug**.

### <a name="to-remove-this-error-without-changing-your-source-code"></a>Per rimuovere questo errore senza modificare il codice sorgente

1. Scegliere **Arresta debug** dal menu **Debug**.

1. Scegliere **Compila** dal menu **Compilazione**.