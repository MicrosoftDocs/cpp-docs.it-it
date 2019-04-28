---
title: Errore irreversibile C1092
ms.date: 11/04/2016
f1_keywords:
- C1092
helpviewer_keywords:
- C1092
ms.assetid: bcaa87f0-fbfc-4a33-844b-3b9f5d67f279
ms.openlocfilehash: 3268e5b124be40313bdc97b4c95d935ddd4f9160
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62208546"
---
# <a name="fatal-error-c1092"></a>Errore irreversibile C1092

Con Modifica e continuazione non sono supportate le modifiche ai tipi di dati. È richiesta la compilazione

È stato modificato o aggiunto un tipo di dati rispetto all'ultima compilazione riuscita.

- Modifica e continuazione non supporta modifiche ai tipi di dati esistenti, incluse le definizioni di classe, struct o enum. È necessario arrestare il debug e compilare l'applicazione.

- Modifica e continuazione non supporta l'aggiunta di nuovi tipi di dati se un file di database di programma, ad esempio vc*x*pdb 0.log (dove *x* è la versione principale di Visual C++ in uso) è di sola lettura. Per aggiungere tipi di dati, il compilatore deve aprire il file con estensione PDB in modalità di scrittura.

### <a name="to-remove-this-error-without-ending-the-current-debug-session"></a>Per rimuovere questo errore senza terminare la sessione di debug corrente

1. Modificare il tipo di dati allo stato precedente all'errore.

1. Scegliere **Applica modifiche del codice** dal menu **Debug**.

### <a name="to-remove-this-error-without-changing-your-source-code"></a>Per rimuovere questo errore senza modificare il codice sorgente

1. Scegliere **Arresta debug** dal menu **Debug**.

1. Scegliere **Compila** dal menu **Compilazione**.

Per altre informazioni, vedere [Modifiche al codice supportate](/visualstudio/debugger/supported-code-changes-cpp).