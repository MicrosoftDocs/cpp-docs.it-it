---
title: Sintassi della riga di comando del compilatore MSVC
ms.date: 11/04/2016
helpviewer_keywords:
- syntax, CL compiler command line
- cl.exe compiler, command-line syntax
ms.assetid: acba2c1c-0803-4a3a-af25-63e849b930a2
ms.openlocfilehash: 5cee76d5c053dbcfef33a191dc38a958338e4a82
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57821493"
---
# <a name="compiler-command-line-syntax"></a>Sintassi della riga di comando del compilatore

La riga di comando di CL Usa la sintassi seguente:

```
CL [option...] file... [option | file]... [lib...] [@command-file] [/link link-opt...]
```

Nella tabella seguente viene descritto l'input per il comando CL.

|Voce|Significato|
|-----------|-------------|
|*option*|Uno o più [opzioni CL](compiler-options.md). Si noti che tutte le opzioni si applicano a tutti i file di origine specificato. Opzioni vengono specificate mediante una barra (/) o un trattino (-). Se un'opzione accetta un argomento, documenti di descrizione dell'opzione se non è consentito uno spazio tra l'opzione e gli argomenti. I nomi delle opzioni (ad eccezione dell'opzione /HELP) sono tra maiuscole e minuscole. Visualizzare [ordine delle opzioni CL](order-of-cl-options.md) per altre informazioni.|
|`file`|Il nome di uno o più file di origine, i file con estensione obj o librerie. CL compila i file di origine e i nomi delle librerie e i file obj vengono passati al linker. Visualizzare [sintassi nome file di CL](cl-filename-syntax.md) per altre informazioni.|
|*lib*|Uno o più nomi di libreria. CL questi nomi vengono passati al linker.|
|*command-file*|Un file che contiene più opzioni e nomi di file. Visualizzare [file di comando di CL](cl-command-files.md) per altre informazioni.|
|*link-opt*|Uno o più [opzioni del Linker MSVC](linker-options.md). CL passa queste opzioni al linker.|

È possibile specificare qualsiasi numero di opzioni, i nomi di file e i nomi delle librerie, purché il numero di caratteri nella riga di comando non superi il limite dettato dal sistema operativo di 1024.

Per informazioni sul valore restituito di cl.exe, vedere [Return Value of cl.exe](return-value-of-cl-exe.md) .

> [!NOTE]
>  Il limite di 1024 caratteri input della riga di comando non è garantito deve rimanere uguale in versioni future di Windows.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)
