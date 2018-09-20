---
title: Modifiche agli operatori di conversione | Microsoft Docs
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
ms.openlocfilehash: 03b17c5abc559289a9f85a10b9c5914b49498922
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46381113"
---
# <a name="changes-to-conversion-operators"></a>Modifiche agli operatori di conversione

La sintassi per gli operatori di conversione è stato modificato dalle estensioni gestite per C++ in Visual C++.

Un esempio consiste nello scrivere `op_Implicit` per specificare una conversione. Ecco una definizione di `MyDouble` ricavare la specifica del linguaggio:

```
__gc struct MyDouble {
   static MyDouble* op_Implicit( int i );
   static int op_Explicit( MyDouble* val );
   static String* op_Explicit( MyDouble* val );
};
```

Ciò indica che, dato un numero intero, l'algoritmo per la conversione di integer in una `MyDouble` avviene tramite il `op_Implicit` operatore. Inoltre, tale conversione verrà eseguita in modo implicito dal compilatore. Analogamente, dato un `MyDouble` object, i due `op_Explicit` operatori forniscono i rispettivi algoritmi per la conversione di tale oggetto in un numero intero o un oggetto gestito `String` entità. Tuttavia, il compilatore non eseguirà la conversione a meno che non richiesto in modo esplicito dall'utente.

In c#, ciò appare come segue:

```
class MyDouble {
   public static implicit operator MyDouble( int i );
   public static explicit operator int( MyDouble val );
   public static explicit operator string( MyDouble val );
};
```

Il codice c# sia più simile a C++ rispetto a quelle delle estensioni gestite per C++. Non è il caso nella nuova sintassi.

Il comitato di ISO-c + + introdotto una parola chiave `explicit`, per ridurre le conseguenze impreviste, ad esempio, un' `Array` classe che accetta un singolo argomento integer come una dimensione in modo implicito convertirà qualsiasi numero intero in un `Array` dell'oggetto cui è non è quello desiderato. Un modo per evitare questo problema è un linguaggio di progettazione di un secondo argomento fittizio per un costruttore

D'altra parte, non è necessario fornire una coppia di conversione durante la progettazione di un tipo di classe all'interno di C++. L'esempio migliore è la classe di stringa standard. La conversione implicita è il costruttore ad argomento singolo accettando una stringa di tipo C. Tuttavia, non fornisce l'operatore di conversione impliciti corrispondenti - che di conversione di una stringa dell'oggetto in una stringa di tipo C, ma piuttosto richiede all'utente di richiamare in modo esplicito una funzione denominata - in questo caso, `c_str()`.

Pertanto, associare un comportamento implicite/esplicite in un operatore di conversione (e come che incapsula il set di conversioni a un solo form di dichiarazione) sembra essere un miglioramento per il supporto C++ originale per gli operatori di conversione, che ha portato alla fine per il `explicit` parola chiave. Il supporto linguistico di Visual C++ per gli operatori di conversione è simile al seguente, che è leggermente meno dettagliati rispetto a quello del linguaggio c# a causa del comportamento predefinito dell'operatore che supporta un'applicazione dell'algoritmo di conversione implicita:

```
ref struct MyDouble {
public:
   static operator MyDouble^ ( int i );
   static explicit operator int ( MyDouble^ val );
   static explicit operator String^ ( MyDouble^ val );
};
```

Un'altra modifica è che un costruttore ad argomento singolo è considerato come se fosse dichiarato `explicit`. Ciò significa che per attivarne le chiamate, è necessario un cast esplicito. Si noti tuttavia che se viene definito un operatore di conversione esplicita, viene e non il costruttore ad argomento singolo, viene richiamato.

## <a name="see-also"></a>Vedere anche

[Dichiarazioni di membri in una classe o interfaccia (C++/CLI)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)