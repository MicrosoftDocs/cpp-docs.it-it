---
description: Ulteriori informazioni su:/E (pre-elabora in stdout)
title: /E (Pre-elabora in stdout)
ms.date: 11/04/2016
f1_keywords:
- /e
helpviewer_keywords:
- -E compiler option [C++]
- /E compiler option [C++]
- preprocessor output, copy to stdout
- preprocessor output
ms.assetid: ddbb1725-d950-4978-ab2f-30a5cd7b778c
ms.openlocfilehash: 9d6c9ea3a5fcf8e7ba06ede6e7e70d933b5c921a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97192608"
---
# <a name="e-preprocess-to-stdout"></a>/E (Pre-elabora in stdout)

Pre-elabora i file di origine C e C++ e copia i file pre-elaborati nel dispositivo di output standard.

## <a name="syntax"></a>Sintassi

```
/E
```

## <a name="remarks"></a>Osservazioni

In questo processo vengono eseguite tutte le direttive per il preprocessore, vengono eseguite le espansioni di macro e i commenti vengono rimossi. Per mantenere i commenti nell'output pre-elaborato, usare anche l'opzione del compilatore [/c (Mantieni commenti durante la pre-elaborazione)](c-preserve-comments-during-preprocessing.md) .

**/E** aggiunge `#line` le direttive all'output all'inizio e alla fine di ogni file incluso e intorno alle righe rimosse dalle direttive del preprocessore per la compilazione condizionale. Queste direttive rinumerano le righe del file pre-elaborato. Di conseguenza, gli errori generati durante le fasi successive dell'elaborazione fanno riferimento ai numeri di riga del file di origine originale anziché alle righe nel file pre-elaborato.

L'opzione **/e** disattiva la compilazione. È necessario inviare nuovamente il file pre-elaborato per la compilazione. **/E** inoltre i file di output vengono eliminati dalle opzioni **/fa**, **/fa** e **/FM** . Per ulteriori informazioni, vedere [/fa,/fa (file di listato)](fa-fa-listing-file.md) e [/FM (nome file map)](fm-name-mapfile.md).

Per disattivare `#line` le direttive, usare invece l'opzione [/EP (pre-elabora in stdout senza direttive #line)](ep-preprocess-to-stdout-without-hash-line-directives.md) .

Per inviare l'output pre-elaborato a un file anziché a `stdout` , usare invece l'opzione [/p (pre-elabora in un file)](p-preprocess-to-a-file.md) .

Per disattivare `#line` le direttive e inviare l'output pre-elaborato a un file, **usare/P** e **/EP** insieme.

Non è possibile usare intestazioni precompilate con l'opzione **/e** .

Si noti che quando si esegue la pre-elaborazione in un file separato, gli spazi non vengono emessi dopo i token. Questo può causare un programma non valido o avere effetti collaterali imprevisti. Il programma seguente viene compilato correttamente:

```
#define m(x) x
m(int)main( )
{
   return 0;
}
```

Tuttavia, se si esegue la compilazione con:

```
cl -E test.cpp > test2.cpp
```

`int main` in test2. cpp non sarà corretto `intmain` .

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive**.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.GeneratePreprocessedFile%2A>.

## <a name="example"></a>Esempio

La riga di comando seguente pre `ADD.C` -elabora, conserva i commenti, aggiunge `#line` le direttive e visualizza il risultato nel dispositivo di output standard:

```
CL /E /C ADD.C
```

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
