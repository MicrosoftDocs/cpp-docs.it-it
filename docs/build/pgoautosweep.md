---
title: PgoAutoSweep
ms.date: 07/02/2019
f1_keywords:
- PgoAutoSweep
- PogoAutoSweepA
- PogoAutoSweepW
ms.openlocfilehash: 57bcd1b2e9f0a3312867c4373fd1e50bcf91576e
ms.sourcegitcommit: 9b904e490b1e262293a602bd1291a8f3045e755b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/03/2019
ms.locfileid: "67552248"
---
# <a name="pgoautosweep"></a>PgoAutoSweep

`PgoAutoSweep`Salva le informazioni del contatore del profilo corrente in un file e quindi Reimposta i contatori. Utilizzare la funzione durante il training PGO per scrivere tutti i dati di profilo dal programma in esecuzione in un `.pgc` file per un uso successivo nella compilazione di ottimizzazione.

## <a name="syntax"></a>Sintassi

```cpp
void PgoAutoSweep(const char* name);    // ANSI/MBCS
void PgoAutoSweep(const wchar_t* name); // UNICODE
```

### <a name="parameters"></a>Parametri

*name*<br/>
Stringa di identificazione per il file `.pgc` salvato.

## <a name="remarks"></a>Osservazioni

È possibile chiamare `PgoAutoSweep` dall'applicazione per salvare e reimpostare i dati del profilo in qualsiasi momento durante l'esecuzione dell'applicazione. In una compilazione instrumentata `PgoAutoSweep` acquisisce i dati di profilatura correnti, li salva in un file e Reimposta i contatori del profilo. Equivale a chiamare il comando [pgosweep](pgosweep.md) in un punto specifico dell'eseguibile. In una compilazione ottimizzata `PgoAutoSweep` , è un no-op.

I dati del contatore del profilo salvato vengono inseriti in un file denominato *base_name*-*nome*. *value*. PGC, dove *base_name* è il nome di base del file eseguibile, il *nome* è il `PgoAutoSweep`parametro passato a e il *valore* è un valore univoco, in genere un numero a incremento progressivo costante, per evitare conflitti di nomi di file.

I `.pgc` file creati da `PgoAutoSweep` devono essere Uniti in un `.pgd` file da utilizzare per creare un eseguibile ottimizzato. Per eseguire il merge, è possibile usare il comando [pgomgr](pgomgr.md) .

È possibile passare il nome del file Unito `.pgd` al linker durante la compilazione di ottimizzazione usando l'argomento **PGD =**_filename_ per l'opzione del linker [/USEPROFILE](reference/useprofile.md) oppure usando l'opzione del linker **/PGD** deprecata. Se i `.pgc` file vengono uniti in un file denominato *base_name*. PGD, non è necessario specificare il nome del file nella riga di comando, perché il linker preleva il nome del file per impostazione predefinita.

La `PgoAutoSweep` funzione mantiene l'impostazione di thread safety specificata quando viene creata la compilazione instrumentata. Se si usa l'impostazione predefinita o si specifica l'argomento **noexact** per l'opzione del linker [/GENPROFILE o/FASTGENPROFILE](reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md) , `PgoAutoSweep` le chiamate a non sono thread-safe. L'argomento **esatto** consente di creare un eseguibile instrumentato thread-safe e più accurato, ma più lento.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`PgoAutoSweep`|\<> pgobootrun. h|

Il file eseguibile deve includere il file pgobootrun. lib nelle librerie collegate. Questo file è incluso nell'installazione di Visual Studio, nella directory delle librerie VC per ogni architettura supportata.

## <a name="example"></a>Esempio

Nell'esempio seguente viene `PgoAutoSweep` usato per creare `.pgc` due file in punti diversi durante l'esecuzione. Il primo contiene i dati che descrivono il comportamento `count` di runtime fino a quando non è uguale a 3 e il secondo contiene i dati raccolti dopo questo punto fino a immediatamente prima della chiusura dell'applicazione.

```cpp
// pgoautosweep.cpp
// Compile by using: cl /c /GL /W4 /EHsc /O2 pgoautosweep.cpp
// Link to instrument: link /LTCG /genprofile pgobootrun.lib pgoautosweep.obj
// Run to generate data: pgoautosweep
// Merge data by using command line pgomgr tool:
// pgomgr /merge pgoautosweep-func1!1.pgc pgoautosweep-func2!1.pgc pgoautosweep.pgd
// Link to optimize: link /LTCG /useprofile pgobootrun.lib pgoautosweep.obj

#include <iostream>
#include <windows.h>
#include <pgobootrun.h>

void func2(int count)
{
    std::cout << "hello from func2 " << count << std::endl;
    Sleep(2000);
}

void func1(int count)
{
    std::cout << "hello from func1 " << count << std::endl;
    Sleep(2000);
}

int main()
{
    int count = 10;
    while (count--)
    {
        if (count < 3)
            func2(count);
        else
        {
            func1(count);
            if (count == 3)
            {
                PgoAutoSweep("func1");
            }
        }
    }
    PgoAutoSweep("func2");
}
```

In un prompt dei comandi per gli sviluppatori compilare il codice in un file oggetto usando questo comando:

`cl /c /GL /W4 /EHsc /O2 pgoautosweep.cpp`

Quindi generare una compilazione instrumentata per il training usando questo comando:

`link /LTCG /genprofile pgobootrun.lib pgoautosweep.obj`

Eseguire l'eseguibile instrumentato per acquisire i dati di training. L'output dei dati dalle chiamate a `PgoAutoSweep` viene salvato nei file denominati PgoAutoSweep-func1! 1. PGC e PgoAutoSweep-Func2! 1. pgc. L'output del programma dovrebbe essere simile al seguente:

```Output
hello from func1 9
hello from func1 8
hello from func1 7
hello from func1 6
hello from func1 5
hello from func1 4
hello from func1 3
hello from func2 2
hello from func2 1
hello from func2 0
```

Unire i dati salvati in un database di training del profilo eseguendo il comando **pgomgr** :

`pgoautosweep-func1!1.pgc pgoautosweep-func2!1.pgc`

L'output di questo comando ha un aspetto simile al seguente:

```Output
Microsoft (R) Profile Guided Optimization Manager 14.13.26128.0
Copyright (C) Microsoft Corporation. All rights reserved.

Merging pgoautosweep-func1!1.pgc
pgoautosweep-func1!1.pgc: Used  3.8% (22304 / 589824) of total space reserved.  0.0% of the counts were dropped due to overflow.
Merging pgoautosweep-func2!1.pgc
pgoautosweep-func2!1.pgc: Used  3.8% (22424 / 589824) of total space reserved.  0.0% of the counts were dropped due to overflow.
```

È ora possibile usare questi dati di training per generare una compilazione ottimizzata. Usare questo comando per compilare l'eseguibile ottimizzato:

`link /LTCG /useprofile pgobootrun.lib pgoautosweep.obj`

```Output
Microsoft (R) Incremental Linker Version 14.13.26128.0
Copyright (C) Microsoft Corporation.  All rights reserved.

Merging pgoautosweep!1.pgc
pgoautosweep!1.pgc: Used  3.9% (22904 / 589824) of total space reserved.  0.0% of the counts were dropped due to overflow.
  Reading PGD file 1: pgoautosweep.pgd
Generating code

0 of 0 ( 0.0%) original invalid call sites were matched.
0 new call sites were added.
294 of 294 (100.00%) profiled functions will be compiled for speed
348 of 1239 inline instances were from dead/cold paths
294 of 294 functions (100.0%) were optimized using profile data
16870 of 16870 instructions (100.0%) were optimized using profile data
Finished generating code
```

## <a name="see-also"></a>Vedere anche

[Ottimizzazioni guidate da profilo (PGO)](profile-guided-optimizations.md)<br/>
[pgosweep](pgosweep.md)<br/>
