---
title: /Fm (Specifica file map)
ms.date: 11/04/2016
f1_keywords:
- /fm
helpviewer_keywords:
- -Fm compiler option [C++]
- mapfiles [C++], creating linker
- files [C++], creating map
- Fm compiler option [C++]
- /Fm compiler option [C++]
ms.assetid: 8154448a-93a7-4546-8e4c-5c44d0aff45d
ms.openlocfilehash: eebb1bc0c553dba1934aea75e2e63edc0f222fff
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57815403"
---
# <a name="fm-name-mapfile"></a>/Fm (Specifica file map)

Indica al linker per produrre un file di mapping contenente un elenco di segmenti nell'ordine in cui vengono visualizzati nel file .exe corrispondente o DLL.

## <a name="syntax"></a>Sintassi

```
/Fmpathname
```

## <a name="remarks"></a>Note

Per impostazione predefinita, il file di mapping viene assegnato il nome base del file di origine corrispondente di C o C++ con una. Eseguire il mapping di estensione.

Che specifica **/Fm** ha lo stesso effetto, come se fosse stato specificato il [/MAP (genera file MAP)](map-generate-mapfile.md) l'opzione del linker.

Se si specifica [/c (compila senza collegamenti)](c-compile-without-linking.md) per eliminare il collegamento si **/Fm** non ha alcun effetto.

Simboli globali presenti in un file di mapping hanno in genere uno o più caratteri di sottolineatura iniziali perché il compilatore aggiunge un carattere di sottolineatura iniziale per i nomi delle variabili. Numero di simboli globali presenti nel file di mapping viene utilizzati internamente dal compilatore e librerie standard.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del file di output (/F)](output-file-f-options.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[Specifica del nome del percorso](specifying-the-pathname.md)
