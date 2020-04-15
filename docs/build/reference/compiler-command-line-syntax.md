---
title: Sintassi della riga di comando del compilatore MSVCMSVC Compiler Command-Line Syntax
ms.date: 11/04/2016
helpviewer_keywords:
- syntax, CL compiler command line
- cl.exe compiler, command-line syntax
ms.assetid: acba2c1c-0803-4a3a-af25-63e849b930a2
ms.openlocfilehash: 6a56474b537d78a3d0bea8a74d9082007cd2e295
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81320541"
---
# <a name="compiler-command-line-syntax"></a>Sintassi della riga di comando del compilatore

La riga di comando CL utilizza la sintassi seguente:

```
CL [option...] file... [option | file]... [lib...] [@command-file] [/link link-opt...]
```

Nella tabella seguente viene descritto l'input per il comando CL.

|Voce|Significato|
|-----------|-------------|
|*Opzione*|Una o più [opzioni CL](compiler-options.md). Si noti che tutte le opzioni si applicano a tutti i file di origine specificati. Le opzioni sono specificate da una barra (/) o da un trattino (-). Se un'opzione accetta un argomento, la descrizione dell'opzione indica se è consentito uno spazio tra l'opzione e gli argomenti. Per i nomi delle opzioni (ad eccezione dell'opzione /HELP) viene fatta distinzione tra maiuscole e minuscole. Per ulteriori informazioni, vedere [Ordine delle opzioni CL.](order-of-cl-options.md)|
|`file`|Nome di uno o più file di origine, file obj o librerie. CL compila i file di origine e passa i nomi dei file obj e delle librerie al linker. Per ulteriori informazioni, vedere [Sintassi dei nomi di file CL.](cl-filename-syntax.md)|
|*Lib*|Uno o più nomi di libreria. CL passa questi nomi al linker.|
|*file di comando*|File che contiene più opzioni e nomi di file. Per ulteriori informazioni, vedere [File di comando CL.](cl-command-files.md)|
|*collegamento opt*|Una o più [opzioni del linker MSVC](linker-options.md). CL passa queste opzioni al linker.|

È possibile specificare un numero qualsiasi di opzioni, nomi di file e nomi di libreria, purché il numero di caratteri nella riga di comando non superi 1024, il limite dettato dal sistema operativo.

Per informazioni sul valore restituito di cl.exe, vedere [Valore restituito di cl.exe](return-value-of-cl-exe.md) .

> [!NOTE]
> Non è garantito che il limite di input della riga di comando di 1024 caratteri rimanga invariato nelle versioni future di Windows.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)
