---
title: Costanti modalità di conversione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- _O_BINARY
- _O_TEXT
- _O_RAW
dev_langs:
- C++
helpviewer_keywords:
- O_BINARY constant
- O_TEXT constant
- O_RAW constant
- _O_TEXT constant
- _O_RAW constant
- translation constants
- _O_BINARY constant
- translation, constants
- translation, modes
- translation modes (file I/O)
ms.assetid: a5993bf4-7e7a-47f9-83c3-e46332b85579
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7c2eff59c8f766b96c1abaeaa2eb9b369720cc75
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46015951"
---
# <a name="translation-mode-constants"></a>Costanti modalità di conversione

## <a name="syntax"></a>Sintassi

```

#include <fcntl.h>

```

## <a name="remarks"></a>Note

Le costanti di manifesto `_O_BINARY` e `_O_TEXT` determinano la modalità di conversione per i file (`_open` e `_sopen`) o la modalità di conversione per i flussi (`_setmode`).

Di seguito sono elencati i valori consentiti:

|||
|-|-|
`_O_TEXT`  | Apre un file in modalità testo (convertito). Le combinazioni di ritorno a capo - segno di avanzamento riga (CR-LF) sono convertite in un singolo carattere di avanzamento riga (LF) in fase di input. I caratteri di avanzamento riga sono convertiti in combinazioni di ritorno a capo -segno di avanzamento riga (CR-LF) in fase di output. Inoltre, CTRL+Z viene interpretato nell'input come carattere di fine file. Nei file aperti per la lettura e la lettura/scrittura, `fopen` verifica la presenza della combinazione CTRL+Z alla fine del file e la rimuove, se possibile. Questa operazione viene eseguita perché l'utilizzo delle funzioni `fseek` e `ftell` per spostarsi all'interno di un file che terminano con CTRL+Z può causare un comportamento non corretto di `fseek` in prossimità della fine del file.
`_O_BINARY`  | Apre un file in modalità binaria (non convertita). Le conversioni precedenti vengono eliminate.
`_O_RAW`  | Uguale a `_O_BINARY`. Supportata per la compatibilità con C 2.0.

Per altre informazioni, vedere [I/O file modalità testo e binaria](../c-runtime-library/text-and-binary-mode-file-i-o.md) e [Conversione di file](../c-runtime-library/file-translation-constants.md).

## <a name="see-also"></a>Vedere anche

[_open, _wopen](../c-runtime-library/reference/open-wopen.md)<br/>
[_pipe](../c-runtime-library/reference/pipe.md)<br/>
[_sopen, _wsopen](../c-runtime-library/reference/sopen-wsopen.md)<br/>
[_setmode](../c-runtime-library/reference/setmode.md)<br/>
[Costanti globali](../c-runtime-library/global-constants.md)