---
title: l'indicatore di misura | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- this_cpp
dev_langs:
- C++
helpviewer_keywords:
- nonstatic member functions [C++]
- pointers, to class instance
- this pointer
ms.assetid: 92e3256a-4ad9-4d46-8be1-d77fad90791f
caps.latest.revision: 11
author: mikeblome
ms.author: mblome
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
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 86ccf50a089b1497bdc166ee9367215dc59b3ca1
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="this-pointer"></a>Puntatore this
Il **questo** puntatore è accessibile solo all'interno di funzioni membro non statico di un **classe**, `struct`, o **unione** tipo. Viene puntato l'oggetto per il quale è chiamata la funzione membro. Funzioni membro statiche non hanno un **questo** puntatore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      this   
this->member-identifier  
```  
  
## <a name="remarks"></a>Note  
 Un oggetto **questo** puntatore non è parte dell'oggetto stesso e non viene rilevato nel risultato di un `sizeof` istruzione per l'oggetto. Al contrario, quando una funzione membro non statica viene chiamata per un oggetto, l'indirizzo dell'oggetto viene passato dal compilatore alla funzione come argomento nascosto. Ad esempio, la seguente chiamata di funzione:  
  
```  
myDate.setMonth( 3 );  
```  
  
 può essere interpretata come segue:  
  
```  
setMonth( &myDate, 3 );  
```  
  
 L'indirizzo dell'oggetto è disponibile all'interno della funzione membro come il **questo** puntatore. La maggior parte degli utilizzi di **questo** sono implicite. È possibile, sebbene non sia necessario, utilizzare in modo esplicito **questo** quando si fa riferimento ai membri della classe. Ad esempio:  
  
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
  
 Il **questo** puntatore viene usato anche per evitare autoriferimenti:  
  
```  
if (&Object != this) {  
// do not execute in cases of self-reference  
```  
  
> [!NOTE]
>  Poiché il **questo** puntatore non è modificabile, le assegnazioni da **questo** non sono consentiti. Precedenti implementazioni di C++ consentivano le assegnazioni a **questo**.  
  
 In alcuni casi, il **questo** puntatore viene utilizzato direttamente, ad esempio, per modificare i dati autoreferenziali strutture, dove l'indirizzo dell'oggetto corrente è obbligatorio.  
  
## <a name="example"></a>Esempio  
  
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
  
```Output  
my buffer  
your buffer  
```  
  
## <a name="type-of-the-this-pointer"></a>Tipo di puntatore this  
 Il **questo** tipo di puntatore può essere modificato nella dichiarazione di funzione per il **const** e `volatile` parole chiave. Per dichiarare una funzione con associati gli attributi di una o più di queste parole chiave, aggiungere le parole chiave dopo l'elenco di argomenti della funzione.  
  
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
  
 Il codice precedente dichiara una funzione membro, `X`, in cui il **questo** puntatore viene considerato come un **const** puntatore a un **const** oggetto. Combinazioni di *cv-mod-list* opzioni possono essere utilizzate, ma viene sempre modificato l'oggetto a cui puntata **questo**, non il **questo** puntatore stesso. Di conseguenza, la dichiarazione seguente dichiara funzione `X`; **questo** puntatore è un **const** puntatore a un **const** oggetto:  
  
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
  
 Il tipo di **questo** in un membro della funzione è descritto dalla sintassi seguente, dove *cv-qualifier-list* è determinato dal dichiaratore di funzioni membro e può essere **const**o **volatile** (o entrambi), e *-tipo di classe* è il nome della classe:  
  
 *tipo di classe [cv-qualifier-list]* ** \* const questo  **  
  
 In altre parole, **questo** è sempre un puntatore di tipo const e non può essere riassegnato.  Il **const** o `volatile` qualificatori utilizzati nella dichiarazione di funzione membro vengono applicati all'istanza della classe a cui puntata **questo** nell'ambito di tale funzione.  
  
 Nella tabella seguente vengono descritto in modo più dettagliato il funzionamento di tali modificatori.  
  
### <a name="semantics-of-this-modifiers"></a>Semantica dei modificatori this  
  
|Modificatore|Significato|  
|--------------|-------------|  
|**const**|Non è possibile modificare i dati di membro; non è possibile richiamare funzioni membro che non sono **const**.|  
|`volatile`|I dati dei membri vengono caricati dalla memoria tutte le volte in cui si accede alla memoria stessa e determinate ottimizzazioni vengono disabilitate.|  
  
 È un errore per passare un **const** oggetto a una funzione membro che non è **const**. In modo analogo, è un errore anche passare un oggetto `volatile` a una funzione membro non di tipo `volatile`.  
  
 Funzioni membro dichiarate come **const** non è possibile modificare i dati membro, in tali funzioni il **questo** puntatore è un puntatore a un **const** oggetto.  
  
> [!NOTE]
>  Costruttori e distruttori non possono essere dichiarati come **const** o `volatile`. Possono, tuttavia, essere richiamato su **const** o `volatile` oggetti.  
  
## <a name="see-also"></a>Vedere anche  
 [Parole chiave](../cpp/keywords-cpp.md)   
 
