---
title: "Sintassi della riga di comando del linker | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LINK (strumento) [C++], sintassi della riga di comando"
  - "linker [C++], sintassi"
  - "riga di comando del linker [C++]"
ms.assetid: e2a31e17-77bd-4e74-9305-75b105b26539
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Sintassi della riga di comando del linker
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per eseguire LINK.EXE, utilizzare la seguente sintassi di comando:  
  
```  
LINK arguments  
```  
  
 `arguments` include opzioni e nomi di file e possono essere specificati in qualsiasi ordine.  Vengono elaborate prima le opzioni, quindi i file.  Utilizzare uno o più spazi o caratteri di tabulazione per separare gli argomenti.  
  
> [!NOTE]
>  Questo strumento può essere avviato solo dal prompt dei comandi di [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)],  Non è possibile avviarlo dal prompt dei comandi di sistema o da Esplora file.  
  
 Le opzioni della riga di comando sono composte da un identificatore di opzione, che può essere un trattino \(–\) o una barra \(\/\), seguito dal nome dell'opzione.  I nomi delle opzioni non possono essere abbreviati.  Per alcune opzioni è possibile specificare un argomento, preceduto da due punti \(:\).  All'interno della specifica di un'opzione non sono consentiti spazi o caratteri di tabulazione, se non in una stringa racchiusa tra virgolette nell'opzione \/COMMENT.  Specificare argomenti numerici in notazione decimale o in linguaggio C.  Per i nomi delle opzioni e i corrispondenti argomenti della parola chiave o del nome file non viene effettuata la distinzione tra maiuscole e minuscole, a differenza degli identificatori utilizzati come argomenti, in cui tale distinzione è rilevante.  
  
 Per passare un file al linker, specificare il nome del file alla riga di comando dopo il comando LINK.  È possibile specificare un percorso assoluto o relativo con il nome del file e utilizzare i caratteri jolly nel nome del file.  Se si omette il punto \(.\) e l'estensione del nome file, nella ricerca del file verrà automaticamente utilizzata l'estensione obj.  In LINK il contenuto dei file non viene ipotizzato sulla base dell'estensione del nome file o della mancanza di essa. Il tipo di un file viene determinato tramite un esame del file stesso e l'elaborazione viene effettuata di conseguenza.  
  
 In caso di esito positivo, ovvero in assenza di errori, link.exe restituisce zero.  In caso contrario, viene restituito il numero dell'errore che ha determinato l'interruzione del comando LINK.  Ad esempio, se il linker genera LNK1104, il linker restituisce 1104. Di conseguenza, il numero di errore più basso restituito su un errore dal linker è 1000. Un valore restituito di 128 rappresenta un problema di configurazione con il sistema operativo o un file .config; il caricatore non ha caricato link.exe o c2.dll.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)