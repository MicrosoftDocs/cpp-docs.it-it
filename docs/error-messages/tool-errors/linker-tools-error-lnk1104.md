---
title: Strumenti del linker LNK1104 errore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK1104
dev_langs:
- C++
helpviewer_keywords:
- LNK1104
ms.assetid: 9ca6f929-0efc-4055-8354-3cf5b4e636dc
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 4bac7b2942f9d72674b8092dc7bf64174dd3c349
ms.openlocfilehash: 7fce9c60da4bceafb9ee81231a8630acb4397d83
ms.lasthandoff: 04/24/2017

---
# <a name="linker-tools-error-lnk1104"></a>Errore degli strumenti del linker LNK1104
Impossibile aprire il file '*filename*'  
  
Il linker Impossibile aprire il file specificato.  
  
Per correggere l'errore, verificare le seguenti cause possibili:  
  
-   Il file *filename* non esiste. Se il progetto dipende da un altro progetto per generare questo file, assicurarsi che le dipendenze del progetto siano impostate correttamente.  
  
-   Quando si specificano le librerie nella finestra di dialogo Pagine delle proprietà del progetto, i nomi delle librerie devono essere separati da spazi, virgole non.  
  
-   Il nome file o un percorso specificato nella riga di comando non è corretto oppure il percorso ha una specifica unità non valida. Controllare l'ortografia e verificare il nome del file e il percorso. Se si compila un progetto che è stato copiato da un altro computer, controllare i percorsi di [pagina delle proprietà directory di VC + +](../../ide/vcpp-directories-property-page.md) e aggiornarli, se necessario.  
  
-   Le librerie per la configurazione del progetto o un set di strumenti della piattaforma non sono installate. Verificare che sia installato il SDK di Windows specificata nelle pagine delle proprietà per il progetto e un set di strumenti della piattaforma e include il set di strumenti e librerie necessarie per le impostazioni di configurazione. Sono disponibili impostazioni distinte per le configurazioni di Debug e delle vendite al dettaglio, pertanto se una funziona tale compilazione, ma l'altra viene generato un errore, verificare le impostazioni siano corrette e sono installati gli strumenti necessari per entrambe le configurazioni.  
  
-   Non è disponibile spazio sufficiente. Non è insolito che al linker di richiedere una grande quantità di spazio su disco temporaneo durante un collegamento.  
  
-   Si dispone delle autorizzazioni file insufficienti per accedere a *filename*.  
  
-   Il percorso per *filename* a più di 260 caratteri. Modificare i nomi o ridisporre la struttura di directory, se necessario, per ridurre i percorsi per i file necessari.  
  
-   Se il *filename* denominato file LNK*n*, che è un nome file generato dal linker per un file temporaneo, la directory specificata nella variabile di ambiente TMP potrebbe non esistere o più directory può essere specificata per la variabile di ambiente TMP. Solo un percorso di directory deve essere specificato per la variabile di ambiente TMP.  
  
-   Se il messaggio di errore fa riferimento a un nome di libreria e il file MAK è stato trasferito di recente da un sistema di sviluppo Microsoft Visual C++ precedente, è possibile che la libreria non sia più valida. Verificare che il nome della libreria sia corretto e che esista ancora nella posizione specificata oppure aggiornare il percorso LIB per puntare alla nuova posizione.  
  
-   È possibile che il file sia aperto in un altro programma e che il linker non sia in grado di scrivervi. I programmi antivirus spesso bloccano temporaneamente l'accesso ai file appena creati. Provare a escludendo le directory di compilazione progetto il software antivirus in uso.  
  
-   Si dispone di una variabile di ambiente LIB non corretta. Per informazioni su come aggiornare la variabile di ambiente LIB, vedere [pagina delle proprietà directory di VC + +](../../ide/vcpp-directories-property-page.md). Accertarsi che le directory con le librerie necessarie siano elencate.  
  
-   Il linker usa i file temporanei in vari casi. Anche se si dispone di spazio su disco sufficiente, un collegamento di dimensioni molto grande può esaurire o frammentare lo spazio disponibile su disco. È consigliabile utilizzare il [/OPT (ottimizzazioni)](../../build/reference/opt-optimizations.md) opzione; in questo letture eliminazione comdat transitiva tutti i file oggetto più volte.
