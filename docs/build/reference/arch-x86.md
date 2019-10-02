---
title: /arch (x86)
ms.date: 10/01/2019
ms.assetid: 9dd5a75d-06e4-4674-aade-33228486078d
ms.openlocfilehash: b1e5501f6edd3eb016395380ff476250c0c388b9
ms.sourcegitcommit: 4517932a67bbf2db16cfb122d3bef57a43696242
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/02/2019
ms.locfileid: "71816321"
---
# <a name="arch-x86"></a>/arch (x86)

Specifica l'architettura per la generazione del codice su piattaforme x86. Vedere anche [/Arch (x64)](arch-x64.md) e [/Arch (ARM)](arch-arm.md).

## <a name="syntax"></a>Sintassi

```
/arch:[IA32|SSE|SSE2|AVX|AVX2|AVX512]
```

## <a name="arguments"></a>Argomenti

**/arch:IA32**<br/>
Non specifica istruzioni avanzate e specifica x87 per i calcoli a virgola mobile.

**/arch:SSE**<br/>
Abilita l'uso delle istruzioni SSE.

**/arch:SSE2**<br/>
Abilita l'uso delle istruzioni SSE2. Si tratta dell'istruzione predefinita sulle piattaforme x86 se non è specificata alcuna opzione **/Arch** .

**/arch:AVX**<br/>
Abilita l'uso di istruzioni Intel Advanced Vector Extensions.

**/arch:AVX2**<br/>
Abilita l'uso di istruzioni Intel Advanced Vector Extensions 2.

**/Arch: AVX512**<br/>
Abilita l'uso di istruzioni Intel Advanced Vector Extensions 512.

## <a name="remarks"></a>Note

L'opzione **/Arch** Abilita o Disabilita l'uso di alcune estensioni del set di istruzioni, in particolare per il calcolo vettoriale, disponibile nei processori di Intel e AMD. In generale, i processori introdotti più di recente possono supportare estensioni aggiuntive rispetto a quelle supportate dai processori precedenti, anche se è consigliabile consultare la documentazione per un particolare processore o un test per il supporto dell'estensione del set di istruzioni con [_ _ CPUID](../../intrinsics/cpuid-cpuidex.md) prima dell'esecuzione del codice utilizzando un'estensione del set di istruzioni.

**/Arch** influiscono solo sulla generazione del codice per le funzioni native. Quando si usa [/CLR](clr-common-language-runtime-compilation.md) per la compilazione, **/Arch** non ha effetto sulla generazione del codice per le funzioni gestite.

Le opzioni **/Arch** fanno riferimento alle estensioni dei set di istruzioni con le caratteristiche seguenti:

- **Ia32** è il set di istruzioni x86 a 32 bit legacy senza alcuna operazione Vector e l'uso di x87 per i calcoli a virgola mobile.

- La crittografia **SSE** consente il calcolo con vettori di un massimo di quattro valori a virgola mobile a precisione singola. Sono state aggiunte anche le istruzioni scalari a virgola mobile corrispondenti.

- **SSE2** consente il calcolo con vettori a 128 bit di valori integer a precisione singola, a precisione doppia e a 1, 2, 4 o 8 byte. Sono state aggiunte anche istruzioni scalari a precisione doppia.

- In **AVX** è stata introdotta una codifica di istruzioni alternativa per istruzioni scalari vettoriali e a virgola mobile che consente vettori di 128 bit o 256 bit e che estende a zero tutti i risultati in formato vettoriale completo. Per la compatibilità con le versioni precedenti, le istruzioni vettoriali di tipo SSE conservano tutti i bit oltre il bit 127. La maggior parte delle operazioni a virgola mobile è estesa a 256 bit.

- **AVX2** estende la maggior parte delle operazioni integer a vettori a 256 bit e consente l'uso di istruzioni fuse multiply-add (FMA).

- In **AVX512** è stato introdotto un altro formato di codifica delle istruzioni che consente vettori a 512 bit, oltre ad alcune altre funzionalità facoltative. Sono state aggiunte anche le istruzioni per altre operazioni.

Query Optimizer sceglie quando e come usare le istruzioni vettoriali a seconda del **/Arch** specificato. I calcoli a virgola mobile scalari vengono eseguiti con le istruzioni SSE o AVX, se disponibili. Alcune convenzioni di chiamata specificano il passaggio di argomenti a virgola mobile nello stack x87 e, di conseguenza, il codice può usare una combinazione di istruzioni x87 e SSE/AVX per i calcoli a virgola mobile. Le istruzioni per i vettori integer possono anche essere usate per alcune operazioni integer a 64 bit, quando disponibili.

Oltre alle istruzioni scalari vettoriali e a virgola mobile, ogni opzione **/Arch** può anche consentire l'uso di altre istruzioni non vettoriali associate a tale opzione. Un esempio è la famiglia di istruzioni CMOVcc che è apparsa per la prima volta sui processori Intel Pentium Pro. Poiché le istruzioni SSE sono state introdotte con il processore Intel Pentium III successivo, le istruzioni CMOVcc possono essere generate tranne quando si specifica **/Arch: IA32** .

Le operazioni a virgola mobile vengono in genere arrotondate a precisione doppia (64 bit) nel codice x87, ma è possibile usare `_controlfp` per modificare la parola di controllo FP, inclusa l'impostazione del controllo di precisione su precisione estesa (80 bit) o precisione singola (32 bit). Per altre informazioni, vedere [_control87, _controlfp, \__control87_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md). SSE e AVX hanno istruzioni separate a precisione singola e precisione doppia per ogni operazione, pertanto non esiste alcun equivalente per il codice SSE/AVX. Questo può modificare il modo in cui i risultati vengono arrotondati quando il risultato di un'operazione a virgola mobile viene usato direttamente in un ulteriore calcolo anziché assegnarlo a una variabile utente. Si consideri quanto segue.

```cpp
r = f1 * f2 + d;  // Different results are possible on SSE/SSE2.
```

Con assegnazione esplicita:

```cpp
t = f1 * f2;   // Do f1 * f2, round to the type of t.
r = t + d;     // This should produce the same overall result
               // whether x87 stack is used or SSE/SSE2 is used.
```

non è possibile usare **/Arch** e [/QIfist](qifist-suppress-ftol.md) nello stesso modulo. L'opzione **/QIfist** modifica il comportamento di arrotondamento della conversione a virgola mobile in Integer. Il comportamento predefinito prevede il troncamento (arrotondamento verso zero), mentre l'opzione **/QIfist** specifica l'uso della modalità di arrotondamento dell'ambiente a virgola mobile. Poiché in questo modo viene modificato il comportamento di tutte le conversioni a virgola mobile in Integer, questo flag è stato deprecato. Quando si esegue la compilazione per SSE o AVX, è possibile arrotondare un valore a virgola mobile a un Integer usando la modalità di arrotondamento dell'ambiente a virgola mobile usando una sequenza di funzione intrinseca:

```cpp
int convert_float_to_int(float x) {
    return _mm_cvtss_si32(_mm_set_ss(x));
}

int convert_double_to_int(double x) {
    return _mm_cvtsd_si32(_mm_set_sd(x));
}
```

Le macro `_M_IX86_FP`, `__AVX__`, `__AVX2__`, `__AVX512F__`, `__AVX512CD__`, `__AVX512BW__`, `__AVX512DQ__` e `__AVX512VL__` indicano quale opzione del compilatore **/Arch** è stata usata. Per altre informazioni, vedere [Predefined Macros](../../preprocessor/predefined-macros.md). L'opzione **/Arch: AVX2** e la macro `__AVX2__` sono state introdotte in Visual Studio 2013 Update 2, versione 12.0.34567.1. Supporto limitato per **/Arch: AVX512** è stato aggiunto in visual studio 2017 ed espanso in visual studio 2019.

### <a name="to-set-this-compiler-option-for-avx-avx2-avx512-ia32-sse-or-sse2-in-visual-studio"></a>Per impostare questa opzione del compilatore per AVX, AVX2, AVX512, IA32, SSE o SSE2 in Visual Studio

1. Aprire la finestra di dialogo **pagine delle proprietà** per il progetto. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare le **proprietà di configurazione**, **CC++ /** cartella.

1. Selezionare la pagina delle proprietà **generazione codice** .

1. Modificare la proprietà **Abilita set di istruzioni avanzate** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableEnhancedInstructionSet%2A>.

## <a name="see-also"></a>Vedere anche

[/arch (architettura minima della CPU)](arch-minimum-cpu-architecture.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
