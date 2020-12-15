---
description: 'Altre informazioni su: opzioni del compilatore'
title: Opzioni del compilatore MSVC
ms.date: 12/14/2020
helpviewer_keywords:
- cl.exe compiler
- x86 MSVC compiler
- ARM MSVC compiler
- compiler options, C++
- x64 MSVC compiler
ms.openlocfilehash: f89695b00be4ed67a00f947c6b76943bfa5eaf59
ms.sourcegitcommit: 48b897797b3132ae934b1d191e3870c3c2466335
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/15/2020
ms.locfileid: "97514571"
---
# <a name="compiler-options"></a>Opzioni del compilatore

cl.exe è uno strumento che controlla i compilatori e il linker Microsoft C++ (MSVC) C e C++. cl.exe possono essere eseguite solo su sistemi operativi che supportano Microsoft Visual Studio per Windows.

> [!NOTE]
> È possibile avviare questo strumento solo da un prompt dei comandi per gli sviluppatori di Visual Studio. Non è possibile avviarlo da un prompt dei comandi di sistema o da Esplora File. Per altre informazioni, vedere [usare il set di strumenti MSVC dalla riga di comando](../building-on-the-command-line.md).

I compilatori producono file oggetto COFF (Common Object File Format) (con estensione obj). Il linker produce file eseguibili (con estensione exe) o librerie a collegamento dinamico (dll).

Tutte le opzioni del compilatore fanno distinzione tra maiuscole e minuscole. `/` `-` Per specificare un'opzione del compilatore, è possibile usare una barra () o un trattino ().

Per eseguire la compilazione senza collegamento, usare l'opzione [/c](c-compile-without-linking.md) .

## <a name="find-a-compiler-option"></a>Trova un'opzione del compilatore

Per trovare una particolare opzione del compilatore, vedere uno degli elenchi seguenti:

- [Opzioni del compilatore elencate in ordine alfabetico](compiler-options-listed-alphabetically.md)

- [Opzioni del compilatore elencate per categoria](compiler-options-listed-by-category.md)

## <a name="specify-compiler-options"></a>Specificare le opzioni del compilatore

Nell'argomento relativo a ogni opzione del compilatore viene illustrato come è possibile impostarlo nell'ambiente di sviluppo. Per informazioni su come specificare le opzioni all'esterno dell'ambiente di sviluppo, vedere:

- [Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)

- [File di comando CL](cl-command-files.md)

- [Variabili di ambiente CL](cl-environment-variables.md)

## <a name="related-build-tools"></a>Strumenti di compilazione correlati

Le [Opzioni del linker MSVC](linker-options.md) influiscono anche sul modo in cui viene compilato il programma.

## <a name="see-also"></a>Vedere anche

[Riferimenti alla compilazione in C/C++](c-cpp-building-reference.md)<br/>
[CL richiama il linker](cl-invokes-the-linker.md)
