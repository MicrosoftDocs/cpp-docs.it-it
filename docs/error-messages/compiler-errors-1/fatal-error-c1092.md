---
description: 'Altre informazioni su: errore irreversibile C1092'
title: Errore irreversibile C1092
ms.date: 11/04/2016
f1_keywords:
- C1092
helpviewer_keywords:
- C1092
ms.assetid: bcaa87f0-fbfc-4a33-844b-3b9f5d67f279
ms.openlocfilehash: b2a16991784b901202e5d51c0d256ad48305f55f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97145132"
---
# <a name="fatal-error-c1092"></a>Errore irreversibile C1092

Con Modifica e continuazione non sono supportate le modifiche ai tipi di dati. È richiesta la compilazione

È stato modificato o aggiunto un tipo di dati dall'ultima compilazione completata.

- In modifica e continuazione non sono supportate le modifiche ai tipi di dati esistenti, incluse le definizioni di classi, struct o enumerazioni. È necessario arrestare il debug e compilare l'applicazione.

- Modifica e continuazione non supporta l'aggiunta di nuovi tipi di dati se un file di database di programma, ad esempio VC *x* 0. pdb (dove *x* è la versione principale di Visual C++ in uso) è di sola lettura. Per aggiungere tipi di dati, il compilatore deve aprire il file con estensione PDB in modalità di scrittura.

### <a name="to-remove-this-error-without-ending-the-current-debug-session"></a>Per rimuovere questo errore senza terminare la sessione di debug corrente

1. Modificare il tipo di dati allo stato precedente all'errore.

1. Scegliere **Applica modifiche del codice** dal menu **Debug**.

### <a name="to-remove-this-error-without-changing-your-source-code"></a>Per rimuovere questo errore senza modificare il codice sorgente

1. Scegliere **Arresta debug** dal menu **Debug**.

1. Scegliere **Compila** dal menu **Compilazione**.

Per altre informazioni, vedere [Modifiche al codice supportate](/visualstudio/debugger/supported-code-changes-cpp).
