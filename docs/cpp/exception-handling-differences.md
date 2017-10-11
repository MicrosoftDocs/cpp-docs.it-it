---
title: Differenze nella gestione eccezioni | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- structured exception handling [C++], vs. C++ exception handling
- structured exception handling [C++], vs. unstructured
- exceptions [C++], wrapper class
- C++ exception handling [C++], vs. structured exception handling
- wrapper classes [C++], C exception
ms.assetid: f21d1944-4810-468e-b02a-9f77da4138c9
caps.latest.revision: 11
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 191b59d21f56ee810a981082806a6775bc6ea40d
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="exception-handling-differences"></a>Differenze nella gestione eccezioni
La differenza principale tra gestione delle eccezioni strutturata e gestione delle eccezioni C++ è che il modello di gestione delle eccezioni C++ gestisce i tipi, mentre il modello di gestione delle eccezioni strutturata di C gestisce le eccezioni di un solo tipo (in particolare, `unsigned int`). In altre parole, le eccezioni C sono identificate da un intero senza segno, mentre le eccezioni C++ sono identificate dal tipo di dati. Quando viene generata un'eccezione in C, ogni possibile gestore esegue un filtro che esamina il contesto di eccezione C e determina se accettare l'eccezione, passarla a un altro gestore o ignorarla. Quando viene generata un'eccezione in C++, può essere di qualsiasi tipo.  
  
 Un'altra differenza consiste nel fatto che il modello di gestione delle eccezioni strutturata di C è denominato "asincrono" poiché le eccezioni sono secondarie al flusso di controllo normale. Il meccanismo di gestione delle eccezioni C++ è totalmente "sincrono" che significa che le eccezioni si verificano solo quando vengono generate.  
  
 Se viene generata un'eccezione di C in un programma C++, può essere gestito da un gestore di eccezioni strutturato con il filtro associato o da un C++ **catch** gestore, a seconda del valore trova dinamicamente più vicino contesto dell'eccezione. Ad esempio, il seguente programma C++ genera un'eccezione di C all'interno di C++ **provare** contesto:  
  
## <a name="example"></a>Esempio  
  
```  
// exceptions_Exception_Handling_Differences.cpp  
// compile with: /EHa  
#include <iostream>  
  
using namespace std;  
void SEHFunc( void );  
  
int main() {  
   try {  
      SEHFunc();  
   }  
   catch( ... ) {  
      cout << "Caught a C exception."<< endl;  
   }  
}  
  
void SEHFunc() {  
   __try {  
      int x, y = 0;  
      x = 5 / y;  
   }  
   __finally {  
      cout << "In finally." << endl;  
   }  
}  
```  
  
```Output  
In finally.  
Caught a C exception.  
```  
  
##  <a name="_core_c_exception_wrapper_class"></a>Classe Wrapper di eccezione C  
 In un semplice esempio di come il precedente, l'eccezione C può essere rilevata solo dai puntini di sospensione (**... **) **catch** gestore. Nessuna informazione sul tipo o la natura dell'eccezione viene comunicata al gestore. Quando viene utilizzato questo metodo, in alcuni casi, potrebbe essere necessario definire una trasformazione tra i due modelli di gestione delle eccezioni in modo da associare ogni eccezione C a una classe specifica. A tale scopo, è possibile definire la classe "wrapper" di eccezione C che può essere utilizzata o da cui può essere derivata per associare un tipo di classe specifico a un'eccezione C. In questo modo, ogni eccezione C può essere gestita da C++ **catch** gestore più separatamente che nell'esempio precedente.  
  
 La classe wrapper potrebbe avere un'interfaccia composta da alcune funzioni membro che determinano il valore dell'eccezione e che accedono alle informazioni sul contesto delle eccezioni estese fornite dal modello di eccezione C. È inoltre possibile definire un costruttore predefinito, un costruttore che accetta un argomento `unsigned int` (per fornire la rappresentazione dell'eccezione C sottostante) e un costruttore di copia bit per bit. Di seguito è riportata una possibile implementazione di una classe wrapper di eccezione C:  
  
```  
// exceptions_Exception_Handling_Differences2.cpp  
// compile with: /c  
class SE_Exception {  
private:  
   SE_Exception() {}  
   SE_Exception( SE_Exception& ) {}  
   unsigned int nSE;  
public:  
   SE_Exception( unsigned int n ) : nSE( n ) {}  
   ~SE_Exception() {}  
   unsigned int getSeNumber() {  
      return nSE;  
   }  
};  
  
```  
  
 Per utilizzare questa classe, si installa una funzione di conversione di eccezione C personalizzata definita dal meccanismo interno di gestione delle eccezioni ogni volta che viene generata un'eccezione. All'interno della funzione di conversione, è possibile generare qualsiasi eccezione tipizzata (probabilmente un `SE_Exception` tipo o un tipo di classe derivato `SE_Exception`) che può essere rilevata da un appropriato C++ corrispondente **catch** gestore. La funzione di conversione può eseguire semplicemente una restituzione che indica che l'eccezione non è stata gestita. Se la funzione di conversione stesso genera un'eccezione di C, [terminare](../c-runtime-library/reference/terminate-crt.md) viene chiamato.  
  
 Per specificare una funzione di conversione personalizzata, chiamare il [set_se_translator](../c-runtime-library/reference/set-se-translator.md) funzione con il nome della funzione di conversione come unico argomento. La funzione di conversione che si scrive viene chiamata una volta per ogni chiamata di funzione nello stack con **provare** blocchi. Non vi è alcuna funzione di conversione predefinita; Se non si specifica una chiamando `_set_se_translator`, l'eccezione C può essere rilevata solo dai puntini di sospensione **catch** gestore.  
  
## <a name="example"></a>Esempio  
 Ad esempio, il codice riportato di seguito installa una funzione di conversione personalizzata, quindi genera un'eccezione C di cui viene eseguito il wrapping nella classe `SE_Exception`:  
  
```  
// exceptions_Exception_Handling_Differences3.cpp  
// compile with: /EHa  
#include <stdio.h>  
#include <eh.h>  
#include <windows.h>  
  
class SE_Exception {  
private:  
   SE_Exception() {}  
   unsigned int nSE;  
  
public:  
   SE_Exception( SE_Exception& e) : nSE(e.nSE) {}  
   SE_Exception(unsigned int n) : nSE(n) {}  
   ~SE_Exception() {}  
   unsigned int getSeNumber() { return nSE; }  
};  
  
void SEFunc() {  
   __try {  
      int x, y = 0;  
      x = 5 / y;  
    }  
    __finally {  
      printf_s( "In finally\n" );  
   }  
}  
  
void trans_func( unsigned int u, _EXCEPTION_POINTERS* pExp ) {  
   printf_s( "In trans_func.\n" );  
   throw SE_Exception( u );  
}  
  
int main() {  
   _set_se_translator( trans_func );  
    try {  
      SEFunc();  
    }  
    catch( SE_Exception e ) {  
      printf_s( "Caught a __try exception with SE_Exception.\n" );  
      printf_s( "nSE = 0x%x\n", e.getSeNumber() );  
    }  
}  
```  
  
```Output  
In trans_func.  
In finally  
Caught a __try exception with SE_Exception.  
nSE = 0xc0000094  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Combinazione di eccezioni C (strutturate) e C++](../cpp/mixing-c-structured-and-cpp-exceptions.md)
