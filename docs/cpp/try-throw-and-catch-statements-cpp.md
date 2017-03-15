---
title: "Istruzioni try, throw e catch (C++) | Microsoft Docs"
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
  - "catch_cpp"
  - "throw"
  - "try_cpp"
  - "try"
  - "throw_cpp"
  - "catch"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "catch (parola chiave) [C++]"
  - "parole chiave [C++], gestione delle eccezioni"
  - "Gestione delle eccezioni C++, sintassi dell'istruzione"
  - "try-catch (parola chiave) [C++], sulla gestione delle eccezioni try-catch"
  - "throw (parola chiave) [C++]"
  - "try-catch (parola chiave) [C++]"
  - "try-catch (parola chiave) [C++], gestione delle eccezioni"
  - "generazione di eccezioni, throw (parola chiave)"
  - "try-catch (parola chiave) [C++], throw (parola chiave) [C++] s"
  - "generazione di eccezioni, che implementa la gestione delle eccezioni C++"
  - "generazione di eccezioni"
  - "throw (parola chiave) [C++], throw () e throw"
ms.assetid: 15e6a87b-b8a5-4032-a7ef-946c644ba12a
caps.latest.revision: 24
caps.handback.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Istruzioni try, throw e catch (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per implementare la gestione delle eccezioni in C++, utilizzare le espressioni `try`, `throw` e `catch`.  
  
 In primo luogo, utilizzare un blocco `try` per contenere una o più istruzioni che potrebbero generare un'eccezione.  
  
 Un'espressione `throw` segnala che una condizione eccezionale, spesso un errore, si è verificata in un blocco `try`. È possibile utilizzare un oggetto di qualsiasi tipo come operando di un'espressione `throw`. Questo oggetto viene in genere utilizzato per comunicare informazioni sull'errore. Nella maggior parte dei casi, è consigliabile utilizzare il [std:: Exception](../standard-library/exception-class1.md) classe o una delle classi derivate definite nella libreria standard. Se una di queste classi non è appropriata, è consigliabile derivare una propria classe di eccezione da `std::exception`.  
  
 Per gestire le eccezioni che potrebbero essere generate, implementare uno o più blocchi `catch` immediatamente dopo un blocco `try`. Ogni blocco `catch` specifica il tipo di eccezione che può gestire.  
  
 In questo esempio viene mostrato un blocco `try` con i relativi gestori. Si supponga che `GetNetworkResource()` acquisisca dati su una connessione di rete e che i due tipi di eccezione siano classi definite dall'utente che derivano da `std::exception`. Si noti che le eccezioni vengono intercettate dal riferimento `const` nell'istruzione `catch`. È consigliabile generate eccezioni per valore e intercettarle per riferimento const.  
  
## <a name="example"></a>Esempio  
  
```  
  
MyData md;  
try {  
   // Code that could throw an exception  
   md = GetNetworkResource();  
}  
catch (const networkIOException& e) {  
   // Code that executes when an exception of type  
   // networkIOException is thrown in the try block  
   // ...  
   // Log error message in the exception object  
   cerr << e.what();  
}  
catch (const myDataFormatException& e) {  
   // Code that handles another exception type  
   // ...  
   cerr << e.what();  
}  
  
// The following syntax shows a throw expression  
MyData GetNetworkResource()  
{  
   // ...  
   if (IOSuccess == false)  
      throw networkIOException("Unable to connect");  
   // ...  
   if (readError)  
      throw myDataFormatException("Format error");   
   // ...  
}  
```  
  
## <a name="remarks"></a>Note  
 Il codice dopo la clausola `try` è la sezione protetta. Il `throw` espressione *Genera*vale a dire, genera, un'eccezione. Il blocco di codice dopo la clausola `catch` rappresenta il gestore dell'eccezione. Questo è il gestore che *intercetta* l'eccezione generata se i tipi nel `throw` e `catch` le espressioni sono compatibili. Per un elenco di regole che governano il tipo corrispondente in `catch` blocchi, vedere [vengono valutati come blocchi Catch](../cpp/how-catch-blocks-are-evaluated-cpp.md). Se l'istruzione `catch` specifica i puntini di sospensione (...) anziché un tipo, il blocco `catch` gestisce ogni tipo di eccezione. Quando esegue la compilazione con il [/EHa](../build/reference/eh-exception-handling-model.md) opzione, sono incluse le eccezioni strutturate C e le eccezioni asincrone generate dal sistema o generati dall'applicazione, ad esempio protezione della memoria, divisione per zero, a virgola mobile e violazioni. Poiché i blocchi `catch` vengono elaborati nell'ordine del programma per trovare un tipo corrispondente, un gestore puntini di sospensione deve essere l'ultimo gestore per il blocco `try` associato. Utilizzare con cautela `catch(...)`. Non consentire a un programma di proseguire a meno che il blocco catch non sia in grado di gestire l'eccezione specifica intercettata. Un blocco `catch(...)` viene in genere utilizzato per registrare gli errori ed eseguire una pulizia speciale prima che l'esecuzione del programma venga interrotta.  
  
 Un'espressione `throw` priva di operando rigenera l'eccezione attualmente gestita. È consigliabile utilizzare questo formato quando si rigenera l'eccezione, perché mantiene le informazioni sul tipo polimorfico dell'eccezione generale. Un'espressione di questo tipo deve essere utilizzata solo in un gestore `catch` o in una funzione chiamata da un gestore `catch`. L'oggetto eccezione generato nuovamente è l'oggetto eccezione originale, non una copia.  
  
```  
try {  
   throw CSomeOtherException();  
}  
catch(...) {  
   // Catch all exceptions – dangerous!!!  
   // Respond (perhaps only partially) to the exception, then  
   // re-throw to pass the exception to some other handler  
   // ...  
   throw;  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione delle eccezioni C++](../cpp/cpp-exception-handling.md)   
 [Parole chiave](../cpp/keywords-cpp.md)   
 [Eccezioni C++ non gestite](../cpp/unhandled-cpp-exceptions.md)   
 [__uncaught_exception](../c-runtime-library/reference/uncaught-exception.md)