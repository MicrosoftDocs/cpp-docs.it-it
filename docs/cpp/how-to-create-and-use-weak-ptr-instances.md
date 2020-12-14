---
description: 'Altre informazioni su: procedura: creare e usare istanze di weak_ptr'
title: 'Procedura: Creare e usare istanze weak_ptr'
ms.custom: how-to
ms.date: 11/19/2019
ms.topic: conceptual
ms.assetid: 8dd6909b-b070-4afa-9696-f2fc94579c65
ms.openlocfilehash: c1a68d8027e29cced7fb1a767d5a986ab0677ec8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97221241"
---
# <a name="how-to-create-and-use-weak_ptr-instances"></a>Procedura: Creare e usare istanze weak_ptr

A volte un oggetto deve archiviare un modo per accedere all'oggetto sottostante di un [shared_ptr](../standard-library/shared-ptr-class.md) senza causare l'incremento del conteggio dei riferimenti. In genere, questa situazione si verifica quando sono presenti riferimenti ciclici tra le `shared_ptr` istanze.

Il progetto migliore è evitare la proprietà condivisa dei puntatori ogni volta che è possibile. Tuttavia, se è necessario avere la proprietà condivisa delle `shared_ptr` istanze, evitare i riferimenti ciclici tra di essi. Quando i riferimenti ciclici sono inevitabili o anche preferibili per qualche motivo, usare [weak_ptr](../standard-library/weak-ptr-class.md) per assegnare a uno o più proprietari un riferimento debole a un altro `shared_ptr` . Utilizzando un è `weak_ptr` possibile creare un oggetto `shared_ptr` che si unisce a un set di istanze correlate esistente, ma solo se la risorsa di memoria sottostante è ancora valida. Un oggetto `weak_ptr` stesso non partecipa al conteggio dei riferimenti e pertanto non può impedire il conteggio dei riferimenti da zero. Tuttavia, è possibile utilizzare un oggetto `weak_ptr` per tentare di ottenere una nuova copia di `shared_ptr` con cui è stata inizializzata. Se la memoria è già stata eliminata, l' `weak_ptr` operatore bool di restituisce **`false`** . Se la memoria è ancora valida, il nuovo puntatore condiviso incrementa il conteggio dei riferimenti e garantisce che la memoria sia valida fino a quando la `shared_ptr` variabile rimane nell'ambito.

## <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene illustrato un caso `weak_ptr` in cui viene utilizzato per garantire la corretta eliminazione di oggetti con dipendenze circolari. Quando si esamina l'esempio, si supponga che sia stato creato solo dopo che sono state prese in considerazione soluzioni alternative. Gli `Controller` oggetti rappresentano un aspetto di un processo del computer e operano in modo indipendente. Ogni controller deve essere in grado di eseguire query sullo stato degli altri controller in qualsiasi momento e ognuno di essi contiene un privato a `vector<weak_ptr<Controller>>` questo scopo. Ogni vettore contiene un riferimento circolare e pertanto `weak_ptr` vengono usate le istanze anziché `shared_ptr` .

[!code-cpp[stl_smart_pointers#222](../cpp/codesnippet/CPP/how-to-create-and-use-weak-ptr-instances_1.cpp)]

```Output
Creating Controller0
Creating Controller1
Creating Controller2
Creating Controller3
Creating Controller4
push_back to v[0]: 1
push_back to v[0]: 2
push_back to v[0]: 3
push_back to v[0]: 4
push_back to v[1]: 0
push_back to v[1]: 2
push_back to v[1]: 3
push_back to v[1]: 4
push_back to v[2]: 0
push_back to v[2]: 1
push_back to v[2]: 3
push_back to v[2]: 4
push_back to v[3]: 0
push_back to v[3]: 1
push_back to v[3]: 2
push_back to v[3]: 4
push_back to v[4]: 0
push_back to v[4]: 1
push_back to v[4]: 2
push_back to v[4]: 3
use_count = 1
Status of 1 = On
Status of 2 = On
Status of 3 = On
Status of 4 = On
use_count = 1
Status of 0 = On
Status of 2 = On
Status of 3 = On
Status of 4 = On
use_count = 1
Status of 0 = On
Status of 1 = On
Status of 3 = On
Status of 4 = On
use_count = 1
Status of 0 = On
Status of 1 = On
Status of 2 = On
Status of 4 = On
use_count = 1
Status of 0 = On
Status of 1 = On
Status of 2 = On
Status of 3 = On
Destroying Controller0
Destroying Controller1
Destroying Controller2
Destroying Controller3
Destroying Controller4
Press any key
```

Come esperimento, modificare il vettore `others` in modo che sia un `vector<shared_ptr<Controller>>` e quindi nell'output si noti che non viene richiamato alcun distruttore quando viene `TestRun` restituito.

## <a name="see-also"></a>Vedi anche

[Puntatori intelligenti (C++ moderno)](../cpp/smart-pointers-modern-cpp.md)
