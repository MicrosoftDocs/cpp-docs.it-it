---
title: Vincoli su parametri di tipo generico (C++/CLI)
ms.date: 10/12/2018
ms.topic: reference
f1_keywords:
- where
helpviewer_keywords:
- where keyword [C++]
- constraints, C++
ms.assetid: eb828cc9-684f-48a3-a898-b327700c0a63
ms.openlocfilehash: 829f11c9f0c3935f9a415cae381cfc12d88df18a
ms.sourcegitcommit: c1fd917a8c06c6504f66f66315ff352d0c046700
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/16/2020
ms.locfileid: "90686756"
---
# <a name="constraints-on-generic-type-parameters-ccli"></a>Vincoli su parametri di tipo generico (C++/CLI)

Nelle dichiarazioni di metodo o di tipo generico è possibile qualificare un parametro di tipo con vincoli. Un vincolo è un requisito che deve essere soddisfatto dai tipi utilizzati come argomenti tipo. Ad esempio, un vincolo potrebbe essere l'implementazione obbligatoria di una determinata interfaccia o l'eredità da una classe specifica da parte dell'argomento di tipo.

I vincoli sono facoltativi; la mancata specifica di un vincolo per un parametro equivale a vincolare quel parametro a <xref:System.Object>.

## <a name="syntax"></a>Sintassi

```cpp
where type-parameter: constraint list
```

### <a name="parameters"></a>Parametri

*parametro di tipo*<br/>
Uno dei parametri di tipo da vincolare.

*constraint list*<br/>
*constraint list* è un elenco delimitato da virgole di specifiche di vincolo. Nell'elenco possono essere incluse le interfacce che devono essere implementate dal parametro di tipo.

Inoltre può essere compresa una classe. Affinché l'argomento tipo soddisfi un vincolo della classe base, deve trattarsi di una classe uguale a quella del vincolo o derivare dal vincolo.

È anche possibile specificare **gcnew()** per indicare che l'argomento tipo deve avere un costruttore senza parametri pubblico, **ref class** per indicare che l'argomento tipo deve essere un tipo riferimento, inclusi qualsiasi tipo classe, interfaccia, delegato o matrice, oppure **value class** per indicare che l'argomento tipo deve essere un tipo valore. È possibile specificare qualsiasi tipo di valore eccetto Nullable \<T> .

È inoltre possibile specificare un parametro generico come vincolo. L'argomento tipo fornito per il tipo che si sta vincolando deve corrispondere o derivare dal tipo del vincolo. Ciò viene definito vincolo di tipo naked.

## <a name="remarks"></a>Osservazioni

La clausola di vincolo è costituita da **where** seguita da un parametro di tipo, due punti (**:**) e il vincolo, che specifica la natura della restrizione sul parametro di tipo. **where** è una parola chiave sensibile al contesto. Per altre informazioni, vedere [Parole chiave sensibili al contesto](context-sensitive-keywords-cpp-component-extensions.md). Separare più clausole **where** con uno spazio.

I vincoli vengono applicati ai parametri di tipo per impostare limitazioni per i tipi che possono essere utilizzati come argomenti per un tipo o metodo generico.

Tramite i vincoli di classe e interfaccia viene specificato che i tipi di argomento devono corrispondere o ereditare da una classe specificata o implementare un'interfaccia specificata.

L'applicazione di vincoli a un tipo o metodo generico consente l'utilizzo delle funzionalità note dei tipi vincolati nel codice di quel tipo o metodo. Ad esempio, è possibile dichiarare una classe generica in modo tale che il parametro di tipo implementi l'interfaccia `IComparable<T>`:

```cpp
// generics_constraints_1.cpp
// compile with: /c /clr
using namespace System;
generic <typename T>
where T : IComparable<T>
ref class List {};
```

Per questo vincolo è necessario che un argomento tipo usato per `T` implementi `IComparable<T>` in fase di compilazione. Il vincolo permette anche la chiamata di metodi di interfaccia, come `CompareTo`. Non è necessario alcun cast a un'istanza del parametro di tipo per chiamare i metodi di interfaccia.

I metodi statici nella classe dell'argomento tipo non possono essere chiamati tramite il parametro di tipo, ma soltanto tramite il tipo denominato effettivo.

Un vincolo non può essere un tipo di valore, inclusi i tipi incorporati, ad esempio **`int`** o **`double`** . Poiché ai tipi di valore non possono essere associate classi derivate, solo una classe potrebbe soddisfare il vincolo. In questo caso, il generico può essere riscritto con il parametro di tipo sostituito dal tipo di valore specifico.

I vincoli sono richiesti in alcuni casi poiché il compilatore non consente l'utilizzo di metodi o altre funzionalità di un tipo sconosciuto a meno che i vincoli implichino che il tipo sconosciuto supporti i metodi o le interfacce.

È possibile specificare più vincoli per lo stesso parametro di tipo utilizzando un elenco delimitato da virgole

```cpp
// generics_constraints_2.cpp
// compile with: /c /clr
using namespace System;
using namespace System::Collections::Generic;
generic <typename T>
where T : List<T>, IComparable<T>
ref class List {};
```

Con più parametri di tipo, usare una clausola **where** per ogni parametro di tipo. Ad esempio:

```cpp
// generics_constraints_3.cpp
// compile with: /c /clr
using namespace System;
using namespace System::Collections::Generic;

generic <typename K, typename V>
   where K: IComparable<K>
   where V: IComparable<K>
ref class Dictionary {};
```

Riassumendo, utilizzare vincoli nel codice in base alle regole seguenti:

- Se sono elencati più vincoli, questi possono essere visualizzati in qualsiasi ordine.

- I vincoli possono anche essere tipi di classe, ad esempio classi base astratte. Tuttavia, i vincoli non possono essere tipi di valore o classi sealed.

- I vincoli non possono essere parametri di tipo, ma tramite essi questi ultimi possono essere coinvolti in un tipo costruito aperto. Ad esempio:

    ```cpp
    // generics_constraints_4.cpp
    // compile with: /c /clr
    generic <typename T>
    ref class G1 {};

    generic <typename Type1, typename Type2>
    where Type1 : G1<Type2>   // OK, G1 takes one type parameter
    ref class G2{};
    ```

## <a name="examples"></a>Esempi

Nell'esempio seguente viene illustrato l'utilizzo di vincoli per chiamare metodi di istanza nei parametri di tipo.

```cpp
// generics_constraints_5.cpp
// compile with: /clr
using namespace System;

interface class IAge {
   int Age();
};

ref class MyClass {
public:
   generic <class ItemType> where ItemType : IAge
   bool isSenior(ItemType item) {
      // Because of the constraint,
      // the Age method can be called on ItemType.
      if (item->Age() >= 65)
         return true;
      else
         return false;
   }
};

ref class Senior : IAge {
public:
   virtual int Age() {
      return 70;
   }
};

ref class Adult: IAge {
public:
   virtual int Age() {
      return 30;
   }
};

int main() {
   MyClass^ ageGuess = gcnew MyClass();
   Adult^ parent = gcnew Adult();
   Senior^ grandfather = gcnew Senior();

   if (ageGuess->isSenior<Adult^>(parent))
      Console::WriteLine("\"parent\" is a senior");
   else
      Console::WriteLine("\"parent\" is not a senior");

   if (ageGuess->isSenior<Senior^>(grandfather))
      Console::WriteLine("\"grandfather\" is a senior");
   else
      Console::WriteLine("\"grandfather\" is not a senior");
}
```

```Output
"parent" is not a senior
"grandfather" is a senior
```

Quando un parametro di tipo generico viene utilizzato come vincolo, viene definito vincolo di tipo naked. I vincoli di tipo naked sono utili quando per una funzione membro con il relativo parametro di tipo è necessario vincolare quel parametro al parametro di tipo del tipo contenitore.

Nell'esempio seguente `T` è un vincolo di tipo naked nel contesto del metodo `Add`.

I vincoli di tipo naked possono essere utilizzati anche in definizioni di classi generiche. I vincoli di tipo naked risultano meno utili con le classi generiche poiché tramite il compilatore non è possibile presupporre alcuna informazione su un vincolo di tipo naked, tranne la derivazione da <xref:System.Object>. Utilizzare vincoli di tipo naked per le classi generiche negli scenari in cui si desidera imporre una relazione di ereditarietà tra due parametri di tipo.

```cpp
// generics_constraints_6.cpp
// compile with: /clr /c
generic <class T>
ref struct List {
   generic <class U>
   where U : T
   void Add(List<U> items)  {}
};

generic <class A, class B, class C>
where A : C
ref struct SampleClass {};
```

## <a name="see-also"></a>Vedere anche

[Generics](generics-cpp-component-extensions.md)
