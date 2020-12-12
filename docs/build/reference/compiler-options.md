---
description: 'Altre informazioni su: opzioni del compilatore'
title: Opzioni del compilatore MSVC
ms.date: 05/06/2019
helpviewer_keywords:
- cl.exe compiler
- x86 MSVC compiler
- ARM MSVC compiler
- compiler options, C++
- x64 MSVC compiler
ms.assetid: ed3376c8-bef4-4c9a-80e9-3b5da232644c
ms.openlocfilehash: a6b124fa5fce68844d53c1324da48c17ef5a9ccf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97197023"
---
# <a name="compiler-options"></a>Opzioni del compilatore

cl.exe è uno strumento che controlla i compilatori e il linker Microsoft C++ (MSVC) C e C++. cl.exe possono essere eseguite solo su sistemi operativi che supportano Microsoft Visual Studio per Windows.

> [!NOTE]
> È possibile avviare questo strumento solo da un prompt dei comandi per gli sviluppatori di Visual Studio. Non è possibile avviarlo da un prompt dei comandi di sistema o da Esplora File. Per altre informazioni, vedere [usare il set di strumenti MSVC dalla riga di comando](../building-on-the-command-line.md).

I compilatori producono file oggetto COFF (Common Object File Format) (con estensione obj). Il linker produce file eseguibili (con estensione exe) o librerie a collegamento dinamico (dll).

Si noti che tutte le opzioni del compilatore fanno distinzione maiuscole/minuscole. `/` `-` Per specificare un'opzione del compilatore, è possibile usare una barra () o un trattino ().

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

## <a name="see-also"></a>Vedi anche

[Riferimenti alla compilazione in C/C++](c-cpp-building-reference.md)<br/>
[CL richiama il linker](cl-invokes-the-linker.md)
