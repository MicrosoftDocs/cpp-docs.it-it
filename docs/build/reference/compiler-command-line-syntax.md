---
title: Sintassi della riga di comando del compilatore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- syntax, CL compiler command line
- cl.exe compiler, command-line syntax
ms.assetid: acba2c1c-0803-4a3a-af25-63e849b930a2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 18fb22ba370a447be8cb4cb2fb96633d702a1089
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45710300"
---
# <a name="compiler-command-line-syntax"></a>Sintassi della riga di comando del compilatore

La riga di comando di CL Usa la sintassi seguente:

```
CL [option...] file... [option | file]... [lib...] [@command-file] [/link link-opt...]
```

Nella tabella seguente viene descritto l'input per il comando CL.

|Voce|Significato|
|-----------|-------------|
|*Opzione*|Uno o più [opzioni CL](../../build/reference/compiler-options.md). Si noti che tutte le opzioni si applicano a tutti i file di origine specificato. Opzioni vengono specificate mediante una barra (/) o un trattino (-). Se un'opzione accetta un argomento, documenti di descrizione dell'opzione se non è consentito uno spazio tra l'opzione e gli argomenti. I nomi delle opzioni (ad eccezione dell'opzione /HELP) sono tra maiuscole e minuscole. Visualizzare [ordine delle opzioni CL](../../build/reference/order-of-cl-options.md) per altre informazioni.|
|`file`|Il nome di uno o più file di origine, i file con estensione obj o librerie. CL compila i file di origine e i nomi delle librerie e i file obj vengono passati al linker. Visualizzare [sintassi nome file di CL](../../build/reference/cl-filename-syntax.md) per altre informazioni.|
|*lib*|Uno o più nomi di libreria. CL questi nomi vengono passati al linker.|
|*file di comando*|Un file che contiene più opzioni e nomi di file. Visualizzare [file di comando di CL](../../build/reference/cl-command-files.md) per altre informazioni.|
|*collegamento di-opt*|Uno o più [opzioni del linker](../../build/reference/linker-options.md). CL passa queste opzioni al linker.|

È possibile specificare qualsiasi numero di opzioni, i nomi di file e i nomi delle librerie, purché il numero di caratteri nella riga di comando non superi il limite dettato dal sistema operativo di 1024.

Per informazioni sul valore restituito di cl.exe, vedere [Return Value of cl.exe](../../build/reference/return-value-of-cl-exe.md) .

> [!NOTE]
>  Il limite di 1024 caratteri input della riga di comando non è garantito deve rimanere uguale in versioni future di Windows.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)<br/>
[Opzioni del compilatore](../../build/reference/compiler-options.md)