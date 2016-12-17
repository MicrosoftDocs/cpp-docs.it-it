---
title: "Classe fpos | Microsoft Docs"
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
  - "std.fpos"
  - "std::fpos"
  - "iosfwd/std::fpos"
  - "fpos"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "fpos (classe)"
  - "fpos (classe), informazioni sulla classe fpos"
ms.assetid: ffd0827c-fa34-47f4-b10e-5cb707fcde47
caps.latest.revision: 20
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe fpos
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che può archiviare tutte le informazioni necessarie per ripristinare un indicatore di posizione del file arbitrario all'interno di qualsiasi flusso.  Un oggetto di classe fpos\<**St**\> archivia in modo efficace almeno due oggetti membro:  
  
-   Un offset di byte, di tipo [streamoff](../Topic/streamoff.md).  
  
-   Uno stato di conversione, per l'uso da parte di un oggetto di classe basic\_filebuf, di tipo **St**, in genere `mbstate_t`.  
  
 Può anche archiviare una posizione di file arbitraria per l'uso da parte di un oggetto della classe [basic\_filebuf](../standard-library/basic-filebuf-class.md), di tipo `fpos_t`.  Per un ambiente con dimensioni del file limitate, tuttavia, a volte è possibile usare indifferentemente `streamoff` e `fpos_t`.  Per un ambiente senza flussi con codifica dipendente dallo stato, è effettivamente possibile che `mbstate_t` non sia usato..  Di conseguenza, il numero di oggetti membro archiviati può variare.  
  
## Sintassi  
  
```  
  
     template <class   
     Statetype  
     >  
class fpos  
```  
  
#### Parametri  
 *Statetype*  
 Informazioni di stato.  
  
### Costruttori  
  
|||  
|-|-|  
|[fpos](../Topic/fpos::fpos.md)|Creare un oggetto che contiene informazioni su una posizione \(offset\) in un flusso.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[seekpos](../Topic/fpos::seekpos.md)|Usato internamente solo dalla Libreria standard di C\+\+.  Non chiamare questo metodo dal proprio codice.|  
|[state](../Topic/fpos::state.md)|Imposta o restituisce lo stato della conversione.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator\!\=](../Topic/fpos::operator!=.md)|Testa gli indicatori di posizione del file per rilevare la disuguaglianza.|  
|[operatore \+](../Topic/fpos::operator+.md)|Incrementa un indicatore di posizione del file.|  
|[operator\+\=](../Topic/fpos::operator+=.md)|Incrementa un indicatore di posizione del file.|  
|[operator\-](../Topic/fpos::operator-.md)|Decrementa un indicatore di posizione del file.|  
|[operator\-\=](../Topic/fpos::operator-=.md)|Decrementa un indicatore di posizione del file.|  
|[operator\=\=](../Topic/fpos::operator==.md)|Testa gli indicatori di posizione del file per rilevare l'uguaglianza.|  
|[operator streamoff](../Topic/fpos::operator%20streamoff.md)|Esegue il cast del tipo `fpos` in oggetto di tipo `streamoff`.|  
  
## Requisiti  
 **Intestazione:** \<ios\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)