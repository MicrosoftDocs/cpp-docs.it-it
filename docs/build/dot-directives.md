---
title: "Direttive con il punto | Microsoft Docs"
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
  - "direttive con il punto in NMAKE"
  - "NMAKE (programma), direttive con il punto"
ms.assetid: ab35da65-30b6-48b7-87d6-61503d7faf9f
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Direttive con il punto
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le direttive con il punto devono essere specificate esternamente a un blocco di descrizione, all'inizio di una riga.  Esse iniziano con un punto \( . \) e terminano con due punti \(:\).  È consentito l'uso di spazi e tabulazioni.  Per i nomi delle direttive con il punto, che sono in maiuscolo, viene rilevata la distinzione tra maiuscole e minuscole.  
  
|Direttiva|Scopo|  
|---------------|-----------|  
|**.IGNORE :**|Ignora i codici di uscita diversi da zero restituiti dai comandi, a partire dal punto in cui è specificata fino al termine del makefile.  Per impostazione predefinita, NMAKE viene arrestato se un comando restituisce un codice di uscita diverso da zero.  Per ripristinare il controllo degli errori, utilizzare **\!CMDSWITCHES**.  Per ignorare il codice di uscita prodotto da un solo comando, utilizzare il modificatore trattino \(–\).  Per ignorare i codici di uscita di un intero file, utilizzare \/I.|  
|**.PRECIOUS :** *targets*|Salva le *destinazioni* sul disco in caso di interruzione dei comandi per il relativo aggiornamento. Non ha effetto se un comando gestisce l'interruzione eliminando il file.  Separare i nomi delle destinazioni con uno o più spazi o tabulazioni.  Per impostazione predefinita, viene eliminata una destinazione se una compilazione viene interrotta premendo CTRL\+C o CTRL\+INTERR.  Ciascun utilizzo di **.PRECIOUS** viene applicato all'intero makefile. Più specifiche sono cumulative.|  
|**.SILENT :**|Evita di visualizzare i comandi eseguiti, dal punto in cui è specificato fino al termine del makefile.  Per impostazione predefinita, i comandi richiamati vengono visualizzati.  Per ripristinare la visualizzazione, utilizzare **\!CMDSWITCHES**.  Per omettere la visualizzazione di un unico comando, utilizzare il modificatore **@**.  Per omettere la visualizzazione di un intero file, utilizzare \/S.|  
|**.SUFFIXES :** `list`|Elenca le estensioni per la corrispondenza delle regole di inferenza. Le estensioni già definite includono: .exe .obj .asm .c .cpp .cxx .bas .cbl .for .pas .res .rc .f .f90|  
  
 Per modificare l'ordine dell'elenco **.SUFFIXES** o per specificare un nuovo elenco, cancellare l'elenco e specificare una nuova impostazione.  Per cancellare l'elenco non indicare alcuna estensione dopo i due punti:  
  
```  
.SUFFIXES :  
```  
  
 Per aggiungere altri suffissi alla fine dell'elenco, specificare:  
  
```  
.SUFFIXES : suffixlist  
```  
  
 dove *suffixlist* è un elenco di suffissi aggiuntivi, separati da uno o più spazi o tabulazioni.  Per visualizzare l'impostazione corrente di **.SUFFIXES**, eseguire NMAKE con l'opzione \/P.  
  
## Vedere anche  
 [Riferimenti a NMAKE](../build/nmake-reference.md)