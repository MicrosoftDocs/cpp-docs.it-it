---
title: "Puntatore this | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "this"
  - "this_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzioni membro non statiche"
  - "puntatori, a istanza di classe"
  - "puntatore 'this'"
ms.assetid: 92e3256a-4ad9-4d46-8be1-d77fad90791f
caps.latest.revision: 11
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Puntatore this
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il puntatore **this** è un puntatore accessibile solo all'interno delle funzioni membro non statiche di un tipo **class**, `struct` o **union**.  Viene puntato l'oggetto per il quale è chiamata la funzione membro.  Le funzioni membro statiche non hanno puntatori **this**.  
  
## Sintassi  
  
```  
  
        this   
this->member-identifier  
```  
  
## Note  
 Il puntatore **this** di un oggetto non fa parte dell'oggetto stesso e non viene rilevato dal risultato di un'istruzione `sizeof` sull'oggetto.  Al contrario, quando una funzione membro non statica viene chiamata per un oggetto, l'indirizzo dell'oggetto viene passato dal compilatore alla funzione come argomento nascosto.  Ad esempio, la seguente chiamata di funzione:  
  
```  
myDate.setMonth( 3 );  
```  
  
 può essere interpretata come segue:  
  
```  
setMonth( &myDate, 3 );  
```  
  
 L'indirizzo dell'oggetto è disponibile dall'interno della funzione membro come il puntatore **this**.  La maggior parte degli utilizzi di **this** è implicita.  È possibile, ma non necessario, usare **this** in modo esplicito, quando si fa riferimento ai membri della classe.  Ad esempio:  
  
```  
void Date::setMonth( int mn )  
{  
   month = mn;            // These three statements  
   this->month = mn;      // are equivalent  
   (*this).month = mn;  
}  
```  
  
 L'espressione `*this` viene in genere usata per restituire l'oggetto corrente da una funzione membro:  
  
```  
return *this;  
```  
  
 Il puntatore **this** viene usato anche per evitare autoriferimenti:  
  
```  
if (&Object != this) {  
// do not execute in cases of self-reference  
```  
  
> [!NOTE]
>  Poiché il puntatore **this** non è modificabile, le assegnazioni a **this** non sono consentite.  Precedenti implementazioni di C\+\+ consentivano le assegnazioni a **this**.  
  
 Talvolta il puntatore **this** viene usato direttamente, ad esempio per modificare le strutture di dati autoreferenziali, in cui l'indirizzo dell'oggetto corrente è obbligatorio.  
  
## Esempio  
  
```  
// this_pointer.cpp  
// compile with: /EHsc  
  
#include <iostream>  
#include <string.h>  
  
using namespace std;  
  
class Buf   
{  
public:  
    Buf( char* szBuffer, size_t sizeOfBuffer );  
    Buf& operator=( const Buf & );  
    void Display() { cout << buffer << endl; }  
  
private:  
    char*   buffer;  
    size_t  sizeOfBuffer;  
};  
  
Buf::Buf( char* szBuffer, size_t sizeOfBuffer )  
{  
    sizeOfBuffer++; // account for a NULL terminator  
  
    buffer = new char[ sizeOfBuffer ];  
    if (buffer)  
    {  
        strcpy_s( buffer, sizeOfBuffer, szBuffer );  
        sizeOfBuffer = sizeOfBuffer;  
    }  
}  
  
Buf& Buf::operator=( const Buf &otherbuf )   
{  
    if( &otherbuf != this )   
    {  
        if (buffer)  
            delete [] buffer;  
  
        sizeOfBuffer =  strlen( otherbuf.buffer ) + 1;   
        buffer = new char[sizeOfBuffer];  
        strcpy_s( buffer, sizeOfBuffer, otherbuf.buffer );  
    }  
    return *this;  
}  
  
int main()  
{  
    Buf myBuf( "my buffer", 10 );  
    Buf yourBuf( "your buffer", 12 );  
  
    // Display 'my buffer'  
    myBuf.Display();  
  
    // assignment opperator  
    myBuf = yourBuf;  
  
    // Display 'your buffer'  
    myBuf.Display();  
}  
```  
  
  **my buffer**  
**your buffer**   
## Tipo di puntatore this  
 Il tipo di puntatore **this** può essere modificato nella dichiarazione della funzione dalle parole chiave **const** e `volatile`.  Per dichiarare una funzione con associati gli attributi di una o più di queste parole chiave, aggiungere le parole chiave dopo l'elenco di argomenti della funzione.  
  
 Si consideri l'esempio seguente:  
  
```  
// type_of_this_pointer1.cpp  
class Point  
{  
    unsigned X() const;  
};  
int main()  
{  
}  
```  
  
 Nel codice precedente viene dichiarata una funzione membro, `X`, in cui il puntatore **this** viene considerato come puntatore **const** a un oggetto **const**.  È possibile usare combinazioni di opzioni *cv\-mod\-list*, ma viene sempre modificato l'oggetto a cui fa riferimento il puntatore **this**, non il puntatore **this** stesso.  Di conseguenza, la dichiarazione seguente dichiara la funzione `X` e il puntatore **this** è un puntatore **const** a un oggetto **const**:  
  
```  
// type_of_this_pointer2.cpp  
class Point  
{  
    unsigned X() const;  
};  
int main()  
{  
}  
```  
  
 Il tipo **this** in una funzione membro è descritto dalla sintassi seguente, dove *cv\-qualifier\-list* è determinato dal dichiaratore di funzioni membro e può essere **const** o **volatile** \(o entrambi\) e *class\-type* è il nome della classe:  
  
 *\[cv\-qualifier\-list\] class\-type*  **\* const this**  
  
 In altre parole, **this** è sempre un puntatore di tipo const e non può essere riassegnato.  I qualificatori **const** o `volatile` usati nella dichiarazione di funzioni membro si applicano all'istanza della classe a cui fa riferimento il puntatore **this** nell'ambito della funzione.  
  
 Nella tabella seguente vengono descritto in modo più dettagliato il funzionamento di tali modificatori.  
  
### Semantica dei modificatori this  
  
|Modificatore|Significato|  
|------------------|-----------------|  
|**const**|Impossibile modificare i dati dei membri e richiamare funzioni membro non di tipo **const**.|  
|`volatile`|I dati dei membri vengono caricati dalla memoria tutte le volte in cui si accede alla memoria stessa e determinate ottimizzazioni vengono disabilitate.|  
  
 Il passaggio di un oggetto **const** a una funzione membro non di tipo **const** provoca un errore.  In modo analogo, è un errore anche passare un oggetto `volatile` a una funzione membro non di tipo `volatile`.  
  
 Le funzioni membro dichiarate come **const** non possono modificare i dati dei membri \(in tali funzioni il puntatore **this** è un puntatore a un oggetto **const**\).  
  
> [!NOTE]
>  Costruttori e distruttori non possono essere dichiarati come **const** o `volatile`,  ma possono essere richiamati su oggetti di tipo **const** o `volatile`.  
  
## Vedere anche  
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [Tipo di puntatore this](../misc/type-of-this-pointer.md)   
 [Corrispondenza di argomenti e puntatore this](../misc/argument-matching-and-the-this-pointer.md)