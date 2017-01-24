---
title: "Errore R6016 del linguaggio C in fase di esecuzione  | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "R6016"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "R6016"
ms.assetid: 7bd3f274-d9c4-4bc4-8252-80bf168c4c3a
caps.latest.revision: 12
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore R6016 del linguaggio C in fase di esecuzione 
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Spazio per i dati di thread insufficiente.  
  
> [!NOTE]
>  Se viene visualizzato questo messaggio di errore, il programma indicato è stato chiuso a causa di un problema di memoria interna.  Questo errore può avere diverse cause, ma spesso è dovuto a un difetto del programma o al danneggiamento delle librerie di Visual C\+\+ utilizzate.  
>   
>  Per risolvere questo errore, è possibile provare questi passaggi:  
>   
>  -   Usare la pagina **Programmi e funzionalità** nel **Pannello di controllo** per ripristinare o reinstallare il programma.  
> -   Usare la pagina **Programmi e funzionalità** nel **Pannello di controllo** per ripristinare o reinstallare tutte le copie di Microsoft Visual C\+\+ Redistributable.  
> -   Verificare la disponibilità di eventuali aggiornamenti software in **Windows Update** nel **Pannello di controllo**.  
> -   Verificare la disponibilità di una versione aggiornata del programma.  
  
 Questo errore si verifica perché il programma non ha ricevuto dal sistema operativo una quantità di memoria sufficiente per completare una chiamata a [\_beginthread](../../c-runtime-library/reference/beginthread-beginthreadex.md) o `_beginthreadex` oppure lo spazio di archiviazione locale del thread non è stato inizializzato da `_beginthread` o da `_beginthreadex`.  
  
 Quando viene avviato un nuovo thread, la libreria deve creare un database interno per tale thread.  Se il database non può essere espanso con la memoria fornita dal sistema operativo, il thread non viene avviato e il processo di chiamata viene arrestato.  Questa situazione può verificarsi quando il processo ha creato troppi thread o se lo spazio di archiviazione locale del thread si è esaurito.  
  
 È preferibile che un eseguibile che chiama la libreria di runtime C \(CRT\) usi `_beginthreadex` per la creazione del thread anziché l'API Windows `CreateThread`.  `_beginthreadex` inizializza l'archiviazione statica interna utilizzata da molte funzioni CRT nello spazio di archiviazione locale del thread.  Se si usa `CreateThread` per creare un thread, la libreria CRT può terminare il processo con R6016 quando viene effettuata una chiamata a una funzione CRT che richiede un'archiviazione statica interna inizializzata.