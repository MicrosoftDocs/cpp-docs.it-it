---
title: Classe ostrstream | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- strstream/std::ostrstream::freeze
- strstream/std::ostrstream::pcount
- strstream/std::ostrstream::rdbuf
- strstream/std::ostrstream::str
dev_langs:
- C++
helpviewer_keywords:
- std::ostrstream [C++], freeze
- std::ostrstream [C++], pcount
- std::ostrstream [C++], rdbuf
- std::ostrstream [C++], str
ms.assetid: e2e34679-b266-4728-a8e1-8eda5d400e46
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 93407ae291956c53e4e105b1ffaf0d4eaf85f7b3
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="ostrstream-class"></a>Classe ostrstream
Descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer del flusso della classe [strstreambuf](../standard-library/strstreambuf-class.md).  
  
## <a name="syntax"></a>Sintassi  
  
```
class ostrstream : public ostream
```  
  
## <a name="remarks"></a>Note  
 L'oggetto archivia un oggetto della classe `strstreambuf`.  
  
> [!NOTE]
>  Questa classe è deprecata. Provare a usare [ostringstream](../standard-library/sstream-typedefs.md#ostringstream) o [wostringstream](../standard-library/sstream-typedefs.md#wostringstream).  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[ostrstream](#ostrstream)|Costruisce un oggetto di tipo `ostrstream`.|  
  
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
  
##  <a name="freeze"></a>  ostrstream::freeze  
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
  Vedere [strstream::freeze](../standard-library/strstreambuf-class.md#freeze) per un esempio d'uso di **freeze**.  
  
##  <a name="ostrstream"></a>  ostrstream::ostrstream  
 Costruisce un oggetto di tipo `ostrstream`.  
  
```
ostrstream();

ostrstream(char* ptr,
    streamsize count,
    ios_base::openmode _Mode = ios_base::out);
```  
  
### <a name="parameters"></a>Parametri  
 `ptr`  
 Buffer.  
  
 `count`  
 Dimensioni del buffer in byte.  
  
 `_Mode`  
 Modalità di input e output del buffer. Per altre informazioni, vedere [ios_base::openmode](../standard-library/ios-base-class.md#openmode).  
  
### <a name="remarks"></a>Note  
 Entrambi i costruttori inizializzano la classe di base tramite la chiamata di [ostream](../standard-library/ostream-typedefs.md#ostream)( **sb**), dove **sb** è l'oggetto archiviato della classe [strstreambuf](../standard-library/strstreambuf-class.md). Il primo costruttore inizializza inoltre **sb** tramite la chiamata di `strstreambuf`. Il secondo costruttore inizializza la classe di base in uno dei due modi seguenti:  
  
-   Se `_Mode` & **ios_base::app**== 0, `ptr` deve designare il primo elemento di una matrice di elementi `count` e il costruttore chiama `strstreambuf`( `ptr`, `count`, `ptr`).  
  
-   In caso contrario, `ptr` deve designare il primo elemento di una matrice di elementi di conteggio contenente una stringa C il cui primo elemento è designato da `ptr` e il costruttore chiama `strstreambuf`( `ptr`, `count`, `ptr` + `strlen`( `ptr`) ).  
  
##  <a name="pcount"></a>  ostrstream::pcount  
 Restituisce un conteggio del numero di elementi scritti nella sequenza controllata.  
  
```
streamsize pcount() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero di elementi scritti nella sequenza controllata.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce [rdbuf](#rdbuf) -> [pcount](../standard-library/strstreambuf-class.md#pcount).  
  
### <a name="example"></a>Esempio  
  Vedere [strstream::pcount](../standard-library/strstreambuf-class.md#pcount) per un esempio d'uso di `pcount`.  
  
##  <a name="rdbuf"></a>  ostrstream::rdbuf  
 Restituisce un puntatore all'oggetto strstreambuf associato del flusso.  
  
```
strstreambuf *rdbuf() const
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'oggetto strstreambuf associato del flusso.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce l'indirizzo del buffer del flusso archiviato di tipo **pointer** a [strstreambuf](../standard-library/strstreambuf-class.md).  
  
### <a name="example"></a>Esempio  
  Vedere[strstreambuf::pcount](../standard-library/strstreambuf-class.md#pcount) per un esempio d'uso di `rdbuf`.  
  
##  <a name="str"></a>  ostrstream::str  
 Chiama [freeze](../standard-library/strstreambuf-class.md#freeze), quindi restituisce un puntatore all'inizio della sequenza controllata.  
  
```
char *str();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'inizio della sequenza controllata.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce [rdbuf](#rdbuf) -> [str](../standard-library/strstreambuf-class.md#str).  
  
### <a name="example"></a>Esempio  
  Vedere [strstream::str](../standard-library/strstreambuf-class.md#str) per un esempio d'uso di **str**.  
  
## <a name="see-also"></a>Vedere anche  
 [ostream](../standard-library/ostream-typedefs.md#ostream)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)  (Sicurezza dei thread nella libreria standard C++)  
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)



