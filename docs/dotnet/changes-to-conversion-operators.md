---
title: Modifiche agli operatori di conversione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- conversion operators
- operators [C++], explicit type conversion
- type conversion, explicit conversions
- conversions, explicit
- explicit keyword [C++]
ms.assetid: 9b83925c-71b7-4bd3-ac2e-843dd7c7f184
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 750d16bc6fee86d8a3f8b912cdc4c251221dffb2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33110872"
---
# <a name="changes-to-conversion-operators"></a>Modifiche agli operatori di conversione
La sintassi per gli operatori di conversione è stata modificata dalle estensioni gestite per C++ a Visual C++.  
  
 Un esempio consiste nello scrivere `op_Implicit` per specificare una conversione. Ecco una definizione di `MyDouble` tratto dalla specifica di linguaggio:  
  
```  
__gc struct MyDouble {  
   static MyDouble* op_Implicit( int i );   
   static int op_Explicit( MyDouble* val );  
   static String* op_Explicit( MyDouble* val );   
};  
```  
  
 Ciò indica che, dato un numero intero, l'algoritmo per la conversione di integer in un `MyDouble` viene fornito dal `op_Implicit` operatore. Inoltre, tale conversione verrà eseguita in modo implicito dal compilatore. Analogamente, dato un `MyDouble` oggetto, i due `op_Explicit` operatori forniscono i rispettivi algoritmi per la conversione di tale oggetto in un numero intero o un oggetto gestito `String` entità. Tuttavia, il compilatore non eseguirà la conversione a meno che non richiesto in modo esplicito dall'utente.  
  
 In c#, questa è simile al seguente:  
  
```  
class MyDouble {  
   public static implicit operator MyDouble( int i );   
   public static explicit operator int( MyDouble val );  
   public static explicit operator string( MyDouble val );   
};  
```  
  
 Il codice c# è più simile C++ rispetto a quello di estensioni gestite per C++. Non è questo il caso nella nuova sintassi.  
  
 Il comitato ISO C++ introdotto una parola chiave, `explicit`, per ridurre le conseguenze impreviste, ad esempio, un `Array` classe che accetta un argomento integer singolo, come una dimensione in modo implicito convertirà qualsiasi numero intero in un `Array` che l'oggetto è non si desidera. Per evitare questo problema, è un linguaggio di progettazione di un secondo argomento fittizio per un costruttore  
  
 D'altra parte, non è necessario fornire una coppia di conversione durante la progettazione di un tipo di classe in C++. L'esempio migliore è la classe di stringa standard. La conversione implicita è il costruttore ad argomento singolo accetta una stringa di tipo C. Tuttavia, non fornisce l'operatore di conversione implicita corrispondente - che di conversione di una stringa dell'oggetto in una stringa di tipo C, ma è invece richiesto all'utente di richiamare in modo esplicito una funzione denominata, in questo caso, `c_str()`.  
  
 In tal caso, associare un comportamento implicito o esplicito su un operatore di conversione (e come che incapsula il set di conversioni di un singolo modulo di dichiarazione) sembra essere un miglioramento per il supporto originale di C++ per gli operatori di conversione, per il `explicit` (parola chiave). Il supporto del linguaggio Visual C++ per gli operatori di conversione è simile al seguente, che a causa il comportamento predefinito dell'operatore che supporta un'applicazione implicita dell'algoritmo di conversione è leggermente meno dettagliati rispetto a quella di c#:  
  
```  
ref struct MyDouble {  
public:  
   static operator MyDouble^ ( int i );  
   static explicit operator int ( MyDouble^ val );  
   static explicit operator String^ ( MyDouble^ val );  
};  
```  
  
 È un'altra modifica che viene considerato un costruttore ad argomento singolo come se fosse dichiarato `explicit`. Ciò significa che, per attivare le chiamate, è necessario un cast esplicito. Si noti, tuttavia, se viene definito un operatore di conversione esplicita e non il costruttore ad argomento singolo, viene richiamato.  
  
## <a name="see-also"></a>Vedere anche  
 [Dichiarazioni di membri in una classe o interfaccia (C++/CLI)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)