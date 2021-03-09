---
description: Altre informazioni sull'opzione del compilatore/fsanitize (Enable igienizzator)
title: /fsanitize (Abilita sanificatori)
ms.date: 02/24/2021
f1_keywords:
- /fsanitize
- -fsanitize
- /fsanitize=address
- /fsanitize-address-use-after-return
- -fsanitize-address-use-after-return
- /fno-sanitize-address-vcasan-lib
- -fno-sanitize-address-vcasan-lib
helpviewer_keywords:
- /fsanitize [C++]
- -fsanitize=address [C++]
- address sanitizer compiler option [C++]
- /fsanitize-address-use-after-return
- /fno-sanitize-address-vcasan-lib
ms.openlocfilehash: 820d39e54db29a5e06d119cbefc8a1980447e8cc
ms.sourcegitcommit: 6ed44d9c3fb32e965e363b9c69686739a90a2117
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/08/2021
ms.locfileid: "102470381"
---
# <a name="fsanitize-enable-sanitizers"></a>`/fsanitize` (Abilita sanificatori)

Usare le **`/fsanitize`** Opzioni del compilatore per abilitare gli igienizzatori. A partire da Visual Studio 2019 16,9, l'unico igienizzatore supportato è [AddressSanitizer](../../sanitizers/asan.md).

## <a name="syntax"></a>Sintassi

> **`/fsanitize=address`**\
> **`/fsanitize-address-use-after-return`**\
> **`/fno-sanitize-address-vcasan-lib`**

## <a name="remarks"></a>Osservazioni

L' **`/fsanitize=address`** opzione del compilatore Abilita [AddressSanitizer](../../sanitizers/asan.md), una potente tecnologia di compilazione e Runtime per la luce di [bug difficili da individuare](../../sanitizers/asan.md#error-types).

Le opzioni e del compilatore e le opzioni (USA le librerie derivate da derivate **`/fsanitize-address-use-after-return`** **`/fno-sanitize-address-vcasan-lib`** [ `/INFERASANLIBS` )](./inferasanlibs.md) e le **`/INFERASANLIBS:NO`** Opzioni del linker offrono supporto per gli utenti avanzati. Per altre informazioni, vedere [AddressSanitizer Build and Language Reference](../../sanitizers/asan-building.md).

Le **`/fsanitize`** opzioni sono disponibili a partire da Visual Studio 2019 versione 16,9.

### <a name="to-set-the-fsanitizeaddress-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l' **`/fsanitize=address`** opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **pagine delle proprietà** del progetto.

1. Selezionare la pagina delle proprietà generale relativa alle **proprietà di configurazione**  >  **C/C++**  >   .

1. Modificare la proprietà **Abilita igienizzazione indirizzo** . Per abilitarla, scegliere **Sì (/fsanitize = Address)**.

1. Scegliere **OK** o **applica** per salvare le modifiche.

### <a name="to-set-the-advanced-compiler-options"></a>Per impostare le opzioni avanzate del compilatore

1. Aprire la finestra di dialogo **pagine delle proprietà** del progetto.

1. Selezionare la pagina delle proprietà di **configurazione** proprietà della riga di comando di  >  **c/C++**  >   .

1. Modificare la proprietà **Opzioni aggiuntive** per impostare **/fsanitize-Address-use-after-Return** o **/fno-Sanitize-Address-vcasan-lib**.

1. Scegliere **OK** o **applica** per salvare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)\
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)\
[`/INFERASANLIBS` (Usare le librerie di sanificazione derivate)](./inferasanlibs.md)\
[Panoramica di AddressSanitizer](../../sanitizers/asan.md)\
[Problemi noti di AddressSanitizer](../../sanitizers/asan-known-issues.md)\
[Riferimenti per il linguaggio e la compilazione AddressSanitizer](../../sanitizers/asan-building.md)
