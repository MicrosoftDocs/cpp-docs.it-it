---
title: creazione di un'istanza esplicita
ms.date: 11/04/2016
helpviewer_keywords:
- templates, instantiation
- explicit instantiation
- instantiation, explicit
ms.assetid: 8b0d4e32-45a6-49d5-8041-1ebdd674410e
ms.openlocfilehash: dbe8bebf91a174e07c7c5cce8e9caf1cf3432edf
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80180030"
---
# <a name="explicit-instantiation"></a>creazione di un'istanza esplicita

È possibile utilizzare l'istanziazione esplicita per creare un'istanza di una classe o di una funzione basata su modelli senza utilizzarla nel codice. Poiché questo è utile quando si creano i file di libreria (con estensione lib) che utilizzano modelli per la distribuzione, le definizioni di modello prive di istanza non vengono inserite nei file oggetto (con estensione obj).

Questo codice crea esplicitamente un'istanza `MyStack` per le variabili **int** e sei elementi:

```cpp
template class MyStack<int, 6>;
```

Questa istruzione crea un'istanza di `MyStack` senza riservare memoria per un oggetto. Il codice viene generato per tutti i membri.

La riga successiva crea un'istanza solo della funzione membro costruttore:

```cpp
template MyStack<int, 6>::MyStack( void );
```

È possibile creare istanze di modelli di funzione in modo esplicito usando un argomento di tipo specifico per dichiararle nuovamente, come illustrato nell'esempio nella [creazione di un'istanza del modello di funzione](../cpp/function-template-instantiation.md).

È possibile utilizzare la parola chiave **extern** per impedire la creazione automatica di istanze dei membri. Ad esempio:

```cpp
extern template class MyStack<int, 6>;
```

Analogamente, è possibile contrassegnare i membri specifici come esterni e non istanziati:

```cpp
extern template MyStack<int, 6>::MyStack( void );
```

È possibile usare la parola chiave **extern** per impedire al compilatore di generare lo stesso codice di creazione di istanze in più di un modulo oggetto. È necessario creare istanze della funzione del modello utilizzando i parametri di modello specificati espliciti in almeno un modulo collegato se la funzione viene chiamata o verrà generato un errore del linker quando il programma viene compilato.

> [!NOTE]
>  La parola chiave **extern** nella specializzazione si applica solo alle funzioni membro definite all'esterno del corpo della classe. Le funzioni definite all'interno della dichiarazione della classe vengono considerate funzioni inline e ne viene sempre creata un'istanza.

## <a name="see-also"></a>Vedere anche

[Modelli di funzioni](../cpp/function-templates.md)
