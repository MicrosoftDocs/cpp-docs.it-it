---
title: Errore del compilatore C2558
ms.date: 11/04/2016
f1_keywords:
- C2558
helpviewer_keywords:
- C2558
ms.assetid: 822b701e-dcae-423a-b21f-47f36aff9c90
ms.openlocfilehash: 2504b42f49ccb040f676f0aead8f243d33c7dd1a
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87207745"
---
# <a name="compiler-error-c2558"></a>Errore del compilatore C2558

'identificatore': nessun costruttore di copia disponibile o costruttore di copia dichiarato 'explicit'

Un costruttore di copia inizializza un oggetto da un altro oggetto dello stesso tipo, (Esegue una copia dell'oggetto). Il compilatore genera un costruttore di copia predefinito se non si definiscono costruttori.

### <a name="to-fix-this-error"></a>Per correggere l'errore

1. Il problema può verificarsi quando viene effettuato un tentativo di copiare una classe il cui costruttore di copia è **`private`** . Nella maggior parte dei casi, una classe che dispone di un **`private`** costruttore di copia non deve essere copiata. Una tecnica di programmazione comune dichiara un **`private`** costruttore di copia per impedire l'uso diretto di una classe. La classe potrebbe non avere alcuna utilità in sé o richiedere un'altra classe per funzionare correttamente.

   Se si stabilisce che è sicuro usare una classe che dispone di un **`private`** costruttore di copia, derivare una nuova classe dalla classe che dispone del **`private`** costruttore e rendere **`public`** disponibile un **`protected`** costruttore di copia o nella nuova classe. Usare la classe derivata al posto dell'originale.

1. Il problema può verificarsi quando si tenta di copiare una classe il cui costruttore di copia è esplicito. La dichiarazione di un costruttore di copia come **`explicit`** impedisce il passaggio e la restituzione di oggetti di una classe a/da funzioni. Per ulteriori informazioni sui costruttori espliciti, vedere [conversioni di tipi definiti dall'utente](../../cpp/user-defined-type-conversions-cpp.md).

1. Il problema può verificarsi quando viene effettuato un tentativo di copiare un'istanza di classe dichiarata **`const`** usando un costruttore di copia che non accetta un **`const`** parametro di riferimento. Dichiarare il costruttore di copia con un **`const`** riferimento al tipo anziché un riferimento a un tipo non const.
