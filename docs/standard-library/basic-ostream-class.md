---
title: "Classe basic_ostream | Microsoft Docs"
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
  - "std::basic_ostream"
  - "std.basic_ostream"
  - "ostream/std::basic_ostream"
  - "basic_ostream"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "basic_ostream (classe)"
ms.assetid: 5baadc65-b662-4fab-8c9f-94457c58cda1
caps.latest.revision: 24
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe basic_ostream
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer di flusso con elementi di tipo **Elem**, chiamato anche [char\_type](../Topic/basic_ios::char_type.md), i cui tratti di carattere vengono determinati dalla classe **Tr**, chiamata anche [traits\_type](../Topic/basic_ios::traits_type.md).  
  
## Sintassi  
  
```  
  
template <class   
_Elem  
, class   
_Tr  
 = char  
_  
traits<Elem> >  
   class basic  
_  
ostream  
       : virtual public basic  
_  
ios<  
_Elem  
,   
_Tr  
>  
  
```  
  
#### Parametri  
 `_Elem`  
 Oggetto `char_type`.  
  
 `_Tr`  
 Il carattere `traits_type`.  
  
## Note  
 La maggior parte delle funzioni membro che sono in rapporto di overload con [operator\<\<](../Topic/basic_ostream::operator%3C%3C.md) è costituita da funzioni di output formattate. Le funzioni seguono questo schema:  
  
```  
iostate state = goodbit;  
const sentry ok( *this );  
if ( ok )  
   {try  
      {<convert and insert elements  
      accumulate flags in state> }  
   catch ( ... )  
      {try  
        {setstate( badbit ); }  
      catch ( ... )  
        {}  
      if ( ( exceptions( ) & badbit ) != 0 )  
        throw; }}  
width( 0 );    // Except for operator<<(Elem)  
setstate( state );  
return ( *this );  
```  
  
 Due altre funzioni membro sono funzioni di output formattate. Le funzioni seguono questo schema:  
  
```  
iostate state = goodbit;  
const sentry ok( *this );  
if ( !ok )  
   state |= badbit;  
else  
   {try  
      {<obtain and insert elements  
      accumulate flags in state> }  
   catch ( ... )  
      {try  
         {setstate( badbit ); }  
      catch ( ... )  
         {}  
      if ( ( exceptions( ) & badbit ) != 0 )  
         throw; }}  
setstate( state );  
return ( *this );  
```  
  
 Entrambi i gruppi di funzioni chiamano [setstate](../Topic/basic_ios::setstate.md)**\(badbit\)** se riscontrano un errore durante l'inserimento di elementi.  
  
 Un oggetto della classe basic\_istream\<**Elem**, **Tr**\> memorizza solo un oggetto di base pubblico virtuale della classe [basic\_ios](../standard-library/basic-ios-class.md)**\<Elem**, **Tr\>**.  
  
## Esempio  
 Vedere l'esempio per [Classe basic\_ofstream](../standard-library/basic-ofstream-class.md) Per ulteriori informazioni sui flussi di output.  
  
### Costruttori  
  
|||  
|-|-|  
|[basic\_ostream](../Topic/basic_ostream::basic_ostream.md)|Costruisce un oggetto `basic_ostream`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[flush](../Topic/basic_ostream::flush.md)|Scarica il buffer.|  
|[put](../Topic/basic_ostream::put.md)|Inserisce un carattere in un flusso.|  
|[seekp](../Topic/basic_ostream::seekp.md)|Reimposta la posizione nel flusso di output.|  
|[sentry](../Topic/basic_ostream::sentry.md)|La classe annidata descrive un oggetto la cui dichiarazione struttura le funzioni di output formattate e quelle non formattate.|  
|[swap](../Topic/basic_ostream::operator=.md)|Scambia i valori in questo oggetto `basic_ostream` con quelli dell'oggetto `basic_ostream` fornito.|  
|[tellp](../Topic/basic_ostream::tellp.md)|Indica la posizione nel flusso di output.|  
|[scrivere](../Topic/basic_ostream::write.md)|Inserisce i caratteri in un flusso.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator\=](../Topic/basic_ostream::operator=.md)|Assegna il valore del parametro di oggetto `basic_ostream` fornito a questo oggetto.|  
|[operator\<\<](../Topic/basic_ostream::operator%3C%3C.md)|Scrive nel flusso.|  
  
## Requisiti  
 **Intestazione:** \<ostream\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)