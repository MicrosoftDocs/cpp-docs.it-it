---
title: Comando modificatori | Microsoft Docs
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
ms.openlocfilehash: fd86adc94de90222e0775d89543a4dc25486f74f
ms.sourcegitcommit: d10a2382832373b900b1780e1190ab104175397f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/06/2018
ms.locfileid: "43894499"
---
# <a name="command-modifiers"></a>Modificatori dei comandi

È possibile specificare uno o più modificatori di comandi che precedono un comando, facoltativamente, separato da spazi o tabulazioni. Come con i comandi, devono essere applicato un rientro modificatori.

|Modificatore|Scopo|
|--------------|-------------|
|\@*Comando*|Impedisce la visualizzazione del comando. Visualizzato dai comandi non è stata eliminata. Per impostazione predefinita, è possibile visualizzare tutti i comandi eseguiti. Utilizzare l'opzione /S per non visualizzare l'intero makefile. usare **. Invisibile all'utente** per non visualizzare l'ambito del makefile.|
|**-**\[*numero*] *comando*|Consente di disattivare il controllo delle *comando*. Per impostazione predefinita, il processo di NMAKE si interromperà quando un comando restituisce un codice di uscita diverso da zero. Se -*numero* viene usato, NMAKE viene interrotta se il codice di uscita supera *numero*. Gli spazi o tabulazioni non possono essere presente tra il trattino e *numero.* Almeno uno spazio o tabulazione deve essere separati `number` e *comando*. Usare /I per disattivare il controllo degli errori per l'intero makefile. usare **. Ignora** per disattivare il controllo degli errori per parte del makefile.|
|**!** *command*|Viene eseguito *comandi* per ogni file dipendente se *comando* Usa <strong>$ \* \*</strong> (tutti i file dipendenti nella dipendenza) o **$?** (tutti i file dipendenti nella dipendenza con un timestamp successivo a quello di destinazione).|

## <a name="see-also"></a>Vedere anche

[Comandi di un makefile](../build/commands-in-a-makefile.md)
