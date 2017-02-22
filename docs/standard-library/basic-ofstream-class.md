---
title: "Classe basic_ofstream | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::basic_ofstream"
  - "basic_ofstream"
  - "std.basic_ofstream"
  - "fstream/std::basic_ofstream"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "basic_ofstream (classe)"
ms.assetid: 3bcc9c51-6dfc-4844-8fcc-22ef57c9dff1
caps.latest.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 24
---
# Classe basic_ofstream
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer del flusso della classe [basic\_filebuf](../standard-library/basic-filebuf-class.md)\<`Elem`, `Tr`\>, con elementi di tipo `Elem`, i cui tratti di carattere sono determinati dalla classe `Tr`.  
  
## Sintassi  
  
```  
template <class Elem, class Tr = char_traits<Elem> >  
    class basic_ofstream : public basic_ostream<Elem, Tr>  
```  
  
#### Parametri  
 `Elem`  
 L'elemento di base del buffer di file.  
  
 `Tr`  
 I tratti dell'elemento di base del buffer di file \(in genere `char_traits`\<`Elem`\>\).  
  
## Note  
 Quando la specializzazione `wchar_t` di `basic_ofstream` scrive nel file, se il file è aperto in modalità testo scriverà una sequenza MBCS.  La rappresentazione interna userà un buffer di caratteri `wchar_t`.  
  
 L'oggetto archivia un oggetto della classe `basic_filebuf`\<`Elem`, `Tr`\>.  
  
## Esempio  
 L'esempio seguente illustra come creare un oggetto `basic_ofstream` e scrivervi del testo.  
  
```  
// basic_ofstream_class.cpp  
// compile with: /EHsc  
#include <fstream>  
  
using namespace std;  
  
int main(int argc, char **argv)  
{  
    ofstream ofs("ofstream.txt");  
    if (!ofs.bad())  
    {  
        ofs << "Writing to a basic_ofstream object..." << endl;  
        ofs.close();  
    }  
}  
```  
  
### Costruttori  
  
|||  
|-|-|  
|[basic\_ofstream](../Topic/basic_ofstream::basic_ofstream.md)|Crea un oggetto di tipo `basic_ofstream`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[chiudi](../Topic/basic_ofstream::close.md)|Chiude un file.|  
|[is\_open](../Topic/basic_ofstream::is_open.md)|Determina se un file è aperto.|  
|[apri](../Topic/basic_ofstream::open.md)|Apre un file.|  
|[rdbuf](../Topic/basic_ofstream::rdbuf.md)|Restituisce l'indirizzo del buffer del flusso archiviato.|  
|[swap](../Topic/basic_ofstream::swap.md)|Scambia il contenuto di questo `basic_ofstream` per il contenuto dell'oggetto `basic_ofstream` fornito.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator \=](../Topic/basic_ofstream::operator=.md)|Assegna il contenuto di questo oggetto flusso.  Si tratta di un'assegnazione di spostamento che implica un oggetto `rvalue reference` che non lascia alcuna copia.|  
  
## Requisiti  
 **Intestazione:** \<fstream\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [Classe basic\_ostream](../standard-library/basic-ostream-class.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)