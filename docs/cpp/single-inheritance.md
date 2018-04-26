---
title: Ereditarietà singola | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-language
ms.tgt_pltfrm: ''
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- single inheritance
- base classes [C++], indirect
- scope, scope resolution operator
- operators [C++], scope resolution
- scope resolution operator
- derived classes [C++], single base class
- inheritance, single
ms.assetid: 1cb946ed-8b1b-4cf1-bde0-d9cecbfdc622
caps.latest.revision: 13
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3d005d4d973ca3ac1873b588975683b14624f21f
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="single-inheritance"></a>Ereditarietà singola
Nell'ereditarietà singola, una forma comune di ereditarietà, le classi contengono solo una classe base. Esaminare la relazione illustrata nella figura seguente.  
  
 ![Singola base&#45;grafico di ereditarietà](../cpp/media/vc38xj1.gif "vc38XJ1")  
Grafico semplice dell'ereditarietà singola  
  
 Si noti la progressione da generale a specifico nella figura. Un altro attributo comune trovato nella progettazione delle gerarchie di classi corrisponde al fatto che la classe derivata ha una relazione "tipo di" con la classe base. Nella figura, `Book` è un tipo di `PrintedDocument` e `PaperbackBook` è un tipo di `book`.  
  
 Un altro elemento di nota nella figura è il seguente: `Book` è sia una classe derivata (da `PrintedDocument`) che una classe base (`PaperbackBook` deriva da `Book`). Una dichiarazione di base di una tale gerarchia di classi è illustrata nell'esempio seguente:  
  
```  
// deriv_SingleInheritance.cpp  
// compile with: /LD  
class PrintedDocument {};  
  
// Book is derived from PrintedDocument.  
class Book : public PrintedDocument {};  
  
// PaperbackBook is derived from Book.  
class PaperbackBook : public Book {};  
```  
  
 `PrintedDocument` viene considerata una classe base diretta per `Book`, ma una classe base indiretta per `PaperbackBook`. La differenza consiste nel fatto che una classe base diretta viene visualizzata nell'elenco di base di una dichiarazione di classe, a differenza di una classe base indiretta.  
  
 La classe base da cui ogni classe deriva viene dichiarata prima della classe derivata. Non è sufficiente fornire una dichiarazione di riferimento in avanti per una classe base, ma è necessario fornire una dichiarazione completa.  
  
 Nell'esempio precedente, l'identificatore di accesso **pubblica** viene utilizzato. Viene descritto il significato di ereditarietà pubblici, protetti e privati in [controllo di accesso ai membri.](../cpp/member-access-control-cpp.md)  
  
 Una classe può essere usata come classe base per molte classi specifiche, come illustrato nella figura seguente.  
  
 ![Un grafo aciclico diretto](../cpp/media/vc38xj2.gif "vc38XJ2")  
Esempio di grafico aciclico diretto  
  
 Nel diagramma precedente, denominato grafico aciclico diretto, alcune classi sono classi base per più di una classe derivata. Tuttavia, il contrario non è vero: esiste una sola classe base diretta per qualsiasi classe derivata specificata. Il grafico nella figura raffigura struttura a ereditarietà singola.  
  
> [!NOTE]
>  I grafici aciclici diretti non sono univoci per l'ereditarietà singola. Tali grafici vengono inoltre usati per rappresentare grafici di ereditarietà multipla. Questo argomento viene descritto in [ereditarietà multipla](http://msdn.microsoft.com/en-us/3b74185e-2beb-4e29-8684-441e51d2a2ca).  
  
 Nell'ereditarietà la classe derivata contiene i membri della classe base e tutti i nuovi membri aggiunti. Di conseguenza, una classe derivata può fare riferimento ai membri della classe base, a meno che i membri non vengano ridefiniti nella classe derivata. L'operatore di risoluzione dell'ambito (`::`) può essere usato per fare riferimento a membri delle classi base dirette o indirette quando tali membri sono stati ridefiniti nella classe derivata. Si consideri l'esempio seguente:  
  
```  
// deriv_SingleInheritance2.cpp  
// compile with: /EHsc /c  
#include <iostream>  
using namespace std;  
class Document {  
public:  
   char *Name;   // Document name.  
   void PrintNameOf();   // Print name.  
};  
  
// Implementation of PrintNameOf function from class Document.  
void Document::PrintNameOf() {  
   cout << Name << endl;  
}  
  
class Book : public Document {  
public:  
   Book( char *name, long pagecount );  
private:  
   long  PageCount;  
};  
  
// Constructor from class Book.  
Book::Book( char *name, long pagecount ) {  
   Name = new char[ strlen( name ) + 1 ];  
   strcpy_s( Name, strlen(Name), name );  
   PageCount = pagecount;  
};  
```  
  
 Si noti che il costruttore per `Book`, (`Book::Book`), può accedere al membro dati `Name`. In un programma un oggetto di tipo `Book` può essere creato e usato come segue:  
  
```  
//  Create a new object of type Book. This invokes the  
//   constructor Book::Book.  
Book LibraryBook( "Programming Windows, 2nd Ed", 944 );  
  
...  
  
//  Use PrintNameOf function inherited from class Document.  
LibraryBook.PrintNameOf();  
```  
  
 Come illustrato nell'esempio precedente, il membro di una classe e i dati e le funzioni ereditati vengono usati in modo identico. Se l'implementazione per la classe `Book` chiama una nuove implementazione della funzione `PrintNameOf`, la funzione che appartiene alla classe `Document` può essere chiamata solo usando l'operatore di risoluzione dell'ambito (`::`):  
  
```  
// deriv_SingleInheritance3.cpp  
// compile with: /EHsc /LD  
#include <iostream>  
using namespace std;  
  
class Document {  
public:  
   char *Name;          // Document name.  
   void  PrintNameOf() {}  // Print name.  
};  
  
class Book : public Document {  
   Book( char *name, long pagecount );  
   void PrintNameOf();  
   long  PageCount;  
};  
  
void Book::PrintNameOf() {  
   cout << "Name of book: ";  
   Document::PrintNameOf();  
}  
```  
  
 I puntatori e i riferimenti alle classi derivate possono essere convertiti in modo implicito a puntatori e riferimenti alle classi di base se esiste una classe base accessibile e non ambigua. Nel codice seguente viene illustrato questo concetto tramite puntatori (lo stesso principio vale per i riferimenti):  
  
```  
// deriv_SingleInheritance4.cpp  
// compile with: /W3  
struct Document {  
   char *Name;  
   void PrintNameOf() {}  
};  
  
class PaperbackBook : public Document {};  
  
int main() {  
   Document * DocLib[10];   // Library of ten documents.  
   for (int i = 0 ; i < 5 ; i++)  
      DocLib[i] = new Document;  
   for (int i = 5 ; i < 10 ; i++)  
      DocLib[i] = new PaperbackBook;  
}  
```  
  
 Nell'esempio precedente vengono creati tipi differenti. Tuttavia, poiché questi tipi derivati tutti dalla classe `Document`, esiste una conversione implicita a `Document *`. Di conseguenza, `DocLib` è un elenco eterogeneo, ovvero un elenco in cui non tutti gli oggetti sono dello stesso tipo, contenente tipi diversi di oggetti.  
  
 Poiché la classe `Document` dispone di una funzione `PrintNameOf`, può stampare il nome di ogni libro della biblioteca, anche se può omettere alcune informazioni specifiche del tipo di documento (numero di pagine di `Book`, numero di byte pagina per `HelpFile` e così via).  
  
> [!NOTE]
>  Forzare la classe base a implementare una funzione come `PrintNameOf` non è spesso una la soluzione di progettazione migliore. [Funzioni virtuali](../cpp/virtual-functions.md) offre altre alternative di progettazione.  
  
