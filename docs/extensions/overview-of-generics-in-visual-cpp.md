---
description: 'Altre informazioni su: Panoramica dei generics in C++/CLI'
title: Panoramica dei generics in C++/CLI
ms.date: 10/12/2018
ms.topic: reference
helpviewer_keywords:
- generics [C++], about generics
- default initializers [C++]
- type parameters [C++]
- constructed types
- type arguments [C++]
- constructed types, open [C++]
- open constructed types [C++]
- constructed types, closed [C++]
ms.assetid: 21f10637-0fce-4916-b925-6c86a126d3aa
ms.openlocfilehash: 4b84d16f7d76824f732865e3bf8b7bbfe674a1bd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97274151"
---
# <a name="overview-of-generics-in-ccli"></a>Panoramica dei generics in C++/CLI

I generics sono tipi con parametri supportati dal Common Language Runtime. Un tipo con parametri viene definito con un parametro di tipo sconosciuto specificato quando viene utilizzato il generico.

## <a name="why-generics"></a>Perché Generics?

C++ supporta i modelli e sia i modelli sia i generics supportano i tipi con parametri per creare classi Collection tipizzate. Tuttavia, tramite i modelli viene fornita la parametrizzazione in fase di compilazione. Non è possibile fare riferimento a un assembly contenente una definizione di modello e creare nuove specializzazioni del modello. Una volta compilato, un modello specializzato è simile a ogni altro modello o classe. Al contrario, i generics vengono creati in MSIL come tipo con parametri noto al runtime; tramite il codice sorgente mediante cui viene fatto riferimento a un assembly contenente un tipo generico possono essere create specializzazioni del tipo generico. Per altre informazioni sul confronto di modelli C++ standard e generics, vedere [Generics e modelli (C++/CLI)](generics-and-templates-visual-cpp.md).

## <a name="generic-functions-and-types"></a>Funzioni e tipi generici

I tipi di classe, essendo tipi gestiti, possono essere generici. Una classe `List` può essere un esempio. Il tipo di un oggetto nell'elenco sarebbe il parametro di tipo. Se era necessaria una classe `List` per molti tipi diversi di oggetti, prima che fossero disponibili i generics era possibile usare un oggetto `List` che accetta `System::Object` come tipo di elemento. Tuttavia, ciò consentirebbe a qualsiasi oggetto (inclusi quelli di tipo errato) di essere utilizzato nell'elenco. Questo elenco sarebbe definito classe Collection non tipizzata. Idealmente, sarebbe possibile controllare il tipo in fase di esecuzione e generare un'eccezione. In alternativa, si sarebbe potuto utilizzare un modello che perderebbe la propria qualità generica una volta compilato in un assembly. Tramite i consumer dell'assembly non era possibile creare le relative specializzazioni del modello. I generics consentono di creare classi di raccolte tipizzate, ad esempio `List<int>` (elenco di int) e `List<double>` (elenco di double) che generano un errore in fase di compilazione se si cerca di inserire nella raccolta tipizzata un tipo che la raccolta non è stata progettata per accettare. Inoltre, questi tipi rimangono generici dopo la relativa compilazione.

Una descrizione della sintassi delle classi generiche è disponibile in [Classi generiche (C++/CLI)](generic-classes-cpp-cli.md). Un nuovo spazio dei nomi, <xref:System.Collections.Generic>, introduce un set di tipi di raccolte con parametri, tra cui <xref:System.Collections.Generic.Dictionary%602>, <xref:System.Collections.Generic.List%601> e <xref:System.Collections.Generic.LinkedList%601>.

Anche le funzioni di istanza e membro delle classi statiche, i delegati e le funzioni globali possono essere generici. Le funzioni generiche possono essere necessarie se i parametri della funzione sono di tipo sconosciuto o se nella funzione stessa devono essere utilizzati tipi generici. In molti casi in cui in passato veniva usato `System::Object` come parametro per un tipo di oggetto sconosciuto, adesso è invece possibile usare un parametro di tipo generico, che consente un codice più indipendente dai tipi. Qualsiasi tentativo di passare un tipo per cui la funzione non è stata progettata viene contrassegnato come un errore in fase di compilazione. Usando `System::Object` come parametro di funzione, il passaggio involontario di un oggetto non previsto da una funzione non viene rilevato ed è necessario eseguire il cast del tipo di oggetto sconosciuto a un tipo specifico nel corpo della funzione, nonché prevedere la possibilità di un evento InvalidCastException. Con un generico, tramite il codice mediante cui viene eseguito il tentativo di passaggio di un oggetto alla funzione verrebbe causato un conflitto di tipo, pertanto è garantito che il tipo del corpo della funzione sia corretto.

Gli stessi vantaggi si applicano alle classi Collection basate sui generics. Le classi di raccolte in passato usavano `System::Object` per archiviare gli elementi di una raccolta. L'inserimento di oggetti di un tipo per cui la raccolta non era stata progettata non veniva contrassegnato in fase di compilazione e, spesso, nemmeno quando gli oggetti venivano inseriti. In genere, quando l'accesso a un oggetto veniva eseguito nella raccolta, l'oggetto veniva sottoposto al cast a un altro tipo. Il tipo imprevisto veniva rilevato solo quando il cast non veniva completato correttamente. Tramite i generics questo problema viene risolto in fase di compilazione rilevando qualsiasi codice mediante cui viene inserito un tipo che non corrisponde (o viene convertito in modo implicito) al parametro di tipo della raccolta generica.

Per una descrizione della sintassi, vedere [Funzioni generiche (C++/CLI)](generic-functions-cpp-cli.md).

## <a name="terminology-used-with-generics"></a>Terminologia utilizzata con i generics

### <a name="type-parameters"></a>Parametri di tipo

Una dichiarazione generica contiene uno o più tipi sconosciuti noti come *parametri di tipo*. Ai parametri di tipo viene associato un nome che rappresenta il tipo disponibile nel corpo della dichiarazione generica. Il parametro di tipo è utilizzato come tipo disponibile nel corpo della dichiarazione generica. La dichiarazione generica per `List<T>` contiene il parametro di tipo T.

### <a name="type-arguments"></a>Argomenti tipo

L'*argomento tipo* è il tipo effettivo usato al posto del parametro di tipo quando l'elemento generico è specializzato per uno o più tipi specifici. Ad esempio, **`int`** è l'argomento di tipo in `List<int>` . I tipi di valore e di handle sono gli unici tipi consentiti come argomento di tipo generico.

### <a name="constructed-type"></a>Tipo costruito

Un tipo costruito da un tipo generico è detto *tipo costruito*. Un tipo non completamente specificato, come `List<T>`, è un *tipo costruito aperto*, mentre un tipo completamente specificato, come `List<double>,`, è un *tipo costruito chiuso* o un *tipo specializzato*. I tipi costruiti aperti possono essere utilizzati nella definizione di altri tipi o metodi generici e non possono essere specificati del tutto finché non viene specificato anche il generico di inclusione. Ad esempio, di seguito è riportato un utilizzo di un tipo costruito aperto come una classe base per un generico:

```cpp
// generics_overview.cpp
// compile with: /clr /c
generic <typename T>

ref class List {};

generic <typename T>

ref class Queue : public List<T> {};
```

### <a name="constraint"></a>Vincolo

Un vincolo è una restrizione relativa ai tipi che possono essere utilizzati come parametro di tipo. Ad esempio, in una classe generica specifica possono essere accettate solo le classi che ereditano da una determinata classe o tramite cui viene implementata un'interfaccia specificata. Per altre informazioni, vedere [Vincoli su parametri di tipo generico (C++/CLI)](constraints-on-generic-type-parameters-cpp-cli.md).

## <a name="reference-types-and-value-types"></a>Tipi di riferimento e tipi di valore

I tipi di handle e i tipi di valore possono essere utilizzati come argomenti tipo. Nella definizione generica, in cui può essere utilizzato qualsiasi tipo, la sintassi è quella dei tipi di riferimento. L'operatore `->`, ad esempio, viene usato per accedere ai membri del tipo per il parametro di tipo indipendentemente dal fatto che il tipo usato sia un tipo riferimento o un tipo valore. Quando un tipo di valore viene utilizzato come argomento di tipo, tramite il runtime viene generato un codice in cui vengono utilizzati direttamente i tipi di valore senza eseguirne il boxing.

Quando si utilizza un tipo di riferimento come argomento di tipo generico, utilizzare la sintassi di handle. Quando si utilizza un tipo di valore come argomento tipo generico, utilizzare direttamente il nome del tipo.

```cpp
// generics_overview_2.cpp
// compile with: /clr
generic <typename T>

ref class GenericType {};
ref class ReferenceType {};

value struct ValueType {};

int main() {
    GenericType<ReferenceType^> x;
    GenericType<ValueType> y;
}
```

## <a name="type-parameters"></a>Parametri di tipo

I parametri di tipo in una classe generica vengono considerati come altri identificatori. Tuttavia, poiché il tipo non è noto, esistono restrizioni al relativo utilizzo. Ad esempio, non è possibile utilizzare i membri e i metodi della classe parametro di tipo a meno che il parametro di tipo non supporti questi membri. In altre parole, per accedere a un membro tramite il parametro di tipo, è necessario aggiungere il tipo contenente il membro nell'elenco di vincoli del parametro di tipo.

```cpp
// generics_overview_3.cpp
// compile with: /clr
interface class I {
   void f1();
   void f2();
};

ref struct R : public I {
   virtual void f1() {}
   virtual void f2() {}
   virtual void f3() {}
};

generic <typename T>
where T : I
void f(T t) {
   t->f1();
   t->f2();
   safe_cast<R^>(t)->f3();
}

int main() {
   f(gcnew R());
}
```

Queste restrizioni si applicano anche agli operatori. In un parametro di tipo generico non vincolato non possono essere utilizzati gli operatori `==` e `!=` per confrontare due istanze del parametro di tipo, nel caso in cui il tipo non supporti questi operatori. Questi controlli sono necessari per i generics, ma non per i modelli, poiché i generics possono essere specializzati in fase di esecuzione con qualsiasi classe che soddisfa i vincoli, quando non è più possibile verificare l'utilizzo di membri non validi.

Un'istanza predefinita del parametro di tipo può essere creata utilizzando l'operatore `()`. Ad esempio:

`T t = T();`

dove `T` è un parametro di tipo in una definizione di classe o metodo generico; la variabile viene inizializzata sul relativo valore predefinito. Se `T` è una classe di riferimento sarà un puntatore Null; se `T` è una classe di valore, l'oggetto viene inizializzato su zero. In questo caso si parla di *inizializzatore predefinito*.

## <a name="see-also"></a>Vedi anche

[Generics](generics-cpp-component-extensions.md)
