---
title: Identificatori di classi di archiviazione con Dichiarazioni di funzione
ms.date: 11/04/2016
helpviewer_keywords:
- function specifiers, storage class
- declaring functions, specifiers
- external declarations
- specifiers, function
- external linkage, function declarations
- external linkage, storage-class specifiers
ms.assetid: 801d7df2-efa9-4924-a725-274a5654cfd4
ms.openlocfilehash: 69d6fa2b17523f2bb4068cd05a11265d91750021
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56152261"
---
# <a name="storage-class-specifiers-with-function-declarations"></a>Identificatori di classi di archiviazione con Dichiarazioni di funzione

È possibile usare l'identificatore **static** o della classe di archiviazione `extern` nelle dichiarazioni di funzione. Le funzioni hanno sempre durate globali.

**Sezione specifica Microsoft**

Le dichiarazioni di funzione a livello interno hanno lo stesso significato delle dichiarazioni di funzione a livello esterno. Questo significa che una funzione è visibile dal momento della dichiarazione in tutto il resto dell'unità di conversione anche se viene dichiarata in ambito locale.

**Fine sezione specifica Microsoft**

Le regole di visibilità per le funzioni variano leggermente dalle regole per le variabili, nel modo seguente:

- Una funzione dichiarata come **static** è visibile solo all'interno del file di origine in cui viene definita. Le funzioni nello stesso file di origine possono chiamare la funzione **static**, ma le funzioni in altri file di origine non possono accedervi direttamente per nome. È possibile dichiarare un'altra funzione **static** con lo stesso nome in un file di origine diverso senza creare un conflitto.

- Le funzioni dichiarate come `extern` sono visibili in tutti i file di origine del programma, a meno che non si ridichiari successivamente tale funzione come **static**. Qualsiasi funzione può chiamare una funzione `extern`.

- Le dichiarazioni di funzione che omettendo l'identificatore della classe di archiviazione sono per impostazione predefinita `extern`.

**Sezione specifica Microsoft**

Microsoft consente la ridefinizione di un identificatore `extern` come **static**.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classi di archiviazione C](../c-language/c-storage-classes.md)
