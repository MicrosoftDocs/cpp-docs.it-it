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
ms.openlocfilehash: 59f463d103e233a1d9b25da3243a16f67263c815
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62392297"
---
# <a name="copy-constructors-and-copy-assignment-operators-c"></a>Costruttori di copia e operatori di assegnazione di copia (C++)

> [!NOTE]
> A partire da c++11, nel linguaggio sono supportati due tipi di assegnazione: *assegnazione di copia* e *assegnazione di spostamento*. In questo articolo per "assegnazione" si intente assegnazione di copia, se non indicato diversamente in modo esplicito. Per informazioni sull'assegnazione di spostamento, vedere [costruttori di spostamento e operatori di assegnazione di spostamento (C++)](move-constructors-and-move-assignment-operators-cpp.md).
>
> Le operazioni di assegnazione e di inizializzazione comportano entrambe la copia degli oggetti.

- **Assegnazione**: Quando il valore di un oggetto viene assegnato a un altro oggetto, viene copiato il primo oggetto per il secondo oggetto. Quindi,

    ```cpp
    Point a, b;
    ...
    a = b;
    ```

   comporta che il valore di `b` venga copiato in `a`.

- **Inizializzazione**: L'inizializzazione si verifica quando viene dichiarato un nuovo oggetto, quando gli argomenti vengono passati alle funzioni per valore o i valori sono restituiti dalle funzioni per valore.

È possibile definire la semantica di "copia" per gli oggetti di tipo classe. Si consideri, ad esempio, il seguente codice:

```cpp
TextFile a, b;
a.Open( "FILE1.DAT" );
b.Open( "FILE2.DAT" );
b = a;
```

Il codice precedente potrebbe significare "copia il contenuto di FILE1.DAT in FILE2.DAT" o "ignora FILE2.DAT e imposta `b` come secondo handle per FILE1.DAT". È necessario associare la semantica di copia appropriata a ciascuna classe, come illustrato di seguito.

- Usando l'operatore di assegnazione **operatore =** insieme a un riferimento al tipo di classe come tipo restituito e il parametro passato dal **const** riferimento, ad esempio `ClassName& operator=(const ClassName& x);`.

- Utilizzando il costruttore di copia.

Se non si dichiara alcun costruttore di copia, il compilatore genererà automaticamente un costruttore di copia membro per membro.  Se non si dichiara alcun operatore di assegnazione di copia, il compilatore genererà automaticamente un operatore di assegnazione di copia membro per membro. Dichiarando un costruttore di copia, non si elimina l'operatore di assegnazione di copia generato dal compilatore, e viceversa. Se si implementa uno dei due, è consigliabile implementare anche l'altro, in modo che il significato del codice sia chiaro.

Il costruttore di copia accetta un argomento di tipo <em>-nome della classe</em><strong>&</strong>, dove *-nome della classe* è il nome della classe per cui è definito il costruttore. Ad esempio:

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
> Creare il tipo di argomento del costruttore di copia **const** <em>-nome della classe</em> <strong>&</strong> laddove possibile. Ciò impedisce al costruttore di copia di modificare accidentalmente l'oggetto da cui viene copiato. Consente inoltre la copia da **const** oggetti.

## <a name="compiler-generated-copy-constructors"></a>Costruttori di copia generati dal compilatore

Costruttori di copia generato dal compilatore, ad esempio i costruttori di copia definito dall'utente, hanno un singolo argomento di tipo "riferimento a *-nome della classe*." Un'eccezione è quando tutte le classi di base e le classi di membro hanno costruttori di copia dichiarati come accettano un solo argomento di tipo **const** <em>-nome della classe</em><strong>&</strong>. In tal caso, è anche argomento del costruttore di copia generato dal compilatore **const**.

Quando il tipo di argomento al costruttore di copia non è **const**, l'inizializzazione copiando un **const** oggetto genera un errore. Non è vero il contrario: Se l'argomento **const**, copiando un oggetto che non è possibile inizializzare **const**.

Gli operatori di assegnazione generato dal compilatore seguono lo stesso modello in relazione a **const.** Accettano un solo argomento di tipo <em>-nome della classe</em> <strong>&</strong> , a meno che gli operatori di assegnazione in tutte le classi di base e di membro accettino argomenti di tipo **const** <em>-nome della classe</em><strong>&</strong>. In questo caso, la classe generato assegnazione operatore accetta un **const** argomento.

> [!NOTE]
> Quando le classi base virtuali vengono inizializzate dai costruttori di copia, generate dal compilatore o definite dall'utente, vengono inizializzate una sola volta: nel punto in cui vengono costruite.

La implicazioni sono simili a quelle del costruttore di copia. Quando il tipo di argomento non è **const**, assegnazione di un **const** oggetto genera un errore. Non è vero il contrario: Se un **const** valore viene assegnato a un valore che non è **const**, l'assegnazione ha esito positivo.

Per altre informazioni sugli operatori di assegnazione di overload, vedere [assegnazione](../cpp/assignment.md).