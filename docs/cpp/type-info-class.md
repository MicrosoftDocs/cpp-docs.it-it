---
description: 'Altre informazioni su: type_info Class'
title: Classe type_info
ms.date: 11/04/2016
f1_keywords:
- type_info
helpviewer_keywords:
- class type_info
- type_info class
ms.assetid: 894ddda2-7de4-4da3-9404-d2c74e356c16
ms.openlocfilehash: 6be4d6774842ad015b34e771455026ca27e6539b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97295315"
---
# <a name="type_info-class"></a>Classe type_info

La classe **type_info** descrive le informazioni sul tipo generate all'interno del programma dal compilatore. Gli oggetti di questa classe consentono di archiviare un puntatore a un nome per il tipo. La classe **type_info** archivia anche un valore codificato adatto per confrontare due tipi per verificarne l'uguaglianza o l'ordine di ordinamento. Le regole di codifica e la sequenza di ordinamento per i tipi non sono specificate e possono variare in base al programma.

Il `<typeinfo>` file di intestazione deve essere incluso per usare la classe **type_info** . L'interfaccia per la classe **type_info** è:

```cpp
class type_info {
public:
    type_info(const type_info& rhs) = delete; // cannot be copied
    virtual ~type_info();
    size_t hash_code() const;
    _CRTIMP_PURE bool operator==(const type_info& rhs) const;
    type_info& operator=(const type_info& rhs) = delete; // cannot be copied
    _CRTIMP_PURE bool operator!=(const type_info& rhs) const;
    _CRTIMP_PURE int before(const type_info& rhs) const;
    size_t hash_code() const noexcept;
    _CRTIMP_PURE const char* name() const;
    _CRTIMP_PURE const char* raw_name() const;
};
```

Non è possibile creare direttamente istanze di oggetti della classe **type_info** , perché la classe dispone solo di un costruttore di copia privata. L'unico modo per costruire un oggetto **type_info** (temporaneo) consiste nell'utilizzare l'operatore [typeid](../cpp/typeid-operator.md) . Poiché anche l'operatore di assegnazione è privato, non è possibile copiare o assegnare oggetti della classe **type_info**.

`type_info::hash_code` definisce una funzione hash adatta per il mapping di valori di tipo **TypeInfo** a una distribuzione di valori di indice.

Gli operatori `==` e `!=` possono essere utilizzati per confrontare l'uguaglianza e la disuguaglianza con altri oggetti **type_info** rispettivamente.

Non esiste alcun collegamento tra l'ordinamento dei tipi e le relazioni di ereditarietà. Utilizzare la `type_info::before` funzione membro per determinare la sequenza di ordinamento dei tipi. Non esiste alcuna garanzia che produrrà `type_info::before` lo stesso risultato in programmi diversi o anche in esecuzioni diverse dello stesso programma. In questo modo, `type_info::before` è simile all'operatore address-of `(&)` .

La `type_info::name` funzione membro restituisce un oggetto `const char*` a una stringa con terminazione null che rappresenta il nome leggibile del tipo. La memoria a cui si fa riferimento viene memorizzata nella cache e non deve essere mai direttamente deallocata.

La `type_info::raw_name` funzione membro restituisce un `const char*` oggetto a una stringa con terminazione null che rappresenta il nome decorato del tipo di oggetto. Il nome viene archiviato nel formato decorato per risparmiare spazio. Di conseguenza, questa funzione è più veloce di `type_info::name` perché non è necessario dedecorare il nome. La stringa restituita dalla `type_info::raw_name` funzione è utile nelle operazioni di confronto, ma non è leggibile. Se è necessaria una stringa leggibile, usare invece la `type_info::name` funzione.

Le informazioni sul tipo vengono generate per le classi polimorfiche solo se è specificata l'opzione del compilatore [/gr (Abilita informazioni sul tipo di Run-Time)](../build/reference/gr-enable-run-time-type-information.md) .

## <a name="see-also"></a>Vedi anche

[Informazioni sui tipi di runtime](../cpp/run-time-type-information.md)
