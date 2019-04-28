---
title: Associazione di importazioni
ms.date: 11/04/2016
helpviewer_keywords:
- /DELAY:NOBIND linker option
- DELAY:NOBIND linker option
ms.assetid: bb766038-deb1-41b1-bcbc-29a30e8c1e2a
ms.openlocfilehash: 4058d738b87b69a73e8f18d977be8435a7d96a14
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62272923"
---
# <a name="binding-imports"></a>Associazione di importazioni

Il comportamento del linker predefinito consiste nel creare una tabella IAT associabile per DLL a caricamento ritardato. Se la DLL è associata, la funzione dell'helper proverà a usare le informazioni associate invece di chiamare **GetProcAddress** su ciascuna delle importazioni a cui viene fatto riferimento. Se il timestamp o l'indirizzo preferito non corrispondono a quelli della DLL caricata, la funzione dell'helper presupporrà che la tabella IAT associato non è aggiornata e procederà come se non esiste.

Se non si prevede di eseguire l'associazione di importazioni a caricamento ritardato della DLL, specificando [/Delay](delay-delay-load-import-settings.md): nella riga di comando del linker nobind impedirà la tabella IAT associato generato e dispendiosa in termini di spazio nel file di immagine.

## <a name="see-also"></a>Vedere anche

[Supporto per le DLL a caricamento ritardato nel linker](linker-support-for-delay-loaded-dlls.md)
