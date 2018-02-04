---
title: Opzioni del compilatore | Documenti Microsoft
ms.custom: 
ms.date: 01/29/2018
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- cl.exe compiler
- x86 Visual C++ compiler
- ARM Visual C++ compiler
- compiler options, C++
- x64 Visual C++ compiler
ms.assetid: ed3376c8-bef4-4c9a-80e9-3b5da232644c
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4addd9f5dce819f554e6ab04707929a32f7b7d9d
ms.sourcegitcommit: 30ab99c775d99371ed22d1a46598e542012ed8c6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/03/2018
---
# <a name="compiler-options"></a>Opzioni del compilatore

CL.exe è uno strumento che controlla il linker e i compilatori C++ e Microsoft Visual C++ (opzioni: MSVC) C. CL.exe può essere eseguito solo in sistemi operativi che supportano Microsoft Visual Studio per Windows.

> [!NOTE]  
> È possibile avviare questo strumento solo da un prompt dei comandi per sviluppatori di Visual Studio. Non è possibile avviarlo da un prompt dei comandi di sistema o da Esplora File. Per ulteriori informazioni, vedere [codice C/C++ di compilazione nella riga di comando](../building-on-the-command-line.md).

I compilatori producono file dell'oggetto (obj) comuni oggetto formato COFF (File). Il linker genera file eseguibili (.exe) o librerie a collegamento dinamico (DLL).

Si noti che tutte le opzioni del compilatore tra maiuscole e minuscole. È possibile utilizzare una barra rovesciata (`/`) o un trattino (`-`) per specificare un'opzione del compilatore.

Per la compilazione senza collegamento, usare il [/c](../../build/reference/c-compile-without-linking.md) opzione.

## <a name="find-a-compiler-option"></a>Trovare un'opzione del compilatore

Per trovare una particolare opzione del compilatore, vedere uno degli elenchi seguenti:

- [Opzioni del compilatore elencate in ordine alfabetico](../../build/reference/compiler-options-listed-alphabetically.md)

- [Opzioni del compilatore elencate per categoria](../../build/reference/compiler-options-listed-by-category.md)

## <a name="specify-compiler-options"></a>Specificare le opzioni del compilatore

Questo argomento per ciascuna opzione del compilatore illustra come è possibile impostare nell'ambiente di sviluppo. Per informazioni su come specificare le opzioni all'esterno dell'ambiente di sviluppo, vedere:

- [Sintassi della riga di comando del compilatore](../../build/reference/compiler-command-line-syntax.md)

- [File di comando di CL](../../build/reference/cl-command-files.md)

- [Variabili di ambiente CL](../../build/reference/cl-environment-variables.md)

## <a name="related-build-tools"></a>Strumenti di compilazione correlati

[Opzioni del linker](../../build/reference/linker-options.md) influenzare la modalità di compilazione del programma.

## <a name="see-also"></a>Vedere anche

[Riferimenti alla compilazione in C/C++](../../build/reference/c-cpp-building-reference.md)  
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)  
[Compilazione veloce](../../build/reference/fast-compilation.md)  
[CL richiama il linker](../../build/reference/cl-invokes-the-linker.md)  
