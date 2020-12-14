---
description: Altre informazioni su:/FM (nome file map)
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
ms.openlocfilehash: 5c86a18ae9880a499997bcac2d8411859753d858
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97200481"
---
# <a name="fm-name-mapfile"></a>/Fm (Specifica file map)

Indica al linker di produrre un file map contenente un elenco di segmenti nell'ordine in cui vengono visualizzati nel file exe o nella DLL corrispondente.

## <a name="syntax"></a>Sintassi

```
/Fmpathname
```

## <a name="remarks"></a>Osservazioni

Per impostazione predefinita, a file map viene assegnato il nome di base del file di origine C o C++ corrispondente con un. Estensione mappa.

La specifica di **/FM** ha lo stesso effetto di se è stata specificata l'opzione del linker [/Map (genera file map)](map-generate-mapfile.md) .

Se si specifica [/c (compila senza collegamento)](c-compile-without-linking.md) per impedire il collegamento, **/FM** non ha alcun effetto.

I simboli globali in un file map hanno in genere uno o più caratteri di sottolineatura iniziali perché il compilatore aggiunge un carattere di sottolineatura principale ai nomi delle variabili. Molti simboli globali visualizzati in file map vengono usati internamente dal compilatore e dalle librerie standard.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del file di output (/F)](output-file-f-options.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)<br/>
[Specifica del percorso](specifying-the-pathname.md)
