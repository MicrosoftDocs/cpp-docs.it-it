---
title: File di comando di CL
ms.date: 11/04/2016
helpviewer_keywords:
- cl.exe compiler, command files
- command files
- command files, CL compiler
ms.assetid: ec3cea06-2af0-4fe9-a94c-119c9d31b3a9
ms.openlocfilehash: 1dc2d6bffe4d0681a04b875383215a0bbfc1a720
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79440259"
---
# <a name="cl-command-files"></a>File di comando di CL

Un file di comando è un file di testo che contiene le opzioni e i nomi file che altrimenti verrebbero digitati nella [riga di comando](compiler-command-line-syntax.md) o si specificano usando la [variabile di ambiente CL](cl-environment-variables.md). CL accetta un file di comando del compilatore come argomento nella variabile di ambiente CL o nella riga di comando. A differenza della riga di comando o della variabile di ambiente CL, un file di comando consente di utilizzare più righe di opzioni e nomi file.

Le opzioni e i nomi di file in un file di comando vengono elaborati in base alla posizione di un nome file di comando nella variabile di ambiente CL o nella riga di comando. Tuttavia, se l'opzione/link viene visualizzata nel file di comando, tutte le opzioni nel resto della riga vengono passate al linker. Le opzioni nelle righe successive nel file di comando e le opzioni della riga di comando dopo la chiamata al file di comando sono comunque accettate come opzioni del compilatore. Per altre informazioni su come l'ordine delle opzioni influisca sulla propria interpretazione, vedere [ordine delle opzioni CL](order-of-cl-options.md).

Un file di comando non deve contenere il comando CL. Ogni opzione deve iniziare e terminare sulla stessa riga; non è possibile usare la barra rovesciata ( **\\** ) per combinare un'opzione tra due righe.

Un file di comando è specificato da un simbolo di chiocciola ( **\@** ) seguito da un nome file; il nome file può specificare un percorso assoluto o relativo.

Se ad esempio il comando seguente si trova in un file denominato RESP:

```
/Og /link LIBC.LIB
```

e si specifica il seguente comando CL:

```
CL /Ob2 @RESP MYAPP.C
```

il comando a CL è il seguente:

```
CL /Ob2 /Og MYAPP.C /link LIBC.LIB
```

Si noti che la riga di comando e i comandi del file di comando vengono combinati in modo efficace.

## <a name="see-also"></a>Vedere anche

[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)
