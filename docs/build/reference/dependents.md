---
title: /DEPENDENTS
ms.date: 07/15/2019
f1_keywords:
- /dependents
helpviewer_keywords:
- -DEPENDENTS dumpbin option
- /DEPENDENTS dumpbin option
- DEPENDENTS dumpbin option
ms.assetid: 9b31da2a-75ac-4bbf-a3f1-adf8b0ecbbb4
ms.openlocfilehash: 88f0062a6bbca3f9199a12f739c2ade5f9d912cd
ms.sourcegitcommit: 7f5b29e24e1be9b5985044a030977485fea0b50c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/17/2019
ms.locfileid: "68299751"
---
# <a name="dependents"></a>/DEPENDENTS

Consente di scaricare i nomi delle dll da cui l'immagine Importa le funzioni. È possibile usare l'elenco per determinare le dll da ridistribuire con l'app o trovare il nome di una dipendenza mancante.

## <a name="syntax"></a>Sintassi

> **/DEPENDENTS**

Questa opzione si applica a tutti i file eseguibili specificati nella riga di comando. Non accetta argomenti.

## <a name="remarks"></a>Note

L'opzione **/Dependents** aggiunge i nomi delle dll da cui l'immagine Importa le funzioni nell'output. Questa opzione non consente di scaricare i nomi delle funzioni importate. Per visualizzare i nomi delle funzioni importate, usare l'opzione [/Imports](imports-dumpbin.md) .

Solo l'opzione [/HEADERS](headers.md) DUMPBIN può essere usata nei file generati con l'opzione del compilatore [/GL](gl-whole-program-optimization.md).

## <a name="example"></a>Esempio

Questo esempio illustra l'output di DUMPBIN dell'opzione **/Dependents** nell'eseguibile client compilato in [procedura dettagliata: Creare e usare la propria libreria](../walkthrough-creating-and-using-a-dynamic-link-library-cpp.md)a collegamento dinamico:

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

## <a name="see-also"></a>Vedere anche

[Opzioni di DUMPBIN](dumpbin-options.md)
