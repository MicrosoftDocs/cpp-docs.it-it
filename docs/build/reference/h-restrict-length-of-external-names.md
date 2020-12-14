---
description: Altre informazioni su:/H (limita la lunghezza dei nomi esterni)
title: /H (Limita la lunghezza dei nomi esterni)
ms.date: 09/05/2018
f1_keywords:
- /h
helpviewer_keywords:
- public name length
- /H compiler option [C++]
- H compiler option [C++]
- external names
- -H compiler option [C++]
ms.assetid: de701dd3-ed04-4c88-8195-960d2520ec2e
ms.openlocfilehash: 5df4c4765cc4917e6914eab0b4818c34fceea853
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97200078"
---
# <a name="h-restrict-length-of-external-names"></a>/H (Limita la lunghezza dei nomi esterni)

Deprecato. Limita la lunghezza dei nomi esterni.

## <a name="syntax"></a>Sintassi

> <em>Numero</em> /h

## <a name="arguments"></a>Argomenti

*number*<br/>
Specifica la lunghezza massima dei nomi esterni consentiti in un programma.

## <a name="remarks"></a>Commenti

Per impostazione predefinita, la lunghezza dei nomi esterni (pubblici) è di 2.047 caratteri. Questo vale per i programmi C e C++. L'utilizzo di **/h** può ridurre solo la lunghezza massima consentita degli identificatori, non aumentarlo. Uno spazio tra **/h** e *Number* è facoltativo.

Se un programma contiene nomi esterni più lunghi del *numero*, i caratteri aggiuntivi vengono ignorati. Se si compila un programma senza **/h** e un identificatore contiene più di 2.047 caratteri, il compilatore genererà un [errore irreversibile C1064](../../error-messages/compiler-errors-1/fatal-error-c1064.md).

Il limite di lunghezza include tutti i caratteri di sottolineatura iniziali creati dal compilatore ( **\_** ) o di chiocciola ( **\@** ). Questi caratteri fanno parte dell'identificatore e accettano una posizione significativa.

- Il compilatore aggiunge un carattere di sottolineatura ( **\_** ) principale ai nomi modificati da **`__cdecl`** (impostazione predefinita) e le **`__stdcall`** convenzioni di chiamata e un simbolo di chiocciola ( **\@** ) ai nomi modificati dalla **`__fastcall`** convenzione di chiamata.

- Il compilatore aggiunge informazioni sulle dimensioni degli argomenti ai nomi modificati dalle **`__fastcall`** **`__stdcall`** convenzioni di chiamata e e aggiunge le informazioni sul tipo ai nomi C++.

È possibile trovare **/h** utile:

- Quando si creano programmi in linguaggio misto o portatili.

- Quando si utilizzano strumenti che impongono limiti alla lunghezza degli identificatori esterni.

- Quando si vuole limitare la quantità di spazio usata dai simboli in una compilazione di debug.

Nell'esempio seguente viene illustrato come l'utilizzo di **/h** possa effettivamente introdurre errori se le lunghezze degli identificatori sono troppo limitate:

```cpp
// compiler_option_H.cpp
// compile with: /H5
// processor: x86
// LNK2005 expected
void func1(void);
void func2(void);

int main() { func1(); }

void func1(void) {}
void func2(void) {}
```

È inoltre necessario prestare attenzione quando si utilizza l'opzione **/h** a causa di identificatori predefiniti del compilatore. Se la lunghezza massima dell'identificatore è troppo piccola, alcuni identificatori predefiniti non verranno risolti e alcune chiamate di funzioni di libreria. Se, ad esempio, `printf` viene utilizzata la funzione e l'opzione **/H5** viene specificata in fase di compilazione, il simbolo **_prin** verrà creato in modo da fare riferimento a `printf` e non verrà trovato nella libreria.

L'uso di **/h** è incompatibile con [/GL (Ottimizzazione intero programma)](gl-whole-program-optimization.md).

L'opzione **/h** è deprecata a partire da Visual Studio 2005; sono stati aumentati i limiti di lunghezza massima e **/h** non è più necessario. Per un elenco delle opzioni del compilatore deprecate, vedere Opzioni del compilatore **deprecate e rimosse** nelle [Opzioni del compilatore elencate per categoria](compiler-options-listed-by-category.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione** proprietà della riga di comando di  >  **c/C++**  >   .

1. Immettere l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
