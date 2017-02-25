---
title: "Classe ios_base | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ios_base"
  - "std.ios_base"
  - "std::ios_base"
  - "xiosbase/std::ios_base"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ios_base (classe)"
ms.assetid: 0f9e0abc-f70f-49bc-aa1f-003859f56cfe
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 21
---
# Classe ios_base
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe descrive le funzioni membro e di archiviazione comuni ai flussi di input e di output che non dipendono dai parametri di modello.  La classe modello [basic\_ios](../standard-library/basic-ios-class.md) descrive gli elementi comuni e dipende dai parametri di modello.  
  
 Un oggetto della classe ios\_base archivia le informazioni di formattazione che sono costituite da:  
  
-   Flag di formato in un oggetto di tipo [fmtflags](../Topic/ios_base::fmtflags.md).  
  
-   Una maschera di eccezione in un oggetto di tipo [iostate](../Topic/ios_base::iostate.md).  
  
-   Una larghezza del campo in un oggetto di tipo `int`*.*  
  
-   Una precisione di visualizzazione in un oggetto di tipo `int`.  
  
-   Un oggetto di impostazioni locali in un oggetto di tipo **locale**.  
  
-   Due matrici estendibili con elementi di tipo **long** e puntatore `void`.  
  
 Un oggetto della classe ios\_base archivia anche le informazioni sullo stato del flusso in un oggetto di tipo [iostate](../Topic/ios_base::iostate.md) e uno stack di callback.  
  
### Costruttori  
  
|||  
|-|-|  
|[ios\_base](../Topic/ios_base::ios_base.md)|Costruisce oggetti `ios_base`.|  
  
### Typedef  
  
|||  
|-|-|  
|[event\_callback](../Topic/ios_base::event_callback.md)|Descrive una funzione passata a [register\_call](../Topic/ios_base::register_callback.md).|  
|[fmtflags](../Topic/ios_base::fmtflags.md)|Costanti per specificare l'aspetto dell'output.|  
|[iostate](../Topic/ios_base::iostate.md)|Definisce le costanti che descrivono lo stato di un flusso.|  
|[openmode](../Topic/ios_base::openmode.md)|Descrive come interagire con un flusso.|  
|[seekdir](../Topic/ios_base::seekdir.md)|Specifica il punto iniziale per operazioni di offset.|  
  
### Enumerazioni  
  
|||  
|-|-|  
|[evento](../Topic/ios_base::event.md)|Specifica i tipi di evento.|  
  
### Costanti  
  
|||  
|-|-|  
|[adjustfield](../Topic/ios_base::fmtflags.md)|Maschera di bit definita come `internal` &#124; `left` &#124; `right`.|  
|[app](../Topic/ios_base::openmode.md)|Specifica la ricerca alla fine di un flusso prima di ogni inserimento.|  
|[ate](../Topic/ios_base::openmode.md)|Specifica la ricerca alla fine di un flusso quando il relativo oggetto di controllo viene inizialmente creato.|  
|[badbit](../Topic/ios_base::iostate.md)|Registra una perdita di integrità del buffer del flusso.|  
|[basefield](../Topic/ios_base::fmtflags.md)|Maschera di bit definita come `dec` &#124; `hex` &#124; `oct`.|  
|[beg](../Topic/ios_base::seekdir.md)|Specifica la ricerca relativa all'inizio di una sequenza.|  
|[binaria](../Topic/ios_base::openmode.md)|Specifica che un file deve essere letto come flusso binario, anziché come flusso di testo.|  
|[boolalpha](../Topic/ios_base::fmtflags.md)|Specifica l'inserimento o l'estrazione di oggetti di tipo `bool` come nomi \(ad esempio `true` e `false`\), anziché come valori numerici.|  
|[cur](../Topic/ios_base::seekdir.md)|Specifica la ricerca relativa alla posizione corrente all'interno di una sequenza.|  
|[dec](../Topic/ios_base::fmtflags.md)|Specifica l'inserimento o l'estrazione di valori interi in formato decimale.|  
|[end](../Topic/ios_base::seekdir.md)|Specifica la ricerca relativa alla fine di una sequenza.|  
|[eofbit](../Topic/ios_base::iostate.md)|Registra la fine del file durante l'estrazione da un flusso.|  
|[failbit](../Topic/ios_base::iostate.md)|Registra un errore per estrarre un campo valido da un flusso.|  
|[fissa](../Topic/ios_base::fmtflags.md)|Specifica l'inserimento di valori a virgola mobile in formato a virgola fissa \(senza il campo dell'esponente\).|  
|[floatfield](../Topic/ios_base::fmtflags.md)|Maschera di bit definita come `fixed` &#124; `scientific`|  
|[goodbit](../Topic/ios_base::iostate.md)|Tutti i bit dello stato vengono cancellati.|  
|[hex](../Topic/ios_base::fmtflags.md)|Specifica l'inserimento o l'estrazione di valori interi in formato esadecimale.|  
|[in](../Topic/ios_base::openmode.md)|Specifica l'estrazione da un flusso.|  
|[internal](../Topic/ios_base::fmtflags.md)|Inserendo caratteri di riempimento in un punto interno a un campo numerico generato, riempie la larghezza di un campo.|  
|[left](../Topic/ios_base::fmtflags.md)|Specifica la giustificazione a sinistra.|  
|[oct](../Topic/ios_base::fmtflags.md)|Specifica l'inserimento o l'estrazione di valori interi in formato ottale.|  
|[out](../Topic/ios_base::openmode.md)|Specifica l'inserimento in un flusso.|  
|[right](../Topic/ios_base::fmtflags.md)|Specifica la giustificazione a destra.|  
|[scientifica](../Topic/ios_base::fmtflags.md)|Specifica l'inserimento di valori a virgola mobile in formato a virgola fissa \(con un campo dell'esponente\).|  
|[showbase](../Topic/ios_base::fmtflags.md)|Specifica l'inserimento di un prefisso che consente di visualizzare la base di un campo Integer generato.|  
|[showpoint](../Topic/ios_base::fmtflags.md)|Specifica l'inserimento non condizionale di un punto decimale in un campo a virgola mobile generato.|  
|[showpos](../Topic/ios_base::fmtflags.md)|Specifica l'inserimento di un segno più in un campo numerico generato non negativo.|  
|[skipws](../Topic/ios_base::fmtflags.md)|Specifica di ignorare lo spazio vuoto iniziale prima di determinate estrazioni.|  
|[trunc](../Topic/ios_base::openmode.md)|Specifica l'eliminazione di contenuti di un file esistente quando viene creato l'oggetto di controllo.|  
|[unitbuf](../Topic/ios_base::fmtflags.md)|Provoca lo scaricamento dell'output dopo ogni inserimento.|  
|[tutto maiuscole](../Topic/ios_base::fmtflags.md)|Specifica l'inserimento di equivalenti in lettere maiuscole di lettere minuscole in determinati inserimenti.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[errore](../Topic/ios_base::failure.md)|La classe membro funge da classe di base per tutte le eccezioni generate dalla funzione membro [clear](../Topic/basic_ios::clear.md) nella classe modulo [basic\_ios](../standard-library/basic-ios-class.md).|  
|[flag](../Topic/ios_base::flags.md)|Imposta o restituisce le impostazioni dei flag correnti.|  
|[getloc](../Topic/ios_base::getloc.md)|Restituisce l'oggetto delle impostazioni locali archiviate.|  
|[imbue](../Topic/ios_base::imbue.md)|Modifica le impostazioni locali.|  
|[Init](../Topic/ios_base::Init.md)|Crea gli oggetti iostream standard al momento della costruzione.|  
|[iword](../Topic/ios_base::iword.md)|Assegna un valore da archiviare come un `iword`.|  
|[precisione](../Topic/ios_base::precision.md)|Specifica il numero di cifre da visualizzare in un numero a virgola mobile.|  
|[pword](../Topic/ios_base::pword.md)|Assegna un valore da archiviare come un `pword`.|  
|[register\_callback](../Topic/ios_base::register_callback.md)|Specifica una funzione di callback.|  
|[setf](../Topic/ios_base::setf.md)|Imposta i flag specificati.|  
|[sync\_with\_stdio](../Topic/ios_base::sync_with_stdio.md)|Assicura che le operazioni della libreria di runtime iostream e C vengano eseguite nell'ordine in cui appaiono nel codice sorgente.|  
|[unsetf](../Topic/ios_base::unsetf.md)|Provoca la disattivazione dei flag specificati.|  
|[width](../Topic/ios_base::width.md)|Imposta la lunghezza del flusso di output.|  
|[xalloc](../Topic/ios_base::xalloc.md)|Specifica che una variabile deve far parte del flusso.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator \=](../Topic/ios_base::operator=.md)|L'operatore di assegnazione per gli oggetti `ios_base`.|  
  
## Requisiti  
 **Intestazione:** \<ios\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)