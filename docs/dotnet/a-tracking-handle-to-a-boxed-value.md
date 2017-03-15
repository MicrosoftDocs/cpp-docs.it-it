---
title: "Handle di rilevamento a un valore boxed | Microsoft Docs"
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
  - "tipi valore boxed, rilevamento handle in"
ms.assetid: 16c92048-5b74-47d5-8eca-dfea3d38879a
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Handle di rilevamento a un valore boxed
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'utilizzo di un handle di rilevamento per fare riferimento a un tipo di valore è stato modificato in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] rispetto alle estensioni gestite di C\+\+.  
  
 Il boxing costituisce una caratteristica specifica del sistema di tipi unificato CLR.  I tipi di valore contengono direttamente il relativo stato, mentre i tipi di riferimento sono una coppia implicita: l'entità denominata è un handle a un oggetto senza nome allocato nell'heap gestito.  Qualsiasi inizializzazione o assegnazione di un tipo di valore a `Object`, ad esempio, richiede che il tipo di valore venga inserito nell'heap CLR allocando inizialmente la memoria associata, quindi copiando lo stato del tipo di valore e infine restituendo l'indirizzo di questo ibrido valore\/riferimento.  La scrittura in C\# di  
  
```  
object o = 1024; // C# implicit boxing  
```  
  
 produce pertanto effetti complessi nonostante la semplicità del codice.  La progettazione di C\# nasconde la complessità non solo delle operazioni eseguite, ma anche dell'astrazione del boxing.  Nelle estensioni gestite per C\+\+ viene invece evitato un falso senso di efficienza e la complessità è visibile all'utente, a cui viene richiesta un'istruzione esplicita  
  
```  
Object *o = __box( 1024 ); // Managed Extensions explicit boxing  
```  
  
 La conversione boxing è implicita in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)]:  
  
```  
Object ^o = 1024; // new syntax implicit boxing  
```  
  
 Nelle estensioni gestite la parola chiave `__box` offre un più importante servizio non disponibile per progettazione in linguaggi come C\# e [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)], ovvero fornisce un vocabolario e un handle di rilevamento per la modifica diretta di un'istanza boxed nell'heap gestito.  Si consideri ad esempio il ridotto programma riportato di seguito:  
  
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
  
 Nel codice sottostante generato per le tre chiamate di `WriteLine` vengono evidenziati i diversi costi dell'accesso al valore di un tipo di valore boxed, mentre nelle righe indicate viene illustrato l'overhead associato a ogni chiamata.  
  
```  
// Console::WriteLine( S"result :: {0}", result.ToString() ) ;  
ldstr      "result :: {0}"  
ldloca.s   result  // ToString overhead  
call       instance string  [mscorlib]System.Double::ToString()  // ToString overhead  
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
  
 Passando il tipo di valore boxed direttamente a `Console::WriteLine` vengono eliminati sia il boxing che l'esigenza di chiamare `ToString()`. Poiché è presente il boxing precedente per l'inizializzazione di `br`, tuttavia, non si ottengono vantaggi concreti a meno che non si utilizzi effettivamente `br`.  
  
 Nella nuova sintassi, il supporto di tipi di valore boxed è notevolmente più integrato nel sistema di tipi, pur mantenendo la propria potenza.  Di seguito è ad esempio riportata la conversione del ridotto programma precedente:  
  
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
  
## Vedere anche  
 [Tipi di valore e relativi comportamenti \(C\+\+\/CLI\)](../dotnet/value-types-and-their-behaviors-cpp-cli.md)   
 [Procedura: richiedere la conversione boxing in modo esplicito](../dotnet/how-to-explicitly-request-boxing.md)