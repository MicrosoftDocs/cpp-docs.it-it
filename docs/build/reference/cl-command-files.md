---
title: File di comando di CL
description: Il compilatore MSVC consente di specificare i file di comando che contengono opzioni della riga di comando.
ms.date: 07/08/2020
helpviewer_keywords:
- cl.exe compiler, command files
- command files
- command files, CL compiler
ms.assetid: ec3cea06-2af0-4fe9-a94c-119c9d31b3a9
ms.openlocfilehash: 6deab4b11dcc6c53beb5b4fa8b014a56020c3420
ms.sourcegitcommit: 80c8a512b361bd84e38958beb1a1bf6db7434021
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/09/2020
ms.locfileid: "86180942"
---
# <a name="cl-command-files"></a>File di comando di CL

Un file di comando è un file di testo che contiene le opzioni del compilatore e i nomi file. Fornisce opzioni che altrimenti verrebbero digitate nella [riga di comando](compiler-command-line-syntax.md)o specificate usando la [variabile di ambiente CL](cl-environment-variables.md). CL accetta un file di comando del compilatore come argomento, nella variabile di ambiente CL o nella riga di comando. Diversamente dalla riga di comando o dalla variabile di ambiente CL, è possibile usare più righe di opzioni e nomi di file in un file di comando.

Le opzioni e i nomi di file in un file di comando vengono elaborati quando un nome file di comando viene visualizzato all'interno della variabile di ambiente CL o nella riga di comando. Tuttavia, se l' **`/link`** opzione viene visualizzata nel file di comando, tutte le opzioni sul resto della riga vengono passate al linker. Le opzioni nelle righe successive del file di comando e le opzioni della riga di comando dopo la chiamata al file di comando vengono comunque accettate come opzioni del compilatore. Per altre informazioni su come l'ordine delle opzioni influisca sulla propria interpretazione, vedere [ordine delle opzioni CL](order-of-cl-options.md).

Un file di comando non deve contenere il comando CL. Ogni opzione deve iniziare e terminare sulla stessa riga; non è possibile usare la barra rovesciata ( **`\`** ) per combinare un'opzione tra due righe.

Un file di comando è specificato da un simbolo di chiocciola ( **`@`** ) seguito da un nome di file. Il nome file può specificare un percorso assoluto o relativo.

Se ad esempio il comando seguente si trova in un file denominato RESP:

```cmd
/Ot /link LIBC.LIB
```

e si specifica il seguente comando CL:

```cmd
CL /Ob2 @RESP MYAPP.C
```

il comando a CL è il seguente:

```cmd
CL /Ob2 /Ot MYAPP.C /link LIBC.LIB
```

Qui è possibile vedere in che modo la riga di comando e i comandi del file di comando vengono combinati in modo efficace.

## <a name="see-also"></a>Vedere anche

[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)
