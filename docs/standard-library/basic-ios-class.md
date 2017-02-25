---
title: "Classe basic_ios | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.basic_ios"
  - "ios/std::basic_ios"
  - "basic_ios"
  - "std::basic_ios"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "basic_ios (classe)"
ms.assetid: 4fdcd8e1-62d2-4611-8a70-1e4f58434007
caps.latest.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 24
---
# Classe basic_ios
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive le funzioni membro e di archiviazione comuni ai flussi di input \(della classe modello [basic\_istream](../standard-library/basic-istream-class.md)\) e ai flussi di output \(della classe modello [basic\_ostream](../standard-library/basic-ostream-class.md)\) che dipendono dai parametri di modello.  La classe [ios\_base](../standard-library/ios-base-class.md) descrive gli elementi comuni e non dipendenti dai parametri di modello. Un oggetto della classe **basic\_ios\<class Elem, class Traits\>** semplifica il controllo di un flusso con elementi di tipo **Elem**, le cui caratteristiche del carattere vengono determinate dalla classe **Traits**.  
  
## Sintassi  
  
```  
  
     template <class   
     Elem  
     , class   
     Traits  
     >  
class basic_ios : public ios_base  
```  
  
#### Parametri  
 `Elem`  
 Tipo.  
  
 `Traits`  
 Variabile di tipo `char_traits`.  
  
## Note  
 Un oggetto della classe **basic\_ios\<class Elem, class Traits\>** archivia gli elementi seguenti:  
  
-   Un puntatore di tipo tie a un oggetto di tipo [basic\_istream](../standard-library/basic-istream-class.md)**\<Elem, Traits\>**.  
  
-   Un puntatore di tipo buffer del flusso a un oggetto di tipo [basic\_streambuf](../standard-library/basic-streambuf-class.md)**\<Elem, Traits \>**.  
  
-   [Informazioni sulla formattazione](../standard-library/ios-base-class.md).  
  
-   [Informazioni sullo stato del flusso](../standard-library/ios-base-class.md) in un oggetto base di tipo [ios\_base](../standard-library/ios-base-class.md).  
  
-   Un carattere di riempimento in un oggetto di tipo `char_type`.  
  
### Costruttori  
  
|||  
|-|-|  
|[basic\_ios](../Topic/basic_ios::basic_ios.md)|Costruisce la classe `basic_ios`.|  
  
### Typedef  
  
|||  
|-|-|  
|[char\_type](../Topic/basic_ios::char_type.md)|Sinonimo del parametro di modello `Elem`.|  
|[int\_type](../Topic/basic_ios::int_type.md)|Sinonimo di `Traits::int_type`.|  
|[off\_type](../Topic/basic_ios::off_type.md)|Sinonimo di `Traits::off_type`.|  
|[pos\_type](../Topic/basic_ios::pos_type.md)|Sinonimo di `Traits::pos_type`.|  
|[traits\_type](../Topic/basic_ios::traits_type.md)|Sinonimo del parametro di modello `Traits`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[bad](../Topic/basic_ios::bad.md)|Indica una perdita di integrità del buffer del flusso.|  
|[deselezionato](../Topic/basic_ios::clear.md)|Cancella tutti i flag di errore.|  
|[copyfmt](../Topic/basic_ios::copyfmt.md)|Copia i flag da un flusso a un altro.|  
|[eof](../Topic/basic_ios::eof.md)|Indica se è stata raggiunta la fine del flusso.|  
|[eccezioni](../Topic/basic_ios::exceptions.md)|Indica quali eccezioni verranno generate dal flusso.|  
|[non riuscito](../Topic/basic_ios::fail.md)|Indica un errore per estrarre un campo valido da un flusso.|  
|[fill](../Topic/basic_ios::fill.md)|Specifica o restituisce il carattere che verrà usato quando il testo non è largo quanto il flusso.|  
|[good](../Topic/basic_ios::good.md)|Indica che le condizioni del flusso sono buone.|  
|[imbue](../Topic/basic_ios::imbue.md)|Modifica le impostazioni locali.|  
|[init](../Topic/basic_ios::init.md)|Chiamato dai costruttori `basic_ios`.|  
|[move](../Topic/basic_ios::move.md)|Sposta tutti i valori, ad eccezione del puntatore al buffer del flusso, dal parametro all'oggetto corrente.|  
|[narrow](../Topic/basic_ios::narrow.md)|Individua il carattere equivalente per un `char_type` specifico.|  
|[rdbuf](../Topic/basic_ios::rdbuf.md)|Indirizza un flusso al buffer specificato.|  
|[rdstate](../Topic/basic_ios::rdstate.md)|Legge lo stato dei bit per i flag.|  
|[set\_rdbuf](../Topic/basic_ios::set_rdbuf.md)|Assegna un buffer del flusso in modo che sia il buffer di lettura per questo oggetto flusso.|  
|[setstate](../Topic/basic_ios::setstate.md)|Imposta flag aggiuntivi.|  
|[swap](../Topic/basic_ios::swap.md)|Scambia i valori in questo oggetto `basic_ios` con quelli di un altro oggetto `basic_ios`.  I puntatori ai buffer del flusso non vengono scambiati.|  
|[tie](../Topic/basic_ios::tie.md)|Assicura che un flusso venga elaborato prima di un altro flusso.|  
|[widen](../Topic/basic_ios::widen.md)|Individua il tipo `char_type` equivalente per un carattere specifico.|  
  
### Operatori  
  
|||  
|-|-|  
|[explicit operator bool](../Topic/basic_ios::operator%20bool.md)|Permette l'uso di un oggetto `basic_ios` come `bool`.  La conversione automatica de tipo è disabilitata per impedire effetti collaterali imprevisti comuni.|  
|[operator void \*](../Topic/basic_ios::operator%20void%20*.md)|Indica se il flusso è ancora valido.|  
|[operatore \!](../Topic/basic_ios::operator!.md)|Indica se il flusso è corretto.|  
  
## Requisiti  
 **Intestazione:** \<ios\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)