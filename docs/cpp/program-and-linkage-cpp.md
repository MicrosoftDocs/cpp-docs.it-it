---
title: Unità di traduzione e collegamento (c'è)
ms.date: 12/11/2019
ms.assetid: a6493ba0-24e2-4c89-956e-9da1dea660cb
ms.openlocfilehash: 791ec53d4df863b218db463f2b9b9401bf6f466d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374322"
---
# <a name="translation-units-and-linkage"></a>Unità di conversione e collegamento

In un programma di Tipo C, ad esempio un *simbolo,* ad esempio il nome di una variabile o di una funzione, può essere dichiarato un numero qualsiasi di volte all'interno del relativo ambito, ma può essere definito una sola volta. Questa regola è la "One Definition Rule" (ODR). Una *dichiarazione* introduce (o reintroduce) un nome nel programma. Una *definizione* introduce un nome. Se il nome rappresenta una variabile, una definizione la inizializza in modo esplicito. Una *definizione* di funzione è costituita dalla firma più il corpo della funzione. Una definizione di classe è costituita dal nome della classe seguito da un blocco che elenca tutti i membri della classe. I corpi delle funzioni membro possono facoltativamente essere definiti separatamente in un altro file.

Nell'esempio seguente vengono illustrate alcune dichiarazioni:The following example shows some declarations:

```cpp
int i;
int f(int x);
class C;
```

Nell'esempio seguente vengono illustrate alcune definizioni:The following example shows some definitions:

```cpp
int i{42};
int f(int x){ return x * i; }
class C {
public:
   void DoSomething();
};
```

Un programma è costituito da una o più unità di *traduzione*. Un'unità di conversione è costituita da un file di implementazione e da tutte le intestazioni incluse direttamente o indirettamente. I file di implementazione hanno in genere un'estensione di file *cpp* o *cxx*. I file di intestazione hanno in genere un'estensione di *h* o *hpp*. Ogni unità di conversione viene compilata in modo indipendente dal compilatore. Al termine della compilazione, il linker unisce le unità di conversione compilate in un unico *programma*. Le violazioni della regola ODR vengono in genere visualizzate come errori del linker. Gli errori del linker si verificano quando lo stesso nome ha due definizioni diverse in unità di conversione diverse.

In generale, il modo migliore per rendere visibile una variabile tra più file è inserirla in un file di intestazione. Aggiungere quindi una direttiva #include in ogni file *cpp* che richiede la dichiarazione. Aggiungendo *le protezioni include* intorno al contenuto dell'intestazione, si garantisce che i nomi dichiarati siano definiti una sola volta.

I [moduli](modules-cpp.md) vengono introdotti come alternativa migliorata ai file di intestazione.

In alcuni casi può essere necessario dichiarare una variabile globale o una classe in un file *cpp.* In questi casi, è necessario un modo per indicare al compilatore e al linker il tipo di *collegamento* del nome. Il tipo di collegamento specifica se il nome dell'oggetto si applica solo a un file o a tutti i file. Il concetto di collegamento si applica solo ai nomi globali. Il concetto di collegamento non si applica ai nomi dichiarati all'interno di un ambito. Un ambito viene specificato da un set di parentesi graffe di inclusione, ad esempio nelle definizioni di funzione o di classe.

## <a name="external-vs-internal-linkage"></a>Collegamento esterno e interno

Una *funzione libera* è una funzione definita nell'ambito globale o dello spazio dei nomi. Le variabili globali non const e le funzioni libere per impostazione predefinita hanno *un collegamento esterno*; sono visibili da qualsiasi unità di traduzione nel programma. Pertanto, nessun altro oggetto globale può avere tale nome. Un simbolo con *collegamento interno* o *senza collegamento* è visibile solo all'interno dell'unità di conversione in cui è dichiarato. Quando un nome ha un collegamento interno, lo stesso nome può esistere in un'altra unità di conversione. Le variabili dichiarate con definizioni di classe o corpi di funzione non hanno alcun collegamento.

È possibile forzare un nome globale ad avere un collegamento interno dichiarandolo in modo esplicito come **static**. Questo limita la sua visibilità alla stessa unità di traduzione in cui è dichiarata. In questo contesto, **static** significa qualcosa di diverso rispetto a quando applicato alle variabili locali.

Per impostazione predefinita, i seguenti oggetti hanno un collegamento interno:

- oggetti const
- oggetti constexpr
- typedef
- oggetti statici nell'ambito dello spazio dei nomi

Per assegnare a un oggetto const un collegamento esterno, dichiararlo come **extern** e assegnargli un valore:

```cpp
extern const int value = 42;
```

Vedere [extern](extern-cpp.md) per ulteriori informazioni.

## <a name="see-also"></a>Vedere anche

[Concetti di base](../cpp/basic-concepts-cpp.md)
