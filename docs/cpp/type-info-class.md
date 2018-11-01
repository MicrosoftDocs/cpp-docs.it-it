---
title: Classe type_info
ms.date: 11/04/2016
f1_keywords:
- type_info
helpviewer_keywords:
- class type_info
- type_info class
ms.assetid: 894ddda2-7de4-4da3-9404-d2c74e356c16
ms.openlocfilehash: 169a54373c66c2f6b33d71e68500c3bf85e871c3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50560719"
---
# <a name="typeinfo-class"></a>Classe type_info

Il **type_info** classe descrive le informazioni sul tipo generate all'interno del programma dal compilatore. Gli oggetti di questa classe consentono di archiviare un puntatore a un nome per il tipo. Il **type_info** classe consente archivia anche un valore codificato adatto per il confronto di due tipi per verificarne l'uguaglianza o l'ordinamento. Le regole di codifica e la sequenza di ordinamento per i tipi non sono specificate e possono variare in base al programma.

Il `<typeinfo>` file di intestazione deve essere incluso per poter usare il **type_info** classe. L'interfaccia per il **type_info** classe è:

```cpp
class type_info {
public:
    virtual ~type_info();
    size_t hash_code() const
    _CRTIMP_PURE bool operator==(const type_info& rhs) const;
    _CRTIMP_PURE bool operator!=(const type_info& rhs) const;
    _CRTIMP_PURE int before(const type_info& rhs) const;
    _CRTIMP_PURE const char* name() const;
    _CRTIMP_PURE const char* raw_name() const;
};
```

È possibile creare istanze di oggetti di **type_info** classe direttamente, poiché la classe ha solo un costruttore di copia. L'unico modo per costruire un elemento (temporaneo) **type_info** oggetto consiste nell'utilizzare il [typeid](../cpp/typeid-operator.md) operatore. Poiché anche l'operatore di assegnazione è privato, non è possibile copiare o assegnare gli oggetti della classe **type_info**.

`type_info::hash_code` definisce una funzione hash per il mapping di valori di tipo **typeinfo** per una distribuzione di valori di indice.

Gli operatori `==` e `!=` può essere utilizzato per confrontare l'uguaglianza e disuguaglianza con altre **type_info** oggetti, rispettivamente.

Non esiste alcun collegamento tra l'ordinamento dei tipi e le relazioni di ereditarietà. Usare il `type_info::before` funzione membro per determinare la sequenza di ordinamento dei tipi. Non c'è garanzia che `type_info::before` genererà lo stesso risultato in programmi differenti o addirittura nelle diverse esecuzioni dello stesso programma. In questo modo `type_info::before` è simile a address-of `(&)` operatore.

Il `type_info::name` funzione membro restituisce un `const char*` in una stringa con terminazione null che rappresenta il nome leggibile dall'utente del tipo. La memoria a cui si fa riferimento viene memorizzata nella cache e non deve essere mai direttamente deallocata.

Il `type_info::raw_name` funzione membro restituisce un `const char*` in una stringa con terminazione null che rappresenta il nome decorato del tipo di oggetto. Il nome viene archiviato nel formato decorato per risparmiare spazio. Di conseguenza, questa funzione è più veloce `type_info::name` perché non è necessario rimuovere la decorazione di nome. La stringa restituita dal `type_info::raw_name` funzione è utile nelle operazioni di confronto, ma non è leggibile. Se è necessaria una stringa leggibile dall'utente, usare il `type_info::name` funzione.

Informazioni sul tipo viene generati per solo se le classi polimorfiche il [/GR (Abilita informazioni sui tipi in fase di esecuzione)](../build/reference/gr-enable-run-time-type-information.md) è specificata l'opzione del compilatore.

## <a name="see-also"></a>Vedere anche

[Informazioni sui tipi di runtime](../cpp/run-time-type-information.md)