---
title: Panoramica dei moduli in C++
ms.date: 12/13/2019
helpviewer_keywords:
- modules [C++]
- modules [C++], overview
description: I moduli in C++ 20 forniscono un'alternativa moderna ai file di intestazione.
ms.openlocfilehash: 28e1824250ad4fb404c528aa9511745abb001f31
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75301379"
---
# <a name="overview-of-modules-in-c"></a>Panoramica dei moduli in C++

C++ 20 introduce *moduli*, una soluzione moderna per la componentizzazione C++ di librerie e programmi. Un modulo è un set di file di codice sorgente compilati in modo indipendente dalle [unità di conversione](https://wikipedia.org/wiki/Translation_unit_(programming)) che li importano. I moduli eliminano o riducono significativamente molti dei problemi associati all'utilizzo dei file di intestazione e potenzialmente riducono anche i tempi di compilazione. Le macro, le direttive per il preprocessore e i nomi non esportati dichiarati in un modulo non sono visibili e pertanto non hanno alcun effetto sulla compilazione dell'unità di conversione che importa il modulo. È possibile importare i moduli in qualsiasi ordine senza preoccuparsi delle ridefinizioni delle macro. Le dichiarazioni nell'unità di conversione di importazione non partecipano alla risoluzione dell'overload o alla ricerca del nome nel modulo importato. Dopo la compilazione di un modulo una volta, i risultati vengono archiviati in un file binario che descrive tutti i tipi, le funzioni e i modelli esportati. Il file può essere elaborato molto più velocemente rispetto a un file di intestazione e può essere riutilizzato dal compilatore ogni punto in cui il modulo viene importato in un progetto.

I moduli possono essere usati affiancati con i file di intestazione. Un C++ file di origine può importare i moduli e #include anche i file di intestazione. In alcuni casi, è possibile importare un file di intestazione come modulo anziché in modo testuale #included dal preprocessore. È consigliabile che i nuovi progetti usino i moduli anziché i file di intestazione per quanto possibile. Per i progetti esistenti più grandi in fase di sviluppo attivo, è consigliabile provare a convertire le intestazioni legacy nei moduli per verificare se si ottiene una riduzione significativa dei tempi di compilazione.

## <a name="enable-modules-in-the-microsoft-c-compiler"></a>Abilitare i moduli nel compilatore C++ Microsoft

A partire da Visual Studio 2019 versione 16,2, i moduli non sono completamente implementati C++ nel compilatore Microsoft. È possibile utilizzare la funzionalità moduli per creare moduli a partizione singola e per importare i moduli di libreria standard forniti da Microsoft. Per abilitare il supporto per i moduli, compilare con [/Experimental: module](../build/reference/experimental-module.md) e [/std: c + + Latest](../build/reference/std-specify-language-standard-version.md). In un progetto di Visual Studio fare clic con il pulsante destro del mouse sul nodo del progetto in **Esplora soluzioni** e scegliere **Proprietà**. Impostare l'elenco a discesa **configurazione** su **tutte le configurazioni**, quindi scegliere **proprietà di configurazione** > **linguaggio** **C/C++**  >  > **Abilita C++ moduli (sperimentale)** .

Un modulo e il codice che lo utilizza devono essere compilati con le stesse opzioni del compilatore.

## <a name="consume-the-c-standard-library-as-modules"></a>Utilizzare la C++ libreria standard come moduli

Sebbene non sia specificato dallo standard C++ 20, Microsoft consente di importare come moduli C++ la relativa implementazione della libreria standard. Importando C++ la libreria standard come moduli anziché #including tramite i file di intestazione, è possibile velocizzare i tempi di compilazione in base alle dimensioni del progetto. La libreria viene suddivisa in componenti nei moduli seguenti:

- STD. Regex fornisce il contenuto dell'intestazione \<Regex >
- STD. FileSystem fornisce il contenuto dell'intestazione \<file System >
- STD. memory fornisce il contenuto dell'intestazione \<memoria >
- STD. Threading fornisce il contenuto delle intestazioni \<Atomic >, \<condition_variable > \<future >, \<mutex >, \<shared_mutex > e \<thread >
- STD. Core fornisce tutti gli altri elementi C++ nella libreria standard

Per utilizzare questi moduli, è sufficiente aggiungere una dichiarazione Import all'inizio del file di codice sorgente. Ad esempio:

```cpp
import std.core;
import std.regex;
```

Per utilizzare il modulo della libreria standard Microsoft, compilare il programma con le opzioni [/EHsc](../build/reference/eh-exception-handling-model.md) e [/MD](../build/reference/md-mt-ld-use-run-time-library.md) .

## <a name="basic-example"></a>Esempio di base

Nell'esempio seguente viene illustrata una semplice definizione di modulo in un file di origine denominato **foo. IXX**. L'estensione **IXX** è necessaria per i file dell'interfaccia del modulo in Visual Studio. In questo esempio il file di interfaccia contiene la definizione della funzione e la dichiarazione. Tuttavia, le definizioni possono essere inserite anche in uno o più file distinti, come illustrato in un esempio successivo. L'istruzione **Export Module foo** indica che questo file è l'interfaccia principale per un modulo denominato `Foo`. Il modificatore **Export** in `f()` indica che questa funzione sarà visibile quando `Foo` viene importato da un altro programma o modulo. Si noti che il modulo fa riferimento a uno spazio dei nomi `Bar`.

```cpp
export module Foo;

#define ANSWER 42

namespace Bar 
{
   int f_internal() {
        return ANSWER;
      }

   export int f() {
      return f_internal();
   }
}
```

Il file **Program. cpp** utilizza la dichiarazione di **importazione** per accedere al nome esportato da `Foo`. Si noti che il nome `Bar` è visibile qui, ma non tutti i relativi membri. Si noti inoltre che la macro `ANSWER` non è visibile.

```cpp

import Foo;
import std.core;

using namespace std;

int main()
{
   cout << "The result of f() is " << Bar::f() << endl; // 42
   // int i = Bar::f_internal(); // C2039
   // int j = ANSWER; //C2065
}

```

La dichiarazione di importazione può essere visualizzata solo in ambito globale.

## <a name="implementing-modules"></a>Implementazione di moduli

È possibile creare un modulo con un unico file di interfaccia (con estensione IXX) che esporta i nomi e include le implementazioni di tutti i tipi e le funzioni. È anche possibile inserire le implementazioni in uno o più file di implementazione distinti, in modo analogo a come vengono usati i file con estensione h e cpp. La parola chiave **Export** viene utilizzata solo nel file di interfaccia. Un file di implementazione può **importare** un altro modulo, ma non può **esportare** alcun nome. I file di implementazione possono essere denominati con qualsiasi estensione. Un file di interfaccia e il set di file di implementazione che lo eseguono sono trattati come un tipo speciale di unità di conversione denominata *unità modulo*. Un nome dichiarato in un qualsiasi file di implementazione è visibile automaticamente in tutti gli altri file all'interno della stessa unità del modulo.

Per i moduli di dimensioni maggiori, è possibile suddividere il modulo in più unità di modulo denominate *partizioni*. Ogni partizione è costituita da un file di interfaccia supportato da uno o più file di implementazione. (A partire da Visual Studio 2019 versione 16,2, le partizioni non sono ancora state implementate completamente).

## <a name="modules-namespaces-and-argument-dependent-lookup"></a>Moduli, spazi dei nomi e ricerca dipendente dall'argomento

Le regole per gli spazi dei nomi nei moduli sono identiche a quelle di qualsiasi altro codice. Se viene esportata una dichiarazione all'interno di uno spazio dei nomi, viene esportato in modo implicito anche lo spazio dei nomi che lo contiene. Se uno spazio dei nomi viene esportato in modo esplicito, vengono esportate tutte le dichiarazioni all'interno di tale definizione.

Quando si esegue la ricerca dipendente dall'argomento per le risoluzioni di overload nell'unità di conversione di importazione, il compilatore considera le funzioni che sono dichiarate nella stessa unità di conversione (incluse le interfacce del modulo) come dove il tipo degli argomenti della funzione sono definiti.

### <a name="module-partitions"></a>Partizioni del modulo

> [!NOTE]
> Questa sezione è fornita per completezza. Le partizioni non sono ancora state implementate C++ nel compilatore Microsoft.

Un modulo può essere suddiviso in *partizioni*, ciascuno costituito da un file di interfaccia e da zero o più file di implementazione. Una partizione del modulo è simile a un modulo, con la differenza che condivide la proprietà di tutte le dichiarazioni nell'intero modulo. Tutti i nomi esportati dai file dell'interfaccia di partizione vengono importati ed esportati nuovamente dal file di interfaccia principale. Il nome di una partizione deve iniziare con il nome del modulo seguito da due punti. Le dichiarazioni in una delle partizioni sono visibili all'interno dell'intero modulo. Non sono necessarie particolari precauzioni per evitare errori di una regola di definizione (ODR). È possibile dichiarare un nome (funzione, classe e così via) in una partizione e definirlo in un altro. Un file di implementazione della partizione inizia come segue:

```cpp
module Foo:part1
```

e il file dell'interfaccia di partizione inizia come segue:

```cpp
export module Foo:part1
```

Per accedere alle dichiarazioni in un'altra partizione, una partizione deve importarla, ma può usare solo il nome della partizione, non il nome del modulo:

```cpp
module Foo:part2;
import :part1;
```

L'unità di interfaccia primaria deve importare ed esportare di nuovo tutti i file di partizione dell'interfaccia del modulo come segue:

```cpp
export import :part1
export import :part2
...
```

L'unità di interfaccia primaria può importare i file di implementazione della partizione, ma non è possibile esportarli perché i file non sono autorizzati a esportare i nomi. Questo consente a un modulo di preservare i dettagli di implementazione interni al modulo.

## <a name="modules-and-header-files"></a>Moduli e file di intestazione

È possibile includere i file di intestazione in un file di origine del modulo inserendo la direttiva `#include` prima della dichiarazione del modulo. Questi file sono considerati nel *frammento di modulo globale*. Un modulo può visualizzare solo i nomi del *frammento di modulo globale* presenti nelle intestazioni che include in modo esplicito. Il frammento di modulo globale contiene solo i simboli effettivamente utilizzati.

```cpp
// MyModuleA.cpp

#include "customlib.h"
#include "anotherlib.h"

import std.core;
import MyModuleB;

//... rest of file
```

È possibile usare un file di intestazione tradizionale per controllare quali moduli vengono importati:

```cpp
// MyProgram.h
import std.core;
#ifdef DEBUG_LOGGING
import std.filesystem;
#endif
```

### <a name="imported-header-files"></a>File di intestazione importati

> [!NOTE]
> Questa sezione è esclusivamente informativa. Le importazioni legacy non sono ancora implementate nel compilatore Microsoft C++ .

Alcune intestazioni sono sufficientemente autosufficienti che possono essere immesse usando la parola chiave **Import** . La differenza principale tra un'intestazione importata e un modulo importato consiste nel fatto che le definizioni del preprocessore nell'intestazione sono visibili nel programma di importazione subito dopo l'istruzione Import. (Le definizioni del preprocessore in tutti i file inclusi in tale intestazione *non* sono visibili).

```cpp
import <vector>
import "myheader.h"
```

## <a name="see-also"></a>Vedere anche

[modulo, importazione ed esportazione](import-export-module.md)
