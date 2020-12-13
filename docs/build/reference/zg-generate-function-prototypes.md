---
description: Altre informazioni su:/ZG (genera prototipi di funzione)
title: /Zg (Genera i prototipi delle funzioni)
ms.date: 11/04/2016
f1_keywords:
- /zg
helpviewer_keywords:
- Zg compiler option [C++]
- /Zg compiler option [C++]
- function prototypes, generate function prototypes compiler option
- -Zg compiler option [C++]
- generate function prototypes compiler option
ms.assetid: c8df1b46-24ff-46f2-8356-e0a144b21dd2
ms.openlocfilehash: ee0bed48f15acae867d344a60a6d42f3b17c7e85
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97178875"
---
# <a name="zg-generate-function-prototypes"></a>/Zg (Genera i prototipi delle funzioni)

Rimosso. Crea un prototipo di funzione per ogni funzione definita nel file di origine, ma non compila il file di origine.

## <a name="syntax"></a>Sintassi

```
/Zg
```

## <a name="remarks"></a>Osservazioni

L'opzione del compilatore non è più disponibile. È stata rimossa in Visual Studio 2015. Questa pagina rimane per gli utenti di versioni precedenti di Visual Studio.

Il prototipo di funzione include il tipo restituito della funzione e un elenco di tipi di argomento. L'elenco di tipi di argomento viene creato dai tipi di parametri formali della funzione. I prototipi di funzione già presenti nel file di origine vengono ignorati.

L'elenco di prototipi viene scritto nell'output standard. Questo elenco può risultare utile per verificare che gli argomenti effettivi e i parametri formali di una funzione siano compatibili. È possibile salvare l'elenco mediante il reindirizzamento dell'output standard a un file. Quindi, è possibile usare **#include** per rendere l'elenco di prototipi della funzione parte del file di origine. In questo modo, il compilatore esegue un controllo del tipo di argomento.

Se si usa l'opzione **/Zg** e il programma contiene parametri formali con un tipo struct, enum o unione (o puntatori a questi tipi), la dichiarazione di ogni tipo struct, enum o unione deve avere un tag (nome). Nell'esempio seguente il nome del tag è `MyStruct`.

```C
// Zg_compiler_option.c
// compile with: /Zg
typedef struct MyStruct { int i; } T2;
void f2(T2 * t) {}
```

L'opzione **/ZG** è stata deprecata in visual Studio 2005 ed è stata rimossa in visual studio 2015. Il compilatore MSVC ha rimosso il supporto per il codice di tipo C meno recente. Per un elenco delle opzioni del compilatore deprecate, vedere Opzioni del compilatore **deprecate e rimosse** nelle [Opzioni del compilatore elencate per categoria](compiler-options-listed-by-category.md).

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
