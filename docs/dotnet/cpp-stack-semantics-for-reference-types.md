---
title: Semantica dello stack C++ per i tipi di riferimento
ms.date: 11/04/2016
helpviewer_keywords:
- reference types, C++ stack semantics for
ms.assetid: 319a1304-f4a4-4079-8b84-01cec847d531
ms.openlocfilehash: 886d0d16d8b81364078db5604ab10d8dcc3fa561
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87197839"
---
# <a name="c-stack-semantics-for-reference-types"></a>Semantica dello stack C++ per i tipi di riferimento

Prima di Visual Studio 2005, è possibile creare un'istanza di un tipo di riferimento solo usando l' **`new`** operatore, che ha creato l'oggetto nell'heap sottoposta a Garbage Collection. Adesso invece è possibile creare un'istanza di un tipo di riferimento utilizzando la stessa sintassi che viene utilizzata per creare un'istanza di un tipo nativo nello stack. Non è quindi necessario usare [ref new, gcnew](../extensions/ref-new-gcnew-cpp-component-extensions.md) per creare un oggetto di un tipo di riferimento. E quando l'oggetto esce dall'ambito, il compilatore chiama il distruttore dell'oggetto.

## <a name="remarks"></a>Osservazioni

Quando si crea un'istanza di un tipo di riferimento usando la semantica dello stack, il compilatore crea internamente l'istanza nell'heap sottoposto a Garbage Collection (usando **`gcnew`** ).

Quando la firma o il tipo restituito di una funzione include un'istanza di un tipo di riferimento per valore, la funzione verrà contrassegnata nei metadati come una funzione che richiede una gestione speciale (con modreq). Questo tipo di gestione speciale attualmente viene fornita solo dai client Visual C++; gli altri linguaggi al momento non supportano funzioni o dati che utilizzano i tipi di riferimento creati con la semantica dello stack.

Un motivo per usare **`gcnew`** (allocazione dinamica) invece della semantica dello stack è se il tipo non ha distruttore. Inoltre, non è possibile utilizzare i tipi di riferimento creati con la semantica dello stack nelle firme della funzione se si desidera che le funzioni debbano essere utilizzate in linguaggi diversi da Visual C++.

Il compilatore non genererà un costruttore di copia per un tipo di riferimento. Pertanto, se si definisce una funzione che utilizza un tipo di riferimento per valore nella firma, è necessario definire un costruttore di copia per il tipo di riferimento. Un costruttore di copia per un tipo di riferimento ha una firma nella forma seguente: `R(R%){}`.

Il compilatore non genererà un operatore di assegnazione predefinito per un tipo di riferimento. Un operatore di assegnazione consente di creare un oggetto mediante la semantica dello stack e di inizializzarlo con un oggetto esistente creato mediante la semantica dello stack. Un operatore di assegnazione per un tipo di riferimento ha una firma nella forma seguente: `void operator=( R% ){}`.

Se il distruttore del tipo rilascia risorse critiche e si usa la semantica dello stack per i tipi di riferimento, non è necessario chiamare in modo esplicito il distruttore (o chiamare **`delete`** ). Per ulteriori informazioni sui distruttori nei tipi di riferimento, vedere [distruttori e finalizzatori in procedura: definire e utilizzare classi e struct (C++/CLI)](../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).

Un operatore di assegnazione generato dal compilatore seguirà le normali regole di C++ standard con le seguenti aggiunte:

- Tutti i membri dati non statici il cui tipo è un handle a un tipo di riferimento saranno copiati superficialmente (considerati come membri dati non statici il cui tipo è un puntatore).

- Qualsiasi membro dati non statico il cui tipo è un tipo di valore verrà copiato superficialmente.

- Qualsiasi membro dati non statico il cui tipo è un'istanza di un tipo di riferimento causerà una chiamata al costruttore di copia del tipo di riferimento.

Il compilatore fornisce inoltre un operatore unario `%` per convertire un'istanza di un tipo di riferimento creato mediante la semantica dello stack nel tipo di handle sottostante.

I seguenti tipi di riferimento non sono disponibili per l'utilizzo con la semantica dello stack:

- [delegato (Estensioni del componente C++)](../extensions/delegate-cpp-component-extensions.md)

- [Matrici](../extensions/arrays-cpp-component-extensions.md)

- <xref:System.String>

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

Nell'esempio di codice seguente viene mostrato come dichiarare le istanze dei tipi di riferimento con la semantica dello stack, il funzionamento di un costruttore di copia e dell'operatore di assegnazione e come inizializzare un riferimento di traccia con un tipo di riferimento creato mediante la semantica dello stack.

### <a name="code"></a>Codice

```cpp
// stack_semantics_for_reference_types.cpp
// compile with: /clr
ref class R {
public:
   int i;
   R(){}

   // assignment operator
   void operator=(R% r) {
      i = r.i;
   }

   // copy constructor
   R(R% r) : i(r.i) {}
};

void Test(R r) {}   // requires copy constructor

int main() {
   R r1;
   r1.i = 98;

   R r2(r1);   // requires copy constructor
   System::Console::WriteLine(r1.i);
   System::Console::WriteLine(r2.i);

   // use % unary operator to convert instance using stack semantics
   // to its underlying handle
   R ^ r3 = %r1;
   System::Console::WriteLine(r3->i);

   Test(r1);

   R r4;
   R r5;
   r5.i = 13;
   r4 = r5;   // requires a user-defined assignment operator
   System::Console::WriteLine(r4.i);

   // initialize tracking reference
   R % r6 = r4;
   System::Console::WriteLine(r6.i);
}
```

### <a name="output"></a>Output

```Output
98
98
98
13
13
```

## <a name="see-also"></a>Vedere anche

[Classi e struct](../extensions/classes-and-structs-cpp-component-extensions.md)
