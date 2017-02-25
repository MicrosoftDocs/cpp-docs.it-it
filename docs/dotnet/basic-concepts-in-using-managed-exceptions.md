---
title: "Concetti di base per l&#39;utilizzo delle eccezioni gestite | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__finally (parola chiave), eccezioni gestite"
  - "blocchi catch"
  - "eccezioni, gestito"
  - "generazione di eccezioni, eccezioni gestite"
  - "gestione eccezioni try-catch"
  - "gestione eccezioni try-catch, applicazioni gestite"
  - "Visual C++, gestione di eccezioni gestite"
ms.assetid: 40ce8931-1ecc-491a-815f-733b23fcba35
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 21
---
# Concetti di base per l&#39;utilizzo delle eccezioni gestite
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento vengono illustrate la gestione delle eccezioni nelle applicazioni gestite.  Ovvero un'applicazione compilata con l'opzione del compilatore di **\/clr**.  
  
## In questo argomento  
  
-   [Generazione di eccezioni in \/clr](#vcconbasicconceptsinusingmanagedexceptionsanchor1)  
  
-   [Blocchi try\/catch per le estensioni di CLR](#vcconbasicconceptsinusingmanagedexceptionsanchor2)  
  
## Osservazioni  
 Se si esegue la compilazione con l'opzione **\/clr**, è possibile gestire le eccezioni CLR e [Gestione delle eccezioni C\+\+](../cpp/cpp-exception-handling.md) standard e [gestione delle eccezioni strutturata](../cpp/structured-exception-handling-c-cpp.md) \(SEH\).  Un'eccezione CLR esegue qualsiasi eccezione generata da un tipo gestito.  La classe di [System::Exception](https://msdn.microsoft.com/en-us/library/system.exception.aspx) fornisce molti metodi utili per l'elaborazione delle eccezioni CLR e si consiglia come classe base per le classi di eccezione definite dall'utente.  
  
 I tipi di eccezione di intercettazione derivati da un'interfaccia non è supportato in **\/clr**.  Inoltre, Common Language Runtime non consente di rilevare eccezioni di overflow dello stack; un'eccezione di overflow dello stack termina il processo.  
  
 Per ulteriori informazioni sulle differenze di gestione delle eccezioni nelle applicazioni gestite e non gestite, vedere [Differenze nel comportamento di gestione delle eccezioni nelle estensioni gestite per C\+\+](../dotnet/differences-in-exception-handling-behavior-under-clr.md).  
  
##  <a name="vcconbasicconceptsinusingmanagedexceptionsanchor1"></a> Generazione di eccezioni in \/clr  
 L'espressione throw C\+\+ viene estesa per generare un handle a un tipo CLR.  L'esempio seguente consente di creare un tipo di eccezione personalizzato e quindi genera un'istanza di quel tipo:  
  
```  
// clr_exception_handling.cpp  
// compile with: /clr /c  
ref struct MyStruct: public System::Exception {  
public:  
   int i;  
};  
  
void GlobalFunction() {  
   MyStruct^ pMyStruct = gcnew MyStruct;  
   throw pMyStruct;  
}  
```  
  
 Un tipo di valore deve essere boxed prima di essere generato:  
  
```  
// clr_exception_handling_2.cpp  
// compile with: /clr /c  
value struct MyValueStruct {  
   int i;  
};  
  
void GlobalFunction() {  
   MyValueStruct v = {11};  
   throw (MyValueStruct ^)v;  
}  
```  
  
##  <a name="vcconbasicconceptsinusingmanagedexceptionsanchor2"></a> Blocchi try\/catch per le estensioni di CLR  
 Stessi **Prova**\/struttura dei blocchi di**Catch** può essere utilizzata per intercettare sia CLR che le eccezioni native:  
  
```  
// clr_exception_handling_3.cpp  
// compile with: /clr  
using namespace System;  
ref struct MyStruct : public Exception {  
public:  
   int i;  
};  
  
struct CMyClass {  
public:  
   double d;  
};  
  
void GlobalFunction() {  
   MyStruct^ pMyStruct = gcnew MyStruct;  
   pMyStruct->i = 11;  
   throw pMyStruct;  
}  
  
void GlobalFunction2() {  
   CMyClass c = {2.0};  
   throw c;  
}  
  
int main() {  
   for ( int i = 1; i >= 0; --i ) {  
      try {  
         if ( i == 1 )  
            GlobalFunction2();  
         if ( i == 0 )  
            GlobalFunction();  
      }  
      catch ( CMyClass& catchC ) {  
         Console::WriteLine( "In 'catch(CMyClass& catchC)'" );  
         Console::WriteLine( catchC.d );  
      }  
      catch ( MyStruct^ catchException ) {  
         Console::WriteLine( "In 'catch(MyStruct^ catchException)'" );  
         Console::WriteLine( catchException->i );  
      }  
   }  
}  
```  
  
### Output  
  
```  
In 'catch(CMyClass& catchC)'  
2  
In 'catch(MyStruct^ catchException)'  
11  
```  
  
### Ordine della rimozione di oggetti C\+\+  
 La rimozione viene eseguita per tutti gli oggetti C\+\+ con distruttori che possono essere visualizzati sullo stack in esecuzione tra la funzione che genera e la funzione di gestione.  Poiché i tipi CLR vengono allocati nell'heap, rimuovendo non si applica a essi.  
  
 L'ordine degli eventi per un'eccezione viene generata come segue:  
  
1.  Il runtime viene analizzato lo stack che cerca nella clausola catch appropriata oppure, nel caso di SEH, tranne il filtro per SEH, per rilevare l'eccezione.  Clausole catch sono presenti prima nell'ordine lessicale quindi dinamicamente nello stack di chiamate.  
  
2.  Una volta che il gestore corretto viene trovato, lo stack viene rimosso a tale punto.  Per ogni chiamata di funzione nello stack, gli oggetti locali destructed e \_\_finally i blocchi vengono eseguiti, da più esterno annidato.  
  
3.  Lo stack viene rimosso una volta, la clausola catch viene eseguito.  
  
### Intercettare i tipi non gestiti  
 Quando un tipo di oggetto non gestito viene generato, viene eseguito il wrapping con un'eccezione di tipo [System::Runtime.InteropServices::SEHException](https://msdn.microsoft.com/en-us/library/system.runtime.interopservices.sehexception.aspx).  Nella ricerca della clausola appropriata di **Catch**, esistono due possibilità.  
  
-   Se un tipo C\+\+ nativa viene rilevato, l'eccezione non wrapping e rispetto al tipo rilevato.  Questo confronto consente un tipo C\+\+ nativa da rilevare nel modo normale.  
  
-   Tuttavia, se una clausola di **Catch** di tipo **SEHException** o una delle classi di base viene valutata per prima, la clausola rileverà l'eccezione.  Pertanto, è necessario inserire tutte le clausole catch che intercetta i tipi nativi C\+\+ prima di tutte le clausole catch dei tipi CLR.  
  
 Notare che  
  
```  
catch(Object^)  
```  
  
 e  
  
```  
catch(...)  
```  
  
 entrambi in qualsiasi tipo generato eccezioni SEH.  
  
 Se un tipo non gestito viene rilevato dal blocco catch \(Object^\), non distrutto l'oggetto generato.  
  
 Nel generare o rilevando eccezioni non gestite, è consigliabile utilizzare l'opzione del compilatore di [\/EHsc](../build/reference/eh-exception-handling-model.md) anziché **\/EHs** o di **\/EHa**.  
  
## Vedere anche  
 [Exception Handling](../windows/exception-handling-cpp-component-extensions.md)   
 [safe\_cast](../windows/safe-cast-cpp-component-extensions.md)   
 [Gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md)