---
title: "Errore degli strumenti del linker LNK1104 | Microsoft Docs"
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
  - "LNK1104"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1104"
ms.assetid: 9ca6f929-0efc-4055-8354-3cf5b4e636dc
caps.latest.revision: 8
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore degli strumenti del linker LNK1104
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile aprire il file 'nomefile'  
  
 Lo strumento non è riuscito ad aprire il file specificato.  
  
 Per risolvere il problema, verificare le seguenti cause possibili:  
  
-   Spazio su disco insufficiente.  
  
-   Il file non esiste.  
  
-   Quando si specificano le librerie nella finestra di dialogo Pagine delle proprietà del progetto, i nomi delle librerie devono essere separati da spazi \(e non virgole\).  
  
-   Nome di file o percorso non valido.  
  
-   Specifica unità non valida.  
  
-   Autorizzazioni file insufficienti.  
  
-   Il percorso di `filename` contiene più di 260 caratteri.  
  
-   Se il file specificato è denominato `LNKn`, un nome file generato dal linker per un file temporaneo, è possibile che la directory specificata nella variabile di ambiente TMP non esista oppure che siano state specificate più directory per tale variabile. È infatti possibile specificare un solo percorso di directory per la variabile di ambiente TMP.  
  
-   Se il messaggio di errore fa riferimento a un nome di libreria e il file MAK è stato trasferito di recente da un sistema di sviluppo Microsoft Visual C\+\+ precedente, è possibile che la libreria non sia più valida. In questo caso, accertarsi che la libreria esista ancora.  
  
-   È possibile che il file sia aperto in un altro programma e che il linker non sia in grado di scrivervi.  
  
-   Variabile di ambiente LIB non corretta. Per informazioni sull'aggiornamento della variabile di ambiente LIB, vedere [Directory di VC\+\+ \(pagina delle proprietà\)](../../ide/vcpp-directories-property-page.md). Accertarsi che le directory con le librerie necessarie siano elencate.  
  
 Il linker usa i file temporanei in vari casi. Anche se lo spazio su disco è sufficiente, un collegamento di grandi dimensioni può esaurire o frammentare lo spazio degli indirizzi.  
  
 Per correggere il problema, provare le seguenti soluzioni possibili:  
  
-   Usare [\/OPT \(Ottimizzazioni\)](../../build/reference/opt-optimizations.md). Con l'eliminazione comdat transitiva, tutti i file oggetto vengono letti più volte.  
  
-   Eseguire l'aggiornamento a Windows XP.