---
title: Classe strstream | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- strstream/std::strstream::freeze
- strstream/std::strstream::pcount
- strstream/std::strstream::rdbuf
- strstream/std::strstream::str
dev_langs: C++
helpviewer_keywords:
- std::strstream [C++], freeze
- std::strstream [C++], pcount
- std::strstream [C++], rdbuf
- std::strstream [C++], str
ms.assetid: 63f3be31-9e36-42b1-9715-a474a5997e2a
caps.latest.revision: "21"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 7352f1d72778288067238158449023a197130870
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="strstream-class"></a>Classe strstream
Descrive un oggetto che controlla l'inserimento e l'estrazione di elementi e oggetti codificati usando un buffer del flusso della classe [strstreambuf](../standard-library/strstreambuf-class.md).  
  
## <a name="syntax"></a>Sintassi  
  
```
class strstream : public iostream
```  
  
## <a name="remarks"></a>Note  
 L'oggetto archivia un oggetto della classe `strstreambuf`.  
  
> [!NOTE]
>  Questa classe è deprecata. Provare a usare [stringstream](../standard-library/sstream-typedefs.md#stringstream) o [wstringstream](../standard-library/sstream-typedefs.md#wstringstream).  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[strstream](#strstream)|Costruisce un oggetto di tipo `strstream`.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[freeze](#freeze)|Fa sì che un buffer del flusso non sia disponibile tramite le operazioni di buffer del flusso.|  
|[pcount](#pcount)|Restituisce un conteggio del numero di elementi scritti nella sequenza controllata.|  
|[rdbuf](#rdbuf)|Restituisce un puntatore all'oggetto `strstreambuf` associato del flusso.|  
|[str](#str)|Chiama [freeze](../standard-library/strstreambuf-class.md#freeze) e quindi restituisce un puntatore all'inizio della sequenza controllata.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<strstream>  
  
 **Spazio dei nomi:** std  
  
##  <a name="freeze"></a>  strstream::freeze  
 Fa sì che un buffer del flusso non sia disponibile tramite le operazioni di buffer del flusso.  
  
```
void freeze(bool _Freezeit = true);
```  
  
### <a name="parameters"></a>Parametri  
 `_Freezeit`  
 Oggetto `bool` che indica se si vuole bloccare il flusso.  
  
### <a name="remarks"></a>Note  
 La funzione membro chiama [rdbuf](#rdbuf) -> [freeze](../standard-library/strstreambuf-class.md#freeze)(_ *Freezeit*).  
  
### <a name="example"></a>Esempio  
  Vedere [strstreambuf::freeze](../standard-library/strstreambuf-class.md#freeze) per un esempio d'uso di **freeze**.  
  
##  <a name="pcount"></a>  strstream::pcount  
 Restituisce un conteggio del numero di elementi scritti nella sequenza controllata.  
  
```
streamsize pcount() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero di elementi scritti nella sequenza controllata.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce [rdbuf](#rdbuf) -> [pcount](../standard-library/strstreambuf-class.md#pcount).  
  
### <a name="example"></a>Esempio  
  Vedere [strstreambuf::pcount](../standard-library/strstreambuf-class.md#pcount) per un esempio d'uso di pcount.  
  
##  <a name="rdbuf"></a>  strstream::rdbuf  
 Restituisce un puntatore all'oggetto strstreambuf associato del flusso.  
  
```
strstreambuf *rdbuf() const
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'oggetto strstreambuf associato del flusso.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce l'indirizzo del buffer del flusso archiviato di tipo **pointer** a [strstreambuf](../standard-library/strstreambuf-class.md).  
  
### <a name="example"></a>Esempio  
  Vedere [strstreambuf::pcount](../standard-library/strstreambuf-class.md#pcount) per un esempio d'uso di `rdbuf`.  
  
##  <a name="str"></a>  strstream::str  
 Chiama [freeze](../standard-library/strstreambuf-class.md#freeze) e quindi restituisce un puntatore all'inizio della sequenza controllata.  
  
```
char *str();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'inizio della sequenza controllata.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce [rdbuf](#rdbuf) -> [str](../standard-library/strstreambuf-class.md#str).  
  
### <a name="example"></a>Esempio  
  Vedere [strstreambuf::str](../standard-library/strstreambuf-class.md#str) per un esempio d'uso di **str**.  
  
##  <a name="strstream"></a>  strstream::strstream  
 Costruisce un oggetto di tipo `strstream`.  
  
```
strstream();

strstream(char* ptr,
    streamsize count,
    ios_base::openmode _Mode = ios_base::in | ios_base::out);
```  
  
### <a name="parameters"></a>Parametri  
 `count`  
 Dimensione del buffer.  
  
 `_Mode`  
 Modalità di input e output del buffer. Per altre informazioni, vedere [ios_base::openmode](../standard-library/ios-base-class.md#openmode).  
  
 `ptr`  
 Buffer.  
  
### <a name="remarks"></a>Note  
 Entrambi i costruttori inizializzano la classe di base tramite la chiamata di [streambuf](../standard-library/streambuf-typedefs.md#streambuf)( **sb**), dove **sb** è l'oggetto archiviato della classe [strstreambuf](../standard-library/strstreambuf-class.md). Il primo costruttore inizializza inoltre **sb** tramite la chiamata di [strstreambuf](../standard-library/strstreambuf-class.md#strstreambuf). Il secondo costruttore inizializza la classe di base in uno dei due modi seguenti:  
  
-   Se `_Mode` & **ios_base::app**== 0, `ptr` deve designare il primo elemento di una matrice di elementi `count` e il costruttore chiama `strstreambuf`( `ptr`, `count`, `ptr`).  
  
-   In caso contrario, `ptr` deve designare il primo elemento di una matrice di elementi di conteggio contenente una stringa C il cui primo elemento è designato da `ptr`e il costruttore chiama `strstreambuf`( `ptr`, `count`, `ptr` + `strlen`( `ptr`) ).  
  
## <a name="see-also"></a>Vedere anche  
 [iostream](../standard-library/istream-typedefs.md#iostream)   
 [Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)



