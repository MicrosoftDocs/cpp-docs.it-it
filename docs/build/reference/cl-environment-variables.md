---
title: Variabili di ambiente CL
ms.date: 06/06/2019
helpviewer_keywords:
- INCLUDE environment variable
- cl.exe compiler, environment variables
- LIBPATH environment variable
- environment variables, CL compiler
ms.assetid: 2606585b-a681-42ee-986e-1c9a2da32108
ms.openlocfilehash: 4d6b1982b1e544459a025d6cb7bee75666e7130e
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79440253"
---
# <a name="cl-environment-variables"></a>Variabili di ambiente CL

Lo strumento CL usa le seguenti variabili di ambiente:

- CL e \_CL_, se definito. Lo strumento CL antepone le opzioni e gli argomenti definiti nella variabile di ambiente CL agli argomenti della riga di comando e accoda le opzioni e gli argomenti definiti in \_CL_, prima dell'elaborazione.

- INCLUDERE, che deve puntare alla sottodirectory \include dell'installazione di Visual Studio.

- LIBPATH, che specifica le directory in cui cercare i file di metadati a cui si fa riferimento [#using](../../preprocessor/hash-using-directive-cpp.md). Per ulteriori informazioni su LIBPATH, vedere [#using](../../preprocessor/hash-using-directive-cpp.md).

È possibile impostare la variabile di ambiente CL o \_CL_ usando la sintassi seguente:

> SET CL = [[*opzione*]... [*file*]...] [ *collegamento/link-opz* ...] \
> SET \_CL\_= [[*opzione*]... [*file*]...] [ *collegamento/link-opz* ...]

Per informazioni dettagliate sugli argomenti per le variabili di ambiente CL e \_CL_, vedere [sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md).

È possibile usare queste variabili di ambiente per definire i file e le opzioni usati più di frequente. Usare quindi la riga di comando per assegnare più file e opzioni a CL per scopi specifici. Le variabili di ambiente CL e \_CL_ sono limitate a 1024 caratteri (limite di input della riga di comando).

Non è possibile usare l'opzione [/d](d-preprocessor-definitions.md) per definire un simbolo che usa un segno di uguale ( **=** ). È invece possibile usare il simbolo di cancelletto ( **#** ) per un segno di uguale. In questo modo, è possibile usare le variabili di ambiente CL o \_CL_ per definire le costanti del preprocessore con valori espliciti, ad esempio `/DDEBUG#1` per definire `DEBUG=1`.

Per informazioni correlate, vedere [impostare le variabili di ambiente](../setting-the-path-and-environment-variables-for-command-line-builds.md).

## <a name="examples"></a>Esempi

Il comando seguente è un esempio di impostazione della variabile di ambiente CL:

> SET CL =/Zp2/Ox/I\INCLUDE\MYINCLS \LIB\BINMODE. OBJ

Quando viene impostata la variabile di ambiente CL, se si immette `CL INPUT.C` dalla riga di comando, il comando effettivo diventa:

> CL/Zp2/Ox/I\INCLUDE\MYINCLS \LIB\BINMODE. INPUT OBJ. C

Nell'esempio seguente un normale comando CL compila i file di origine FILE1.c e FILE2.c e quindi collega i file oggetto FILE1.obj, FILE2.obj e FILE3.obj:

> IMPOSTARE CL = FILE1. C FILE2. C
> IMPOSTARE \_CL_ = FILE3. OBJ
> CL

Queste variabili di ambiente fanno in modo che la chiamata a CL abbia lo stesso effetto della riga di comando seguente:

> CL FILE1. C FILE2. C FILE3. OBJ

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del compilatore](compiler-command-line-syntax.md) \
[Opzioni del compilatore MSVC](compiler-options.md)
