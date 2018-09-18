---
title: 'Procedura: creare e utilizzare istanze shared_ptr | Microsoft Docs'
ms.custom: how-to
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 7d6ebb73-fa0d-4b0b-a528-bf05de96518e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 168569ba04b0b2599f951982dede90468f936347
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46056794"
---
# <a name="how-to-create-and-use-sharedptr-instances"></a>Procedura: creare e utilizzare istanze shared_ptr

Il tipo `shared_ptr` è un puntatore intelligente nella libreria C++ standard progettato per scenari in cui più proprietari potrebbero dover gestire la durata dell'oggetto in memoria. Dopo avere inizializzato un oggetto `shared_ptr`, è possibile copiarlo, passarlo come valore negli argomenti di funzione e assegnarlo ad altre istanze di `shared_ptr`. Tutte le istanze puntano allo stesso oggetto e condividono l'accesso a un "blocco di controllo" che incrementa e decrementa il conteggio dei riferimenti ogni qualvolta un nuovo oggetto `shared_ptr` viene aggiunto, esce dall'ambito o viene reimpostato. Quando il conteggio dei riferimenti arriva a zero, il blocco di controllo elimina la risorsa di memoria e se stesso.

Nella figura che segue vengono mostrate diverse istanze di `shared_ptr` che puntano a una posizione di memoria.

[![Puntatore condiviso](../cpp/media/shared_ptr.png "shared_ptr")]

## <a name="example"></a>Esempio

Se possibile, usare il [make_shared](../standard-library/memory-functions.md#make_shared) funzione per creare un `shared_ptr` quando viene creata la risorsa di memoria per la prima volta. `make_shared` è indipendente dalle eccezioni. Utilizza la stessa chiamata per allocare memoria per un blocco di controllo e la risorsa e quindi riduce l'overhead della costruzione. Se non si utilizza `make_shared`, è necessario utilizzare una nuova espressione esplicita per creare l'oggetto prima di passarlo al costruttore `shared_ptr`. Nell'esempio seguente vengono mostrati vari modi per dichiarare e inizializzare `shared_ptr` con un nuovo oggetto.

[!code-cpp[stl_smart_pointers#1](../cpp/codesnippet/CPP/how-to-create-and-use-shared-ptr-instances_1.cpp)]

## <a name="example"></a>Esempio

Nell'esempio che segue viene illustrato come dichiarare e inizializzare istanze di `shared_ptr` che assumono la proprietà condivisa di un oggetto che è già stato allocato da un altro oggetto `shared_ptr`. Si supponga che `sp2` sia un oggetto `shared_ptr` inizializzato.

[!code-cpp[stl_smart_pointers#2](../cpp/codesnippet/CPP/how-to-create-and-use-shared-ptr-instances_2.cpp)]

## <a name="example"></a>Esempio

`shared_ptr` è anche utile per i contenitori della libreria Standard C++ quando si utilizzano algoritmi che copiano elementi. È possibile eseguire il wrapping degli elementi in un oggetto `shared_ptr`, quindi copiarlo in altri contenitori, beninteso che la memoria sottostante è valida fino a quando serve e non oltre. Nell'esempio seguente viene illustrato come utilizzare l'algoritmo `replace_copy_if` su delle istanze di `shared_ptr` in un vettore.

[!code-cpp[stl_smart_pointers#4](../cpp/codesnippet/CPP/how-to-create-and-use-shared-ptr-instances_3.cpp)]

## <a name="example"></a>Esempio

È possibile utilizzare `dynamic_pointer_cast`, `static_pointer_cast` e `const_pointer_cast` per eseguire il cast di `shared_ptr`. Queste funzioni sono simili agli operatori `dynamic_cast`, `static_cast`, `const_cast`. Di seguito viene illustrato come verificare il tipo derivato di ogni elemento di un vettore di `shared_ptr` delle classi base e successivamente copiare gli elementi e visualizzare informazioni su di essi.

[!code-cpp[stl_smart_pointers#5](../cpp/codesnippet/CPP/how-to-create-and-use-shared-ptr-instances_4.cpp)]

## <a name="example"></a>Esempio

È possibile passare `shared_ptr` a un'altra funzione nei modi seguenti:

- Passare `shared_ptr` per valore. Ciò richiama il costruttore di copia, incrementa il conteggio dei riferimenti e rende proprietario il chiamato. Esiste un sovraccarico minimo in questa operazione, che può essere significativo a seconda del numero di oggetti `shared_ptr` che si sta passando. Utilizzare questa opzione quando il contratto (implicito o esplicito) tra il chiamante e il chiamato richiede che il chiamato sia un proprietario.

- Passare `shared_ptr` per riferimento o per riferimento const. In questo caso, il conteggio dei riferimenti non viene incrementato e il chiamato può accedere al puntatore fino a quando il chiamante non esce dal proprio ambito. In alternativa, il chiamato può decidere di creare un oggetto `shared_ptr` basato sul riferimento e di conseguenza diventare un proprietario condiviso. Utilizzare questa opzione quando il chiamante non possiede alcuna informazione del chiamato o quando è necessario passare `shared_ptr` e si desidera evitare l'operazione di copia per motivi di prestazioni.

- Passare il puntatore sottostante o un riferimento all'oggetto sottostante. Ciò consente al chiamato di utilizzare l'oggetto, ma non consente di condividere la proprietà o di estendere la durata. Se il chiamato crea un oggetto `shared_ptr` da un puntatore non elaborato, il nuovo oggetto `shared_ptr` è indipendente dall'originale e non controlla la risorsa sottostante. Utilizzare questa opzione quando il contratto tra il chiamante e il chiamato specifica chiaramente che il chiamante mantiene la proprietà del ciclo di vita di `shared_ptr`.

- Mentre si decide come passare un oggetto `shared_ptr`, determinare se il chiamato deve condividere la proprietà della risorsa sottostante. "Un proprietario" è un oggetto o una funzione che può mantenere la risorsa sottostante attiva fino a quando ne ha bisogno. Se il chiamante deve garantire che il chiamato può prolungare il ciclo di vita del puntatore oltre la durata della propria funzione, utilizzare la prima opzione. Se non è necessario che il chiamato estenda il ciclo di vita, allora passare per riferimento e consentire al chiamato di copiarlo o meno.

- Se è necessario fornire un accesso a una funzione di supporto al puntatore sottostante e si sa che la funzione di supporto utilizzerà semplicemente il puntatore e restituirà il risultato prima che la funzione chiamante restituisca il risultato, tale funzione non dovrà condividere la proprietà del puntatore sottostante. Deve semplicemente accedere al puntatore entro il ciclo di vita dell'oggetto `shared_ptr` del chiamante. In questo caso, è possibile passare `shared_ptr` per riferimento oppure passare il puntatore non elaborato o un riferimento all'oggetto sottostante. Il passaggio di questo metodo offre un leggero miglioramento delle prestazioni e può inoltre aiutare a definire il proprio intento di programmazione.

- Talvolta, ad esempio in un `std:vector<shared_ptr<T>>`, è necessario passare ogni `shared_ptr` a un corpo di espressione lambda o a un oggetto funzione denominata. Se l'espressione lambda o la funzione non memorizza il puntatore, passare `shared_ptr` con riferimento per evitare di richiamare il costruttore di copia per ogni elemento.

## <a name="example"></a>Esempio

Nell'esempio riportato di seguito viene illustrato come `shared_ptr` esegue l'overload di alcuni operatori di confronto per abilitare i confronti del puntatore sulla memoria che è posseduta dalle istanze di `shared_ptr`.

[!code-cpp[stl_smart_pointers#3](../cpp/codesnippet/CPP/how-to-create-and-use-shared-ptr-instances_6.cpp)]

## <a name="see-also"></a>Vedere anche

[Puntatori intelligenti](../cpp/smart-pointers-modern-cpp.md)