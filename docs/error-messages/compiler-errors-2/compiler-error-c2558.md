---
title: Errore del compilatore C2558
ms.date: 11/04/2016
f1_keywords:
- C2558
helpviewer_keywords:
- C2558
ms.assetid: 822b701e-dcae-423a-b21f-47f36aff9c90
ms.openlocfilehash: 93b6e414f26c56702a1c7ac12863cbcd5063b570
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80177495"
---
# <a name="compiler-error-c2558"></a>Errore del compilatore C2558

'identificatore': nessun costruttore di copia disponibile o costruttore di copia dichiarato 'explicit'

Un costruttore di copia inizializza un oggetto da un altro oggetto dello stesso tipo, (Esegue una copia dell'oggetto). Il compilatore genera un costruttore di copia predefinito se non si definiscono costruttori.

### <a name="to-fix-this-error"></a>Per risolvere l'errore

1. Il problema può verificarsi quando si tenta di copiare una classe il cui costruttore di copia è `private`. Nella maggior parte dei casi, è preferibile non copiare una classe che dispone di un costruttore di copia `private`. Una tecnica di programmazione comune dichiara un costruttore di copia `private` per impedire l'uso diretto di una classe. La classe potrebbe non avere alcuna utilità in sé o richiedere un'altra classe per funzionare correttamente.

   Se si stabilisce che è sicuro utilizzare una classe che dispone di un costruttore di copia `private`, derivare una nuova classe dalla classe che dispone del costruttore `private` e rendere disponibile un costruttore di copia `public` o `protected` nella nuova classe. Usare la classe derivata al posto dell'originale.

1. Il problema può verificarsi quando si tenta di copiare una classe il cui costruttore di copia è . La dichiarazione di un costruttore di copia come `explicit` impedisce il passaggio degli oggetti di una classe alle funzioni o la restituzione degli stessi. Per ulteriori informazioni sui costruttori espliciti, vedere [conversioni di tipi definiti dall'utente](../../cpp/user-defined-type-conversions-cpp.md).

1. Il problema può verificarsi quando si tenta di copiare un'istanza di una classe dichiarata `const` usando un costruttore di copia che non accetta un parametro per riferimento `const`. Dichiarare il costruttore di copia con un riferimento di tipo `const` anziché un riferimento di tipo non const.
