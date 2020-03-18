---
title: CL richiama il linker
ms.date: 11/04/2016
helpviewer_keywords:
- compiling source code [C++], without linking
- invoking linker from the compiler
- LINK tool [C++], invoking from CL compiler
- cl.exe compiler [C++], compiling without linking
- cl.exe compiler [C++], controlling linker
ms.assetid: eae47ef7-09eb-40c9-b318-7c714cd452fc
ms.openlocfilehash: 1f9bb466ae89b8e3491b027a98b28935e7c8b523
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79440190"
---
# <a name="cl-invokes-the-linker"></a>CL richiama il linker

CL richiama automaticamente il linker dopo la compilazione, a meno che non venga utilizzata l'opzione/c. CL passa al linker i nomi dei file con estensione obj creati durante la compilazione e i nomi di tutti gli altri file specificati nella riga di comando. Il linker usa le opzioni elencate nella variabile di ambiente LINK. È possibile usare l'opzione/link per specificare le opzioni del linker nella riga di comando CL. Le opzioni che seguono l'opzione/link eseguono l'override di quelle nella variabile di ambiente LINK. Le opzioni nella tabella seguente evitano il collegamento.

|Opzione|Descrizione|
|------------|-----------------|
|/C|Compila senza collegamento|
|/E,/EP,/P|Pre-elabora senza compilazione o collegamento|
|/Zg|Generare prototipi di funzione|
|/Zs|Controllare la sintassi|

Per ulteriori informazioni sul collegamento, vedere [Opzioni del linker MSVC](linker-options.md).

## <a name="example"></a>Esempio

Si supponga di dover compilare tre file di origine C: MAIN. c, MOD1. c e MOD2. c. Ogni file include una chiamata a una funzione definita in un file diverso:

- MAIN. c chiama la funzione `func1` in MOD1. c e la funzione `func2` in MOD2. c.

- MOD1. c chiama le funzioni della libreria standard `printf_s` e `scanf_s`.

- MOD2. c chiama funzioni grafiche denominate `myline` e `mycircle`, definite in una libreria denominata GRAPH. lib.

Per compilare il programma, compilare con la riga di comando seguente:

```
CL MAIN.c MOD1.C MOD2.C MYGRAPH.lib
```

CL compila prima di tutto i file di origine C e crea i file oggetto MAIN. obj, MOD1. obj e MOD2. obj. Il compilatore inserisce il nome della libreria standard in ogni file obj. Per ulteriori informazioni, vedere [utilizzare la libreria di runtime](md-mt-ld-use-run-time-library.md).

CL passa i nomi dei file con estensione obj, insieme al nome GRAPH. lib, al linker. Il linker risolve i riferimenti esterni come segue:

1. In MAIN. obj il riferimento a `func1` viene risolto utilizzando la definizione in MOD1. obj; il riferimento a `func2` viene risolto utilizzando la definizione in MOD2. obj.

1. In MOD1. obj i riferimenti a `printf_s` e `scanf_s` vengono risolti usando le definizioni nella libreria che il linker trova in MOD1. obj.

1. In MOD2. obj i riferimenti a `myline` e `mycircle` vengono risolti utilizzando le definizioni in GRAPH. lib.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](compiler-command-line-syntax.md)
