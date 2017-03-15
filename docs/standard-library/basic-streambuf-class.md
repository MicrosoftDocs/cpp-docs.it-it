---
title: "Classe basic_streambuf | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "basic_streambuf"
  - "streambuf/std::basic_streambuf"
  - "std.basic_streambuf"
  - "std::basic_streambuf"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "basic_streambuf (classe)"
ms.assetid: 136af6c3-13bf-4501-9288-b93da26efac7
caps.latest.revision: 27
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 27
---
# Classe basic_streambuf
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive una classe base astratta per la derivazione di un buffer di flusso, che controlla la trasmissione di elementi verso e da una rappresentazione specifica di un flusso.  
  
## Sintassi  
  
```  
template<class Elem, class Tr = char_traits<Elem> >  
   class basic_streambuf;  
```  
  
#### Parametri  
 `Elem`  
 Elemento [char\_type](../Topic/basic_streambuf::char_type.md).  
  
 `Tr`  
 Carattere [traits\_type](../Topic/basic_streambuf::traits_type.md).  
  
## Note  
 La classe modello descrive una classe base astratta per la derivazione di un buffer di flusso, che controlla la trasmissione di elementi verso e da una rappresentazione specifica di un flusso.  Un oggetto della classe `basic_streambuf` semplifica il controllo di un flusso con elementi di tipo `Tr`, definito anche [char\_type](../Topic/basic_streambuf::char_type.md), le cui caratteristiche del carattere vengono determinate dalla classe [char\_traits](../standard-library/char-traits-struct.md), definita anche [traits\_type](../Topic/basic_streambuf::traits_type.md).  
  
 Ogni buffer di flusso controlla concettualmente due flussi indipendenti: uno per le estrazioni \(input\) e uno per gli inserimenti \(output\).  È tuttavia possibile che una rappresentazione specifica renda inaccessibili uno o entrambi i flussi.  Viene in genere mantenuta una relazione tra i due flussi.  Gli elementi inseriti nel flusso di output di un oggetto [basic\_stringbuf](../standard-library/basic-stringbuf-class.md)\<`Elem`, `Tr`\>, ad esempio, corrispondono agli elementi estratti in seguito dal rispettivo flusso di input.  Quando si posiziona un flusso di un oggetto [basic\_filebuf](../standard-library/basic-filebuf-class.md)\<`Elem`, `Tr`\>, si posiziona contemporaneamente l'altro flusso.  
  
 L'interfaccia pubblica per la classe modello `basic_streambuf` fornisce le operazioni comuni a tutti i buffer di flusso, indipendentemente dalla specializzazione.  L'interfaccia protetta fornisce le operazioni necessarie per il funzionamento corretto di una rappresentazione specifica di un flusso.  Le funzioni membro virtuali permettono di personalizzare il comportamento di un buffer di flusso derivato per una rappresentazione specifica di un flusso.  Ogni buffer di flusso derivato in questa libreria descrive il modo in cui rende specializzato il comportamento delle rispettive funzioni membro virtuali protette.  Il comportamento predefinito per la classe base, che spesso non comporta l'esecuzione di alcuna operazione, viene illustrato in questo argomento.  
  
 Le funzioni membro virtuali rimanenti controllano la copia verso e da eventuali risorse di archiviazione fornite alle trasmissioni del buffer verso e dai flussi.  Un buffer di input, ad esempio, è caratterizzato dagli elementi seguenti:  
  
-   [eback](../Topic/basic_streambuf::eback.md): puntatore all'inizio del buffer.  
  
-   [gptr](../Topic/basic_streambuf::gptr.md): puntatore all'elemento successivo da leggere.  
  
-   [egptr](../Topic/basic_streambuf::egptr.md): puntatore a una posizione immediatamente successiva alla fine del buffer.  
  
 Analogamente, un buffer di output è caratterizzato dagli elementi seguenti:  
  
-   [pbase](../Topic/basic_streambuf::pbase.md): puntatore all'inizio del buffer.  
  
-   [pptr](../Topic/basic_streambuf::pptr.md): puntatore all'elemento successivo da scrivere.  
  
-   [epptr](../Topic/basic_streambuf::epptr.md): puntatore a una posizione immediatamente successiva alla fine del buffer.  
  
 Il protocollo seguente viene usato per qualsiasi tipo di buffer:  
  
-   Se il puntatore di tipo next è Null, non esiste alcun buffer.  In caso contrario, tutti e tre i puntatori puntano nella stessa sequenza.  È possibile confrontarli in modo sicuro per determinarne l'ordine.  
  
-   Nel caso di un buffer di output, se il puntatore di tipo next ottiene dal confronto un risultato inferiore a quello del puntatore di tipo end, sarà possibile archiviare un elemento in corrispondenza della posizione di scrittura designata dal puntatore di tipo next.  
  
-   Nel caso di un buffer di intput, se il puntatore di tipo next ottiene dal confronto un risultato inferiore a quello del puntatore di tipo end, sarà possibile leggere un elemento in corrispondenza della posizione di lettura designata dal puntatore di tipo next.  
  
-   Nel caso di un buffer di intput, se il puntatore di tipo beginning ottiene dal confronto un risultato inferiore a quello del puntatore di tipo next, sarà possibile reinserire un elemento in corrispondenza della posizione di putback designata dal puntatore di tipo next decrementato.  
  
 Eventuali funzioni membro virtuali protette scritte per una classe derivata da `basic_streambuf`\<`Elem`, `Tr`\> devono cooperare alla conservazione di questo protocollo.  
  
 Un oggetto della classe `basic_streambuf`\<`Elem`, `Tr`\> archivia i sei puntatori descritti in precedenza.  Archivia anche un oggetto locale in un oggetto di tipo [locale](../standard-library/locale-class.md) per un uso potenziale da parte di un buffer di flusso derivato.  
  
### Costruttori  
  
|||  
|-|-|  
|[basic\_streambuf](../Topic/basic_streambuf::basic_streambuf.md)|Costruisce un oggetto di tipo `basic_streambuf`.|  
  
### Typedef  
  
|||  
|-|-|  
|[char\_type](../Topic/basic_streambuf::char_type.md)|Associa un nome di tipo al parametro di modello `Elem`.|  
|[int\_type](../Topic/basic_streambuf::int_type.md)|Associa un nome di tipo entro l'ambito `basic_streambuf` al parametro di modello `Elem`.|  
|[off\_type](../Topic/basic_streambuf::off_type.md)|Associa un nome di tipo entro l'ambito `basic_streambuf` al parametro di modello `Elem`.|  
|[pos\_type](../Topic/basic_streambuf::pos_type.md)|Associa un nome di tipo entro l'ambito `basic_streambuf` al parametro di modello `Elem`.|  
|[traits\_type](../Topic/basic_streambuf::traits_type.md)|Associa un nome di tipo al parametro di modello `Tr`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[eback](../Topic/basic_streambuf::eback.md)|Funzione protetta che restituisce un puntatore all'inizio del buffer di input.|  
|[egptr](../Topic/basic_streambuf::egptr.md)|Funzione protetta che restituisce un puntatore a una posizione immediatamente successiva alla fine del buffer di input.|  
|[epptr](../Topic/basic_streambuf::epptr.md)|Funzione protetta che restituisce un puntatore a una posizione immediatamente successiva alla fine del buffer di output.|  
|[gbump](../Topic/basic_streambuf::gbump.md)|Funzione protetta che aggiunge `_Count` al puntatore successivo per il buffer di input.|  
|[getloc](../Topic/basic_streambuf::getloc.md)|Ottiene le impostazioni locali dell'oggetto `basic_streambuf`.|  
|[gptr](../Topic/basic_streambuf::gptr.md)|Funzione protetta che restituisce un puntatore all'elemento successivo del buffer di input.|  
|[imbue](../Topic/basic_streambuf::imbue.md)|Funzione virtuale protetta, chiamata da [pubimbue](../Topic/basic_streambuf::pubimbue.md).|  
|[in\_avail](../Topic/basic_streambuf::in_avail.md)|Restituisce il numero di elementi pronti per la lettura dal buffer.|  
|[overflow](../Topic/basic_streambuf::overflow.md)|Una funzione virtuale protetta che può essere chiamata quando viene inserito un nuovo carattere in un buffer pieno.|  
|[pbackfail](../Topic/basic_streambuf::pbackfail.md)|Funzione membro virtuale protetta che tenta di reinserire un elemento nel flusso di input e quindi di impostarlo come elemento corrente, a cui fa riferimento il puntatore di tipo next.|  
|[pbase](../Topic/basic_streambuf::pbase.md)|Funzione protetta che restituisce un puntatore all'inizio del buffer di output.|  
|[pbump](../Topic/basic_streambuf::pbump.md)|Funzione protetta che aggiunge `count` al puntatore successivo per il buffer di output.|  
|[pptr](../Topic/basic_streambuf::pptr.md)|Funzione protetta che restituisce un puntatore all'elemento successivo del buffer di output.|  
|[pubimbue](../Topic/basic_streambuf::pubimbue.md)|Configura le impostazioni locali dell'oggetto `basic_streambuf`.|  
|[pubseekoff](../Topic/basic_streambuf::pubseekoff.md)|Chiama [seekoff](../Topic/basic_streambuf::seekoff.md), una funzione virtuale protetta di cui viene eseguito l'override in una classe derivata.|  
|[pubseekpos](../Topic/basic_streambuf::pubseekpos.md)|Chiama [seekpos](../Topic/basic_streambuf::seekpos.md), una funzione virtuale protetta di cui viene eseguito l'override in una classe derivata e reimposta la posizione corrente del puntatore.|  
|[pubsetbuf](../Topic/basic_streambuf::pubsetbuf.md)|Chiama [setbuf](../Topic/basic_streambuf::setbuf.md), una funzione virtuale protetta di cui viene eseguito l'override in una classe derivata.|  
|[pubsync](../Topic/basic_streambuf::pubsync.md)|Chiama [sync](../Topic/basic_streambuf::sync.md), una funzione virtuale protetta di cui viene eseguito l'override in una classe derivata e aggiorna il flusso esterno associato al buffer.|  
|[sbumpc](../Topic/basic_streambuf::sbumpc.md)|Legge e restituisce l'elemento corrente, spostando il puntatore di flusso.|  
|[seekoff](../Topic/basic_streambuf::seekoff.md)|La funzione membro virtuale protetta prova a modificare le posizioni correnti per i flussi di controllati.|  
|[seekpos](../Topic/basic_streambuf::seekpos.md)|La funzione membro virtuale protetta prova a modificare le posizioni correnti per i flussi di controllati.|  
|[setbuf](../Topic/basic_streambuf::setbuf.md)|La funzione membro virtuale protetta esegue una particolare operazione per ogni buffer del flusso derivato.|  
|[setg](../Topic/basic_streambuf::setg.md)|Funzione protetta che archivia `_Gbeg` nel puntatore di tipo beginning, `_Gnext` nel puntatore di tipo next e `_Gend` nel puntatore di tipo end per il buffer di input.|  
|[setp](../Topic/basic_streambuf::setp.md)|Funzione protetta che archivia `_Pbeg` nel puntatore di tipo beginning e `_Pend` nel puntatore di tipo end per il buffer di output.|  
|[sgetc](../Topic/basic_streambuf::sgetc.md)|Restituisce l'elemento corrente senza modificare la posizione nel flusso.|  
|[sgetn](../Topic/basic_streambuf::sgetn.md)|Restituisce il numero di elementi letti.|  
|[showmanyc](../Topic/basic_streambuf::showmanyc.md)|Funzione membro virtuale protetta che restituisce un conteggio del numero di caratteri che possono essere estratti dal flusso di input e assicura che il programma non sarà sottoposto a un'attesa illimitata.|  
|[snextc](../Topic/basic_streambuf::snextc.md)|Legge l'elemento corrente e restituisce l'elemento seguente.|  
|[sputbackc](../Topic/basic_streambuf::sputbackc.md)|Inserisce un elemento `char_type` nel flusso.|  
|[sputc](../Topic/basic_streambuf::sputc.md)|Inserisce un carattere nel flusso.|  
|[sputn](../Topic/basic_streambuf::sputn.md)|Inserisce una stringa di caratteri nel flusso.|  
|[stossc](../Topic/basic_streambuf::stossc.md)|Consente di spostarsi oltre l'elemento corrente nel flusso.|  
|[sungetc](../Topic/basic_streambuf::sungetc.md)|Ottiene un carattere dal flusso.|  
|[swap](../Topic/basic_streambuf::swap.md)|Scambia i valori in questo oggetto con i valori disponibili nel parametro dell'oggetto `basic_streambuf` fornito.|  
|[sync](../Topic/basic_streambuf::sync.md)|Funzione virtuale protetta che prova a sincronizzare i flussi controllati con eventuali flussi esterni associati.|  
|[uflow](../Topic/basic_streambuf::uflow.md)|Funzione virtuale protetta che estrae l'elemento corrente dal flusso di input.|  
|[underflow](../Topic/basic_streambuf::underflow.md)|Funzione virtuale protetta che estrae l'elemento corrente dal flusso di input.|  
|[xsgetn](../Topic/basic_streambuf::xsgetn.md)|Funzione virtuale protetta che estrae elementi dal flusso di input.|  
|[xsputn](../Topic/basic_streambuf::xsputn.md)|Funzione virtuale protetta che inserisce elementi nel flusso di output.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator \=](../Topic/basic_streambuf::operator=.md)|Assegna i valori di questo oggetto da un altro oggetto `basic_streambuf`.|  
  
## Requisiti  
 **Intestazione:** \<streambuf\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)