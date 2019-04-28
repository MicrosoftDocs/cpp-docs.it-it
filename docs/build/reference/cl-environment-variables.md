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
ms.openlocfilehash: a15bedc0a5aa8215356a98c3635a2edd1f3cfc5f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62294473"
---
# <a name="cl-environment-variables"></a>Variabili di ambiente CL

Lo strumento CL usa le seguenti variabili di ambiente:

- CL e \_CL\_, se definito. Lo strumento CL antepone le opzioni e gli argomenti definiti nella variabile di ambiente CL agli argomenti della riga di comando e accoda le opzioni e gli argomenti definiti nella \_CL\_, prima dell'elaborazione.

- INCLUDE, che deve puntare alla sottodirectory \include dell'installazione di Visual C++.

- LIBPATH, che specifica le directory per cercare i file di metadati a cui fa riferimento [#using](../../preprocessor/hash-using-directive-cpp.md). Per altre informazioni su LIBPATH, vedere `#using`.

È possibile impostare il CL oppure \_CL\_ variabile di ambiente utilizzando la sintassi seguente:

> SET CL=[ [*option*] ... [*file*] ...] [/link *link-opt* ...] SET \_CL\_=[ [*option*] ... [*file*] ...] [/link *link-opt* ...]

Per informazioni dettagliate sugli argomenti di CL e \_CL\_ variabili di ambiente, vedere [sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md).

È possibile usare queste variabili di ambiente per definire i file e le opzioni usate più spesso e usare la riga di comando per definire specifici file e opzioni per scopi specifici. CL e \_CL\_ le variabili di ambiente sono limitate a 1024 caratteri (il limite di input della riga di comando).

Non è possibile usare l'opzione /D per definire un simbolo che usa un segno di uguale (=). È possibile sostituire il cancelletto (#) con un segno di uguale. In questo modo, è possibile usare il CL o \_CL\_ variabili di ambiente per definire le costanti del preprocessore con valori espliciti, ad esempio `/DDEBUG#1` per definire `DEBUG=1`.

Per informazioni correlate, vedere [impostare le variabili di ambiente](../setting-the-path-and-environment-variables-for-command-line-builds.md).

## <a name="examples"></a>Esempi

Di seguito è riportato un esempio di impostazione della variabile di ambiente CL:

> SET CL=/Zp2 /Ox /I\INCLUDE\MYINCLS \LIB\BINMODE.OBJ

Quando è impostata questa variabile di ambiente, se si immette `CL INPUT.C` nella riga di comando, questo è il comando effettivo:

> CL /Zp2 /Ox /I\INCLUDE\MYINCLS \LIB\BINMODE.OBJ INPUT.C

Nell'esempio seguente un normale comando CL compila i file di origine FILE1.c e FILE2.c e quindi collega i file oggetto FILE1.obj, FILE2.obj e FILE3.obj:

> SET CL=FILE1.C FILE2.C SET \_CL\_=FILE3.OBJ CL

Ha lo stesso effetto della riga di comando seguente:

> CL FILE1. FILE2 C. FILE3 C. OBJ

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del compilatore](compiler-command-line-syntax.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)
