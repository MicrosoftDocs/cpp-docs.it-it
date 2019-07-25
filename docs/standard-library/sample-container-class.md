---
title: Classe contenitore di esempio
ms.date: 11/04/2016
helpviewer_keywords:
- container classes [C++]
ms.assetid: 5b1451f2-c708-45da-bbf0-9e42fd687a1a
ms.openlocfilehash: 2024574633069cc70f0885fdce63f3afc09227c0
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68451104"
---
# <a name="sample-container-class"></a>Classe contenitore di esempio

> [!NOTE]
> Questo argomento è disponibile nella documentazione C++ di Microsoft come esempio non funzionale dei contenitori usati nella libreria C++ standard. Per altre informazioni, vedere [Contenitori della libreria standard C++](../standard-library/stl-containers.md).

Descrive un oggetto che controlla una sequenza di elementi di lunghezza variabile, in genere di tipo `Ty`. La sequenza viene archiviata in modi diversi, a seconda del contenitore effettivo.

Un costruttore contenitore o una funzione membro può chiamare il costruttore **Ty**(**const Ty&** ) o la funzione **Ty::operator=** (**const Ty&** ). Se tale chiamata genera un'eccezione, l'oggetto contenitore ha l'obbligo di mantenere l'integrità e di generare nuovamente tutte le eccezioni che intercetta. È possibile scambiare, assegnare, cancellare o eliminare in modo sicuro un oggetto contenitore dopo che genera una di queste eccezioni. In linea generale non è tuttavia possibile prevedere in altro modo lo stato della sequenza controllata dall'oggetto contenitore.

Alcune avvertenze aggiuntive:

- Se l'espressione `~Ty` genera un'eccezione, lo stato risultante dell'oggetto contenitore non è definito.

- Se il contenitore archivia un oggetto allocatore *al*e *al* genera un'eccezione diversa da come risultato di una chiamata a `al.allocate`, lo stato risultante dell'oggetto contenitore non è definito.

- Se il contenitore archivia un oggetto funzione *comp*per determinare come ordinare la sequenza controllata e *comp* genera un'eccezione di qualsiasi tipo, lo stato risultante dell'oggetto contenitore non è definito.

Le classi contenitore definite dalla libreria standard C++ soddisfano diversi requisiti aggiuntivi, come descritto nei paragrafi seguenti.

La classe modello contenitore [list](../standard-library/list-class.md) garantisce un comportamento deterministico e utile, anche in presenza delle eccezioni descritte in precedenza. Se ad esempio viene generata un'eccezione durante l'inserimento di uno o più elementi, il contenitore viene lasciato inalterato e viene nuovamente generata l'eccezione.

Per *tutte* le classi contenitore definite dalla C++ libreria standard, se viene generata un'eccezione durante le chiamate alle funzioni membro seguenti, `insert`, `push_back`o `push_front`, il contenitore viene lasciato inalterato e l'eccezione è generata.

Per *tutte* le classi contenitore definite dalla C++ libreria standard, non viene generata alcuna eccezione durante le chiamate alle funzioni membro seguenti `pop_back`: `pop_front`,.

La funzione membro [erase](../standard-library/container-class-erase.md) genera un'eccezione solo se un'operazione di copia (costruzione di copia o assegnazione) genera un'eccezione.

Non viene inoltre generata alcuna eccezione durante la copia di un iteratore restituito da una funzione membro.

La funzione membro [swap](../standard-library/container-class-swap.md) per *tutte* le classi contenitore definite dalla libreria standard C++ garantisce quanto segue:

- La funzione membro genera un'eccezione solo se il contenitore archivia un oggetto allocatore al e `al` genera un'eccezione quando viene copiato.

- I riferimenti, i puntatori e gli iteratori che designano elementi delle sequenze controllate che vengono scambiate restano validi.

Un oggetto di una classe di contenitori definita dalla libreria standard C++ alloca e libera la memoria per la sequenza che controlla tramite un oggetto archiviato di tipo `Alloc`, che in genere è un parametro di modello. Tale oggetto allocatore deve avere la stessa interfaccia esterna di un oggetto della classe `allocator<Ty>`. In particolare, `Alloc` deve essere dello stesso tipo di`Alloc::rebind<value_type>::other`

Per *tutte* le classi contenitore definite C++ dalla libreria standard, la funzione `Alloc get_allocator const;` membro restituisce una copia dell'oggetto allocatore archiviato. Si noti che l'oggetto allocatore archiviato *non* viene copiato dopo l'assegnazione dell'oggetto contenitore. Tutti i costruttori inizializzano il valore archiviato `allocator`in, `Alloc` su se il costruttore non contiene un parametro allocatore.

In base allo standard C++, per una classe di contenitori definita nella libreria standard C++ si può presupporre quanto segue:

- Tutti gli oggetti della classe `Alloc` risultano uguali.

- Il `Alloc::const_pointer` tipo è uguale a `const Ty *`.

- Il `Alloc::const_reference` tipo è uguale a `const Ty&`.

- Il `Alloc::pointer` tipo è uguale a `Ty *`.

- Il `Alloc::reference` tipo è uguale a `Ty&`.

In questa implementazione, tuttavia, i contenitori non si basano su presupposti semplificati. Funzionano pertanto correttamente con gli oggetti allocatore più ambiziosi:

- Gli oggetti della classe `Alloc` non devono risultare tutti uguali. È possibile mantenere più pool di archiviazione.

- Il `Alloc::const_pointer` tipo non deve essere `const Ty *`uguale a. Un puntatore const può essere una classe.

- Il `Alloc::pointer` tipo non deve essere `Ty *`uguale a. Un puntatore può essere una classe.

## <a name="requirements"></a>Requisiti

**Intestazione**: \<sample container>

## <a name="see-also"></a>Vedere anche

[\<sample container>](../standard-library/sample-container.md)
