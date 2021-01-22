---
description: Altre informazioni sull'associazione delle importazioni a caricamento ritardato
title: Associare le importazioni a caricamento ritardato
ms.date: 01/19/2021
helpviewer_keywords:
- /DELAY:NOBIND linker option
- DELAY:NOBIND linker option
ms.openlocfilehash: 49d321a30eeb3ab12ec832fb86a662f2035e1e3a
ms.sourcegitcommit: 3d9cfde85df33002e3b3d7f3509ff6a8dc4c0a21
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/21/2021
ms.locfileid: "98666940"
---
# <a name="bind-delay-loaded-imports"></a>Associare le importazioni a caricamento ritardato

Il comportamento predefinito del linker consiste nel creare una tabella di indirizzi di importazione (IAT) associabile per la DLL a caricamento ritardato. Se la DLL è associata, la funzione helper tenta di utilizzare le informazioni relative al limite anziché chiamare `GetProcAddress` su ognuna delle importazioni a cui si fa riferimento. Se il timestamp o l'indirizzo preferito non corrisponde a quello della DLL caricata, la funzione di supporto presuppone che la tabella degli indirizzi di importazione associata non sia aggiornata. Continua come se la tabella IAT non esiste.

Se non si intende associare le importazioni a caricamento ritardato di una DLL, specificare [`/delay:nobind`](delay-delay-load-import-settings.md) nella riga di comando del linker. Il linker non genererà la tabella di indirizzi di importazione associata, che consente di risparmiare spazio nel file di immagine.

## <a name="see-also"></a>Vedi anche

[Supporto per le DLL a caricamento ritardato nel linker](linker-support-for-delay-loaded-dlls.md)
