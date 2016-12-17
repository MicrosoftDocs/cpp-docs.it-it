---
title: "Classe basic_istream | Microsoft Docs"
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
  - "basic_istream"
  - "istream/std::basic_istream"
  - "std::basic_istream"
  - "std.basic_istream"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "basic_istream (classe)"
ms.assetid: c7c27111-de6d-42b4-95a3-a7e65259bf17
caps.latest.revision: 21
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe basic_istream
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati dal buffer di un flusso con elementi di tipo `Elem`, chiamato anche [char\_type](../Topic/basic_ios::char_type.md), i cui tratti di carattere sono determinati dalla classe *Tr*, chiamata anche [traits\_type](../Topic/basic_ios::traits_type.md).  
  
## Sintassi  
  
```  
  
     template <class   
     Elem  
     , class   
     Tr  
      = char  
     _  
     traits<  
     Elem  
     > >  
class basic_istream  
   : virtual public basic_ios<Elem, Tr>  
```  
  
## Note  
 La maggior parte delle funzioni membro che sono in rapporto di overload con [operator\>\>](../Topic/basic_istream::operator%3E%3E.md) è costituita da funzioni di input formattate.  Le funzioni seguono questo schema:  
  
```  
iostate state = goodbit;  
const sentry ok(*this);  
if (ok)  
    {try  
        {<extract elements and convert  
        accumulate flags in state  
        store a successful conversion> }  
    catch (...)  
        {try  
            {setstate(badbit); }  
        catch (...)  
            {}  
        if ((exceptions( ) & badbit) != 0)  
            throw; }}  
setstate(state);  
return (*this);  
```  
  
 Molte altre funzioni membro sono funzioni di input formattate.  Le funzioni seguono questo schema:  
  
```  
iostate state = goodbit;  
count = 0;    // the value returned by gcount  
const sentry ok(*this, true);  
if (ok)  
    {try  
        {<extract elements and deliver  
        count extracted elements in count  
        accumulate flags in state> }  
    catch (...)  
        {try  
            {setstate(badbit); }  
        catch (...)  
            {}  
        if ((exceptions( ) & badbit) != 0)  
            throw; }}  
setstate(state);  
```  
  
 Entrambi i gruppi di funzioni chiamano [setstate](../Topic/basic_ios::setstate.md)\(**eofbit**\) se riscontrano la fine del file durante l'estrazione di elementi.  
  
 Un oggetto della classe `basic_istream`\<`Elem`, *Tr*\> archivia:  
  
-   Un oggetto di base virtuale pubblico della classe [basic\_ios](../standard-library/basic-ios-class.md)\<`Elem`, *Tr*\>`.`  
  
-   Un conteggio di estrazione per l'ultima operazione di input non formattata \(chiamato **count** nel codice precedente\).  
  
## Esempio  
 Per altre informazioni sui flussi di input, vedere l'esempio per la [Classe basic\_ifstream](../standard-library/basic-ifstream-class.md).  
  
### Costruttori  
  
|||  
|-|-|  
|[basic\_istream](../Topic/basic_istream::basic_istream.md)|Costruisce un oggetto di tipo `basic_istream`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[gcount](../Topic/basic_istream::gcount.md)|Restituisce il numero di caratteri letti durante l'ultimo input non formattato.|  
|[get](../Topic/basic_istream::get.md)|Legge uno o più caratteri dal flusso di input.|  
|[getline](../Topic/basic_istream::getline.md)|Legge una riga dal flusso di input.|  
|[ignorare](../Topic/basic_istream::ignore.md)|Fa sì che un certo numero di elementi venga ignorato dalla posizione di lettura corrente.|  
|[peek](../Topic/basic_istream::peek.md)|Restituisce il carattere successivo da leggere.|  
|[putback](../Topic/basic_istream::putback.md)|Inserisce un carattere specificato nel flusso.|  
|[read](../Topic/basic_istream::read.md)|Legge un numero specificato di caratteri dal flusso e li archivia in una matrice.|  
|[readsome](../Topic/basic_istream::readsome.md)|Legge solo dal buffer.|  
|[seekg](../Topic/basic_istream::seekg.md)|Sposta la posizione di lettura in un flusso.|  
|[sentry](../Topic/basic_istream::sentry.md)|La classe annidata descrive un oggetto la cui dichiarazione struttura le funzioni di input formattate e quelle non formattate.|  
|[swap](../Topic/basic_istream::swap.md)|Scambia questo oggetto `basic_istream` con il parametro dell'oggetto `basic_istream` specificato.|  
|[sync](../Topic/basic_istream::sync.md)|Sincronizza il dispositivo di input associato al flusso con il buffer del flusso.|  
|[tellg](../Topic/basic_istream::tellg.md)|Segnala la posizione corrente all'interno del flusso.|  
|[unget](../Topic/basic_istream::unget.md)|Reinserisce il carattere letto più di recente nel flusso.|  
  
### Operatori  
  
|||  
|-|-|  
|[operatore \>\>](../Topic/basic_istream::operator%3E%3E.md)|Chiama una funzione nel flusso di input o legge dati formattati dal flusso di input.|  
|[operator \=](../Topic/basic_istream::operator=.md)|Assegna l'oggetto `basic_istream` a destra dell'operatore a questo oggetto.  Si tratta di un'assegnazione di spostamento che implica un riferimento `rvalue` che non lascia alcuna una copia.|  
  
## Requisiti  
 **Intestazione:** \<istream\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)