---
title: Impostazione delle opzioni del linker
ms.date: 11/04/2016
helpviewer_keywords:
- files [C++], LINK
- input files [C++], linker
- linker [C++], ways to set options
- linker [C++], switches
- input files [C++]
- object/library modules
ms.assetid: e08fb487-0f2e-4f24-87db-232dbc8bd2e2
ms.openlocfilehash: 61f4ee8d02cda5b2cd270d7ef789bf58060e7fdf
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57423170"
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
