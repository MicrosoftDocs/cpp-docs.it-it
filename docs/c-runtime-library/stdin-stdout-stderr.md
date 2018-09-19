---
title: stdin, stdout, stderr | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- stdin
- stderr
- stdout
dev_langs:
- C++
helpviewer_keywords:
- stdout function
- standard output stream
- standard error stream
- stdin function
- standard input stream
- stderr function
ms.assetid: badd4735-596d-4498-857c-ec8b7e670e4c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a36d5fd60a19222e6f802e5a14037fb01ff865f5
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46071978"
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
|**stdout**|Output standard|
|`stderr`|Errore standard|

Questi puntatori possono essere utilizzati come argomenti alle funzioni. Alcune funzioni, ad esempio **getchar** e `putchar`, usano `stdin` e **stdout** automaticamente.

Questi puntatori sono costanti e non è possibile assegnare nuovi valori. La funzione `freopen` può essere utilizzata per reindirizzare i flussi ai file su disco o altri dispositivi. Il sistema operativo consente di reindirizzare un input e output standard di programma a livello di comandi.

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../c-runtime-library/stream-i-o.md)<br/>
[Costanti globali](../c-runtime-library/global-constants.md)