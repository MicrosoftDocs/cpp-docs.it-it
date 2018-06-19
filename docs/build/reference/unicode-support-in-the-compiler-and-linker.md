---
title: Supporto Unicode nel compilatore e del Linker | Documenti Microsoft
ms.custom: ''
ms.date: 12/15/2017
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLinkerTool.UseUnicodeResponseFiles
- VC.Project.VCLibrarianTool.UseUnicodeResponseFiles
- VC.Project.VCCLCompilerTool.UseUnicodeResponseFiles
- VC.Project.VCXDCMakeTool.UseUnicodeResponseFiles
dev_langs:
- C++
helpviewer_keywords:
- Unicode, Visual C++
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ec0b84cd62f3fcca378ab55de16006925e685b37
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32376192"
---
# <a name="unicode-support-in-the-compiler-and-linker"></a>Supporto Unicode nel compilatore e nel linker

La maggior parte degli strumenti di compilazione di Visual C++ supportano Unicode input e output.

## <a name="filenames"></a>Nomi file

I nomi file specificati nella riga di comando o nelle direttive del compilatore (ad esempio `#include`) può contenere caratteri Unicode.

## <a name="source-code-files"></a>File di codice sorgente

Caratteri Unicode sono supportati gli identificatori, macro, valori letterali stringa e carattere e nei commenti.  Sono supportati anche i nomi di caratteri universali.

Unicode può essere immessi in un file del codice sorgente le codifiche seguenti:

- UTF-16 little-endian con o senza l'ordine dei byte (BOM)

- UTF-16 big-endian con o senza BOM

- UTF-8 con indicatore ordine byte

## <a name="output"></a>Output

Durante la compilazione, il compilatore restituisce informazioni di diagnostica nella console in UTF-16.  I caratteri che possono essere visualizzati sulla console dipendono dalle proprietà della finestra console.  Output del compilatore reindirizzato a un file è la tabella codici corrente console ANSI.

## <a name="linker-response-files-and-def-files"></a>File di risposta del linker e. DEF (file)

File di risposta e i file DEF possono essere UTF-16 con un BOM o ANSI.

## <a name="asm-and-cod-dumps"></a>dump asm e Cod

Per impostazione predefinita per la compatibilità con MASM, dump asm e Cod sono in formato ANSI. Utilizzare [/FAu.](../../build/reference/fa-fa-listing-file.md) all'output UTF-8. Si noti che se si specifica **/FAs**, il codice sorgente, verrà stampato direttamente e potrebbe avere un aspetto confuso, ad esempio se il codice sorgente è UTF-8 e non è stato specificato **/FAsu**.

## <a name="see-also"></a>Vedere anche

[Compilare codice C/C++ nella riga di comando](../../build/building-on-the-command-line.md)