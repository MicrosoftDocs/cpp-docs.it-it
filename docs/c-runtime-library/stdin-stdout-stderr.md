---
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
ms.openlocfilehash: 0ecb7c51f6c38ffcb6637a093ec06a6f248839d6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50452195"
---
# <a name="stdin-stdout-stderr"></a>stdin, stdout, stderr

## <a name="syntax"></a>Sintassi

```
FILE *stdin; 
FILE *stdout; 
FILE *stderr; 
#include <stdio.h>
```

## <a name="remarks"></a>Note

Questi sono flussi standard per input, output e output di errore.

Per impostazione predefinita, l'input standard viene letto dalla tastiera, mentre l'output standard e l'errore standard sono visualizzati sullo schermo.

I seguenti puntatori di flusso sono disponibili per accedere ai flussi standard:

|Puntatore|Flusso|
|-------------|------------|
|`stdin`|Input standard|
|`stdout`|Output standard|
|`stderr`|Errore standard|

Questi puntatori possono essere utilizzati come argomenti alle funzioni. Alcune funzioni, ad esempio [getchar](../c-runtime-library/reference/getchar-getwchar.md) e [putchar](../c-runtime-library/reference/putchar-putwchar.md), usano `stdin` e `stdout` automaticamente.

Questi puntatori sono costanti e non è possibile assegnare nuovi valori. La funzione [freopen](../c-runtime-library/reference/freopen-wfreopen.md) può essere usata per reindirizzare i flussi ai file su disco o altri dispositivi. Il sistema operativo consente di reindirizzare un input e output standard di programma a livello di comandi.

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../c-runtime-library/stream-i-o.md)<br/>
[Costanti globali](../c-runtime-library/global-constants.md)
