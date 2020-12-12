---
description: 'Altre informazioni su: stdin, stdout, stderr'
title: stdin, stdout, stderr
ms.date: 10/23/2018
f1_keywords:
- stdin
- stderr
- stdout
helpviewer_keywords:
- stdout function
- standard output stream
- standard error stream
- stdin function
- standard input stream
- stderr function
ms.assetid: badd4735-596d-4498-857c-ec8b7e670e4c
ms.openlocfilehash: ba31487c472bd714560e919f45ec9e9aa5acd717
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97235723"
---
# <a name="stdin-stdout-stderr"></a>stdin, stdout, stderr

## <a name="syntax"></a>Sintassi

```
FILE *stdin;
FILE *stdout;
FILE *stderr;
#include <stdio.h>
```

## <a name="remarks"></a>Osservazioni

Questi sono flussi standard per input, output e output di errore.

Per impostazione predefinita, l'input standard viene letto dalla tastiera, mentre l'output standard e l'errore standard sono visualizzati sullo schermo.

I seguenti puntatori di flusso sono disponibili per accedere ai flussi standard:

|Puntatore|STREAM|
|-------------|------------|
|`stdin`|Input standard|
|`stdout`|Output standard|
|`stderr`|Errore standard|

Questi puntatori possono essere utilizzati come argomenti alle funzioni. Alcune funzioni, ad esempio [getchar](../c-runtime-library/reference/getchar-getwchar.md) e [putchar](../c-runtime-library/reference/putchar-putwchar.md), usano `stdin` e `stdout` automaticamente.

Questi puntatori sono costanti e non è possibile assegnare nuovi valori. La funzione [freopen](../c-runtime-library/reference/freopen-wfreopen.md) può essere usata per reindirizzare i flussi ai file su disco o altri dispositivi. Il sistema operativo consente di reindirizzare un input e output standard di programma a livello di comandi.

## <a name="see-also"></a>Vedi anche

[I/O di flusso](../c-runtime-library/stream-i-o.md)<br/>
[Costanti globali](../c-runtime-library/global-constants.md)
