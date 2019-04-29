---
title: Avviso del compilatore (livello 1) C4655
ms.date: 08/27/2018
f1_keywords:
- C4655
helpviewer_keywords:
- C4655
ms.assetid: 540f2c7a-e4a1-49af-84b4-03eeea1bbf41
ms.openlocfilehash: aff78dbed217a6d9c5bc2a315ef12a33fe6caf0d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62374664"
---
# <a name="compiler-warning-level-1-c4655"></a>Avviso del compilatore (livello 1) C4655

> «*simbolo*': tipo di variabile nuovo rispetto all'ultima compilazione o definito diversamente altrove

## <a name="remarks"></a>Note

È stato modificato o aggiunto un nuovo tipo di dati dall'ultima compilazione completata. Modifica e continuazione non supporta le modifiche ai tipi di dati.

Questo avviso è seguito da un [Errore irreversibile C1092](../../error-messages/compiler-errors-1/fatal-error-c1092.md). Per altre informazioni, vedere [Modifiche al codice supportate](/visualstudio/debugger/supported-code-changes-cpp).

### <a name="to-remove-this-warning-without-ending-the-current-debug-session"></a>Per rimuovere questo avviso senza terminare la sessione di debug corrente

1. Modificare il tipo di dati allo stato precedente all'errore.

2. Scegliere **Applica modifiche del codice** dal menu **Debug**.

### <a name="to-remove-this-warning-without-changing-your-source-code"></a>Per rimuovere questo avviso senza modificare il codice sorgente

1. Scegliere **Arresta debug** dal menu **Debug**.

2. Scegliere **Compila** dal menu **Compilazione**.