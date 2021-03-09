---
description: 'Altre informazioni su: supporto Unicode nel compilatore e nel linker'
title: Supporto Unicode nel compilatore e nel linker
ms.date: 03/07/2021
f1_keywords:
- VC.Project.VCLinkerTool.UseUnicodeResponseFiles
- VC.Project.VCLibrarianTool.UseUnicodeResponseFiles
- VC.Project.VCCLCompilerTool.UseUnicodeResponseFiles
- VC.Project.VCXDCMakeTool.UseUnicodeResponseFiles
helpviewer_keywords:
- Unicode, Visual C++
ms.openlocfilehash: e1795a5a9b9d4a3a1672b2661aa598d0ef6e059f
ms.sourcegitcommit: 6ed44d9c3fb32e965e363b9c69686739a90a2117
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/08/2021
ms.locfileid: "102465340"
---
# <a name="unicode-support-in-the-compiler-and-linker"></a>Supporto Unicode nel compilatore e nel linker

La maggior parte degli strumenti di compilazione Microsoft C/C++ (MSVC) supporta input e output Unicode.

## <a name="filenames"></a>Nomi file

I nomi file specificati nella riga di comando o nelle direttive del compilatore (ad esempio `#include` ) possono contenere caratteri Unicode.

## <a name="source-code-files"></a>File di codice sorgente

I caratteri Unicode sono supportati in identificatori, macro, stringhe e valori letterali carattere e nei commenti.  Sono supportati anche i nomi di caratteri universali.

Unicode può essere inserito in un file di codice sorgente nelle codifiche seguenti:

- UTF-16 little endian con o senza byte order mark (BOM)

- UTF-16 big endian con o senza BOM

- UTF-8 with BOM

Nell'IDE di Visual Studio è possibile salvare i file in diversi formati di codifica, inclusi quelli Unicode. Salvarli nella finestra di dialogo **Salva file con nome** usando l'elenco a discesa del pulsante **Salva** . Selezionare **Salva con codifica** nell'elenco a discesa. Quindi, nella finestra di dialogo **Opzioni di salvataggio avanzate** selezionare una codifica dall'elenco a discesa. Scegliere **OK** per salvare il file.

## <a name="output"></a>Output

Durante la compilazione, il compilatore genera la diagnostica nella console in UTF-16.  I caratteri che possono essere visualizzati nella console dipendono dalle proprietà della finestra della console.  L'output del compilatore reindirizzato a un file si trova nella tabella codici della console ANSI corrente.

## <a name="linker-response-files-and-def-files"></a>File e file di risposta del linker `.DEF`

I file e i file di risposta *`.DEF`* possono essere UTF-16 o UTF-8 con un BOM o ANSI.

## <a name="asm-and-cod-dumps"></a>`.asm` e `.cod` dump

*`.asm`* i *`.cod`* dump e sono in ANSI per impostazione predefinita per la compatibilità con MASM. Utilizzare [`/FAu`](fa-fa-listing-file.md) per l'output UTF-8.

Se si specifica **`/FAs`** , l'origine intermista viene stampata direttamente. Potrebbe sembrare confuso, ad esempio quando il codice sorgente è UTF-8 e non è stato specificato **`/FAsu`** .

## <a name="see-also"></a>Vedi anche

[Usare il set di strumenti MSVC dalla riga di comando](../building-on-the-command-line.md)
