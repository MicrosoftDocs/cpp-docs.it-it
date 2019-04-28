---
title: PgoAutoSweep
ms.date: 03/14/2018
f1_keywords:
- PgoAutoSweep
- PogoAutoSweepA
- PogoAutoSweepW
ms.openlocfilehash: 2d9804e5ce90663d44ac389ab4f71d10290e6470
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62295335"
---
# <a name="pgoautosweep"></a>PgoAutoSweep

`PgoAutoSweep` Salva le informazioni sul contatore del profilo corrente in un file e quindi Reimposta i contatori. Utilizzare la funzione durante l'ottimizzazione PGO corsi di formazione scrivere tutti i dati del profilo dal programma in esecuzione in un file. pgc per un uso successivo nella compilazione di ottimizzazione.

## <a name="syntax"></a>Sintassi

```cpp
void PgoAutoSweep(const char* name);    // ANSI/MBCS
void PgoAutoSweep(const wchar_t* name); // UNICODE
```

### <a name="parameters"></a>Parametri

*name*<br/>
Una stringa di identificazione per il file. pgc salvato.

## <a name="remarks"></a>Note

È possibile chiamare `PgoAutoSweep` dall'applicazione per salvare e ripristinare i dati di profilo in qualsiasi momento durante l'esecuzione dell'applicazione. In una compilazione instrumentata, `PgoAutoSweep` acquisisce i dati di profilatura correnti, lo salva in un file e reimposta i contatori di profilo. È l'equivalente della chiamata al metodo il [pgosweep](pgosweep.md) comando in un momento specifico nel file eseguibile. In una build ottimizzata, `PgoAutoSweep` è no-op.

I dati del contatore profilo salvato viene inseriti in un file denominato *base_name*-*name*! *valore*pgc, dove *base_name* è il nome del file eseguibile, di base *nome* è il parametro passato alla `PgoAutoSweep`, e *valore* è un valore univoco, in genere un numero a incremento progressivo costante, per evitare conflitti tra nomi di file.

I file. pgc creati da `PgoAutoSweep` devono essere uniti in un file PDG per essere utilizzato per creare un file eseguibile ottimizzato. È possibile usare la [pgomgr](pgomgr.md) comando per eseguire il merge.

È possibile passare il nome del file pgd unito al linker durante la compilazione di ottimizzazione tramite il **PGD =**_filename_ argomento per il [/USEPROFILE](reference/useprofile.md) l'opzione del linker, o da usando deprecate **/PGD** l'opzione del linker. Se unire i file. pgc in un file denominato *base_name*pgd, non occorre specificare il nome del file nella riga di comando, perché il linker acquisisce il nome del file per impostazione predefinita.

Il `PgoAutoSweep` funzione mantiene l'impostazione di thread safety specificati quando viene creata la compilazione instrumentata. Se si usa l'impostazione predefinita o specificare il **NOEXACT** argomento per il [/GENPROFILE o /fastgenprofile.]() l'opzione del linker, le chiamate a `PgoAutoSweep` non sono thread-safe. Il **EXACT** argomento crea un oggetto thread-safe e più accurato, ma eseguibile più lento, instrumentato.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`PgoAutoSweep`|\<pgobootrun.h>|

Il file eseguibile deve includere il file pgobootrun.lib nelle librerie collegate. Questo file è incluso nell'installazione di Visual Studio, nella directory delle librerie VC per ogni architettura supportata.

## <a name="example"></a>Esempio

L'esempio seguente usa `PgoAutoSweep` creare due. File PGC in momenti diversi durante l'esecuzione. Il primo contiene dati che descrive il comportamento di runtime fino `count` è uguale a 3, e il secondo contiene i dati raccolti dopo questo punto fino a quando non appena prima della chiusura dell'applicazione.

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

In un prompt dei comandi per gli sviluppatori, compilare il codice in un file oggetto usando questo comando:

`cl /c /GL /W4 /EHsc /O2 pgoautosweep.cpp`

Generare quindi una compilazione instrumentata per il training usando questo comando:

`link /LTCG /genprofile pgobootrun.lib pgoautosweep.obj`

Eseguire l'eseguibile instrumentato per acquisire i dati di training. L'output dei dati dalle chiamate alla `PgoAutoSweep` viene salvata in file denominati pgoautosweep func1! pgoautosweep func2 e 1. 1. Durante l'esecuzione, l'output del programma dovrebbe essere simile al seguente:

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

Unire i dati salvati in un database di addestramento profilo eseguendo il **pgomgr** comando:

`pgoautosweep-func1!1.pgc pgoautosweep-func2!1.pgc`

L'output di questo comando è simile al seguente:

```Output
Microsoft (R) Profile Guided Optimization Manager 14.13.26128.0
Copyright (C) Microsoft Corporation. All rights reserved.

Merging pgoautosweep-func1!1.pgc
pgoautosweep-func1!1.pgc: Used  3.8% (22304 / 589824) of total space reserved.  0.0% of the counts were dropped due to overflow.
Merging pgoautosweep-func2!1.pgc
pgoautosweep-func2!1.pgc: Used  3.8% (22424 / 589824) of total space reserved.  0.0% of the counts were dropped due to overflow.
```

A questo punto è possibile utilizzare questi dati di training per generare una build ottimizzata. Usare questo comando per compilare l'eseguibile ottimizzato:

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

[Ottimizzazioni PGO](profile-guided-optimizations.md)<br/>
[pgosweep](pgosweep.md)<br/>
