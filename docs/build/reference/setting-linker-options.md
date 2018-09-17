---
title: Impostazione delle opzioni del Linker | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- files [C++], LINK
- input files [C++], linker
- linker [C++], ways to set options
- linker [C++], switches
- input files [C++]
- object/library modules
ms.assetid: e08fb487-0f2e-4f24-87db-232dbc8bd2e2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d2fd99732c7f79b3c61ff5b31516b98a478ed4a8
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45713076"
---
# <a name="setting-linker-options"></a>Impostazione delle opzioni del linker

All'interno o all'esterno dell'ambiente di sviluppo, è possono impostare le opzioni del linker. L'argomento relativo a ogni opzione del linker viene illustrato come può essere impostata nell'ambiente di sviluppo. Visualizzare [opzioni del Linker](../../build/reference/linker-options.md) per un elenco completo.

Quando si esegue collegamento all'esterno dell'ambiente di sviluppo, è possibile specificare l'input in uno o più modi:

- Nel [della riga di comando](../../build/reference/linker-command-line-syntax.md)

- Usando [file di comando](../../build/reference/link-command-files.md)

- In [le variabili di ambiente](../../build/reference/link-environment-variables.md)

COLLEGAMENTO prima elaborate le opzioni specificate nella variabile di ambiente LINK, seguito da opzioni nell'ordine in cui vengono specificati nella riga di comando e nei file di comando. Se un'opzione viene ripetuta con diversi argomenti, quella più recente elaborato ha la precedenza.

Le opzioni si applicano all'intera build; Nessuna opzione è applicabile ai file di input specifici.

## <a name="see-also"></a>Vedere anche

[Riferimenti alla compilazione in C/C++](../../build/reference/c-cpp-building-reference.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)