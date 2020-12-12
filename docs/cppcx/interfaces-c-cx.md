---
description: 'Altre informazioni su: interfacce (C++/CX)'
title: Interfacce (C++/CX)
ms.date: 01/22/2017
ms.assetid: 11034314-d54a-426d-923b-5ab7a6b9f8ce
ms.openlocfilehash: 590b1b80ada186f90bfd38ed9dcdc8a35c34020f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97320933"
---
# <a name="interfaces-ccx"></a>Interfacce (C++/CX)

Sebbene possa ereditare solo da una classe base concreta, una classe di riferimento può implementare qualsiasi numero di classi di interfaccia. Una classe di interfaccia (o struct di interfaccia) può ereditare (o richiedere) più classi di interfaccia, eseguire l'overload delle relative funzioni membro e avere parametri di tipo.

## <a name="characteristics"></a>Caratteristiche

Ecco le caratteristiche di un'interfaccia:

- Una classe (o uno struct) di interfaccia può essere dichiarata in uno spazio dei nomi e avere accessibilità pubblica o privata. Solo le interfacce pubbliche vengono emesse nei metadati.

- I membri di un'interfaccia possono includere proprietà, metodi ed eventi.

- Tutti i membri di interfaccia sono implicitamente pubblici e virtuali.

- Non sono consentiti campi e membri statici.

- I tipi utilizzati come proprietà, parametri di metodo o valori restituiti possono essere solo tipi di Windows Runtime; sono inclusi i tipi fondamentali e i tipi di classe Enum.

## <a name="declaration-and-usage"></a>Dichiarazione e utilizzo

Nell'esempio riportato di seguito viene illustrato come dichiarare un'interfaccia. Nota che un'interfaccia può essere dichiarata come tipo di classe o come tipo di struct.

[!code-cpp[cx_interfaces#01](../cppcx/codesnippet/CPP/interfacestest/class1.h#01)]

Per implementare un'interfaccia, una classe o uno struct di riferimento dichiara e implementa proprietà e metodi virtuali. L'interfaccia e la classe di riferimento di implementazione devono utilizzare gli stessi nomi di parametro del metodo, come illustrato nel seguente esempio:

[!code-cpp[cx_interfaces#02](../cppcx/codesnippet/CPP/interfacestest/class1.h#02)]

## <a name="interface-inheritance-hierarchies"></a>Gerarchie di ereditarietà dell'interfaccia

Un'interfaccia può ereditare da una o più interfacce. A differenza di una classe o di uno struct di riferimento, in un'interfaccia non vengono dichiarati i membri di interfaccia ereditati. Se l'interfaccia B eredita dall'interfaccia A e la classe di riferimento C eredita da B, C deve implementare sia A sia B, come mostrato nell'esempio seguente.

[!code-cpp[cx_interfaces#03](../cppcx/codesnippet/CPP/interfacestest/class1.h#03)]

## <a name="implementing-interface-properties-and-events"></a>Implementazione di proprietà ed eventi di interfaccia

Come illustrato nell'esempio precedente, puoi utilizzare proprietà virtuali semplici per implementare le proprietà dell'interfaccia e puoi fornire metodi Get e Set personalizzati nella classe dell'implementazione.  Entrambi i metodi Get e Set devono essere pubblici in una proprietà dell'interfaccia.

[!code-cpp[cx_interfaces#04](../cppcx/codesnippet/CPP/interfacestest/class1.h#04)]

Se un'interfaccia dichiara una proprietà solo Get o solo Set, la classe di implementazione deve fornire esplicitamente un metodo Get o Set.

[!code-cpp[cx_interfaces#05](../cppcx/codesnippet/CPP/interfacestest/class1.h#05)]

Puoi anche implementare metodi Add e Remove personalizzati per degli eventi nella classe di implementazione.

## <a name="explicit-interface-implementation"></a>implementazione esplicita dell'interfaccia

Quando una classe di riferimento implementa più interfacce e queste ultime hanno metodi i cui nomi e le cui firme sono identici a quelli del compilatore, puoi utilizzare la sintassi riportata di seguito per indicare in modo esplicito il metodo di interfaccia di cui il metodo della classe esegue l'implementazione.

[!code-cpp[cx_interfaces#06](../cppcx/codesnippet/CPP/interfacestest/class1.h#06)]

## <a name="generic-interfaces"></a>Interfacce generiche

In C++/CX, la **`generic`** parola chiave viene usata per rappresentare un Windows Runtime tipo con parametri. Un tipo con parametri viene emesso nei metadati e può essere utilizzato da codice scritto in qualsiasi linguaggio che supporta i parametri di tipo. Il Windows Runtime definisce alcune interfacce generiche, ad esempio [Windows:: Foundation:: Collections:: \<T> IVector](/uwp/api/windows.foundation.collections.ivector-1), ma non supporta la creazione di interfacce generiche definite dall'utente pubbliche in C++/CX. Tuttavia, è possibile creare interfacce generiche private.

Ecco come è possibile usare i tipi di Windows Runtime per creare un'interfaccia generica:

- Un oggetto generico definito dall'utente **`interface class`** in un componente non può essere emesso nel relativo file di metadati Windows, pertanto non può avere accessibilità pubblica e il codice client in altri file con estensione WinMD non può implementarlo. Può essere implementata da classi di riferimento non pubbliche nello stesso componente. Una classe di riferimento pubblica può avere un tipo di interfaccia generico come membro privato.

   Il frammento di codice seguente illustra come dichiarare un oggetto generico **`interface class`** e quindi implementarlo in una classe di riferimento privata e usare la classe ref come membro privato in una classe di riferimento pubblica.

   [!code-cpp[cx_interfaces#07](../cppcx/codesnippet/CPP/interfacestest/class1.h#07)]

- Un'interfaccia generica deve rispettare le regole di interfaccia standard che regolano l'accessibilità, i membri, le relazioni *obbligatorie* , le classi di base e così via.

- Un'interfaccia generica può assumere uno o più parametri di tipo generico che sono preceduti da **`typename`** o da **`class`** . Non sono supportati i parametri non di tipo.

- Un parametro di tipo può essere qualsiasi tipo di Windows Runtime. Ciò significa che il parametro di tipo può essere un tipo di riferimento, un tipo di valore, una classe di interfaccia, un delegato, un tipo fondamentale o una classe enum pubblica.

- Un' *interfaccia generica chiusa* è un'interfaccia che eredita da un'interfaccia generica e specifica gli argomenti di tipo concreti per tutti i parametri di tipo. Può essere utilizzata in tutti i casi in cui è consentito l'uso di un'interfaccia privata non generica.

- Un' *interfaccia generica aperta* è un'interfaccia con uno o più parametri di tipo per i quali non è stato fornito ancora un tipo concreto. Può essere utilizzata ovunque sia consentito l'uso di un tipo e quindi anche come argomento di tipo di un'altra interfaccia generica.

- È possibile parametrizzare solo l'intera interfaccia, non i singoli metodi.

- I parametri di tipo non possono essere vincolati.

- Un'interfaccia generica chiusa dispone di un UUID generato in modo implicito. Un utente non può specificare l'UUID.

- Nell'interfaccia, si presuppone che qualsiasi riferimento all'interfaccia corrente, in un parametro di metodo, un valore restituito o una proprietà, faccia riferimento all'istanza corrente. Ad esempio, *IMyIntf* indica *IMyIntf \<T>*.

- Quando il tipo di un parametro di metodo è un parametro di tipo, la dichiarazione di tale parametro o variabile contiene il nome del parametro di tipo senza dichiaratori di puntatore, riferimento nativo o handle. In altre parole, non si scrive mai "T^".

- Le classi di riferimento basate su modelli devono essere private, Possono implementare interfacce generiche e passare il parametro di modello *t* all'argomento generico *t*. Ogni creazione di istanza di una classe di riferimento basata su modelli è a sua volta una classe di riferimento.

## <a name="see-also"></a>Vedi anche

[Sistema di tipi](../cppcx/type-system-c-cx.md)<br/>
[Riferimenti per il linguaggio C++/CX](../cppcx/visual-c-language-reference-c-cx.md)<br/>
[Riferimenti agli spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)
