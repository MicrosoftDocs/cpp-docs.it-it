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
ms.openlocfilehash: e27cc6ac748c0af3063dbc5b608114761da8b7dc
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87211697"
---
# <a name="storage-class-specifiers-with-function-declarations"></a>Identificatori di classi di archiviazione con Dichiarazioni di funzione

È possibile usare l' **`static`** **`extern`** identificatore di classe di archiviazione o nelle dichiarazioni di funzione. Le funzioni hanno sempre durate globali.

**Specifico di Microsoft**

Le dichiarazioni di funzione a livello interno hanno lo stesso significato delle dichiarazioni di funzione a livello esterno. Questo significa che una funzione è visibile dal momento della dichiarazione in tutto il resto dell'unità di conversione anche se viene dichiarata in ambito locale.

**TERMINA specifica Microsoft**

Le regole di visibilità per le funzioni variano leggermente dalle regole per le variabili, nel modo seguente:

- Una funzione dichiarata come **`static`** è visibile solo all'interno del file di origine in cui è definita. Le funzioni nello stesso file di origine possono chiamare la **`static`** funzione, ma le funzioni in altri file di origine non possono accedervi direttamente in base al nome. È possibile dichiarare un'altra **`static`** funzione con lo stesso nome in un file di origine diverso senza conflitti.

- Le funzioni dichiarate come **`extern`** sono visibili in tutti i file di origine del programma, a meno che non si ridichiara successivamente tale funzione come **`static`** . Qualsiasi funzione può chiamare una **`extern`** funzione.

- Per impostazione predefinita, le dichiarazioni di funzione che omettono l'identificatore della classe di archiviazione sono **`extern`** per impostazione predefinita.

**Specifico di Microsoft**

Microsoft consente la ridefinizione di un **`extern`** identificatore come **`static`** .

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classi di archiviazione C](../c-language/c-storage-classes.md)
