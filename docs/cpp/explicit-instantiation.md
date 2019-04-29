---
title: creazione di un'istanza esplicita
ms.date: 11/04/2016
helpviewer_keywords:
- templates, instantiation
- explicit instantiation
- instantiation, explicit
ms.assetid: 8b0d4e32-45a6-49d5-8041-1ebdd674410e
ms.openlocfilehash: 45661653b4b8f1a4f94ece1c53aa86f4a431700b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62392206"
---
# <a name="explicit-instantiation"></a>creazione di un'istanza esplicita

È possibile utilizzare l'istanziazione esplicita per creare un'istanza di una classe o di una funzione basata su modelli senza utilizzarla nel codice. Poiché questo è utile quando si creano i file di libreria (con estensione lib) che utilizzano modelli per la distribuzione, le definizioni di modello prive di istanza non vengono inserite nei file oggetto (con estensione obj).

Questo codice crea un'istanza in modo esplicito `MyStack` per **int** variabili e sei elementi:

```cpp
template class MyStack<int, 6>;
```

Questa istruzione crea un'istanza di `MyStack` senza riservare memoria per un oggetto. Il codice viene generato per tutti i membri.

La riga successiva crea un'istanza solo della funzione membro costruttore:

```cpp
template MyStack<int, 6>::MyStack( void );
```

È possibile creare in modo esplicito istanze modelli di funzione utilizzando un argomento di tipo specifico per dichiararli nuovamente, come illustrato nell'esempio nella [creazione di istanze di funzione modello](../cpp/function-template-instantiation.md).

È possibile usare la **extern** (parola chiave) per impedire la creazione dell'istanza automatica di membri. Ad esempio:

```cpp
extern template class MyStack<int, 6>;
```

Analogamente, è possibile contrassegnare i membri specifici come esterni e non istanziati:

```cpp
extern template MyStack<int, 6>::MyStack( void );
```

È possibile usare la **extern** una parola chiave per impedire al compilatore di generare la stessa istanza di codice in più di un modulo di oggetto. È necessario creare istanze della funzione del modello utilizzando i parametri di modello specificati espliciti in almeno un modulo collegato se la funzione viene chiamata o verrà generato un errore del linker quando il programma viene compilato.

> [!NOTE]
>  Il **extern** parola chiave nella specializzazione si applica solo alle funzioni membro definite all'esterno del corpo della classe. Le funzioni definite all'interno della dichiarazione della classe vengono considerate funzioni inline e ne viene sempre creata un'istanza.

## <a name="see-also"></a>Vedere anche

[Modelli di funzioni](../cpp/function-templates.md)