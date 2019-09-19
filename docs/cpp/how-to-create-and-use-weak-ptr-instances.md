---
title: 'Procedura: Creare e usare istanze di weak_ptr'
ms.custom: how-to
ms.date: 09/18/2019
ms.topic: conceptual
ms.assetid: 8dd6909b-b070-4afa-9696-f2fc94579c65
ms.openlocfilehash: e5d1b13d894a617ca514e26f14fde3f514540d34
ms.sourcegitcommit: 76cc69b482ada8ebf0837e8cdfd4459661f996dd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2019
ms.locfileid: "71127171"
---
# <a name="how-to-create-and-use-weak_ptr-instances"></a>Procedura: Creare e usare istanze di weak_ptr

A volte un oggetto deve archiviare un modo per accedere all'oggetto sottostante di `shared_ptr` un senza causare l'incremento del conteggio dei riferimenti. In genere, questa situazione si verifica quando sono presenti riferimenti `shared_ptr` ciclici tra le istanze.

Il progetto migliore è evitare la proprietà condivisa dei puntatori ogni volta che è possibile. Tuttavia, se è necessario avere la proprietà condivisa `shared_ptr` delle istanze, evitare i riferimenti ciclici tra di essi. Quando i riferimenti ciclici sono inevitabili o anche preferibili per qualche motivo `weak_ptr` , usare per assegnare a uno o più proprietari un riferimento debole a `shared_ptr`un altro. Utilizzando un `weak_ptr`è possibile creare un oggetto `shared_ptr` che si unisce a un set di istanze correlate esistente, ma solo se la risorsa di memoria sottostante è ancora valida. Un `weak_ptr` oggetto stesso non partecipa al conteggio dei riferimenti e pertanto non può impedire il conteggio dei riferimenti da zero. Tuttavia, è possibile utilizzare un `weak_ptr` oggetto per tentare di ottenere una nuova copia `shared_ptr` di con cui è stata inizializzata. Se la memoria è già stata eliminata, `weak_ptr`l'operatore bool di `false`restituisce. Se la memoria è ancora valida, il nuovo puntatore condiviso incrementa il conteggio dei riferimenti e garantisce che la memoria sia valida fino a quando la `shared_ptr` variabile rimane nell'ambito.

## <a name="example"></a>Esempio

Nell'esempio di codice riportato di seguito viene `weak_ptr` illustrato un caso in cui viene utilizzato per garantire la corretta eliminazione di oggetti con dipendenze circolari. Quando si esamina l'esempio, si supponga che sia stato creato solo dopo che sono state prese in considerazione soluzioni alternative. Gli `Controller` oggetti rappresentano un aspetto di un processo del computer e operano in modo indipendente. Ogni controller deve essere in grado di eseguire query sullo stato degli altri controller in qualsiasi momento e ognuno di essi contiene un `vector<weak_ptr<Controller>>` privato a questo scopo. Ogni vettore contiene un riferimento circolare e pertanto `weak_ptr` vengono usate le istanze `shared_ptr`anziché.

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

Come esperimento, modificare il vettore `others` in modo che sia un `vector<shared_ptr<Controller>>`e quindi nell'output si noti che non viene richiamato alcun distruttore quando `TestRun` viene restituito.

## <a name="see-also"></a>Vedere anche

[Puntatori intelligenti (C++ moderno)](../cpp/smart-pointers-modern-cpp.md)
