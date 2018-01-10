---
title: Comando modificatori | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- NMAKE program, command modifiers
- command modifiers
ms.assetid: b661c432-210f-4f05-bc56-744a46e0fc0b
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 610725bf52522cd5041d2f6dcadb422bf942458a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="command-modifiers"></a>Modificatori dei comandi
È possibile specificare uno o più modificatori di comandi che precedono un comando, facoltativamente, separato da spazi o tabulazioni. Come con i comandi, i modificatori devono essere rientrati.  
  
|Modificatore|Scopo|  
|--------------|-------------|  
|@*comando*|Impedisce la visualizzazione del comando. Visualizzazione da comandi non viene eliminata. Per impostazione predefinita, è possibile visualizzare tutti i comandi eseguiti. Utilizzare /S per non visualizzare l'intero makefile. Utilizzare **. Invisibile all'utente** per non visualizzare l'ambito del makefile.|  
|**-**[`number` ]*comando*|Consente di disattivare il controllo delle *comando*. Per impostazione predefinita, NMAKE viene arrestato quando un comando restituisce un codice di uscita diverso da zero. Se -`number` è utilizzato, NMAKE viene arrestato se il codice di uscita supera `number`. Non possono comparire spazi o tabulazioni tra il trattino e *numero.* Almeno uno spazio o tabulazione deve essere visualizzato tra `number` e *comando*. Utilizzare /I per disattivare la verifica degli errori per intero makefile. Utilizzare **. IGNORARE** per disattivare la verifica degli errori per parte del makefile.|  
|**!** *command*|Esegue *comando* per ogni file dipendente se *comando* Usa  **$ \* \***  (tutti i file dipendenti nella dipendenza) o **$?** (tutti i file dipendenti nella dipendenza con un timestamp successivo a quello di destinazione).|  
  
## <a name="see-also"></a>Vedere anche  
 [Comandi di un makefile](../build/commands-in-a-makefile.md)