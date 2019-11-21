---
title: 'How to: Create and use shared_ptr instances'
ms.custom: how-to
ms.date: 11/19/2019
ms.topic: conceptual
ms.assetid: 7d6ebb73-fa0d-4b0b-a528-bf05de96518e
ms.openlocfilehash: 9820e4cd2d1b981d82760fc1cea4e07c85792177
ms.sourcegitcommit: 654aecaeb5d3e3fe6bc926bafd6d5ace0d20a80e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2019
ms.locfileid: "74245836"
---
# <a name="how-to-create-and-use-shared_ptr-instances"></a>How to: Create and Use shared_ptr instances

Il tipo `shared_ptr` è un puntatore intelligente nella libreria C++ standard progettato per scenari in cui più proprietari potrebbero dover gestire la durata dell'oggetto in memoria. Dopo avere inizializzato un oggetto `shared_ptr`, è possibile copiarlo, passarlo come valore negli argomenti di funzione e assegnarlo ad altre istanze di `shared_ptr`. Tutte le istanze puntano allo stesso oggetto e condividono l'accesso a un "blocco di controllo" che incrementa e decrementa il conteggio dei riferimenti ogni qualvolta un nuovo oggetto `shared_ptr` viene aggiunto, esce dall'ambito o viene reimpostato. Quando il conteggio dei riferimenti arriva a zero, il blocco di controllo elimina la risorsa di memoria e se stesso.

Nella figura che segue vengono mostrate diverse istanze di `shared_ptr` che puntano a una posizione di memoria.

![Shared pointer diagram](media/shared_ptr.png "Shared pointer diagram")

## <a name="example-setup"></a>Configurazione di esempio

Gli esempi seguenti presuppongono che siano stati incluse le intestazioni necessarie e siano stati dichiarati i tipi necessari, come illustrato di seguito:

```cpp
// shared_ptr-examples.cpp
// The following examples assume these declarations:
#include <algorithm>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

struct MediaAsset
{
    virtual ~MediaAsset() = default; // make it polymorphic
};

struct Song : public MediaAsset
{
    std::wstring artist;
    std::wstring title;
    Song(const std::wstring& artist_, const std::wstring& title_) :
        artist{ artist_ }, title{ title_ } {}
};

struct Photo : public MediaAsset
{
    std::wstring date;
    std::wstring location;
    std::wstring subject;
    Photo(
        const std::wstring& date_,
        const std::wstring& location_,
        const std::wstring& subject_) :
        date{ date_ }, location{ location_ }, subject{ subject_ } {}
};

using namespace std;

int main()
{
    // The examples go here, in order:
    // Example 1
    // Example 2
    // Example 3
    // Example 4
    // Example 6
}
```

## <a name="example-1"></a>Esempio 1

Quando possibile, usare la funzione [make_shared](../standard-library/memory-functions.md#make_shared) per creare un elemento `shared_ptr` quando la risorsa di memoria viene creata per la prima volta. `make_shared` è indipendente dalle eccezioni. Usa la stessa chiamata per allocare memoria per un blocco di controllo e la risorsa e pertanto riduce il sovraccarico causato dalla costruzione. Se non si usa `make_shared`, è necessario usare un'espressione `new` esplicita per creare l'oggetto prima di passarlo al costruttore `shared_ptr`. Nell'esempio seguente vengono mostrati vari modi per dichiarare e inizializzare `shared_ptr` con un nuovo oggetto.

[!code-cpp[stl_smart_pointers#1](codesnippet/CPP/how-to-create-and-use-shared-ptr-instances_1.cpp)]

## <a name="example-2"></a>Esempio 2

Nell'esempio che segue viene illustrato come dichiarare e inizializzare istanze di `shared_ptr` che assumono la proprietà condivisa di un oggetto che è già stato allocato da un altro oggetto `shared_ptr`. Si supponga che `sp2` sia un oggetto `shared_ptr` inizializzato.

[!code-cpp[stl_smart_pointers#2](codesnippet/CPP/how-to-create-and-use-shared-ptr-instances_2.cpp)]

## <a name="example-3"></a>Esempio 3:

`shared_ptr` è utile anche nei contenitori della libreria standard C++ quando si usano algoritmi che copiano elementi. È possibile eseguire il wrapping degli elementi in un oggetto `shared_ptr`, quindi copiarlo in altri contenitori, beninteso che la memoria sottostante è valida fino a quando serve e non oltre. Nell'esempio seguente viene illustrato come utilizzare l'algoritmo `remove_copy_if` su delle istanze di `shared_ptr` in un vettore.

[!code-cpp[stl_smart_pointers#4](codesnippet/CPP/how-to-create-and-use-shared-ptr-instances_3.cpp)]

## <a name="example-4"></a>Esempio 4

È possibile utilizzare `dynamic_pointer_cast`, `static_pointer_cast` e `const_pointer_cast` per eseguire il cast di `shared_ptr`. Queste funzioni sono simili agli operatori `dynamic_cast`, `static_cast`, `const_cast`. Di seguito viene illustrato come verificare il tipo derivato di ogni elemento di un vettore di `shared_ptr` delle classi base e successivamente copiare gli elementi e visualizzare informazioni su di essi.

[!code-cpp[stl_smart_pointers#5](codesnippet/CPP/how-to-create-and-use-shared-ptr-instances_4.cpp)]

## <a name="example-5"></a>Esempio 5

È possibile passare `shared_ptr` a un'altra funzione nei modi seguenti:

- Passare `shared_ptr` per valore. Ciò richiama il costruttore di copia, incrementa il conteggio dei riferimenti e rende proprietario il chiamato. Questa operazione comporta un sovraccarico minimo, che può diventare significativo a seconda del numero di oggetti `shared_ptr` che vengono passati. Usare questa opzione quando il contratto di codice implicito o esplicito tra il chiamante e il chiamato richiede che il chiamato sia un proprietario.

- Passare `shared_ptr` per riferimento o per riferimento const. In questo caso il conteggio dei riferimenti non viene incrementato e il chiamato può accedere al puntatore fino a quando il chiamante non esce dal proprio ambito. In alternativa, il chiamato può decidere di creare un oggetto `shared_ptr` basato sul riferimento e diventare un proprietario condiviso. Utilizzare questa opzione quando il chiamante non possiede alcuna informazione del chiamato o quando è necessario passare `shared_ptr` e si desidera evitare l'operazione di copia per motivi di prestazioni.

- Passare il puntatore sottostante o un riferimento all'oggetto sottostante. Questo consente al chiamato di usare l'oggetto, ma non di condividere la proprietà o di estendere la durata. Se il chiamato crea un oggetto `shared_ptr` da un puntatore non elaborato, il nuovo oggetto `shared_ptr` è indipendente dall'originale e non controlla la risorsa sottostante. Utilizzare questa opzione quando il contratto tra il chiamante e il chiamato specifica chiaramente che il chiamante mantiene la proprietà del ciclo di vita di `shared_ptr`.

- Quando si decide come passare un oggetto `shared_ptr`, determinare se il chiamato deve condividere la proprietà della risorsa sottostante. "Un proprietario" è un oggetto o una funzione che può mantenere la risorsa sottostante attiva fino a quando ne ha bisogno. Se il chiamante deve garantire che il chiamato può prolungare il ciclo di vita del puntatore oltre la durata della propria funzione, utilizzare la prima opzione. Se non è necessario che il chiamato estenda il ciclo di vita, allora passare per riferimento e consentire al chiamato di copiarlo o meno.

- Se è necessario fornire un accesso a una funzione di supporto al puntatore sottostante e si sa che la funzione di supporto userà semplicemente il puntatore e restituirà il risultato prima che la funzione chiamante restituisca il risultato, tale funzione non dovrà condividere la proprietà del puntatore sottostante. Deve semplicemente accedere al puntatore entro il ciclo di vita dell'oggetto `shared_ptr` del chiamante. In questo caso, è possibile passare `shared_ptr` in base al riferimento oppure passare il puntatore non elaborato o un riferimento all'oggetto sottostante. Il passaggio di questo metodo offre un leggero miglioramento delle prestazioni e può inoltre aiutare a definire il proprio intento di programmazione.

- Talvolta, ad esempio in un `std::vector<shared_ptr<T>>`, è necessario passare ogni `shared_ptr` a un corpo di espressione lambda o a un oggetto funzione denominata. Se l'espressione lambda o la funzione non memorizza il puntatore, passare `shared_ptr` in base al riferimento per evitare di chiamare il costruttore di copia per ogni elemento.

## <a name="example-6"></a>Esempio 6

Nell'esempio riportato di seguito viene illustrato come `shared_ptr` esegue l'overload di alcuni operatori di confronto per abilitare i confronti del puntatore sulla memoria che è posseduta dalle istanze di `shared_ptr`.

[!code-cpp[stl_smart_pointers#3](codesnippet/CPP/how-to-create-and-use-shared-ptr-instances_6.cpp)]

## <a name="see-also"></a>Vedere anche

[Puntatori intelligenti (C++ moderno)](smart-pointers-modern-cpp.md)
