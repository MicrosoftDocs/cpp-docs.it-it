---
title: Associazione di importazioni
ms.date: 11/04/2016
helpviewer_keywords:
- /DELAY:NOBIND linker option
- DELAY:NOBIND linker option
ms.assetid: bb766038-deb1-41b1-bcbc-29a30e8c1e2a
ms.openlocfilehash: 6ee9d9cc180e77d817b7b52baa1a6eb5209a8365
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50486346"
---
# <a name="binding-imports"></a>Associazione di importazioni

Il comportamento del linker predefinito consiste nel creare una tabella IAT associabile per DLL a caricamento ritardato. Se la DLL è associata, la funzione dell'helper proverà a usare le informazioni associate invece di chiamare **GetProcAddress** su ciascuna delle importazioni a cui viene fatto riferimento. Se il timestamp o l'indirizzo preferito non corrispondono a quelli della DLL caricata, la funzione dell'helper presupporrà che la tabella IAT associato non è aggiornata e procederà come se non esiste.

Se non si prevede di eseguire l'associazione di importazioni a caricamento ritardato della DLL, specificando [/Delay](../../build/reference/delay-delay-load-import-settings.md): nella riga di comando del linker nobind impedirà la tabella IAT associato generato e dispendiosa in termini di spazio nel file di immagine.

## <a name="see-also"></a>Vedere anche

[Supporto per le DLL a caricamento ritardato nel linker](../../build/reference/linker-support-for-delay-loaded-dlls.md)