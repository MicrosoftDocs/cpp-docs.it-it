---
title: Supporto Unicode nel compilatore e nel linker
ms.date: 12/15/2017
f1_keywords:
- VC.Project.VCLinkerTool.UseUnicodeResponseFiles
- VC.Project.VCLibrarianTool.UseUnicodeResponseFiles
- VC.Project.VCCLCompilerTool.UseUnicodeResponseFiles
- VC.Project.VCXDCMakeTool.UseUnicodeResponseFiles
helpviewer_keywords:
- Unicode, Visual C++
ms.openlocfilehash: 420b01263320cf86df3f99da4523cc2b8bb4d4b6
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80168837"
---
# <a name="unicode-support-in-the-compiler-and-linker"></a>Supporto Unicode nel compilatore e nel linker

La maggior C++ parte degli strumenti di compilazione visuale supporta input e output Unicode.

## <a name="filenames"></a>Nomi file

I nomi file specificati nella riga di comando o nelle direttive del compilatore, ad esempio `#include`, possono contenere caratteri Unicode.

## <a name="source-code-files"></a>File di codice sorgente

I caratteri Unicode sono supportati in identificatori, macro, stringhe e valori letterali carattere e nei commenti.  Sono supportati anche i nomi di caratteri universali.

Unicode può essere inserito in un file di codice sorgente nelle codifiche seguenti:

- UTF-16 little endian con o senza byte order mark (BOM)

- UTF-16 big endian con o senza BOM

- UTF-8 with BOM

## <a name="output"></a>Output

Durante la compilazione, il compilatore genera la diagnostica nella console in UTF-16.  I caratteri che possono essere visualizzati nella console dipendono dalle proprietà della finestra della console.  L'output del compilatore reindirizzato a un file si trova nella tabella codici della console ANSI corrente.

## <a name="linker-response-files-and-def-files"></a>File di risposta del linker e. File DEF

I file di risposta e i file DEF possono essere UTF-16 con un BOM o ANSI.

## <a name="asm-and-cod-dumps"></a>dump con estensione ASM e Cod

i dump ASM e Cod sono in ANSI per impostazione predefinita per compatibilità con MASM. Usare [/FAU](fa-fa-listing-file.md) per l'output UTF-8. Si noti che se si specifica **/FAS**, l'origine mista verrà solo stampata direttamente e potrebbe sembrare confusa, ad esempio se il codice sorgente è UTF-8 e non è stato specificato **/FAsu**.

## <a name="see-also"></a>Vedere anche

[Usare il set di strumenti MSVC dalla riga di comando](../building-on-the-command-line.md)
