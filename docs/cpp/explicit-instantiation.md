---
title: creazione di un'istanza esplicita
ms.date: 11/04/2016
helpviewer_keywords:
- templates, instantiation
- explicit instantiation
- instantiation, explicit
ms.assetid: 8b0d4e32-45a6-49d5-8041-1ebdd674410e
ms.openlocfilehash: 0b1290bc23c56c0f35ddd3bb93e37ce4f5f0d2ed
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81361953"
---
# <a name="explicit-instantiation"></a>creazione di un'istanza esplicita

È possibile utilizzare l'istanziazione esplicita per creare un'istanza di una classe o di una funzione basata su modelli senza utilizzarla nel codice. Poiché questo è utile quando si creano i file di libreria (con estensione lib) che utilizzano modelli per la distribuzione, le definizioni di modello prive di istanza non vengono inserite nei file oggetto (con estensione obj).

Questo codice crea `MyStack` in modo esplicito un'istanza per le variabili int e sei elementi:This code explicitly instantiates for **int** variables and six items:

```cpp
template class MyStack<int, 6>;
```

Questa istruzione crea un'istanza di `MyStack` senza riservare memoria per un oggetto. Il codice viene generato per tutti i membri.

La riga successiva crea un'istanza solo della funzione membro costruttore:

```cpp
template MyStack<int, 6>::MyStack( void );
```

È possibile creare in modo esplicito un'istanza dei modelli di funzione utilizzando un argomento di tipo specifico per dichiararli nuovamente, come illustrato nell'esempio in Creazione di [istanze](../cpp/function-template-instantiation.md)di modelli di funzione .

È possibile utilizzare la parola chiave **extern** per impedire la creazione automatica di istanze di membri. Ad esempio:

```cpp
extern template class MyStack<int, 6>;
```

Analogamente, è possibile contrassegnare i membri specifici come esterni e non istanziati:

```cpp
extern template MyStack<int, 6>::MyStack( void );
```

È possibile utilizzare la parola chiave **extern** per impedire al compilatore di generare lo stesso codice di creazione di istanze in più di un modulo di oggetto. È necessario creare istanze della funzione del modello utilizzando i parametri di modello specificati espliciti in almeno un modulo collegato se la funzione viene chiamata o verrà generato un errore del linker quando il programma viene compilato.

> [!NOTE]
> La parola chiave **extern** nella specializzazione si applica solo alle funzioni membro definite all'esterno del corpo della classe. Le funzioni definite all'interno della dichiarazione della classe vengono considerate funzioni inline e ne viene sempre creata un'istanza.

## <a name="see-also"></a>Vedere anche

[Modelli di funzione](../cpp/function-templates.md)
