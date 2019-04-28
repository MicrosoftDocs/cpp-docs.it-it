---
title: CL richiama il linker
ms.date: 11/04/2016
f1_keywords:
- cl
helpviewer_keywords:
- compiling source code [C++], without linking
- invoking linker from the compiler
- LINK tool [C++], invoking from CL compiler
- cl.exe compiler [C++], compiling without linking
- cl.exe compiler [C++], controlling linker
ms.assetid: eae47ef7-09eb-40c9-b318-7c714cd452fc
ms.openlocfilehash: f8d8c5e1b0ca4d2a35a57683fea2e6de12747860
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62294538"
---
# <a name="cl-invokes-the-linker"></a>CL richiama il linker

CL richiama automaticamente il linker dopo aver compilato a meno che non viene utilizzata l'opzione/c. CL passa al linker i nomi dei file con estensione obj creati durante la compilazione e i nomi di tutti gli altri file specificati nella riga di comando. Il linker Usa le opzioni elencate nella variabile di ambiente LINK. È possibile utilizzare l'opzione /Link. per specificare le opzioni del linker nella riga di comando di CL. Le opzioni che seguono l'opzione /Link. sostituiscono quelli nella variabile di ambiente LINK. Le opzioni nella tabella seguente elimina il collegamento.

|Opzione|Descrizione|
|------------|-----------------|
|/c|La compilazione senza collegamento|
|/ /P, /EP E,|Pre-elabora senza compilare o di collegamento|
|/Zg|Genera i prototipi di funzione|
|/Zs|Controllare la sintassi|

Per ulteriori informazioni sul collegamento, vedere [opzioni del Linker MSVC](linker-options.md).

## <a name="example"></a>Esempio

Si supponga che si compila il file di origine C tre: Main. c, MOD1 e MOD2. Ogni file include una chiamata a una funzione definita in un altro file:

- Main. c chiama la funzione `func1` MOD1 e la funzione `func2` in MOD2.

- MOD1 chiama le funzioni della libreria standard `printf_s` e `scanf_s`.

- MOD2 chiama le funzioni di grafica denominate `myline` e `mycircle`, che sono definiti in una libreria denominata MYGRAPH.

Per compilare questo programma, la compilazione con la riga di comando seguente:

```
CL MAIN.c MOD1.C MOD2.C MYGRAPH.lib
```

CL innanzitutto compila i file di origine C e crea i file oggetto /all Main. obj e MOD1 MOD2. Il compilatore inserisce il nome della libreria standard in ogni file con estensione obj. Per altre informazioni, vedere [utilizzo della libreria Run-Time](md-mt-ld-use-run-time-library.md).

CL i nomi dei file con estensione obj, insieme al nome MYGRAPH, vengono passati al linker. Il linker risolve i riferimenti esterni come indicato di seguito:

1. In Main. obj, il riferimento al `func1` viene risolto utilizzando la definizione in MOD1; il riferimento a `func2` viene risolto utilizzando la definizione in MOD2.

1. In MOD1, i riferimenti a `printf_s` e `scanf_s` con le definizioni nella libreria che consente di trovare il linker denominata all'interno di MOD1 vengono risolti.

1. In MOD2, i riferimenti a `myline` e `mycircle` con le definizioni nella MYGRAPH vengono risolti.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](compiler-command-line-syntax.md)
