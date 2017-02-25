---
title: "Classe basic_ifstream | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "basic_ifstream"
  - "fstream/std::basic_ifstream"
  - "std::basic_ifstream"
  - "std.basic_ifstream"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "basic_ifstream (classe)"
ms.assetid: 366cd9a7-efc4-4b7f-ba10-c8271e47ffcf
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 23
---
# Classe basic_ifstream
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati tramite un buffer del flusso della classe [basic\_filebuf](../standard-library/basic-filebuf-class.md)\<`Elem`, `Tr`\>, con elementi di tipo `Elem`, i cui tratti di carattere sono determinati dalla classe `Tr`.  
  
## Sintassi  
  
```  
template <class Elem, class Tr = char_traits<Elem> >  
    class basic_ifstream : public basic_istream<Elem, Tr>  
```  
  
#### Parametri  
 `Elem`  
 L'elemento di base del buffer di file.  
  
 `Tr`  
 I tratti dell'elemento di base del buffer di file \(in genere `char_traits`\<`Elem`\>\).  
  
## Note  
 L'oggetto archivia un oggetto della classe `basic_filebuf`\<`Elem`, `Tr`\>.  
  
## Esempio  
 L'esempio seguente illustra come leggere testo da un file.  
  
```  
// basic_ifstream_class.cpp  
// compile with: /EHsc  
  
#include <fstream>  
#include <iostream>  
  
using namespace std;  
  
int main(int argc, char **argv)  
{  
    ifstream ifs("basic_ifstream_class.txt");  
    if (!ifs.bad())  
    {  
        // Dump the contents of the file to cout.  
        cout << ifs.rdbuf();  
        ifs.close();  
    }  
}  
```  
  
## Input: basic\_ifstream\_class.txt  
  
```  
This is the contents of basic_ifstream_class.txt.  
```  
  
## Output  
  
```  
This is the contents of basic_ifstream_class.txt.  
```  
  
### Costruttori  
  
|||  
|-|-|  
|[basic\_ifstream](../Topic/basic_ifstream::basic_ifstream.md)|Consente di inizializzare una nuova istanza di un oggetto `basic_ifstream`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[chiudi](../Topic/basic_ifstream::close.md)|Chiude un file.|  
|[is\_open](../Topic/basic_ifstream::is_open.md)|Determina se un file è aperto.|  
|[apri](../Topic/basic_ifstream::open.md)|Apre un file.|  
|[rdbuf](../Topic/basic_ifstream::rdbuf.md)|Restituisce l'indirizzo del buffer del flusso archiviato.|  
|[swap](../Topic/basic_ifstream::swap.md)|Scambia il contenuto di questo `basic_ifstream` con il contenuto del parametro `basic_ifstream` fornito.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator \=](../Topic/basic_ifstream::operator=.md)|Assegna il contenuto di questo oggetto flusso.  Si tratta di un'assegnazione di spostamento che implica un oggetto `rvalue` che non lascia alcuna copia.|  
  
## Requisiti  
 **Intestazione:** \<fstream\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)