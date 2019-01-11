---
title: 'Procedura: Creare e utilizzare istanze weak_ptr'
ms.custom: how-to
ms.date: 07/12/2018
ms.topic: conceptual
ms.assetid: 8dd6909b-b070-4afa-9696-f2fc94579c65
ms.openlocfilehash: 1a0e2880e97a77a0c9975553631a6024072745f0
ms.sourcegitcommit: a1fad0a266b20b313364a74b16c9ac45d089b1e9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/11/2019
ms.locfileid: "54220322"
---
# <a name="how-to-create-and-use-weakptr-instances"></a>Procedura: Creare e utilizzare istanze weak_ptr

In alcuni casi un oggetto deve memorizzare un modo per accedere all'oggetto sottostante di un `shared_ptr` senza causare il conteggio dei riferimenti deve essere aumentato. In genere, questa situazione si verifica quando si dispone di riferimenti ciclici tra `shared_ptr` istanze.

La progettazione ideale consiste nell'evitare la proprietà condivisa dei puntatori quando possibile. Tuttavia, se è necessario condividere la proprietà di `shared_ptr` istanze, evitare riferimenti ciclici tra di essi. Quando i riferimenti ciclici sono inevitabili o preferibili per qualche motivo, usare `weak_ptr` per fornire a uno o più proprietari un riferimento debole a un altro `shared_ptr`. Usando un `weak_ptr`, è possibile creare un `shared_ptr` che si unisce a un set esistente di istanze correlate, ma solo se la risorsa di memoria sottostante è ancora valida. Oggetto `weak_ptr` stesso non partecipa al conteggio dei riferimenti e pertanto non è possibile impedire che il conteggio dei riferimenti passi a zero. Tuttavia, è possibile usare una `weak_ptr` per tentare di ottenere una nuova copia del `shared_ptr` con cui è stata inizializzata. Se la memoria è già stata eliminata, un `bad_weak_ptr` viene generata un'eccezione. Se la memoria è ancora valida, il nuovo puntatore condiviso incrementa il conteggio dei riferimenti e garantisce che la memoria sarà valida fino a quando il `shared_ptr` variabile rimane nell'ambito.

## <a name="example"></a>Esempio

Esempio di codice seguente viene illustrato un caso in cui `weak_ptr` viene usato per garantire l'eliminazione di oggetti che hanno dipendenze circolari. Quando si esamina l'esempio, si supponga che è stato creato solo dopo che sono state esaminate le soluzioni alternative. Il `Controller` oggetti rappresentano alcuni aspetti di un processo di computer e operano in modo indipendente. Ogni controller deve essere in grado di richiedere lo stato degli altri controller in qualsiasi momento e ciascuno di essi contiene un privato `vector<weak_ptr<Controller>>` per questo scopo. Ogni vettore contiene un riferimento circolare e pertanto `weak_ptr` le istanze vengono utilizzate al posto di `shared_ptr`.

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
Status of 0 = O
nStatus of 1 = On
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

Come esperimento, modificare il vettore `others` sia un `vector<shared_ptr<Controller>>`e quindi nell'output, notare che viene richiamato alcun distruttore quando `TestRun` restituisce.

## <a name="see-also"></a>Vedere anche

[Puntatori intelligenti (C++ moderno)](../cpp/smart-pointers-modern-cpp.md)
