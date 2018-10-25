---
title: Errore del compilatore C2558 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2558
dev_langs:
- C++
helpviewer_keywords:
- C2558
ms.assetid: 822b701e-dcae-423a-b21f-47f36aff9c90
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6129bea28b943f8f18e1cf6b1e760e604223bdc1
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50060936"
---
# <a name="compiler-error-c2558"></a>Errore del compilatore C2558

'identificatore': nessun costruttore di copia disponibile o costruttore di copia dichiarato 'explicit'

Un costruttore di copia inizializza un oggetto da un altro oggetto dello stesso tipo, ovvero ne esegue una copia. Viene generato un costruttore di copia predefinito se non viene definito alcun costruttore.

### <a name="to-fix-this-error"></a>Per correggere l'errore

1. Il problema può verificarsi quando si tenta di copiare una classe il cui costruttore di copia è `private`. Nella maggior parte dei casi, è preferibile non copiare una classe che dispone di un costruttore di copia `private`. Una tecnica di programmazione comune dichiara un costruttore di copia `private` per impedire l'uso diretto di una classe. La classe potrebbe non avere alcuna utilità in sé o richiedere un'altra classe per funzionare correttamente.

   Se si stabilisce che è sicuro utilizzare una classe che dispone di un costruttore di copia `private`, derivare una nuova classe dalla classe che dispone del costruttore `private` e rendere disponibile un costruttore di copia `public` o `protected` nella nuova classe. Usare la classe derivata al posto dell'originale.

1. Il problema può verificarsi quando si tenta di copiare una classe il cui costruttore di copia è esplicito. La dichiarazione di un costruttore di copia come `explicit` impedisce il passaggio degli oggetti di una classe alle funzioni o la restituzione degli stessi. Per altre informazioni sui costruttori espliciti, vedere [conversioni di tipi definiti dall'utente](../../cpp/user-defined-type-conversions-cpp.md).

1. Il problema può verificarsi quando si tenta di copiare un'istanza di una classe dichiarata `const` usando un costruttore di copia che non accetta un parametro per riferimento `const`. Dichiarare il costruttore di copia con un riferimento di tipo `const` anziché un riferimento di tipo non const.