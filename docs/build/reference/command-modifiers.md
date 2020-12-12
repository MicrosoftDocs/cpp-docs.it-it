---
description: 'Altre informazioni su: modificatori di comandi'
title: Modificatori dei comandi
ms.date: 11/04/2016
helpviewer_keywords:
- NMAKE program, command modifiers
- command modifiers
ms.assetid: b661c432-210f-4f05-bc56-744a46e0fc0b
ms.openlocfilehash: d17d5f25719dfe5638ca6688105517d385bdf68e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97182372"
---
# <a name="command-modifiers"></a>Modificatori dei comandi

È possibile specificare uno o più modificatori di comando che precedono un comando, separati facoltativamente da spazi o tabulazioni. Come per i comandi, i modificatori devono essere rientrati.

|Modificatore|Scopo|
|--------------|-------------|
|\@*comando*|Impedisce la visualizzazione del comando. La visualizzazione dei comandi non viene eliminata. Per impostazione predefinita, NMAKE richiama tutti i comandi eseguiti. Usare/S per disattivare la visualizzazione per l'intero makefile; usare **. Invisibile all'utente** per disattivare la visualizzazione per parte del makefile.|
|**-**\[*numero*] *comando*|Disattiva il controllo degli errori per il *comando*. Per impostazione predefinita, NMAKE si interrompe quando un comando restituisce un codice di uscita diverso da zero. Se si usa-*Number* , NMAKE si interrompe se il codice di uscita supera il *numero*. Non è possibile visualizzare spazi o tabulazioni tra il trattino e il *numero.* È necessario che sia presente almeno uno spazio o una scheda tra il `number` *comando* e. Utilizzare/I per disattivare il controllo degli errori per l'intero makefile; usare **. IGNORARE** per disattivare il controllo degli errori per una parte del makefile.|
|**!** *command*|Esegue il *comando* per ogni file dipendente se *Command* utilizza <strong>$\*\*</strong> (tutti i file dipendenti nella dipendenza) o **$?** (tutti i file dipendenti nella dipendenza con un timestamp successivo rispetto a quello di destinazione).|

## <a name="see-also"></a>Vedi anche

[Comandi in un makefile](commands-in-a-makefile.md)
