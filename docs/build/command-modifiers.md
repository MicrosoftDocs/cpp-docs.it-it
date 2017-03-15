---
title: "Modificatori dei comandi | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "modificatori di comandi"
  - "NMAKE (programma), modificatori di comandi"
ms.assetid: b661c432-210f-4f05-bc56-744a46e0fc0b
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Modificatori dei comandi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Prima di un comando possono essere specificati uno o più modificatori di comando, eventualmente separati da spazi o tabulazioni.  Analogamente ai comandi, anche i modificatori devono essere rientrati.  
  
|Modificatore|Scopo|  
|------------------|-----------|  
|@*comando*|Evita la visualizzazione del comando.  Le visualizzazioni prodotte dai comandi non sono omesse.  Per impostazione predefinita, è possibile visualizzare tutti i comandi eseguiti.  Utilizzare \/S per non visualizzare l'intero makefile e **.SILENT** per non visualizzarne una parte.|  
|**–**\[`number` \]*comando*|Disattiva il controllo degli errori per *comando*.  Per impostazione predefinita, NMAKE viene arrestato se un comando restituisce un codice di uscita diverso da zero.  Se viene specificato –`number`, NMAKE viene arrestato se il codice di uscita è superiore a `number`.  Non possono essere presenti spazi o tabulazioni tra il trattino e il *numero.* Deve essere presente almeno uno spazio o una tabulazione tra `number` e *comando*.  Utilizzare \/I per disattivare il controllo degli errori per l'intero makefile e **.IGNORE** per disattivarlo per una parte del makefile.|  
|**\!** *comando*|Esegue *comando* per ciascun file dipendente se *comando* utilizza **$\*\*** \(tutti i file dipendenti nella dipendenza\) o **$?** \(tutti i file dipendenti nella dipendenza con un timestamp più recente rispetto a quello della destinazione\).|  
  
## Vedere anche  
 [Comandi di un makefile](../build/commands-in-a-makefile.md)