---
title: Errore del compilatore di risorse RW2003 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- RW2003
dev_langs:
- C++
helpviewer_keywords:
- RW2003
ms.assetid: 9dc0ba70-6776-4aef-b316-5f1711d8e42e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9f7b4341c4567e7a58135cc99a793f287f810043
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46096782"
---
# <a name="resource-compiler-error-rw2003"></a>Errore del compilatore di risorse RW2003

Errore di generazione

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. **Errore: File di risorse di Bitmap file non è in formato 3.00**

     Le immagini bitmap in formato Windows versione 2. x non possono essere usate nei file di risorse della versione 3. x. La mappa di bit deve essere ridisegnato o convertito in formato 3.x.

1. **Errore: DIB precedente nel nome di risorsa. Passarlo tramite SDKPAINT**

     Una Bitmap indipendente di periferica (DIB) nella risorsa specificata non è compatibile con il formato 3.0 di Windows. La mappa di bit deve essere ridisegnato o convertito nel formato 3.x.

1. **Errore: Risorsa-nome file di risorse non è in formato 3.00**

     Un'icona o cursore nella risorsa specificata utilizzato un formato da una versione precedente di Windows. L'icona o cursore deve essere ridisegnato o convertiti nel formato 3.x.

1. **Formato intestazione DIB sconosciuto**

     L'intestazione di bitmap non è una struttura dbnumeric o struttura BITMAPCOREHEADER BITMAPINFOHEADER.

1. **Impossibile inizializzare le informazioni sui simboli**

     Questo errore si verifica solo in Visual C++. La causa probabile è che vi siano troppi file aperti o non è possibile aprire o scrivere i file di dati necessari per Visual C++ importare i simboli nello script. Visual C++ tenta di creare questi file nella directory specificata per il **TMP** variabile di ambiente o nella directory corrente se non è specificato.

1. **Non è possibile salvare le informazioni sui simboli**

     Questo errore si verifica solo in Visual C++. La causa probabile è che vi siano troppi file aperti o non è possibile chiudere o scrivere i file di dati necessari per Visual C++ importare i simboli nello script. Visual C++ tenta di usare questi file nella directory specificata per il **TMP** variabile di ambiente o nella directory corrente se non è specificato.

1. **File di risorse di file bitmap non è in formato 2.03**

     Una bitmap usa un formato precedente alla versione 2.03. La bitmap deve essere convertita o ridisegnata usando il formato per la versione 3.00 o successiva.

1. **Risorsa troppo grande**

     Per Windows 3.1 una risorsa non può superare 65.000 byte. Se la risorsa, quindi non sarà in grado di eseguire la compilazione con Visual C++ o il compilatore di risorse della riga di comando. Questo limite non si applica a cursori, icone, bitmap o altre risorse basate su file.

9. **File di risorse non è in formato 3.00**

     Un cursore o un'icona Usa un formato precedente alla versione 3.00. La risorsa deve essere convertita o ridisegnata usando il formato per la versione 3.00 o versioni successive.

10. **Impossibile aprire il file temporaneo**

     Il compilatore risorse/Visual C++ non è riuscito ad aprire un file temporaneo. La causa probabile è che non si hanno le autorizzazioni di scrittura per la directory o che la directory non esiste. Il compilatore di risorse/Visual C++ tenta di usare questi file nella directory specificata dalla variabile di ambiente **TMP** o nella directory corrente se non è specificata.