---
description: 'Altre informazioni su: sintassi Command-Line del compilatore'
title: Sintassi Command-Line del compilatore MSVC
ms.date: 11/04/2016
helpviewer_keywords:
- syntax, CL compiler command line
- cl.exe compiler, command-line syntax
ms.assetid: acba2c1c-0803-4a3a-af25-63e849b930a2
ms.openlocfilehash: 91340aa543f0e79d3071b93921742b8147918b2e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97182216"
---
# <a name="compiler-command-line-syntax"></a>Sintassi della riga di comando del compilatore

La riga di comando CL usa la sintassi seguente:

```
CL [option...] file... [option | file]... [lib...] [@command-file] [/link link-opt...]
```

La tabella seguente descrive l'input per il comando CL.

|Voce|Significato|
|-----------|-------------|
|*opzione*|Una o più [opzioni CL](compiler-options.md). Si noti che tutte le opzioni si applicano a tutti i file di origine specificati. Le opzioni vengono specificate da una barra (/) o da un trattino (-). Se un'opzione accetta un argomento, la descrizione dell'opzione documenta se è consentito uno spazio tra l'opzione e gli argomenti. I nomi delle opzioni (ad eccezione dell'opzione/HELP) fanno distinzione tra maiuscole e minuscole. Per ulteriori informazioni, vedere l' [ordine delle opzioni CL](order-of-cl-options.md) .|
|`file`|Nome di uno o più file di origine, file con estensione obj o librerie. CL compila i file di origine e passa i nomi dei file e delle librerie obj al linker. Per ulteriori informazioni, vedere la [sintassi del nome file CL](cl-filename-syntax.md) .|
|*lib*|Uno o più nomi di librerie. CL passa questi nomi al linker.|
|*file di comando*|Un file che contiene più opzioni e nomi di file. Per ulteriori informazioni, vedere [file di comando CL](cl-command-files.md) .|
|*collegamento-opz*|Una o più [Opzioni del linker MSVC](linker-options.md). CL passa queste opzioni al linker.|

È possibile specificare un numero qualsiasi di opzioni, nomi di file e nomi di librerie, purché il numero di caratteri nella riga di comando non superi 1024, il limite stabilito dal sistema operativo.

Per informazioni sul valore restituito di cl.exe, vedere [valore restituito di cl.exe](return-value-of-cl-exe.md) .

> [!NOTE]
> Non è garantito che il limite di input della riga di comando di 1024 caratteri rimanga invariato nelle versioni successive di Windows.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)
