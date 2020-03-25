---
title: Errore irreversibile C1092
ms.date: 11/04/2016
f1_keywords:
- C1092
helpviewer_keywords:
- C1092
ms.assetid: bcaa87f0-fbfc-4a33-844b-3b9f5d67f279
ms.openlocfilehash: af43ddb83e872762f720b156644e0d466957a8a7
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80203879"
---
# <a name="fatal-error-c1092"></a>Errore irreversibile C1092

Con Modifica e continuazione non sono supportate le modifiche ai tipi di dati. È richiesta la compilazione

È stato modificato o aggiunto un tipo di dati dall'ultima compilazione completata.

- In modifica e continuazione non sono supportate le modifiche ai tipi di dati esistenti, incluse le definizioni di classi, struct o enumerazioni. È necessario arrestare il debug e compilare l'applicazione.

- Modifica e continuazione non supporta l'aggiunta di nuovi tipi di dati se un file di database di programma, ad esempio VC*x*0. pdb (dove *x* è la versione C++ principale di Visual in uso) è di sola lettura. Per aggiungere tipi di dati, il compilatore deve aprire il file con estensione PDB in modalità di scrittura.

### <a name="to-remove-this-error-without-ending-the-current-debug-session"></a>Per rimuovere questo errore senza terminare la sessione di debug corrente

1. Modificare il tipo di dati allo stato precedente all'errore.

1. Scegliere **Applica modifiche del codice** dal menu **Debug**.

### <a name="to-remove-this-error-without-changing-your-source-code"></a>Per rimuovere questo errore senza modificare il codice sorgente

1. Scegliere **Arresta debug** dal menu **Debug**.

1. Scegliere **Compila** dal menu **Compilazione**.

Per altre informazioni, vedere [Modifiche al codice supportate](/visualstudio/debugger/supported-code-changes-cpp).
