---
title: Variabili di ambiente CL
ms.date: 11/04/2016
f1_keywords:
- cl
helpviewer_keywords:
- INCLUDE environment variable
- cl.exe compiler, environment variables
- LIBPATH environment variable
- environment variables, CL compiler
ms.assetid: 2606585b-a681-42ee-986e-1c9a2da32108
ms.openlocfilehash: 4c9643e977c707f7e7fd99ccc48d0475e2dc7837
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50535773"
---
# <a name="cl-environment-variables"></a>Variabili di ambiente CL

Lo strumento CL usa le seguenti variabili di ambiente:

- CL e \_CL\_, se definito. Lo strumento CL antepone le opzioni e gli argomenti definiti nella variabile di ambiente CL agli argomenti della riga di comando e accoda le opzioni e gli argomenti definiti nella \_CL\_, prima dell'elaborazione.

- INCLUDE, che deve puntare alla sottodirectory \include dell'installazione di Visual C++.

- LIBPATH, che specifica le directory per cercare i file di metadati a cui fa riferimento [#using](../../preprocessor/hash-using-directive-cpp.md). Per altre informazioni su LIBPATH, vedere `#using`.

È possibile impostare il CL oppure \_CL\_ variabile di ambiente utilizzando la sintassi seguente:

> IMPOSTARE CL = [[*opzione*]... [*file*]...] [/link *collegamento di-opt* ...] IMPOSTARE \_CL\_= [[*opzione*]... [*file*]...] [/link *collegamento di-opt* ...]

Per informazioni dettagliate sugli argomenti di CL e \_CL\_ variabili di ambiente, vedere [sintassi della riga di comando del compilatore](../../build/reference/compiler-command-line-syntax.md).

È possibile usare queste variabili di ambiente per definire i file e le opzioni usate più spesso e usare la riga di comando per definire specifici file e opzioni per scopi specifici. CL e \_CL\_ le variabili di ambiente sono limitate a 1024 caratteri (il limite di input della riga di comando).

Non è possibile usare l'opzione /D per definire un simbolo che usa un segno di uguale (=). È possibile sostituire il cancelletto (#) con un segno di uguale. In questo modo, è possibile usare il CL o \_CL\_ variabili di ambiente per definire le costanti del preprocessore con valori espliciti, ad esempio `/DDEBUG#1` per definire `DEBUG=1`.

Per informazioni correlate, vedere [impostare le variabili di ambiente](../../build/setting-the-path-and-environment-variables-for-command-line-builds.md).

## <a name="examples"></a>Esempi

Di seguito è riportato un esempio di impostazione della variabile di ambiente CL:

> IMPOSTARE CL = / Zp2 /Ox /I\INCLUDE\MYINCLS \LIB\BINMODE. OBJ

Quando è impostata questa variabile di ambiente, se si immette `CL INPUT.C` nella riga di comando, questo è il comando effettivo:

> CL /Zp2 /Ox /I\INCLUDE\MYINCLS \LIB\BINMODE. INPUT OBJ. C

Nell'esempio seguente un normale comando CL compila i file di origine FILE1.c e FILE2.c e quindi collega i file oggetto FILE1.obj, FILE2.obj e FILE3.obj:

> SET CL = FILE1. FILE2 C. SET DI C \_CL\_= FILE3. OBJ CL

Ha lo stesso effetto della riga di comando seguente:

> CL FILE1. FILE2 C. FILE3 C. OBJ

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)<br/>
[Opzioni del compilatore](../../build/reference/compiler-options.md)
