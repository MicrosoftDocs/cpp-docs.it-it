---
description: 'Altre informazioni su: identificatori di Storage-Class con dichiarazioni di funzione'
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
ms.openlocfilehash: acf3bc1928715878281b4603bf842f248976265f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97296771"
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

## <a name="see-also"></a>Vedi anche

[Classi di archiviazione C](../c-language/c-storage-classes.md)
