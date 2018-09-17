---
title: Associazione di importazioni | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- /DELAY:NOBIND linker option
- DELAY:NOBIND linker option
ms.assetid: bb766038-deb1-41b1-bcbc-29a30e8c1e2a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 551028999d11379c06d3319f01e882a33ad57936
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45705198"
---
# <a name="binding-imports"></a>Associazione di importazioni

Il comportamento del linker predefinito consiste nel creare una tabella IAT associabile per DLL a caricamento ritardato. Se la DLL è associata, la funzione dell'helper proverà a usare le informazioni associate invece di chiamare **GetProcAddress** su ciascuna delle importazioni a cui viene fatto riferimento. Se il timestamp o l'indirizzo preferito non corrispondono a quelli della DLL caricata, la funzione dell'helper presupporrà che la tabella IAT associato non è aggiornata e procederà come se non esiste.

Se non si prevede di eseguire l'associazione di importazioni a caricamento ritardato della DLL, specificando [/Delay](../../build/reference/delay-delay-load-import-settings.md): nella riga di comando del linker nobind impedirà la tabella IAT associato generato e dispendiosa in termini di spazio nel file di immagine.

## <a name="see-also"></a>Vedere anche

[Supporto per le DLL a caricamento ritardato nel linker](../../build/reference/linker-support-for-delay-loaded-dlls.md)