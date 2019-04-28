---
title: Modificatori dei comandi
ms.date: 11/04/2016
helpviewer_keywords:
- NMAKE program, command modifiers
- command modifiers
ms.assetid: b661c432-210f-4f05-bc56-744a46e0fc0b
ms.openlocfilehash: 6131b94a6ee78026b8d5337061a6238df785b64d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62272411"
---
# <a name="command-modifiers"></a>Modificatori dei comandi

È possibile specificare uno o più modificatori di comandi che precedono un comando, facoltativamente, separato da spazi o tabulazioni. Come con i comandi, devono essere applicato un rientro modificatori.

|Modificatore|Scopo|
|--------------|-------------|
|\@*command*|Impedisce la visualizzazione del comando. Visualizzato dai comandi non è stata eliminata. Per impostazione predefinita, è possibile visualizzare tutti i comandi eseguiti. Utilizzare l'opzione /S per non visualizzare l'intero makefile. usare **. Invisibile all'utente** per non visualizzare l'ambito del makefile.|
|**-**\[*number*] *command*|Consente di disattivare il controllo delle *comando*. Per impostazione predefinita, il processo di NMAKE si interromperà quando un comando restituisce un codice di uscita diverso da zero. Se -*numero* viene usato, NMAKE viene interrotta se il codice di uscita supera *numero*. Gli spazi o tabulazioni non possono essere presente tra il trattino e *numero.* Almeno uno spazio o tabulazione deve essere separati `number` e *comando*. Usare /I per disattivare il controllo degli errori per l'intero makefile. usare **. Ignora** per disattivare il controllo degli errori per parte del makefile.|
|**\!** *command*|Viene eseguito *comandi* per ogni file dipendente se *comando* Usa <strong>$ \* \*</strong> (tutti i file dipendenti nella dipendenza) o **$?** (tutti i file dipendenti nella dipendenza con un timestamp successivo a quello di destinazione).|

## <a name="see-also"></a>Vedere anche

[Comandi di un makefile](commands-in-a-makefile.md)
