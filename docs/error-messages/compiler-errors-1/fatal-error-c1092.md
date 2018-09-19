---
title: Errore irreversibile C1092 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1092
dev_langs:
- C++
helpviewer_keywords:
- C1092
ms.assetid: bcaa87f0-fbfc-4a33-844b-3b9f5d67f279
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9852b7b3d695d5414e52727ce672ee3258f6840b
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46077152"
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