---
title: Handle di rilevamento a un valore Boxed | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- boxed value types, tracking handle to
ms.assetid: 16c92048-5b74-47d5-8eca-dfea3d38879a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: c7e26efae93b509700c3bb0c992d9f397559e99f
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46380730"
---
# <a name="a-tracking-handle-to-a-boxed-value"></a>Handle di rilevamento a un valore boxed

L'utilizzo di un handle di rilevamento per un riferimento a un tipo di valore è stato modificato dalle estensioni gestite per C++ in Visual C++.

La conversione boxing è una caratteristica specifica del sistema di tipi CLR unificata. Tipi valore contengono direttamente allo stato, mentre i tipi di riferimento sono una coppia di implicita: le entità denominate è un handle a un oggetto senza nome allocato nell'heap gestito. Qualsiasi inizializzazione o l'assegnazione di un valore di tipo a un `Object`, ad esempio, richiede che il tipo di valore venga inserito all'interno dell'heap CLR - si tratta in cui l'immagine di conversione boxing, sorge - inizialmente dall'allocazione di memoria associati, quindi copiando stato il valore del tipo e quindi restituire l'indirizzo di questo valore o riferimento ibrido. Di conseguenza, quando uno scritto nel linguaggio c#

```cpp
object o = 1024; // C# implicit boxing
```

è molto più succede che diventa evidente la semplicità del codice. La progettazione del linguaggio c# nasconde la complessità non solo di operazioni che vengono eseguiti dietro le quinte, ma anche dell'astrazione di conversione boxing di se stesso. Estensioni gestite per C++, d'altra parte, in questione che ciò potrebbe causare un certo senso false di efficienza, lo inserisce nella superficie dell'utente richiedendo un'istruzione esplicita:

```cpp
Object *o = __box( 1024 ); // Managed Extensions explicit boxing
```

La conversione boxing è implicito in Visual C++:

```cpp
Object ^o = 1024; // new syntax implicit boxing
```

Il `__box` la parola chiave offre un servizio fondamentale nelle estensioni gestite, che non è presente per impostazione predefinita dai linguaggi quali c# e Visual Basic: fornisce un vocabolario e rilevamento handle per la modifica diretta di un'istanza nell'heap gestito. Si consideri ad esempio il programma di piccole dimensioni seguente:

```cpp
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

Il codice sottostante generato per le tre chiamate di `WriteLine` Mostra il costo di accesso al valore di un valore boxed digitare (grazie a vengono evidenziati queste differenze), in cui le righe indicate mostrano il sovraccarico associato a ogni chiamata.

```cpp
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

Passando direttamente al tipo di valore boxed `Console::WriteLine` consente di eliminare sia la conversione boxing e l'esigenza di chiamare `ToString()`. (Naturalmente, c'è la conversione boxing precedenti per inizializzare `br`, in modo che non si ottengono un valore a meno che non si utilizzi effettivamente `br` a funzionare.

Nella nuova sintassi, il supporto per tipi di valore boxed è notevolmente più integrati nel sistema di tipi, mantenendo le potenzialità. Ad esempio, ecco la traduzione del programma di piccole dimensioni precedenti:

```cpp
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

[Tipi di valore e relativi comportamenti (C++/CLI)](../dotnet/value-types-and-their-behaviors-cpp-cli.md)<br/>
[Procedura: Richiedere la conversione boxing in modo esplicito](../dotnet/how-to-explicitly-request-boxing.md)