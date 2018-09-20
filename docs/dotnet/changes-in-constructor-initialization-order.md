---
title: Le modifiche in ordine di inizializzazione del costruttore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- constructors, C++
ms.assetid: 8892c38d-6bf7-4cf7-ac8f-15e052135a79
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: fd54e9810131f3ddfabe458c70ddef081568a9cd
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46397689"
---
# <a name="changes-in-constructor-initialization-order"></a>Modifiche nell'ordine di inizializzazione del costruttore

Ordine di inizializzazione per i costruttori di classe è stato modificato dalle estensioni gestite per C++ in Visual C++.

## <a name="comparison-of-constructor-initialization-order"></a>Confronto dell'ordine di inizializzazione del costruttore

Nelle estensioni gestite per C++, l'inizializzazione di costruttore si è verificato nell'ordine seguente:

1. Il costruttore della classe di base, se presente, viene richiamato.

1. Elenco di inizializzazione della classe viene valutata.

1. Il corpo di codice del costruttore della classe viene eseguito.

In questo ordine di esecuzione segue le stesse convenzioni di programmazione C++ nativa. Il nuovo linguaggio di Visual C++ è indicato l'ordine di esecuzione seguenti per le classi CLR:

1. Elenco di inizializzazione della classe viene valutata.

1. Il costruttore della classe di base, se presente, viene richiamato.

1. Il corpo di codice del costruttore della classe viene eseguito.

Si noti che questa modifica si applica solo alle classi CLR. classi native in Visual C++, comunque, seguire le convenzioni precedenti. In entrambi i casi, queste regole vengono propagate verso l'alto nel catena intera gerarchia di una determinata classe.

Si consideri il seguente esempio di codice usando estensioni gestite per C++:

```
__gc class A
{
public:
   A() : _n(1)
   {
   }

protected:
   int _n;
};

__gc class B : public A
{
public:
   B() : _m(_n)
   {
   }
private:
   int _m;
};
```

Seguendo l'ordine di inizializzazione del costruttore indicato sopra, dovrebbe essere visualizzato il seguente ordine di esecuzione di nuove istanze della classe `B` vengono costruiti:

1. Il costruttore della classe di base `A` viene richiamato. Il `_n` membro viene inizializzato su `1`.

1. Elenco di inizializzazione per la classe `B` viene valutata. Il `_m` membro viene inizializzato su `1`.

1. Il corpo di codice della classe `B` viene eseguita.

Si consideri ora lo stesso codice nella nuova sintassi Visual C++:

```
ref class A
{
public:
   A() : _n(1)
   {
   }

protected:
   int _n;
};

ref class B : A
{
public:
   B() : _m(_n)
   {
   }
private:
   int _m;
};
```

L'ordine di esecuzione di nuove istanze della classe `B` vengono costruiti sotto la nuova sintassi è:

1. Elenco di inizializzazione per la classe `B` viene valutata. Il `_m` inizializzazione del membro per `0` (`0` JE hodnotou non inizializzato il `_m` membro della classe).

1. Il costruttore della classe di base `A` viene richiamato. Il `_n` membro viene inizializzato su `1`.

1. Il corpo di codice della classe `B` viene eseguita.

Si noti che una sintassi simile a produce risultati diversi per questi esempi di codice. Il costruttore della classe `B` dipende da un valore dalla classe base `A` per inizializzare il membro. Tuttavia, il costruttore della classe `A` non è ancora stato richiamato. Tale dipendenza può essere particolarmente pericolosa quando la classe ereditata dipende da un'allocazione di memoria o risorse presenti nel costruttore della classe base.

## <a name="what-this-means-going-from-managed-extensions-for-c-to-visual-c-2010"></a>Cosa significa questo passaggio dalle estensioni gestite per C++ per Visual C++ 2010

In molti casi le modifiche all'ordine di esecuzione dei costruttori di classe dovrebbero essere trasparente al programmatore perché le classi di base non dispongono di alcuna nozione del comportamento di classi ereditate. Tuttavia, come illustrano in questi esempi di codice, i costruttori di classi ereditate possono essere notevolmente interessati quando i relativi elenchi inizializzazione dipendono dai valori dei membri della classe base. Quando si sposta il codice dalle estensioni gestite per C++ per la nuova sintassi, si consiglia di spostare tali costrutti al corpo del costruttore della classe, in cui è garantita l'esecuzione si verifichi ultima.

## <a name="see-also"></a>Vedere anche

[Tipi gestiti (C + + / CL)](../dotnet/managed-types-cpp-cl.md)<br/>
[Costruttori](../cpp/constructors-cpp.md)
