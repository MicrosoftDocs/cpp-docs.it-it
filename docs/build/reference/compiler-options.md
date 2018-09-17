---
title: Opzioni del compilatore | Microsoft Docs
ms.custom: ''
ms.date: 01/29/2018
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- cl.exe compiler
- x86 Visual C++ compiler
- ARM Visual C++ compiler
- compiler options, C++
- x64 Visual C++ compiler
ms.assetid: ed3376c8-bef4-4c9a-80e9-3b5da232644c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 76ab322dc4573863a30092b296e87e90c41619ab
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45716213"
---
# <a name="compiler-options"></a>Opzioni del compilatore

CL.exe è uno strumento che consente di controllare il linker e i compilatori C++ e Microsoft Visual C++ (MSVC) C. CL.exe può essere eseguito solo in sistemi operativi che supportano Microsoft Visual Studio per Windows.

> [!NOTE]
> È possibile avviare questo strumento solo da un prompt dei comandi per gli sviluppatori di Visual Studio. Non è possibile avviarlo da un prompt dei comandi di sistema o da Esplora File. Per altre informazioni, vedere [codice C/C++ di compilazione dalla riga di comando](../building-on-the-command-line.md).

I compilatori producono file oggetto (obj) File formato COFF (Common Object). Il linker produce file eseguibili (.exe) o librerie a collegamento dinamico (DLL).

Si noti che tutte le opzioni del compilatore sono tra maiuscole e minuscole. È possibile usare una barra rovesciata (`/`) o un trattino (`-`) per specificare un'opzione del compilatore.

Per eseguire la compilazione senza collegamento, usare il [/c](../../build/reference/c-compile-without-linking.md) opzione.

## <a name="find-a-compiler-option"></a>Trovare un'opzione del compilatore

Per trovare una particolare opzione del compilatore, vedere uno degli elenchi seguenti:

- [Opzioni del compilatore elencate in ordine alfabetico](../../build/reference/compiler-options-listed-alphabetically.md)

- [Opzioni del compilatore elencate per categoria](../../build/reference/compiler-options-listed-by-category.md)

## <a name="specify-compiler-options"></a>Specificare le opzioni del compilatore

L'argomento relativo a ciascuna opzione del compilatore viene illustrato come può essere impostata nell'ambiente di sviluppo. Per informazioni su come specificare le opzioni di fuori dell'ambiente di sviluppo, vedere:

- [Sintassi della riga di comando del compilatore](../../build/reference/compiler-command-line-syntax.md)

- [File di comando di CL](../../build/reference/cl-command-files.md)

- [Variabili di ambiente CL](../../build/reference/cl-environment-variables.md)

## <a name="related-build-tools"></a>Strumenti di compilazione correlati

[Le opzioni del linker](../../build/reference/linker-options.md) anche influire sul modo in cui il programma viene compilato.

## <a name="see-also"></a>Vedere anche

[Riferimenti alla compilazione in C/C++](../../build/reference/c-cpp-building-reference.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)<br/>
[Compilazione veloce](../../build/reference/fast-compilation.md)<br/>
[CL richiama il linker](../../build/reference/cl-invokes-the-linker.md)
