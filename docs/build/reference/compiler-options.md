---
title: Opzioni del compilatore MSVC
ms.date: 05/06/2019
helpviewer_keywords:
- cl.exe compiler
- x86 MSVC compiler
- ARM MSVC compiler
- compiler options, C++
- x64 MSVC compiler
ms.assetid: ed3376c8-bef4-4c9a-80e9-3b5da232644c
ms.openlocfilehash: ab41a5de027f28b361937e58fb179fd72db54e4e
ms.sourcegitcommit: da32511dd5baebe27451c0458a95f345144bd439
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65221747"
---
# <a name="compiler-options"></a>Opzioni del compilatore

CL.exe è uno strumento che consente di controllare il Microsoft C++ (MSVC) C e C++ i compilatori e del linker. CL.exe può essere eseguito solo in sistemi operativi che supportano Microsoft Visual Studio per Windows.

> [!NOTE]
> È possibile avviare questo strumento solo da un prompt dei comandi per gli sviluppatori di Visual Studio. Non è possibile avviarlo da un prompt dei comandi di sistema o da Esplora File. Per altre informazioni, vedere [un set di strumenti MSVC dalla riga di comando](../building-on-the-command-line.md).

I compilatori producono file oggetto (obj) File formato COFF (Common Object). Il linker produce file eseguibili (.exe) o librerie a collegamento dinamico (DLL).

Si noti che tutte le opzioni del compilatore sono tra maiuscole e minuscole. È possibile usare una barra rovesciata (`/`) o un trattino (`-`) per specificare un'opzione del compilatore.

Per eseguire la compilazione senza collegamento, usare il [/c](c-compile-without-linking.md) opzione.

## <a name="find-a-compiler-option"></a>Trovare un'opzione del compilatore

Per trovare una particolare opzione del compilatore, vedere uno degli elenchi seguenti:

- [Opzioni del compilatore elencate in ordine alfabetico](compiler-options-listed-alphabetically.md)

- [Opzioni del compilatore elencate per categoria](compiler-options-listed-by-category.md)

## <a name="specify-compiler-options"></a>Specificare le opzioni del compilatore

L'argomento relativo a ciascuna opzione del compilatore viene illustrato come può essere impostata nell'ambiente di sviluppo. Per informazioni su come specificare le opzioni di fuori dell'ambiente di sviluppo, vedere:

- [Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)

- [File di comando di CL](cl-command-files.md)

- [Variabili di ambiente CL](cl-environment-variables.md)

## <a name="related-build-tools"></a>Strumenti di compilazione correlati

[Le opzioni del Linker MSVC](linker-options.md) anche influire sul modo in cui il programma viene compilato.

## <a name="see-also"></a>Vedere anche

[Riferimenti alla compilazione in C/C++](c-cpp-building-reference.md)<br/>
[CL richiama il linker](cl-invokes-the-linker.md)
