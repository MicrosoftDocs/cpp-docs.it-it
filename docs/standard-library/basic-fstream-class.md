---
title: "Classe basic_fstream | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::basic_fstream"
  - "basic_fstream"
  - "fstream/std::basic_fstream"
  - "std.basic_fstream"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "basic_fstream (classe)"
ms.assetid: 8473817e-42a4-430b-82b8-b476c86bcf8a
caps.latest.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 24
---
# Classe basic_fstream
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive un oggetto che controlla l'inserimento e l'estrazione di elementi e oggetti codificati tramite un buffer del flusso della classe [basic\_filebuf](../standard-library/basic-filebuf-class.md)\<`Elem`, `Tr`\>, con elementi di tipo `Elem`, i cui tratti di carattere sono determinati dalla classe `Tr`.  
  
## Sintassi  
  
```  
template <class Elem, class Tr = char_traits<Elem> >  
    class basic_fstream : public basic_iostream<Elem, Tr>  
```  
  
#### Parametri  
 `Elem`  
 L'elemento di base del buffer di file.  
  
 `Tr`  
 I tratti dell'elemento di base del buffer di file \(in genere `char_traits`\<`Elem`\>\).  
  
## Note  
 L'oggetto archivia un oggetto della classe `basic_filebuf`\<`Elem`, `Tr`\>.  
  
> [!NOTE]
>  Il puntatore get e il puntatore put di un oggetto fstream **NON** sono indipendenti l'uno dall'altro.  Se il puntatore get si sposta, lo fa anche il puntatore put.  
  
## Esempio  
 L'esempio seguente mostra come creare un oggetto `basic_fstream` che consente la lettura e la scrittura.  
  
```  
// basic_fstream_class.cpp  
// compile with: /EHsc  
  
#include <fstream>  
#include <iostream>  
  
using namespace std;  
  
int main(int argc, char **argv)  
{  
    fstream fs("fstream.txt", ios::in | ios::out | ios::trunc);  
    if (!fs.bad())  
    {  
        // Write to the file.  
        fs << "Writing to a basic_fstream object..." << endl;  
        fs.close();  
  
        // Dump the contents of the file to cout.  
        fs.open("fstream.txt", ios::in);  
        cout << fs.rdbuf();  
        fs.close();  
    }  
}  
```  
  
  **Scrittura in un oggetto basic\_fstream...**   
### Costruttori  
  
|||  
|-|-|  
|[basic\_fstream](../Topic/basic_fstream::basic_fstream.md)|Costruisce un oggetto di tipo `basic_fstream`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[chiudi](../Topic/basic_fstream::close.md)|Chiude un file.|  
|[is\_open](../Topic/basic_fstream::is_open.md)|Determina se un file è aperto.|  
|[apri](../Topic/basic_fstream::open.md)|Apre un file.|  
|[rdbuf](../Topic/basic_fstream::rdbuf.md)|Restituisce l'indirizzo del buffer del flusso archiviato di tipo puntatore [basic\_filebuf](../standard-library/basic-filebuf-class.md)\<`Elem`, `Tr`\>.|  
|[swap](../Topic/basic_fstream::swap.md)|Scambia i contenuti di questo oggetto con quelli di un altro oggetto `basic_fstream`.|  
  
## Requisiti  
 **Intestazione:** \<fstream\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)