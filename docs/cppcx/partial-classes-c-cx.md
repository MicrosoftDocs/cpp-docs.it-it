---
title: Classi parziali (C++/CX)
description: Come dichiarare e usare classi parziali in C++/CX.
ms.date: 12/30/2016
ms.assetid: 69d93575-636c-4564-8cca-6dfba0c7e328
ms.openlocfilehash: 70225069c948a50b38ac3642113cf940c86cf8da
ms.sourcegitcommit: 0df2b7ab4e81284c5248e4584767591dcc1950c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/09/2020
ms.locfileid: "89609065"
---
# <a name="partial-classes-ccx"></a>Classi parziali (C++/CX)

Una classe parziale è un costrutto che supporta scenari in cui tu effettui la modifica di una parte di una definizione di classe e il software che genera codice automaticamente, ad esempio la finestra di progettazione XAML, modifica il codice nella stessa classe. Utilizzando una classe parziale, puoi impedire alla finestra di progettazione di sovrascrivere il tuo codice. In un progetto di Visual Studio, il **`partial`** modificatore viene applicato automaticamente al file generato.

## <a name="syntax"></a>Sintassi

Per definire una classe parziale, usare la **`partial`** parola chiave immediatamente prima della chiave di classe di che altrimenti sarebbe una definizione di classe normale. Una parola chiave, ad esempio, **`partial ref class`** è una parola chiave contestuale che contiene spazi vuoti. Le definizioni parziali sono supportate nei seguenti costrutti.

- **`class`** o **`struct`**

- **`ref class`** o **`ref struct`**

- **`value class`** o **`value struct`**

- **`enum`** o **`enum class`**

- **`ref interface`**, **`interface class`** , **`interface struct`** o **`__interface`**

- **`union`**

In questo esempio viene illustrata un'operazione parziale **`ref class`** :

[!code-cpp[cx_partial#01](../cppcx/codesnippet/CPP/partialclassexample/class1.h#01)]

## <a name="contents"></a>Contenuto

Una definizione di classe parziale può contenere qualsiasi elemento che la definizione di classe completa può contenere se la **`partial`** parola chiave è stata omessa. Ciò significa che, con un'unica eccezione, una definizione di classe parziale può includere qualsiasi costrutto valido come le classi di base, i membri dati, le funzioni membro, le enumerazioni, le dichiarazioni Friend e gli attributi. Sono inoltre consentite le definizioni inline dei membri dati statici.

L'unica eccezione è l'accessibilità della classe. Ad esempio, l'istruzione `public partial class MyInvalidClass {/* ... */};` non è corretta. Gli identificatori di accesso utilizzati in una definizione di classe parziale per MyInvalidClass non influiscono sull'accessibilità predefinita in una successiva definizione di classe parziale o completa per MyInvalidClass.

Nel frammento di codice riportato di seguito viene illustrata l'impostazione dell'accessibilità. Nella prima classe parziale, `Method1` è pubblico perché la relativa accessibilità è pubblica. Nella seconda classe parziale, `Method2` è privato perché l'accessibilità della classe predefinita è privata.

[!code-cpp[cx_partial#02](../cppcx/codesnippet/CPP/partialclassexample/class1.h#02)]

## <a name="declaration"></a>Dichiarazione

Una definizione parziale di una classe, ad esempio, `MyClass` è solo una dichiarazione di MyClass. Ovvero introduce solo il nome `MyClass` . `MyClass` non può essere utilizzato in modo che richieda una definizione di classe, ad esempio, conoscendo la dimensione di `MyClass` o utilizzando una base o un membro di `MyClass` . `MyClass` viene considerato definito solo quando il compilatore rileva una definizione non parziale di `MyClass` .

Nell'esempio seguente viene illustrato il comportamento dichiarativo di una classe parziale. Dopo la #1 di dichiarazione, `MyClass` può essere usato come se fosse scritto come dichiarazione con il nome `ref class MyClass;` . La dichiarazione n.2 equivale alla dichiarazione n.1. La dichiarazione n.3 è valida perché è una dichiarazione con prototipo per una classe. La dichiarazione n.4 non è valida perché

`MyClass` non è completamente definita.

La dichiarazione #5 non usa la **`partial`** parola chiave e la dichiarazione definisce completamente `MyClass` . Pertanto, la dichiarazione #6 è valida.

[!code-cpp[Cx_partial#03](../cppcx/codesnippet/CPP/partialclassexample/class1.h#03)]

## <a name="number-and-ordering"></a>Numero e ordine

Per ogni definizione completa di una classe possono esservi zero o più definizioni di classe parziali.

Ogni definizione di classe parziale di una classe deve precedere in modo lessicale la definizione completa di tale classe, ma non deve precedere le dichiarazioni con la classe. Se non è presente alcuna definizione completa della classe, le dichiarazioni di classe parziali possono solo essere dichiarazioni con prototipo.

Tutte le chiavi di classe, ad esempio **`class`** e, **`struct`** devono corrispondere. Ad esempio, non è corretto scrivere il codice `partial class X {}; struct X {};`.

Nell'esempio seguente vengono illustrati il numero e l'ordine. L'ultima dichiarazione parziale ha esito negativo perché la classe è già definita.

[!code-cpp[cx_partial#04](../cppcx/codesnippet/CPP/partialclassexample/class1.h#04)]

## <a name="full-definition"></a>Definizione completa

Nel punto della definizione completa della classe X, si ha lo stesso comportamento come se nella definizione di X fossero dichiarati tutte le classi di base, i membri e così via, nell'ordine in cui sono stati rilevati e definiti nelle classi parziali. Il contenuto delle classi parziali viene considerato come se fosse scritto nel punto della definizione completa della classe e la ricerca del nome e altre regole del linguaggio vengono applicate nel punto della definizione completa della classe come se il contenuto delle classi parziali fosse stato scritto sul posto.

I due esempi di codice seguenti hanno significato e risultati identici. A differenza del secondo esempio, nel primo esempio viene utilizzata una classe parziale.

[!code-cpp[cx_partial#05](../cppcx/codesnippet/CPP/partialclassexample/class1.h#05)]

[!code-cpp[cx_partial#06](../cppcx/codesnippet/CPP/partialclassexample/class1.h#06)]

## <a name="templates"></a>Modelli

Una classe parziale non può essere un modello.

## <a name="restrictions"></a>Restrizioni

Una classe parziale non può estendersi oltre un'unità di conversione.

La **`partial`** parola chiave è supportata solo in combinazione con la parola chiave **`ref class`** o la parola **`value class`** chiave.

### <a name="examples"></a>Esempio

Nell'esempio seguente la definizione della classe `Address` si estende a due file di codice. Il file `Address.details.h` viene modificato dalla finestra di progettazione e tu devi modificare `Address.h`. Solo la definizione della classe nel primo file usa la **`partial`** parola chiave.

[!code-cpp[cx_partial#07](../cppcx/codesnippet/CPP/partialclassexample/address.details.h#07)]

[!code-cpp[cx_partial#09](../cppcx/codesnippet/CPP/partialclassexample/address.h#09)]

## <a name="see-also"></a>Vedi anche

[Sistema di tipi](../cppcx/type-system-c-cx.md)<br/>
[Riferimenti per il linguaggio C++/CX](../cppcx/visual-c-language-reference-c-cx.md)<br/>
[Riferimenti agli spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)
