---
title: "Classe basic_filebuf | Microsoft Docs"
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
  - "std.basic_filebuf"
  - "fstream/std::basic_filebuf"
  - "std::basic_filebuf"
  - "basic_filebuf"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "basic_filebuf (classe)"
ms.assetid: 3196ba5c-bf38-41bd-9a95-70323ddfca1a
caps.latest.revision: 24
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe basic_filebuf
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Descrive un buffer del flusso che controlla la trasmissione di elementi di tipo `Elem`, i cui tratti di carattere sono determinati dalla classe `Tr`, verso e da una sequenza di elementi archiviati in un file esterno.  
  
## Sintassi  
  
```  
template <class Elem, class Tr = char_traits<Elem> >  
    class basic_filebuf : public basic_streambuf<Elem, Tr>  
```  
  
#### Parametri  
 `Elem`  
 L'elemento di base del buffer di file.  
  
 `Tr`  
 I tratti dell'elemento di base del buffer di file \(in genere `char_traits`\<`Elem`\>\).  
  
## Note  
 La classe modello descrive un buffer del flusso che controlla la trasmissione di elementi di tipo `Elem`, i cui tratti di carattere sono determinati dalla classe `Tr`, verso e da una sequenza di elementi archiviati in un file esterno.  
  
> [!NOTE]
>  Gli oggetti di tipo `basic_filebuf` vengono creati con un buffer interno di tipo `char *` indipendentemente dal `char_type` specificato dal parametro di tipo `Elem`.  Ciò significa che una stringa Unicode \(contenente i caratteri `wchar_t`\) verrà convertita in una stringa ANSI \(contenente i caratteri `char`\) prima che venga scritta nel buffer interno.  Per archiviare stringhe Unicode nel buffer, creare un nuovo buffer di tipo `wchar_t` e impostarlo usando il metodo [basic\_streambuf::pubsetbuf](../Topic/basic_streambuf::pubsetbuf.md)`()`.  Per visualizzare un esempio che illustri questo comportamento, vedere di seguito.  
  
 Un oggetto della classe `basic_filebuf`\<`Elem`, `Tr`\> archivia un puntatore a file, che designa l'oggetto `FILE` che controlla il flusso associato a un file aperto.  Archivia anche i puntatori a due facet di conversione di file da usare per le funzioni membro protetto [overflow](../Topic/basic_filebuf::overflow.md) e [underflow](../Topic/basic_filebuf::underflow.md).  Per altre informazioni, vedere [basic\_filebuf::open](../Topic/basic_filebuf::open.md).  
  
## Esempio  
 L'esempio seguente illustra come forzare un oggetto di tipo `basic_filebuf<wchar_t>` per archiviare i caratteri Unicode nel buffer interno chiamando il metodo `pubsetbuf()`.  
  
```  
// unicode_basic_filebuf.cpp  
// compile with: /EHsc  
  
#include <iostream>  
#include <string>  
#include <fstream>  
#include <iomanip>  
#include <memory.h>  
#include <string.h>  
  
#define IBUFSIZE 16  
  
using namespace std;  
  
void hexdump(const string& filename);  
  
int main()  
{  
    wchar_t* wszHello = L"Hello World";  
    wchar_t wBuffer[128];  
  
    basic_filebuf<wchar_t> wOutFile;  
  
    // Open a file, wcHello.txt, then write to it, then dump the  
    // file's contents in hex  
    wOutFile.open("wcHello.txt",  
        ios_base::out | ios_base::trunc | ios_base::binary);  
    if(!wOutFile.is_open())  
    {  
        cout << "Error Opening wcHello.txt\n";  
        return -1;  
    }  
    wOutFile.sputn(wszHello, (streamsize)wcslen(wszHello));  
    wOutFile.close();  
    cout << "Hex Dump of wcHello.txt - note that output is ANSI chars:\n";  
    hexdump(string("wcHello.txt"));  
  
    // Open a file, wwHello.txt, then set the internal buffer of  
    // the basic_filebuf object to be of type wchar_t, then write  
    // to the file and dump the file's contents in hex  
    wOutFile.open("wwHello.txt",  
        ios_base::out | ios_base::trunc | ios_base::binary);  
    if(!wOutFile.is_open())  
    {  
        cout << "Error Opening wwHello.txt\n";  
        return -1;  
    }  
    wOutFile.pubsetbuf(wBuffer, (streamsize)128);  
    wOutFile.sputn(wszHello, (streamsize)wcslen(wszHello));  
    wOutFile.close();  
    cout << "\nHex Dump of wwHello.txt - note that output is wchar_t chars:\n";  
    hexdump(string("wwHello.txt"));  
  
    return 0;  
}  
  
// dump contents of filename to stdout in hex  
void hexdump(const string& filename)  
{  
    fstream ifile(filename.c_str(),  
        ios_base::in | ios_base::binary);  
    char *ibuff = new char[IBUFSIZE];  
    char *obuff = new char[(IBUFSIZE*2)+1];  
    int i;  
  
    if(!ifile.is_open())  
    {  
        cout << "Cannot Open " << filename.c_str()  
             << " for reading\n";  
        return;  
    }  
    if(!ibuff || !obuff)  
    {  
        cout << "Cannot Allocate buffers\n";  
        ifile.close();  
        return;  
    }  
  
    while(!ifile.eof())  
    {  
        memset(obuff,0,(IBUFSIZE*2)+1);  
        memset(ibuff,0,IBUFSIZE);  
        ifile.read(ibuff,IBUFSIZE);  
  
        // corner case where file is exactly a multiple of  
        // 16 bytes in length  
        if(ibuff[0] == 0 && ifile.eof())  
            break;  
  
        for(i = 0; i < IBUFSIZE; i++)  
        {  
            if(ibuff[i] >= ' ')  
                obuff[i] = ibuff[i];  
            else  
                obuff[i] = '.';  
  
            cout << setfill('0') << setw(2) << hex  
                 << (int)ibuff[i] << ' ';  
        }  
        cout << "  " << obuff << endl;  
    }  
    ifile.close();  
}  
```  
  
  **HEX Dump di wcHello.txt \- si noti che l'output è rappresentato da caratteri ANSI:**  
**48 65 6c 6c 6f 20 57 6f 72 6c 64 00 00 00 00 00   Hello World.....  HEX Dump di wwHello.txt \- si noti che l'output è rappresentato da caratteri wchar\_t:**  
**48 00 65 00 6c 00 6c 00 6f 00 20 00 57 00 6f 00   H.e.l.l.o.  .W.o.  72 00 6c 00 64 00 00 00 00 00 00 00 00 00 00 00   r.l.d...........**    
### Costruttori  
  
|||  
|-|-|  
|[basic\_filebuf](../Topic/basic_filebuf::basic_filebuf.md)|Costruisce un oggetto di tipo `basic_filebuf`.|  
  
### Typedef  
  
|||  
|-|-|  
|[char\_type](../Topic/basic_filebuf::char_type.md)|Associa un nome di tipo al parametro di modello `Elem`.|  
|[int\_type](../Topic/basic_filebuf::int_type.md)|Rende questo tipo all'interno dell'ambito di `basic_filebuf` equivalente al tipo con lo stesso nome nell'ambito `Tr`.|  
|[off\_type](../Topic/basic_filebuf::off_type.md)|Rende questo tipo all'interno dell'ambito di `basic_filebuf` equivalente al tipo con lo stesso nome nell'ambito `Tr`.|  
|[pos\_type](../Topic/basic_filebuf::pos_type.md)|Rende questo tipo all'interno dell'ambito di `basic_filebuf` equivalente al tipo con lo stesso nome nell'ambito `Tr`.|  
|[traits\_type](../Topic/basic_filebuf::traits_type.md)|Associa un nome di tipo al parametro di modello `Tr`.|  
  
### Funzioni membro  
  
|||  
|-|-|  
|[chiudi](../Topic/basic_filebuf::close.md)|Chiude un file.|  
|[is\_open](../Topic/basic_filebuf::is_open.md)|Indica se un file è aperto.|  
|[apri](../Topic/basic_filebuf::open.md)|Apre un file.|  
|[overflow](../Topic/basic_filebuf::overflow.md)|Una funzione virtuale protetta che può essere chiamata quando viene inserito un nuovo carattere in un buffer pieno.|  
|[pbackfail](../Topic/basic_filebuf::pbackfail.md)|La funzione membro virtuale protetta prova a usare un elemento in un flusso di input, quindi renderlo l'elemento corrente \(a cui punta il puntatore successivo\).|  
|[seekoff](../Topic/basic_filebuf::seekoff.md)|La funzione membro virtuale protetta prova a modificare le posizioni correnti per i flussi di controllati.|  
|[seekpos](../Topic/basic_filebuf::seekpos.md)|La funzione membro virtuale protetta prova a modificare le posizioni correnti per i flussi di controllati.|  
|[setbuf](../Topic/basic_filebuf::setbuf.md)|La funzione membro virtuale protetta esegue una particolare operazione per ogni buffer del flusso derivato.|  
|[Swap](../Topic/basic_filebuf::swap.md)|Scambia il contenuto di questo `basic_filebuf` con il contenuto del parametro `basic_filebuf` fornito.|  
|[sync](../Topic/basic_filebuf::sync.md)|Funzione virtuale protetta che prova a sincronizzare i flussi controllati con qualsiasi flusso esterno associato.|  
|[uflow](../Topic/basic_streambuf::uflow.md)|Funzione virtuale protetta per estrarre l'elemento corrente dal flusso di input.|  
|[underflow](../Topic/basic_filebuf::underflow.md)|Funzione virtuale protetta per estrarre l'elemento corrente dal flusso di input.|  
  
## Requisiti  
 **Intestazione:** \<fstream\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<fstream\>](../standard-library/fstream.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)