---
title: Comando modificatori | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- NMAKE program, command modifiers
- command modifiers
ms.assetid: b661c432-210f-4f05-bc56-744a46e0fc0b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3739c053797bdccd08310e17bf669413ead0db48
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="command-modifiers"></a>Modificatori dei comandi
È possibile specificare uno o più modificatori di comandi che precedono un comando, facoltativamente, separato da spazi o tabulazioni. Come con i comandi, i modificatori devono essere rientrati.  
  
|Modificatore|Scopo|  
|--------------|-------------|  
|@*Comando*|Impedisce la visualizzazione del comando. Visualizzazione da comandi non viene eliminata. Per impostazione predefinita, è possibile visualizzare tutti i comandi eseguiti. Utilizzare /S per non visualizzare l'intero makefile. Utilizzare **. Invisibile all'utente** per non visualizzare l'ambito del makefile.|  
|**-**[`number` ]*comando*|Consente di disattivare il controllo delle *comando*. Per impostazione predefinita, NMAKE viene arrestato quando un comando restituisce un codice di uscita diverso da zero. Se -`number` è utilizzato, NMAKE viene arrestato se il codice di uscita supera `number`. Tra il trattino non possono comparire spazi o tabulazioni e *numero.* Almeno uno spazio o tabulazione deve essere visualizzato tra `number` e *comando*. Utilizzare /I per disattivare la verifica degli errori per intero makefile. Utilizzare **. IGNORARE** per disattivare la verifica degli errori per parte del makefile.|  
|**!** *command*|Viene eseguito *comando* per ogni file dipendente se *comando* utilizza **$ \* \*** (tutti i file dipendenti nella dipendenza) o **$?** (tutti i file dipendenti nella dipendenza con un timestamp successivo a quello di destinazione).|  
  
## <a name="see-also"></a>Vedere anche  
 [Comandi di un makefile](../build/commands-in-a-makefile.md)