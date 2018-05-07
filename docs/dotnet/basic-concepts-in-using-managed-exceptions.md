---
title: Concetti di base utilizzando eccezioni gestite | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- try-catch exception handling, managed applications
- __finally keyword, managed exceptions
- exceptions, managed
- try-catch exception handling
- catch blocks
- throwing exceptions, managed exceptions
- Visual C++, handling managed exceptions
ms.assetid: 40ce8931-1ecc-491a-815f-733b23fcba35
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 255a7d053228b73b2b0eb13f4732e9a7829549ba
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="basic-concepts-in-using-managed-exceptions"></a>Concetti di base per l'utilizzo delle eccezioni gestite
Questo argomento descrive le eccezioni nelle applicazioni gestite. Vale a dire, un'applicazione che viene compilata con la **/clr** l'opzione del compilatore.  
  
## <a name="in-this-topic"></a>Contenuto dell'argomento  
  
-   [Generazione di eccezioni in /clr](#vcconbasicconceptsinusingmanagedexceptionsanchor1)  
  
-   [Blocchi Try/Catch per le estensioni CLR](#vcconbasicconceptsinusingmanagedexceptionsanchor2)  
  
## <a name="remarks"></a>Note  
 Se si compila con il **/clr** opzione, è possibile gestire le eccezioni CLR, nonché standard [gestione delle eccezioni C++](../cpp/cpp-exception-handling.md) e [gestione delle eccezioni strutturata](../cpp/structured-exception-handling-c-cpp.md) (SEH). Un'eccezione CLR è qualsiasi eccezione generata da un tipo gestito. Il [System:: Exception](https://msdn.microsoft.com/en-us/library/system.exception.aspx) classe fornisce numerosi metodi utili per l'elaborazione delle eccezioni CLR e consiglia come classe base per le classi di eccezione definito dall'utente.  
  
 Rilevamento di tipi di eccezione derivati da un'interfaccia non è supportato in **/clr**. Inoltre, common language runtime non consente di intercettare le eccezioni di overflow dello stack; un'eccezione di overflow dello stack interromperà il processo.  
  
 Per ulteriori informazioni sulle differenze nella gestione delle eccezioni nelle applicazioni gestite e non gestite, vedere [le differenze nell'eccezione Gestione comportamento le estensioni gestite per C++](../dotnet/differences-in-exception-handling-behavior-under-clr.md).  
  
##  <a name="vcconbasicconceptsinusingmanagedexceptionsanchor1"></a> Generazione di eccezioni in /clr  
 L'espressione C++ throw viene estesa per generare un handle a un tipo CLR. Nell'esempio seguente viene creato un tipo di eccezione personalizzata e quindi genera un'istanza di quel tipo:  
  
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
  
 Un tipo di valore deve essere sottoposto a boxing prima generata:  
  
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
  
##  <a name="vcconbasicconceptsinusingmanagedexceptionsanchor2"></a> Blocchi Try/Catch per le estensioni CLR  
 Lo stesso **provare**/**catch** blocco può essere utilizzata per il rilevamento di Common Language Runtime sia le eccezioni native:  
  
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
  
### <a name="output"></a>Output  
  
```  
In 'catch(CMyClass& catchC)'  
2  
In 'catch(MyStruct^ catchException)'  
11  
```  
  
### <a name="order-of-unwinding-for-c-objects"></a>Ordine di rimozione per gli oggetti di C++  
 Rimozione si verifica per tutti gli oggetti C++ con distruttori che possono essere nello stack in fase di esecuzione tra la funzione di generazione e la funzione di gestione. Poiché i tipi CLR sono stati allocati sull'heap, svuotamento non si applica a essi.  
  
 L'ordine degli eventi per un'eccezione generata è come segue:  
  
1.  Il runtime esamina lo stack di ricerca della clausola catch appropriata o, nel caso di gestione delle eccezioni Strutturata, un'eccezione di filtro per la gestione delle eccezioni Strutturata per intercettare l'eccezione. Clausole catch vengono cercati prima in un ordine lessicale e quindi in modo dinamico verso il basso lo stack di chiamate.  
  
2.  Dopo il corretto gestore viene trovato, lo stack viene rimosso a quel punto. Per ogni chiamata di funzione nello stack, i relativi oggetti locali sono distruggere e finally vengono eseguiti blocchi, dalla maggior parte annidato di verso l'esterno.  
  
3.  Una volta lo stack viene rimosso, viene eseguita la clausola catch.  
  
### <a name="catching-unmanaged-types"></a>Rilevamento di tipi non gestiti  
 Quando viene generato un tipo di oggetto non gestito, che viene eseguito il wrapping con un'eccezione di tipo [InteropServices:: SEHException](https://msdn.microsoft.com/en-us/library/system.runtime.interopservices.sehexception.aspx). Quando si cercano appropriata **catch** clausola, esistono due possibilità.  
  
-   Se viene rilevato un tipo C++ nativo, l'eccezione viene estratta e confrontato con il tipo. Questo confronto consente a un tipo nativo C++ da acquisire in modo normale.  
  
-   Tuttavia, se un **catch** clausola di tipo **SEHException** o le relative classi base viene esaminato prima di tutto, la clausola intercetta l'eccezione. Pertanto, è necessario inserire tutte le clausole catch che rilevano innanzitutto i tipi nativi C++ prima di qualsiasi clausola catch di tipi CLR.  
  
 Si noti che  
  
```  
catch(Object^)  
```  
  
 e  
  
```  
catch(...)  
```  
  
 entrambi intercetterà qualsiasi tipo generata, incluse le eccezioni SEH.  
  
 Se un tipo non gestito viene rilevato da catch(Object^), non eliminerà l'oggetto eccezione.  
  
 Quando la generazione o il rilevamento non gestite le eccezioni, è consigliabile utilizzare il [/EHsc](../build/reference/eh-exception-handling-model.md) opzione del compilatore invece di **/EHs** o **/EHa**.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione delle eccezioni](../windows/exception-handling-cpp-component-extensions.md)   
 [safe_cast](../windows/safe-cast-cpp-component-extensions.md)   
 [Gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md)