---
title: Associazione di importazioni | Documenti Microsoft
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
ms.openlocfilehash: 7519fb18ac7f24e79a5f7f664cb35f8eb5b3fd77
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32368928"
---
# <a name="binding-imports"></a>Associazione di importazioni
Il comportamento del linker predefinito consiste nel creare una tabella di indirizzi di importazione associabile per DLL a caricamento ritardato. Se la DLL è associata, la funzione di supporto tenterà di utilizzare le informazioni associate anziché chiamare **GetProcAddress** su ciascuna delle importazioni a cui viene fatto riferimento. Se il timestamp o l'indirizzo preferito non corrisponda a quelle della DLL caricata, la funzione dell'helper presupporrà che la tabella di indirizzi di importazione associati è obsoleta e procederà come se non esiste.  
  
 Se non si prevede di eseguire l'associazione di importazioni a caricamento ritardato della DLL, è possibile specificare [/Delay](../../build/reference/delay-delay-load-import-settings.md): nobind sulla riga di comando del linker impedirà la tabella di indirizzi di importazione associati generato e dispendiosa in termini di spazio nel file di immagine.  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto per le DLL a caricamento ritardato nel linker](../../build/reference/linker-support-for-delay-loaded-dlls.md)