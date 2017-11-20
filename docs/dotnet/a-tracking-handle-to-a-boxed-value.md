---
title: Handle di rilevamento a un valore Boxed | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: boxed value types, tracking handle to
ms.assetid: 16c92048-5b74-47d5-8eca-dfea3d38879a
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: a986dcea2eec183ae09eb9af275082922257ef76
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="a-tracking-handle-to-a-boxed-value"></a>Handle di rilevamento a un valore boxed
L'utilizzo di un handle a un tipo di valore di riferimento di rilevamento è stato modificato dalle estensioni gestite per C++ a Visual C++.  
  
 Conversione boxing è una caratteristica specifica del sistema di tipi CLR unificata. Tipi di valore contengono direttamente allo stato, mentre i tipi di riferimento sono una coppia implicita: l'entità denominata è un handle a un oggetto senza nome allocato nell'heap gestito. Qualsiasi inizializzazione o l'assegnazione di un valore di tipo a un `Object`, ad esempio, richiede che il tipo di valore venga inserito all'interno dell'heap di Common Language Runtime - si tratta in cui si verifica l'immagine di conversione boxing - inizialmente tramite l'allocazione di memoria associati, quindi copiando lo stato del tipo di valore e quindi restituire l'indirizzo di questo ibrido valore/riferimento. Di conseguenza, quando una scrittura in c#  
  
```  
object o = 1024; // C# implicit boxing  
```  
  
 è molto più succedendo che diventa evidente la semplicità del codice. La progettazione di c# nasconde la complessità del non solo le operazioni che vengono eseguiti dietro le quinte, ma anche l'astrazione di boxing. Estensioni gestite per C++, d'altra parte, evitare che ciò potrebbe causare un falso senso di efficienza, lo inserisce nella superficie dell'utente tramite la richiesta di un'istruzione esplicita:  
  
```  
Object *o = __box( 1024 ); // Managed Extensions explicit boxing  
```  
  
 Conversione boxing è implicito in Visual C++:  
  
```  
Object ^o = 1024; // new syntax implicit boxing  
```  
  
 Il `__box` la parola chiave offre un servizio essenziale nelle estensioni gestite, che è assente per progettazione in linguaggi quali c# e Visual Basic: fornisce un vocabolario e rilevamento handle per la modifica diretta di un'istanza boxed nell'heap gestito. Ad esempio, considerare il programma di piccole dimensioni seguente:  
  
```  
int main() {  
   double result = 3.14159;  
   __box double * br = __box( result );  
  
   result = 2.7;   
   *br = 2.17;     
   Object * o = br;  
  
   Console::WriteLine( S"result :: {0}", result.ToString() ) ;  
   Console::WriteLine( S"result :: {0}", __box(result) ) ;  
   Console::WriteLine( S"result :: {0}", br );  
}  
```  
  
 Il codice sottostante generato per le tre chiamate di `WriteLine` Mostra il costo di accedere al valore di un valore boxed digitare (ringraziamenti vengono evidenziati queste differenze), in cui le righe indicate mostrano l'overhead associato a ogni chiamata.  
  
```  
// Console::WriteLine( S"result :: {0}", result.ToString() ) ;  
ldstr      "result :: {0}"  
ldloca.s   result  // ToString overhead  
call       instance string  [mscorlib]System.Double::ToString()  // ToString overhead  
call       void [mscorlib]System.Console::WriteLine(string, object)  
  
// Console::WriteLine( S"result :: {0}", __box(result) ) ;  
Ldstr    " result :: {0}"  
ldloc.0  
box    [mscorlib]System.Double // box overhead  
call    void [mscorlib]System.Console::WriteLine(string, object)  
  
// Console::WriteLine( S"result :: {0}", br );  
ldstr    "result :: {0}"  
ldloc.0  
call     void [mscorlib]System.Console::WriteLine(string, object)  
```  
  
 Passando il tipo di valore boxed direttamente a `Console::WriteLine` Elimina sia il boxing e l'esigenza di chiamare `ToString()`. (È naturalmente, il boxing precedente per inizializzare `br`, non si ottengono un valore a meno che non si utilizzi effettivamente `br` a funzionare.  
  
 Nella nuova sintassi, il supporto per tipi di valore boxed è notevolmente più integrati nel sistema di tipi, mantenendo la potenza. Ad esempio, ecco la traduzione del programma di piccole dimensioni precedenti:  
  
```  
int main()  
{  
   double result = 3.14159;  
   double^ br = result;  
   result = 2.7;  
   *br = 2.17;  
   Object^ o = br;  
   Console::WriteLine( "result :: {0}", result.ToString() );  
   Console::WriteLine( "result :: {0}", result );  
   Console::WriteLine( "result :: {0}", br );  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi di valore e i relativi comportamenti (C + c++ /CLI)](../dotnet/value-types-and-their-behaviors-cpp-cli.md)   
 [Procedura: Richiedere la conversione boxing in modo esplicito](../dotnet/how-to-explicitly-request-boxing.md)