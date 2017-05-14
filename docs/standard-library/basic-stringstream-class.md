---
title: Classe basic_stringstream | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- basic_stringstream
- sstream/std::basic_stringstream
- sstream/std::basic_stringstream::allocator_type
- sstream/std::basic_stringstream::rdbuf
- sstream/std::basic_stringstream::str
dev_langs:
- C++
helpviewer_keywords:
- basic_stringstream class
ms.assetid: 49629814-ca37-45c5-931b-4ff894e6ebd2
caps.latest.revision: 19
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 66798adc96121837b4ac2dd238b9887d3c5b7eef
ms.openlocfilehash: cbc938c20a408d721d44877295dc84fc40d04e28
ms.contentlocale: it-it
ms.lasthandoff: 04/29/2017

---
# <a name="basicstringstream-class"></a>Classe basic_stringstream
Descrive un oggetto che controlla l'inserimento e l'estrazione di elementi e oggetti codificati usando un buffer di flusso della classe [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**, `Alloc`>.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class Elem, class Tr = char_traits<Elem>, class Alloc = allocator<Elem>>  
class basic_stringstream : public basic_iostream<Elem, Tr>  
```  
  
#### <a name="parameters"></a>Parametri  
 `Alloc`  
 Classe Allocator.  
  
 `Elem`  
 Tipo di elemento di base della stringa.  
  
 *Tr*  
 Tratti di carattere specializzati sull'elemento di base della stringa.  
  
## <a name="remarks"></a>Note  
 La classe di modello descrive un oggetto che controlla l'inserimento e l'estrazione di elementi e oggetti codificati usando un buffer di flusso della classe [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**, `Alloc`>, con elementi di tipo **Elem** i cui tratti di carattere sono determinati dalla classe **Tr** e i cui elementi sono allocati da un allocatore della classe `Alloc`. L'oggetto archivia un oggetto della classe basic_stringbuf< **Elem**, **Tr**, `Alloc`>.  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[basic_stringstream](#basic_stringstream)|Costruisce un oggetto di tipo `basic_stringstream`.|  
  
### <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|[allocator_type](#allocator_type)|Il tipo è un sinonimo del parametro di modello `Alloc`.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[rdbuf](#rdbuf)|Restituisce l'indirizzo del buffer di flusso archiviato di tipo `pointer` in [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< `Elem`, `Tr`, `Alloc`>.|  
|[str](#str)|Imposta o recupera il testo in un buffer di stringa senza modificare la posizione di scrittura.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<sstream>  
  
 **Spazio dei nomi:** std  
  
##  <a name="allocator_type"></a>  basic_stringstream::allocator_type  
 Il tipo è un sinonimo del parametro di modello `Alloc`.  
  
```  
typedef Alloc allocator_type;  
```  
  
##  <a name="basic_stringstream"></a>  basic_stringstream::basic_stringstream  
 Costruisce un oggetto di tipo `basic_stringstream`.  
  
```  
explicit basic_stringstream(ios_base::openmode _Mode = ios_base::in | ios_base::out);

explicit basic_stringstream(const basic_string<Elem, Tr, Alloc>& str, ios_base::openmode _Mode = ios_base::in | ios_base::out);
```  
  
### <a name="parameters"></a>Parametri  
 `_Mode`  
 Una delle enumerazioni in [ios_base::openmode](../standard-library/ios-base-class.md#openmode).  
  
 `str`  
 Oggetto di tipo `basic_string`.  
  
### <a name="remarks"></a>Note  
 Il primo costruttore inizializza la classe base chiamando [basic_iostream](../standard-library/basic-iostream-class.md)( **sb**), dove **sb** è l'oggetto archiviato della classe [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**, `Alloc`>. Inizializza anche **sb** chiamando basic_stringbuf< **Elem**, **Tr**, `Alloc`>( `_Mode`).  
  
 Il secondo costruttore inizializza la classe base chiamando basic_iostream( **sb**). Inizializza anche **sb** chiamando basic_stringbuf< **Elem**, **Tr**, `Alloc`>(_ *Str*, `_Mode`).  
  
##  <a name="rdbuf"></a>  basic_stringstream::rdbuf  
 Restituisce l'indirizzo del buffer di flusso archiviato di tipo **pointer** in [basic_stringbuf](../standard-library/basic-stringbuf-class.md)< **Elem**, **Tr**, `Alloc`>.  
  
```  
basic_stringbuf<Elem, Tr, Alloc> *rdbuf() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'indirizzo del buffer di flusso archiviato di tipo **pointer** in basic_stringbuf< **Elem**, **Tr**, `Alloc`>.  
  
### <a name="example"></a>Esempio  
  Vedere [basic_filebuf::close](../standard-library/basic-filebuf-class.md#close) per un esempio di utilizzo di `rdbuf`.  
  
##  <a name="str"></a>  basic_stringstream::str  
 Imposta o recupera il testo in un buffer di stringa senza modificare la posizione di scrittura.  
  
```  
basic_string<Elem, Tr, Alloc> str() const;

 
void str(
    const basic_string<Elem, Tr, Alloc>& _Newstr);
```  
  
### <a name="parameters"></a>Parametri  
 `_Newstr`  
 La nuova stringa.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un oggetto della classe [basic_string](../standard-library/basic-string-class.md)< **Elem**, **Tr**, `Alloc`>, la cui sequenza controllata è una copia della sequenza controllata da **\*this**.  
  
### <a name="remarks"></a>Note  
 La prima funzione membro restituisce [rdbuf](#rdbuf) -> [str](../standard-library/basic-stringbuf-class.md#str). La seconda funzione membro chiama `rdbuf` -> **str**( `_Newstr`).  
  
### <a name="example"></a>Esempio  
  Vedere [basic_stringbuf::str](../standard-library/basic-stringbuf-class.md#str) per un esempio di utilizzo di **str**.  
  
## <a name="see-also"></a>Vedere anche  
 [Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)


