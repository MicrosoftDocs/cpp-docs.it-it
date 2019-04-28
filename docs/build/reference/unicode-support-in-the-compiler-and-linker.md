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
ms.openlocfilehash: 71458ab345670c0a5715576a7da80c4e6ff2955b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62317328"
---
# <a name="unicode-support-in-the-compiler-and-linker"></a>Supporto Unicode nel compilatore e nel linker

La maggior parte degli strumenti di compilazione di Visual C++ supportano Unicode input e output.

## <a name="filenames"></a>Nomi file

I nomi file specificati nella riga di comando o nelle direttive del compilatore (ad esempio `#include`) può contenere caratteri Unicode.

## <a name="source-code-files"></a>File di codice sorgente

I caratteri Unicode sono supportati in identificatori, macro, valori letterali stringa e carattere e nei commenti.  Sono supportati anche nomi di caratteri universali.

Unicode può essere immessi in un file di codice sorgente nelle codifiche seguenti:

- UTF-16 little-endian con o senza byte order mark (BOM)

- UTF-16 big-endian con o senza BOM

- UTF-8 con BOM

## <a name="output"></a>Output

Durante la compilazione, il compilatore restituisce informazioni di diagnostica nella console in UTF-16.  I caratteri che possono essere visualizzati sulla console dipendono le proprietà della finestra console.  Output del compilatore reindirizzato a un file è nella tabella codici console ANSI corrente.

## <a name="linker-response-files-and-def-files"></a>File di risposta del linker e. File DEF

File di risposta e i file DEF possono essere entrambi UTF-16 con un BOM o ANSI.

## <a name="asm-and-cod-dumps"></a>dump asm e Cod

dump asm e Cod sono in formato ANSI per impostazione predefinita per la compatibilità con MASM. Uso [l'opzione /FAu](fa-fa-listing-file.md) per l'output UTF-8. Si noti che se si specifica **/FAs**, il codice sorgente, verrà stampato direttamente e potrebbe avere un aspetto confuso, ad esempio se il codice sorgente è UTF-8 e non è stato specificato **/FAsu**.

## <a name="see-also"></a>Vedere anche

[Usare il set di strumenti MSVC dalla riga di comando](../building-on-the-command-line.md)