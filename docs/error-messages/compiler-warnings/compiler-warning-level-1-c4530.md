---
title: Avviso del compilatore (livello 1) C4530
description: Guida di riferimento all'avviso del compilatore Microsoft C++ C4530.
ms.date: 04/02/2020
f1_keywords:
- C4530
helpviewer_keywords:
- C4530
ms.assetid: a04dcdb2-84db-459d-9e5e-4e743887465f
ms.openlocfilehash: fe0a2b4c8eb881327f3e59d66e7e6941f0a2cad8
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87230662"
---
# <a name="compiler-warning-level-1-c4530"></a>Avviso del compilatore (livello 1) C4530

> Utilizzato gestore eccezioni C++, ma la semantica di rimozione non è abilitata. Specificare/EHsc

Il codice usa la gestione delle eccezioni C++, ma [/EHsc](../../build/reference/eh-exception-handling-model.md) non è stato incluso nelle opzioni del compilatore.

## <a name="remarks"></a>Osservazioni

Il compilatore richiede l' **`/EHsc`** opzione per compilare codice c++ che segue lo standard c++ per la gestione delle eccezioni. La *semantica di rimozione* standard di C++ specifica che gli oggetti e gli stack frame creati tra il punto in cui viene generata un'eccezione e il punto in cui vengono intercettati devono essere eliminati e le relative risorse vengono ripristinate. Questo processo è noto come *rimozione dello stack*.

L' **`/EHsc`** opzione indica al compilatore di generare codice che chiama i distruttori sugli oggetti di archiviazione automatica quando un'eccezione passa attraverso la stack frame che lo contiene. Gli oggetti di *archiviazione automatici* sono oggetti allocati nello stack, ad esempio le variabili locali. Viene chiamato archiviazione automatica perché viene allocato automaticamente quando vengono chiamate le funzioni e viene rilasciato automaticamente quando restituiscono. Un *stack frame* è i dati inseriti nello stack quando viene chiamata una funzione, insieme alla relativa archiviazione automatica.

Quando viene generata un'eccezione, può attraversare diversi stack frame prima che venga rilevata. Questi stack frame devono essere rilasciati quando l'eccezione passa attraverso di essi in ordine di chiamata inverso. Gli oggetti di archiviazione automatici in ogni stack frame devono essere eliminati definitivamente per ripristinare le proprie risorse. Si tratta dello stesso processo di distruzione e ripristino che si verifica automaticamente quando una funzione restituisce normalmente.

Quando l' **`/EHsc`** opzione non è abilitata, gli oggetti di archiviazione automatica negli stack frame tra la funzione di generazione e la funzione in cui viene rilevata l'eccezione non vengono eliminati. Vengono eliminati solo gli oggetti di archiviazione automatici creati in un **`try`** **`catch`** blocco o, che possono causare perdite di risorse significative e altri comportamenti imprevisti.

Se non è possibile generare eccezioni nell'eseguibile, è possibile ignorare questo avviso. Il codice può richiedere altre opzioni di gestione delle eccezioni. Per ulteriori informazioni, vedere [/eh](../../build/reference/eh-exception-handling-model.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4530:

```cpp
// C4530.cpp
// compile with: /W1
int main() {
   try{} catch(int*) {}   // C4530
}
```

Compilare l'esempio con **`/EHsc`** per risolvere l'avviso.
