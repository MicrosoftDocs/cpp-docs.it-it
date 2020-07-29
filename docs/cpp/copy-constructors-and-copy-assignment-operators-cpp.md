---
title: Costruttori di copia e operatori di assegnazione di copia (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- = operator [C++], copying objects
- assignment statements [C++], copying objects
- assignment operators [C++], for copying objects
- objects [C++], copying
- initializing objects, by copying objects
- copying objects
- assigning values to copy objects
ms.assetid: a94fe1f9-0289-4fb9-8633-77c654002c0d
ms.openlocfilehash: faf1a94e27f5a0a435d0a906661444f67709628e
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87221796"
---
# <a name="copy-constructors-and-copy-assignment-operators-c"></a>Costruttori di copia e operatori di assegnazione di copia (C++)

> [!NOTE]
> A partire da C++ 11, sono supportati due tipi di assegnazione nel linguaggio: assegnazione di *copia* e *assegnazione di spostamento*. In questo articolo per "assegnazione" si intente assegnazione di copia, se non indicato diversamente in modo esplicito. Per informazioni sull'assegnazione di spostamento, vedere [costruttori di spostamento e operatori di assegnazione di spostamento (C++)](move-constructors-and-move-assignment-operators-cpp.md).
>
> Le operazioni di assegnazione e di inizializzazione comportano entrambe la copia degli oggetti.

- **Assegnazione**: quando il valore di un oggetto viene assegnato a un altro oggetto, il primo oggetto viene copiato nel secondo oggetto. Quindi,

    ```cpp
    Point a, b;
    ...
    a = b;
    ```

   comporta che il valore di `b` venga copiato in `a`.

- **Inizializzazione**: l'inizializzazione si verifica quando viene dichiarato un nuovo oggetto, quando gli argomenti vengono passati alle funzioni per valore o quando i valori vengono restituiti dalle funzioni per valore.

È possibile definire la semantica di "copia" per gli oggetti di tipo classe. Si consideri ad esempio questo codice:

```cpp
TextFile a, b;
a.Open( "FILE1.DAT" );
b.Open( "FILE2.DAT" );
b = a;
```

Il codice precedente potrebbe significare "copia il contenuto di FILE1.DAT in FILE2.DAT" o "ignora FILE2.DAT e imposta `b` come secondo handle per FILE1.DAT". È necessario associare la semantica di copia appropriata a ciascuna classe, come illustrato di seguito.

- Utilizzando l'operatore di assegnazione **operator =** insieme a un riferimento al tipo di classe come tipo restituito e il parametro passato per **`const`** riferimento, ad esempio `ClassName& operator=(const ClassName& x);` .

- Utilizzando il costruttore di copia.

Se non si dichiara alcun costruttore di copia, il compilatore genererà automaticamente un costruttore di copia membro per membro.  Se non si dichiara alcun operatore di assegnazione di copia, il compilatore genererà automaticamente un operatore di assegnazione di copia membro per membro. Dichiarando un costruttore di copia, non si elimina l'operatore di assegnazione di copia generato dal compilatore, e viceversa. Se si implementa uno dei due, è consigliabile implementare anche l'altro, in modo che il significato del codice sia chiaro.

Il costruttore di copia accetta un argomento di tipo <em>Class-Name</em> <strong>&</strong> , dove *Class-Name* è il nome della classe per cui è definito il costruttore. Ad esempio:

```cpp
// spec1_copying_class_objects.cpp
class Window
{
public:
    Window( const Window& ); // Declare copy constructor.
    // ...
};

int main()
{
}
```

> [!NOTE]
> Rendere il tipo della classe di argomento del costruttore di copia **`const`** <em>,</em> <strong>&</strong> quando possibile. Ciò impedisce al costruttore di copia di modificare accidentalmente l'oggetto da cui viene copiato. Consente inoltre la copia da **`const`** oggetti.

## <a name="compiler-generated-copy-constructors"></a>Costruttori di copia generati dal compilatore

I costruttori di copia generati dal compilatore, ad esempio i costruttori di copia definiti dall'utente, hanno un solo argomento di tipo "riferimento a *Class-Name*". Un'eccezione si verifica quando tutte le classi base e le classi membro hanno costruttori di copia dichiarati come accettando un solo argomento di tipo **`const`** <em>Class-Name</em> <strong>&</strong> . In tal caso, anche l'argomento del costruttore di copia generato dal compilatore è **`const`** .

Quando il tipo di argomento per il costruttore di copia non è **`const`** , l'inizializzazione copiando un **`const`** oggetto genera un errore. Il contrario non è vero: se l'argomento è **`const`** , è possibile inizializzare copiando un oggetto che non lo è **`const`** .

Gli operatori di assegnazione generati dal compilatore seguono lo stesso modello rispetto a **const.** Accettano un solo argomento di tipo <em>Class-Name,</em> <strong>&</strong> a meno che gli operatori di assegnazione in tutte le classi base e membro accettano argomenti di tipo **`const`** <em>Class-Name</em> <strong>&</strong> . In questo caso, l'operatore di assegnazione generato dalla classe accetta un **`const`** argomento.

> [!NOTE]
> Quando le classi base virtuali vengono inizializzate dai costruttori di copia, generate dal compilatore o definite dall'utente, vengono inizializzate una sola volta: nel punto in cui vengono costruite.

La implicazioni sono simili a quelle del costruttore di copia. Quando il tipo di argomento non è **`const`** , l'assegnazione da un **`const`** oggetto genera un errore. Il contrario non è vero: se un **`const`** valore viene assegnato a un valore che non **`const`** lo è, l'assegnazione ha esito positivo.

Per ulteriori informazioni sugli operatori di assegnazione di overload, vedere [assegnazione](../cpp/assignment.md).
