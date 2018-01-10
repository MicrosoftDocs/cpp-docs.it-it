---
title: const (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: const_cpp
dev_langs: C++
helpviewer_keywords: const keyword [C++]
ms.assetid: b21c0271-1ad0-40a0-b21c-5e812bba0318
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c296f473f9128907e69437edf66734a7566242ef
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="const-c"></a>const (C++)
Quando si modifica una dichiarazione di dati, il **const** (parola chiave) specifica che l'oggetto o una variabile non è modificabile.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      const declaration ;  
member-function const ;  
```  
  
## <a name="const-values"></a>Valori const  
 Il **const** (parola chiave) specifica che un valore della variabile è costante e indica al compilatore di impedire al programmatore di modificarla.  
  
```  
// constant_values1.cpp  
int main() {  
   const int i = 5;  
   i = 10;   // C3892  
   i++;   // C2105  
}  
```  
  
 In C++, è possibile utilizzare il **const** parola chiave anziché il [#define](../preprocessor/hash-define-directive-c-cpp.md) direttiva del preprocessore per definire i valori costanti. I valori definiti con **const** sono soggetti a controllo del tipo e può essere utilizzato al posto delle espressioni costanti. In C++, è possibile specificare le dimensioni di una matrice con un **const** variabile come indicato di seguito:  
  
```  
// constant_values2.cpp  
// compile with: /c  
const int maxarray = 255;  
char store_char[maxarray];  // allowed in C++; not allowed in C  
```  
  
 In C l'impostazione predefinita dei valori costanti è il collegamento esterno, in modo che possano essere visualizzati solo nei file di origine. In C++ l'impostazione predefinita dei valori costanti è il collegamento interno che consente di visualizzarli nei file di intestazione.  
  
 Il **const** (parola chiave) utilizzabili nelle dichiarazioni del puntatore.  
  
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
  
 Per gli oggetti che vengono dichiarati come **const**, è possibile chiamare solo membro costante funzioni. In questo modo si garantisce che l'oggetto costante non sia mai modificato.  
  
```  
birthday.getMonth();    // Okay  
birthday.setMonth( 4 ); // Error  
```  
  
 È possibile chiamare funzioni membro costanti o non costanti per un oggetto non costante. È possibile eseguire l'overload anche una funzione membro usando il **const** (parola chiave); in questo modo una versione diversa della funzione da chiamare per costanti e gli oggetti.  
  
 È possibile dichiarare costruttori o distruttori con la **const** (parola chiave).  
  
## <a name="const-member-functions"></a>Funzioni membro const  
 Dichiarazione di una funzione membro con il **const** (parola chiave) specifica che la funzione è una funzione di "sola lettura" che non modifica l'oggetto per cui viene chiamato. Una funzione membro costante non può modificare alcun membro dati non statici o chiamare alcuna funzione non costante membro. Per dichiarare una funzione membro costante, inserire il **const** (parola chiave) dopo la parentesi di chiusura dell'elenco di argomenti. Il **const** parola chiave è necessaria la dichiarazione sia la definizione.  
  
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
  
## <a name="c-and-c-const-differences"></a>Differenze const C++ e C  
 Quando si dichiara una variabile come **const** in un file di codice sorgente C, questa operazione come:  
  
```  
const int i = 2;  
```  
  
 È quindi possibile usare questa variabile in un altro modulo come segue:  
  
```  
extern const int i;  
```  
  
 Ma per ottenere lo stesso comportamento in C++, è necessario dichiarare il **const** variabile come:  
  
```  
extern const int i = 2;  
```  
  
 Se si desidera dichiarare una variabile `extern` nel file di codice sorgente C++ per l'utilizzo in un file di codice sorgente C, usare:  
  
```  
extern "C" const int x=10;  
```  
  
 per impedire l'alterazione del nome del compilatore C++.  
  
## <a name="remarks"></a>Note  
 Nell'elenco di parametri di una funzione membro, il **const** (parola chiave) specifica che la funzione non modifica l'oggetto per il quale viene richiamato.  
  
 Per ulteriori informazioni su **const**, vedere gli argomenti seguenti:  
    
-   [Puntatori const e volatile](../cpp/const-and-volatile-pointers.md)  
  
-   [Qualificatori di tipo (riferimenti del linguaggio C)](../c-language/type-qualifiers.md)  
  
-   [volatile](../cpp/volatile-cpp.md)  
  
-   [#define](../preprocessor/hash-define-directive-c-cpp.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Parole chiave](../cpp/keywords-cpp.md)