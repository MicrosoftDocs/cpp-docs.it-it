---
title: Panoramica dei moduli in C++
ms.date: 12/13/2019
helpviewer_keywords:
- modules [C++]
- modules [C++], overview
description: I moduli in C.20 offrono un'alternativa moderna ai file di intestazione.
ms.openlocfilehash: cd45be1dee888c8caeb65b7ff002ac8fee1ecbe1
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370753"
---
# <a name="overview-of-modules-in-c"></a>Panoramica dei moduli in C++

Il programma C-20 introduce i *moduli,* una soluzione moderna per la componentizzazione delle librerie e dei programmi in C. Un modulo è un set di file di codice sorgente che vengono compilati indipendentemente dalle unità di [conversione](https://wikipedia.org/wiki/Translation_unit_(programming)) che li importano. I moduli eliminano o riducono notevolmente molti dei problemi associati all'uso dei file di intestazione e potenzialmente riducono i tempi di compilazione. Le macro, le direttive per il preprocessore e i nomi non esportati dichiarati in un modulo non sono visibili e pertanto non hanno alcun effetto sulla compilazione dell'unità di conversione che importa il modulo. È possibile importare i moduli in qualsiasi ordine senza preoccuparsi delle ridefinizioni delle macro. Le dichiarazioni nell'unità di conversione di importazione non partecipano alla risoluzione dell'overload o alla ricerca del nome nel modulo importato. Dopo che un modulo viene compilato una volta, i risultati vengono archiviati in un file binario che descrive tutti i tipi, le funzioni e i modelli esportati. Tale file può essere elaborato molto più velocemente di un file di intestazione e può essere riutilizzato dal compilatore ogni posizione in cui il modulo viene importato in un progetto.

I moduli possono essere utilizzati affiancati ai file di intestazione. È possibile importare i moduli e anche #include i file di intestazione di un file di. In alcuni casi, un file di intestazione può essere importato come modulo anziché #included testualmente dal preprocessore. È consigliabile che i nuovi progetti utilizzino il più possibile moduli anziché file di intestazione. Per i progetti esistenti più grandi in fase di sviluppo attivo, si consiglia di sperimentare con la conversione di intestazioni legacy in moduli per vedere se si ottiene una riduzione significativa dei tempi di compilazione.

## <a name="enable-modules-in-the-microsoft-c-compiler"></a>Abilitare i moduli nel compilatore Microsoft C

A partire da Visual Studio 2019 versione 16.2, i moduli non sono completamente implementati nel compilatore Microsoft C. È possibile utilizzare la funzionalità dei moduli per creare moduli a partizione singola e per importare i moduli della libreria standard forniti da Microsoft. Per abilitare il supporto per i moduli, compilare con [/experimental:module](../build/reference/experimental-module.md) e [/std:c.](../build/reference/std-specify-language-standard-version.md) In un progetto di Visual Studio fare clic con il pulsante destro del mouse sul nodo del progetto in **Esplora soluzioni** e scegliere **Proprietà**. Impostare l'elenco a discesa **Configurazione** su **Tutte le configurazioni**, quindi scegliere Proprietà > di **configurazione****C/C'** > **Lingua** > **Abilita moduli C , (sperimentale).**

Un modulo e il codice che lo utilizza devono essere compilati con le stesse opzioni del compilatore.

## <a name="consume-the-c-standard-library-as-modules"></a>Utilizzo della libreria standard di C

Anche se non è specificato dallo standard di C, Microsoft consente l'implementazione della libreria standard di C, ovvero l'importazione come moduli. Importando la libreria standard di C, come moduli anziché #including i file di intestazione, è possibile accelerare i tempi di compilazione a seconda delle dimensioni del progetto. La libreria è suddivisa nei seguenti moduli:

- std.regex fornisce il \<contenuto dell'intestazione regex>
- std.filesystem fornisce il \<contenuto del file system di intestazione>
- std.memory fornisce il \<contenuto della memoria dell'intestazione>
- std.threading fornisce il \<contenuto delle \<intestazioni \<> atomico,> \<condition_variable, \<> futuri, \<> mutex,> di shared_mutex e> di filettatura
- std.core fornisce tutto il resto nella libreria standard di C

Per utilizzare questi moduli, è sufficiente aggiungere una dichiarazione di importazione all'inizio del file di codice sorgente. Ad esempio:

```cpp
import std.core;
import std.regex;
```

Per utilizzare il modulo Microsoft Standard Library, compilare il programma con le opzioni [/EHsc](../build/reference/eh-exception-handling-model.md) e [/MD.](../build/reference/md-mt-ld-use-run-time-library.md)

## <a name="basic-example"></a>Esempio di base

Nell'esempio seguente viene illustrata una semplice definizione di modulo in un file di origine denominato **Foo.ixx**. L'estensione **.ixx** è necessaria per i file di interfaccia del modulo in Visual Studio. In questo esempio, il file di interfaccia contiene la definizione di funzione e la dichiarazione. Tuttavia, le definizioni possono essere inserite anche in uno o più file separati (come illustrato in un esempio successivo). L'istruzione **Foo** del modulo di esportazione indica che `Foo`questo file è l'interfaccia principale per un modulo denominato . Il **export** modificatore `f()` export on indica che `Foo` questa funzione sarà visibile quando viene importata da un altro programma o modulo. Si noti che `Bar`il modulo fa riferimento a uno spazio dei nomi .

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

Il file **MyProgram.cpp** utilizza la dichiarazione **import** per `Foo`accedere al nome esportato da . Si noti `Bar` che il nome è visibile qui, ma non tutti i relativi membri. Si noti `ANSWER` inoltre che la macro non è visibile.

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

## <a name="implementing-modules"></a>Implementazione dei moduli

È possibile creare un modulo con un singolo file di interfaccia (con estensione ixx) che esporta i nomi e include implementazioni di tutte le funzioni e tipi. È inoltre possibile inserire le implementazioni in uno o più file di implementazione separati, in modo simile a come vengono utilizzati i file con estensione h e cpp. La parola chiave **export** viene utilizzata solo nel file di interfaccia. Un file di implementazione può **importare** un altro modulo, ma non può **esportare** alcun nome. I file di implementazione possono essere denominati con qualsiasi estensione. Un file di interfaccia e il set di file di implementazione che lo sostolevano vengono considerati come un tipo speciale di unità di conversione denominata *unità modulo*. Un nome dichiarato in qualsiasi file di implementazione è automaticamente visibile in tutti gli altri file all'interno della stessa unità del modulo.

Per i moduli più grandi, è possibile suddividere il modulo in più unità di modulo *denominate partizioni*. Ogni partizione è costituita da un file di interfaccia supportato da uno o più file di implementazione. (A partire da Visual Studio 2019 versione 16.2, le partizioni non sono ancora completamente implementate.)

## <a name="modules-namespaces-and-argument-dependent-lookup"></a>Moduli, spazi dei nomi e ricerca dipendente da argomenti

Le regole per gli spazi dei nomi nei moduli sono le stesse di qualsiasi altro codice. Se viene esportata una dichiarazione all'interno di uno spazio dei nomi, viene esportato in modo implicito anche lo spazio dei nomi di inclusione (esclusi i membri non esportati). Se uno spazio dei nomi viene esportato in modo esplicito, vengono esportate tutte le dichiarazioni all'interno di tale definizione dello spazio dei nomi.

Quando si esegue una ricerca dipendente dagli argomenti per le risoluzioni di overload nell'unità di conversione di importazione, il compilatore considera le funzioni dichiarate nella stessa unità di conversione (incluse le interfacce del modulo) in cui sono definiti il tipo degli argomenti della funzione.

### <a name="module-partitions"></a>Partizioni dei moduli

> [!NOTE]
> Questa sezione è fornita per completezza. Le partizioni non sono ancora state implementate nel compilatore di Microsoft C.

Un modulo può essere suddiviso in *partizioni,* ognuna costituita da un file di interfaccia e da zero o più file di implementazione. Una partizione del modulo è simile a un modulo, ad eccezione del fatto che condivide la proprietà di tutte le dichiarazioni nell'intero modulo. Tutti i nomi esportati dai file di interfaccia della partizione vengono importati e riesformati dal file di interfaccia principale. Il nome di una partizione deve iniziare con il nome del modulo seguito da due punti. Le dichiarazioni in una qualsiasi delle partizioni sono visibili all'interno dell'intero modulo. Non sono necessarie precauzioni speciali per evitare errori ODR (One-Definition-Rule). È possibile dichiarare un nome (funzione, classe e così via) in una partizione e definirlo in un'altra. Un file di implementazione della partizione inizia in questo modo:A partition implementation file begins like this:

```cpp
module Foo:part1
```

e il file di interfaccia della partizione inizia in questo modo:

```cpp
export module Foo:part1
```

Per accedere alle dichiarazioni in un'altra partizione, una partizione deve importarla, ma può utilizzare solo il nome della partizione, non il nome del modulo:To access declarations in another partition, a partition must import it, but it can only use the partition name, not the module name:

```cpp
module Foo:part2;
import :part1;
```

L'unità di interfaccia primaria deve importare e riesportare tutti i file di partizione di interfaccia del modulo in questo modo:The primary interface unit must import and re-export all the module's interface partition files like this:

```cpp
export import :part1
export import :part2
...
```

L'unità di interfaccia primaria può importare i file di implementazione della partizione, ma non può esportarli perché tali file non sono autorizzati a esportare alcun nome. Ciò consente a un modulo di mantenere i dettagli di implementazione interni al modulo.

## <a name="modules-and-header-files"></a>Moduli e file di intestazione

È possibile includere i file di intestazione in un file di origine del modulo inserendo la `#include` direttiva prima della dichiarazione del modulo. Questi file sono considerati nel *frammento*del modulo globale . Un modulo può visualizzare solo i nomi nel *frammento* di modulo globale che si trovano nelle intestazioni che include in modo esplicito. Il frammento del modulo globale contiene solo i simboli effettivamente utilizzati.

```cpp
// MyModuleA.cpp

#include "customlib.h"
#include "anotherlib.h"

import std.core;
import MyModuleB;

//... rest of file
```

È possibile utilizzare un file di intestazione tradizionale per controllare quali moduli vengono importati:You can use a traditional header file to control which modules are imported:

```cpp
// MyProgram.h
import std.core;
#ifdef DEBUG_LOGGING
import std.filesystem;
#endif
```

### <a name="imported-header-files"></a>File di intestazione importati

> [!NOTE]
> Questa sezione è solo informativa. Le importazioni legacy non sono ancora state implementate nel compilatore di Microsoft C.

Alcune intestazioni sono sufficientemente autonome da consentirle di essere inserite utilizzando la parola chiave **import.** La differenza principale tra un'intestazione importata e un modulo importato è che tutte le definizioni del preprocessore nell'intestazione sono visibili nel programma di importazione immediatamente dopo l'istruzione import. Le definizioni del preprocessore in tutti i file inclusi nell'intestazione *non* sono visibili.

```cpp
import <vector>
import "myheader.h"
```

## <a name="see-also"></a>Vedere anche

[modulo, importare, esportare](import-export-module.md)
