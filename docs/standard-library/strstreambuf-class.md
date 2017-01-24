---
title: "Classe strstreambuf | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.strstreambuf"
  - "strstreambuf"
  - "std::strstreambuf"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "strstreambuf (classe)"
ms.assetid: b040b8ea-0669-4eba-8908-6a9cc159c54b
caps.latest.revision: 25
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe strstreambuf
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive il buffer di un flusso che controlla la trasmissione di elementi da e verso una sequenza di elementi archiviati in un oggetto matrice `char`.  
  
## Sintassi  
  
```  
  
class strstreambuf : public streambuf  
  
```  
  
## Note  
 A seconda del modo in cui è costruito, l'oggetto può essere allocato, esteso e liberato in base alle modifiche necessarie nella sequenza.  
  
 Un oggetto della classe `strstreambuf` archivia diversi bit di informazioni sulla modalità come modalità `strstreambuf`. Questi bit indicano se la sequenza controllata:  
  
-   È stata allocata e deve essere liberata alla fine.  
  
-   È modificabile.  
  
-   È estendibile attraverso la riallocazione dell'archiviazione.  
  
-   È stata bloccata e di conseguenza deve essere sbloccata prima dell'eliminazione dell'oggetto oppure deve essere liberata \(se allocata\) da un'agenzia diversa dall'oggetto.  
  
 Una sequenza controllata bloccata non può essere modificata o estesa, indipendentemente dallo stato di questi bit di modalità separati.  
  
 L'oggetto archivia anche puntatori a due funzioni che controllano l'allocazione di `strstreambuf`. Se si tratta di puntatori Null, l'oggetto individua il proprio metodo per allocare e liberare archiviazione per la sequenza controllata.  
  
> [!NOTE]
>  Questa classe è deprecata. Si consiglia di utilizzare [stringbuf](../Topic/stringbuf.md) o [wstringbuf](../Topic/wstringbuf.md) invece.  
  
### Costruttori  
  
|||  
|-|-|  
|[strstreambuf](../Topic/strstreambuf::strstreambuf.md)|Costruisce un oggetto di tipo `strstreambuf`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[freeze](../Topic/strstreambuf::freeze.md)|Fa sì che un buffer del flusso non sia disponibile tramite le operazioni di buffer del flusso.|  
|[overflow](../Topic/strstreambuf::overflow.md)|Una funzione virtuale protetta che può essere chiamata quando viene inserito un nuovo carattere in un buffer pieno.|  
|[pbackfail](../Topic/strstreambuf::pbackfail.md)|Funzione membro virtuale protetta che tenta di reinserire un elemento nel flusso di input e quindi di impostarlo come elemento corrente, a cui punta il puntatore successivo.|  
|[pcount](../Topic/strstreambuf::pcount.md)|Restituisce un conteggio del numero di elementi scritti nella sequenza controllata.|  
|[seekoff](../Topic/strstreambuf::seekoff.md)|Funzione membro virtuale protetta che prova a modificare le posizioni correnti per i flussi controllati.|  
|[seekpos](../Topic/strstreambuf::seekpos.md)|Funzione membro virtuale protetta che prova a modificare le posizioni correnti per i flussi controllati.|  
|[str](../Topic/strstreambuf::str.md)|Chiamate [freeze](../Topic/strstreambuf::freeze.md), e quindi restituisce un puntatore all'inizio della sequenza controllata.|  
|[underflow](../Topic/strstreambuf::underflow.md)|Funzione virtuale protetta per estrarre l'elemento corrente dal flusso di input.|  
  
## Requisiti  
 **Intestazione:** \<strstream\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [streambuf](../Topic/streambuf.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)