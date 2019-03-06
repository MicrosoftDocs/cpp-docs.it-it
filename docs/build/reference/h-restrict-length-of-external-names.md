---
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
ms.openlocfilehash: bb7821587d6c0bbe06eb6baa02227955582eb76d
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57420414"
---
# <a name="h-restrict-length-of-external-names"></a>/H (Limita la lunghezza dei nomi esterni)

Deprecato. Limita la lunghezza dei nomi esterni.

## <a name="syntax"></a>Sintassi

> **/H**<em>number</em>

## <a name="arguments"></a>Argomenti

*number*<br/>
Specifica la lunghezza massima dei nomi esterni consentiti in un programma.

## <a name="remarks"></a>Note

Per impostazione predefinita, la lunghezza dei nomi esterni (pubblici) è 2.047 caratteri. Questo vale per i programmi C e C++. Usando **/H** possibile diminuire solo la lunghezza massima consentita di identificatori, non aumentare il valore. Uno spazio tra **/H** e *numero* è facoltativo.

Se un programma contiene più di nomi esterni *numero*, i caratteri aggiuntivi vengono ignorati. Se si compila un programma senza **/H** e se un identificatore contiene più di 2.047 caratteri, il compilatore genererà [errore irreversibile C1064](../../error-messages/compiler-errors-1/fatal-error-c1064.md).

Il limite di lunghezza incluso qualsiasi carattere di sottolineatura iniziale creato dal compilatore (**\_**) o simbolo di chiocciola (**\@**). Questi caratteri sono parte dell'identificatore e richiedono un percorso significativo.

- Il compilatore aggiunge un carattere di sottolineatura (**\_**) ai nomi modificati il `__cdecl` (predefinito) e `__stdcall` convenzioni di chiamata e leader di un simbolo di chiocciola (**\@** ) per i nomi modificati dal `__fastcall` convenzione di chiamata.

- Il compilatore aggiunge le informazioni sulle dimensioni argomento ai nomi modificati la `__fastcall` e `__stdcall` convenzioni di chiamata e aggiunge le informazioni sul tipo per i nomi di C++.

Può risultare **/H** utili:

- Quando si creano programmi portabili o linguaggi misti.

- Quando si usano gli strumenti che prevedono limiti per la lunghezza degli identificatori esterni.

- Quando si desidera limitare la quantità di spazio utilizzata dai simboli in una build di debug.

L'esempio seguente mostra come l'uso **/H** può comportare errori se le lunghezze degli identificatori sono troppo limitati:

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

È anche necessario prestare attenzione quando si usa la **/H** opzione a causa degli identificatori predefiniti del compilatore. Se la lunghezza massima dell'identificatore è troppo piccola, alcuni identificatori predefiniti saranno libreria non risolte, nonché determinate chiamate di funzione. Ad esempio, se il `printf` viene usata la funzione e l'opzione **/H5** viene specificato in fase di compilazione, il simbolo **prin** verrà creato per fare riferimento a `printf`, e questo non verrà trovato nella libreria.

Sfrutta **/H** non è compatibile con [/GL (Ottimizzazione intero programma)](../../build/reference/gl-whole-program-optimization.md).

Il **/H** opzione è deprecata a partire da Visual Studio 2005; sono stati aumentati i limiti di lunghezza massima e **/H** non è più necessario. Per un elenco di opzioni del compilatore deprecate, vedere **deprecate o rimosse le opzioni del compilatore** nelle [opzioni del compilatore elencate per categoria](../../build/reference/compiler-options-listed-by-category.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **della riga di comando** pagina delle proprietà.

1. Immettere l'opzione del compilatore nel **opzioni aggiuntive** casella.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
