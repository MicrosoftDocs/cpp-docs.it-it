---
title: "const (C++) | Microsoft Docs"
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
  - "const_cpp"
  - "const"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "const (parola chiave) [C++]"
ms.assetid: b21c0271-1ad0-40a0-b21c-5e812bba0318
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# const (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si modifica una dichiarazione di dati, la parola chiave **const** specifica che l'oggetto o la variabile non è modificabile.  
  
## Sintassi  
  
```  
  
        const declaration ;  
member-function const ;  
```  
  
## Valori const  
 La parola chiave **const** indica che un valore della variabile è costante e indica al compilatore di impedire al programmatore di apportare modifiche.  
  
```  
// constant_values1.cpp  
int main() {  
   const int i = 5;  
   i = 10;   // C3892  
   i++;   // C2105  
}  
```  
  
 In C\+\+ è possibile usare la parola chiave **const** anziché la direttiva [\#define](../preprocessor/hash-define-directive-c-cpp.md) per il preprocessore per definire i valori costanti.  I valori definiti con **const** sono soggetti al controllo dei tipi e possono essere usati al posto delle espressioni costanti.  In C\+\+ è possibile specificare la dimensione di una matrice con una variabile **const** come segue:  
  
```  
// constant_values2.cpp  
// compile with: /c  
const int maxarray = 255;  
char store_char[maxarray];  // allowed in C++; not allowed in C  
```  
  
 In C l'impostazione predefinita dei valori costanti è il collegamento esterno, in modo che possano essere visualizzati solo nei file di origine.  In C\+\+ l'impostazione predefinita dei valori costanti è il collegamento interno che consente di visualizzarli nei file di intestazione.  
  
 La parola chiave **const** può anche essere usata nelle dichiarazioni del puntatore.  
  
```  
// constant_values3.cpp  
int main() {  
   char *mybuf = 0, *yourbuf;  
   char *const aptr = mybuf;  
   *aptr = 'a';   // OK  
   aptr = yourbuf;   // C3892  
}  
```  
  
 Un puntatore a una variabile dichiarata come **const** può essere assegnato solo a un puntatore che viene dichiarato come **const**.  
  
```  
// constant_values4.cpp  
#include <stdio.h>  
int main() {  
   const char *mybuf = "test";  
   char *yourbuf = "test2";  
   printf_s("%s\n", mybuf);  
  
   const char *bptr = mybuf;   // Pointer to constant data  
   printf_s("%s\n", bptr);  
  
   // *bptr = 'a';   // Error  
}  
```  
  
 È possibile usare i puntatori ai dati costanti come parametri di funzione per impedire alla funzione di modificare un parametro passato tramite un puntatore.  
  
 Per gli oggetti che vengono dichiarati come **const**, è possibile chiamare solo [funzioni membro costanti](../misc/constant-member-functions.md).  In questo modo si garantisce che l'oggetto costante non sia mai modificato.  
  
```  
birthday.getMonth();    // Okay  
birthday.setMonth( 4 ); // Error  
```  
  
 È possibile chiamare funzioni membro costanti o non costanti per un oggetto non costante.  È inoltre possibile eseguire l'overload di una funzione membro usando la parola chiave **const**; in questo modo si consente a una versione diversa della funzione di essere chiamata per gli oggetti costanti e non costanti.  
  
 Non è possibile dichiarare i costruttori o i distruttori con la parola chiave **const**.  
  
## Funzioni membro const  
 La dichiarazione di una funzione membro con la parola chiave **const** specifica che la funzione è una funzione "di sola lettura" che non modifica l'oggetto per cui viene chiamata.  Una funzione membro costante non può modificare alcun membro dati non statici o chiamare alcuna funzione membro che non è costante. Per dichiarare una funzione membro costante, inserire la parola chiave **const** dopo la parentesi di chiusura dell'elenco di argomenti.  È richiesta la parola chiave **const** nella dichiarazione e nella definizione.  
  
```  
// constant_member_function.cpp  
class Date  
{  
public:  
   Date( int mn, int dy, int yr );  
   int getMonth() const;     // A read-only function  
   void setMonth( int mn );   // A write function; can't be const  
private:  
   int month;  
};  
  
int Date::getMonth() const  
{  
   return month;        // Doesn't modify anything  
}  
void Date::setMonth( int mn )  
{  
   month = mn;          // Modifies data member  
}  
int main()  
{  
   Date MyDate( 7, 4, 1998 );  
   const Date BirthDate( 1, 18, 1953 );  
   MyDate.setMonth( 4 );    // Okay  
   BirthDate.getMonth();    // Okay  
   BirthDate.setMonth( 4 ); // C2662 Error  
}  
```  
  
## Differenze const C\+\+ e C  
 Quando si dichiara una variabile come **const** in un file di codice sorgente C, si procede in questo modo:  
  
```  
const int i = 2;  
```  
  
 È quindi possibile usare questa variabile in un altro modulo come segue:  
  
```  
extern const int i;  
```  
  
 Ma per ottenere lo stesso comportamento in C\+\+, è necessario dichiarare la variabile **const** come:  
  
```  
extern const int i = 2;  
```  
  
 Se si desidera dichiarare una variabile `extern` nel file di codice sorgente C\+\+ per l'utilizzo in un file di codice sorgente C, usare:  
  
```  
extern "C" const int x=10;  
```  
  
 per impedire l'alterazione del nome del compilatore C\+\+.  
  
## Note  
 Dopo l'elenco di parametri di una funzione interna, la parola chiave **const** specifica che la funzione non modifica l'oggetto che la richiama.  
  
 Per altre informazioni su **const**, vedere i seguenti argomenti:  
  
-   [Valori costanti](../misc/constant-values.md)  
  
-   [Funzioni membro costanti](../misc/constant-member-functions.md)  
  
-   [Puntatori const e volatile](../cpp/const-and-volatile-pointers.md)  
  
-   [Qualificatori di tipo \(riferimento del linguaggio C\)](../c-language/type-qualifiers.md)  
  
-   [volatile](../cpp/volatile-cpp.md)  
  
-   [\#define](../preprocessor/hash-define-directive-c-cpp.md).  
  
## Vedere anche  
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)