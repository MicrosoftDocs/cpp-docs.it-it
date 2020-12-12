---
description: Altre informazioni su:/DEPENDENTS
title: /DEPENDENTS
ms.date: 07/15/2019
f1_keywords:
- /dependents
helpviewer_keywords:
- -DEPENDENTS dumpbin option
- /DEPENDENTS dumpbin option
- DEPENDENTS dumpbin option
ms.assetid: 9b31da2a-75ac-4bbf-a3f1-adf8b0ecbbb4
ms.openlocfilehash: a0354f65dea51cb5db61b62d853392e32c14a3f2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97192980"
---
# <a name="dependents"></a>/DEPENDENTS

Consente di scaricare i nomi delle dll da cui l'immagine Importa le funzioni. È possibile usare l'elenco per determinare le dll da ridistribuire con l'app o trovare il nome di una dipendenza mancante.

## <a name="syntax"></a>Sintassi

> **/DEPENDENTS**

Questa opzione si applica a tutti i file eseguibili specificati nella riga di comando. Non accetta argomenti.

## <a name="remarks"></a>Commenti

L'opzione **/Dependents** aggiunge i nomi delle dll da cui l'immagine Importa le funzioni nell'output. Questa opzione non consente di scaricare i nomi delle funzioni importate. Per visualizzare i nomi delle funzioni importate, usare l'opzione [/Imports](imports-dumpbin.md) .

Solo l'opzione [/HEADERS](headers.md) DUMPBIN può essere usata nei file generati con l'opzione del compilatore [/GL](gl-whole-program-optimization.md).

## <a name="example"></a>Esempio

Questo esempio illustra l'output di DUMPBIN dell'opzione **/Dependents** nell'eseguibile client compilato in [procedura dettagliata: creare e usare la propria libreria a collegamento dinamico](../walkthrough-creating-and-using-a-dynamic-link-library-cpp.md):

```cmd
C:\Users\username\Source\Repos\MathClient\Debug>dumpbin /DEPENDENTS MathClient.exe
Microsoft (R) COFF/PE Dumper Version 14.16.27032.1
Copyright (C) Microsoft Corporation.  All rights reserved.


Dump of file MathClient1322.exe

File Type: EXECUTABLE IMAGE

  Image has the following dependencies:

    MathLibrary.dll
    MSVCP140D.dll
    VCRUNTIME140D.dll
    ucrtbased.dll
    KERNEL32.dll

  Summary

        1000 .00cfg
        1000 .data
        2000 .idata
        1000 .msvcjmc
        3000 .rdata
        1000 .reloc
        1000 .rsrc
        8000 .text
       10000 .textbss
```

## <a name="see-also"></a>Vedi anche

[Opzioni di DUMPBIN](dumpbin-options.md)
