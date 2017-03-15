---
title: "Impostazioni locali e tabelle codici | Microsoft Docs"
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
  - "set di caratteri [C++], tabelle codici"
  - "set di caratteri [C++], impostazioni locali"
  - "tabelle codici [C++]"
  - "tabelle codici [C++], modifica dinamica"
  - "tabelle codici [C++], impostazioni locali"
  - "convenzioni [C++], supporto per caratteri internazionali"
  - "ID delle impostazioni locali [C++]"
  - "impostazioni locali [C++]"
  - "impostazioni locali [C++], informazioni"
  - "localizzazione [C++], tabelle codici"
  - "localizzazione [C++], impostazioni locali"
  - "tabelle codici multibyte [C++]"
ms.assetid: bd937361-b6d3-4c98-af95-beb7c903187b
caps.latest.revision: 9
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 9
---
# Impostazioni locali e tabelle codici
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un ID delle impostazioni locali indica la lingua e le convenzioni locali relative a una determinata zona geografica.  Una lingua può essere parlata in più di un paese\/regione, ad esempio il portoghese è parlato sia in Brasile che in Portogallo.  Al contrario, è possibile che in un paese\/una regione siano parlate più lingue ufficiali.  In Canada, ad esempio, ne esistono due: l'inglese e il francese.  Pertanto per il Canada sono disponibili due diverse impostazioni locali: Inglese \(Canada\) e Francese \(Canada\).  Alcune categorie dipendenti dalle impostazioni locali includono la formattazione delle date e il formato di visualizzazione dei valori monetari.  
  
 La lingua determina le convenzioni di formattazione del testo e dei dati, mentre il paese\/la regione determinano le convenzioni locali.  Ciascuna lingua possiede una mappatura univoca, rappresentata dalle tabelle codici, che include anche caratteri diversi da quelli dell'alfabeto quali i numeri e la punteggiatura.  La tabella codici corrisponde a un set di caratteri ed è associata alla lingua.  Le [impostazioni locali](../c-runtime-library/locale.md) sono pertanto una combinazione univoca di dati relativi alla lingua, al paese\/alla regione e alla tabella codici.  Le impostazioni locali e della tabella codici possono essere modificate in fase di esecuzione richiamando la funzione [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md).  
  
 A lingue diverse possono corrispondere tabelle codici differenti.  La tabella codici ANSI 1252, ad esempio, viene utilizzata per l'inglese e per la maggior parte delle lingue europee, mentre la tabella codici ANSI 932 viene utilizzata per il Kanji giapponese.  Di fatto, tutte le tabelle codici condividono il set di caratteri ASCII per i primi 128 caratteri \(da 0x00 a 0x7F\).  
  
 Ogni tabella di codici a byte singolo può essere rappresentata con una tabella con 256 voci nella quale determinati valori di byte corrispondono a determinati caratteri, compresi i numeri e i segni di punteggiatura, o caratteri grafici.  Ogni tabella codici multibyte può essere inoltre rappresentata come una tabella di dimensioni molto grandi, con 64.000 voci, formata da valori a byte doppio per i caratteri.  Tuttavia, in pratica, i primi 256 caratteri \(a byte singolo\) vengono generalmente rappresentati sotto forma di tabella, mentre i rimanenti caratteri \(a byte doppio\) come intervalli di valori.  
  
 Per ulteriori informazioni sulle tabelle codici, vedere [Tabelle codici](../c-runtime-library/code-pages.md).  
  
 La libreria di runtime del linguaggio C possiede due tipi di tabelle codici interne: quella delle impostazioni locali e quella multibyte.  È possibile modificare la tabella codici corrente durante l'esecuzione del programma; vedere la documentazione per le funzioni [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) e [\_setmbcp](../c-runtime-library/reference/setmbcp.md).  Inoltre, la libreria di runtime può ottenere e utilizzare il valore della tabella codici del sistema operativo.  In Windows 2000 la tabella codici del sistema operativo è la tabella codici ANSI predefinita di sistema.  Questa tabella codici rimane invariata durante l'esecuzione del programma.  
  
 Quando la tabella codici delle impostazioni locali viene cambiata, il funzionamento dell'insieme di funzioni basate sulle impostazioni locali corrisponde a quello impostato dalla tabella codici selezionata.  In base all'impostazione predefinita, tutte le funzioni che dipendono dalle impostazioni locali avviano l'esecuzione con una tabella codici delle impostazioni locali specifica delle impostazioni locali "C".  È possibile modificare la tabella codici interna nonché altre proprietà specifiche delle impostazioni locali richiamando la funzione `setlocale`.  Una chiamata a `setlocale`\(LC\_ALL, ""\) consente di configurare le impostazioni locali su quelle indicate dalla tabella codici dell'utente del sistema operativo.  
  
 In modo analogo, quando la tabella codici multibyte viene modificata, il funzionamento delle funzioni multibyte corrisponde a quello richiesto dalla tabella codici selezionata.  In base all'impostazione predefinita, tutte le funzioni multibyte avviano l'esecuzione con una tabella codici multibyte corrispondente alla tabella codici predefinita del sistema operativo.  È possibile modificare la tabella codici multibyte interna chiamando la funzione `_setmbcp`.  
  
 La funzione di runtime del linguaggio C `setlocale` imposta, modifica o ricerca alcune o tutte le informazioni sulle impostazioni locali del programma corrente.  La routine [\_wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) è una versione a caratteri estesi di `setlocale`. Gli argomenti e i valori restituiti di `_wsetlocale` sono stringhe con caratteri estesi.  
  
## Vedere anche  
 [Unicode e MBCS](../text/unicode-and-mbcs.md)   
 [Vantaggi della portabilità dei set di caratteri](../text/benefits-of-character-set-portability.md)