---
title: Unità di conversione e collegamento (C++)
ms.date: 12/11/2019
ms.assetid: a6493ba0-24e2-4c89-956e-9da1dea660cb
ms.openlocfilehash: 5a166efc7ae926f6b028c35007b0972d0a652d6d
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227192"
---
# <a name="translation-units-and-linkage"></a>Unità di conversione e collegamento

In un programma C++, un *simbolo*, ad esempio una variabile o un nome di funzione, può essere dichiarato un numero qualsiasi di volte all'interno del proprio ambito, ma può essere definito una sola volta. Questa regola è "una regola di definizione" (ODR). Una *dichiarazione* introduce (o introduce nuovamente) un nome nel programma. Una *definizione* introduce un nome. Se il nome rappresenta una variabile, viene inizializzata in modo esplicito da una definizione. Una *definizione di funzione* è costituita dalla firma e dal corpo della funzione. Una definizione di classe è costituita dal nome della classe seguito da un blocco in cui sono elencati tutti i membri della classe. I corpi delle funzioni membro possono facoltativamente essere definiti separatamente in un altro file.

Nell'esempio seguente vengono illustrate alcune dichiarazioni:

```cpp
int i;
int f(int x);
class C;
```

Nell'esempio seguente vengono illustrate alcune definizioni:

```cpp
int i{42};
int f(int x){ return x * i; }
class C {
public:
   void DoSomething();
};
```

Un programma è costituito da una o più *unità di conversione*. Un'unità di conversione è costituita da un file di implementazione e da tutte le intestazioni che include direttamente o indirettamente. I file di implementazione in genere hanno un'estensione di file *cpp* o *cxx*. I file di intestazione hanno in genere un'estensione di *h* o *HPP*. Ogni unità di conversione viene compilata in modo indipendente dal compilatore. Al termine della compilazione, il linker unisce le unità di conversione compilate in un unico *programma*. Le violazioni della regola ODR vengono in genere visualizzate come errori del linker. Si verificano errori del linker quando lo stesso nome ha due definizioni diverse in unità di conversione diverse.

In generale, il modo migliore per rendere visibile una variabile tra più file consiste nell'inserirlo in un file di intestazione. Aggiungere quindi una direttiva #include in ogni file *cpp* che richiede la dichiarazione. Con l'aggiunta di *Protezioni di inclusione* intorno al contenuto dell'intestazione, si garantisce che i nomi dichiarati siano definiti una sola volta.

In C++ 20 i [moduli](modules-cpp.md) vengono introdotti come alternativa migliorata ai file di intestazione.

In alcuni casi potrebbe essere necessario dichiarare una variabile globale o una classe in un file *cpp* . In questi casi, è necessario un modo per indicare al compilatore e al linker il tipo di *collegamento* del nome. Il tipo di collegamento specifica se il nome dell'oggetto si applica solo a un file o a tutti i file. Il concetto di collegamento si applica solo ai nomi globali. Il concetto di collegamento non si applica ai nomi dichiarati all'interno di un ambito. Un ambito viene specificato da un set di parentesi graffe di inclusione, ad esempio nelle definizioni di funzione o di classe.

## <a name="external-vs-internal-linkage"></a>Collegamento esterno rispetto a quello interno

Una *funzione Free* è una funzione definita nell'ambito globale o dello spazio dei nomi. Per impostazione predefinita, le variabili globali non const e le funzioni gratuite hanno un *collegamento esterno*. sono visibili da qualsiasi unità di conversione del programma. Pertanto, nessun altro oggetto globale può avere tale nome. Un simbolo con *collegamento interno* o *nessun collegamento* è visibile solo all'interno dell'unità di conversione in cui è dichiarato. Quando un nome dispone di un collegamento interno, lo stesso nome può essere presente in un'altra unità di conversione. Le variabili dichiarate nelle definizioni di classe o nei corpi delle funzioni non hanno alcun collegamento.

È possibile forzare il collegamento interno di un nome globale dichiarando in modo esplicito come **`static`** . Questo limita la visibilità alla stessa unità di conversione in cui è dichiarata. In questo contesto, **`static`** significa qualcosa di diverso da quando applicato alle variabili locali.

Per impostazione predefinita, gli oggetti seguenti hanno un collegamento interno:

- oggetti const
- oggetti constExpr
- typedef
- oggetti statici nell'ambito dello spazio dei nomi

Per assegnare un collegamento esterno a un oggetto const, dichiararlo come **`extern`** e assegnargli un valore:

```cpp
extern const int value = 42;
```

Per ulteriori informazioni, vedere [extern](extern-cpp.md) .

## <a name="see-also"></a>Vedere anche

[Concetti di base](../cpp/basic-concepts-cpp.md)
