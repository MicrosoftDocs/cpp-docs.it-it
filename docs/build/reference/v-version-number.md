---
description: Altre informazioni su:/V (numero di versione)
title: /V (Numero versione)
ms.date: 11/04/2016
f1_keywords:
- /v
helpviewer_keywords:
- embedding version strings
- /V compiler option [C++]
- version numbers, specifying for .obj
- V compiler option [C++]
- -V compiler option [C++]
ms.assetid: 3e93fb7a-5dfd-49a6-bd49-3dca8052e0f3
ms.openlocfilehash: 5025642d4ae30315d24754a7ee46268050cfb22a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97187052"
---
# <a name="v-version-number"></a>/V (Numero versione)

Deprecato. Incorpora una stringa di testo nel file con estensione obj.

## <a name="syntax"></a>Sintassi

```
/Vstring
```

## <a name="arguments"></a>Argomenti

*string*<br/>
Stringa che specifica il numero di versione o l'avviso sul copyright da incorporare in un file con estensione obj.

## <a name="remarks"></a>Commenti

Il stringcan etichetta un file con estensione obj con un numero di versione o un avviso di copyright. Eventuali spazi o caratteri di tabulazione devono essere racchiusi tra virgolette doppie (") se fanno parte della stringa. Una barra rovesciata ( \\ ) deve precedere tutte le virgolette doppie se sono parte della stringa. Uno spazio tra **/v** ed `string` è facoltativo.

Per inserire il nome e il numero di versione del compilatore nel file con estensione obj, è anche possibile usare il [commento (C/C++)](../../preprocessor/comment-c-cpp.md) con l'argomento del tipo di commento del compilatore.

L'opzione **/v** è deprecata a partire da Visual Studio 2005; **/V** è stato usato principalmente per supportare la creazione di driver di dispositivo virtuale (VxDs) e la compilazione di VxDs non è più supportata dal set di strumenti Visual C++. Per un elenco delle opzioni del compilatore deprecate, vedere Opzioni del compilatore **deprecate e rimosse** nelle [Opzioni del compilatore elencate per categoria](compiler-options-listed-by-category.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
