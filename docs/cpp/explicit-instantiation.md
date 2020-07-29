---
title: creazione di un'istanza esplicita
ms.date: 11/04/2016
helpviewer_keywords:
- templates, instantiation
- explicit instantiation
- instantiation, explicit
ms.assetid: 8b0d4e32-45a6-49d5-8041-1ebdd674410e
ms.openlocfilehash: 4b1808791110c4eed237d18436897dac59170206
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87232300"
---
# <a name="explicit-instantiation"></a>creazione di un'istanza esplicita

È possibile utilizzare l'istanziazione esplicita per creare un'istanza di una classe o di una funzione basata su modelli senza utilizzarla nel codice. Poiché questo è utile quando si creano i file di libreria (con estensione lib) che utilizzano modelli per la distribuzione, le definizioni di modello prive di istanza non vengono inserite nei file oggetto (con estensione obj).

Questo codice crea un'istanza esplicita `MyStack` delle **`int`** variabili e di sei elementi:

```cpp
template class MyStack<int, 6>;
```

Questa istruzione crea un'istanza di `MyStack` senza riservare memoria per un oggetto. Il codice viene generato per tutti i membri.

La riga successiva crea un'istanza solo della funzione membro costruttore:

```cpp
template MyStack<int, 6>::MyStack( void );
```

È possibile creare istanze di modelli di funzione in modo esplicito usando un argomento di tipo specifico per dichiararle nuovamente, come illustrato nell'esempio nella [creazione di un'istanza del modello di funzione](../cpp/function-template-instantiation.md).

È possibile utilizzare la **`extern`** parola chiave per impedire la creazione automatica di istanze dei membri. Ad esempio:

```cpp
extern template class MyStack<int, 6>;
```

Analogamente, è possibile contrassegnare i membri specifici come esterni e non istanziati:

```cpp
extern template MyStack<int, 6>::MyStack( void );
```

È possibile usare la **`extern`** parola chiave per impedire al compilatore di generare lo stesso codice di creazione di istanze in più di un modulo oggetto. È necessario creare istanze della funzione del modello utilizzando i parametri di modello specificati espliciti in almeno un modulo collegato se la funzione viene chiamata o verrà generato un errore del linker quando il programma viene compilato.

> [!NOTE]
> La **`extern`** parola chiave nella specializzazione si applica solo alle funzioni membro definite all'esterno del corpo della classe. Le funzioni definite all'interno della dichiarazione della classe vengono considerate funzioni inline e ne viene sempre creata un'istanza.

## <a name="see-also"></a>Vedere anche

[Modelli di funzione](../cpp/function-templates.md)
