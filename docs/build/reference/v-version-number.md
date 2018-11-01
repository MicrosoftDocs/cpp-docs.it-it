---
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
ms.openlocfilehash: 23c6ebfc0d67c6d00ed0e26d2e23806234cbb6af
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50463830"
---
# <a name="v-version-number"></a>/V (Numero versione)

Deprecato. Incorpora una stringa di testo nel file obj.

## <a name="syntax"></a>Sintassi

```
/Vstring
```

## <a name="arguments"></a>Argomenti

*string*<br/>
Stringa che specifica il numero di versione o informazioni sul copyright per essere incorporato in un file con estensione obj.

## <a name="remarks"></a>Note

L'etichetta stringcan un file con estensione obj con un numero di versione o un avviso di copyright. Qualsiasi carattere spazio o tabulazione devono essere racchiuso tra virgolette doppie (") se sono una parte della stringa. Una barra rovesciata (\\) devono precedere qualsiasi racchiusi tra virgolette doppie se fanno parte della stringa. Uno spazio tra **/V** e `string` è facoltativo.

È anche possibile usare [comment (C/C++)](../../preprocessor/comment-c-cpp.md) con l'argomento del tipo di commento del compilatore a inserire il nome e numero di versione del compilatore nel file con estensione obj.

Il **/V** opzione è deprecata a partire da Visual Studio 2005. **/V** è principalmente usato per supportare la creazione di driver di dispositivo virtuali (VxDs) e funzione non è più supportata dal set di strumenti Visual C++. Per un elenco di opzioni del compilatore deprecate, vedere **deprecate o rimosse le opzioni del compilatore** nelle [opzioni del compilatore elencate per categoria](../../build/reference/compiler-options-listed-by-category.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)