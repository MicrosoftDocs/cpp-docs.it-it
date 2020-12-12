---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4657'
title: Avviso del compilatore (livello 1) C4657
ms.date: 11/04/2016
f1_keywords:
- C4657
helpviewer_keywords:
- C4657
ms.assetid: eb750050-cea6-4ead-b80c-d5dcd4971cfc
ms.openlocfilehash: b0a1af53c145495e4daacfa09247ea8cc6fb5697
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97318788"
---
# <a name="compiler-warning-level-1-c4657"></a>Avviso del compilatore (livello 1) C4657

l'espressione utilizza un tipo dati nuovo rispetto all'ultima compilazione

Dall'ultima compilazione riuscita, è stato modificato o aggiunto un tipo di dati che risulta quindi nuovo nel codice sorgente. Modifica e continuazione non supporta le modifiche ai tipi di dati.

Questo avviso verrà seguito da [Errore irreversibile C1092](../../error-messages/compiler-errors-1/fatal-error-c1092.md). Per altre informazioni, vedere [Modifiche al codice supportate](/visualstudio/debugger/supported-code-changes-cpp).

### <a name="to-remove-this-warning-without-ending-the-current-debug-session"></a>Per rimuovere questo avviso senza terminare la sessione di debug corrente

1. Modificare il tipo di dati allo stato precedente all'errore.

1. Scegliere **Applica modifiche del codice** dal menu **Debug**.

### <a name="to-remove-this-error-without-changing-your-source-code"></a>Per rimuovere questo errore senza modificare il codice sorgente

1. Scegliere **Arresta debug** dal menu **Debug**.

1. Scegliere **Compila** dal menu **Compilazione**.
