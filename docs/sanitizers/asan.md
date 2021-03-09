---
title: AddressSanitizer
description: Descrizione di livello superiore della funzionalità AddressSanitizer per Microsoft C/C++.
ms.date: 03/05/2021
f1_keywords:
- AddressSanitizer
helpviewer_keywords:
- ASan
- AddressSanitizer
- Address Sanitizer
- compiling for AddressSanitizer
ms.openlocfilehash: db1760a37c610493cd3a3d95ab5e77b29bf89400
ms.sourcegitcommit: 6ed44d9c3fb32e965e363b9c69686739a90a2117
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/08/2021
ms.locfileid: "102470558"
---
# <a name="addresssanitizer"></a>AddressSanitizer

## <a name="overview"></a>Panoramica

I linguaggi C & C++ sono potenti, ma possono soffrire da una classe di bug che influiscono sulla correttezza del programma e sulla sicurezza del programma. A partire da Visual Studio 2019 versione 16,9, il compilatore Microsoft C/C++ (MSVC) e l'IDE supportano *AddressSanitizer*. AddressSanitizer (ASan) è una tecnologia di compilazione e Runtime che espone molti bug difficili da trovare con **zero** falsi positivi:

- [Allocazione/Dealloc non corrispondenti](error-alloc-dealloc-mismatch.md) e [ `new` / `delete` tipi non corrispondenti](error-new-delete-type-mismatch.md)
- [Allocazioni troppo grandi per l'heap](error-allocation-size-too-big.md)
- [ `calloc` overflow](error-calloc-overflow.md) e [ `alloca` overflow](error-dynamic-stack-buffer-overflow.md)
- [Raddoppia gratis](error-double-free.md) e [USA dopo](error-heap-use-after-free.md) la versione gratuita
- [Overflow variabile globale](error-global-buffer-overflow.md)
- [Sovraccarico del buffer dell'heap](error-heap-buffer-overflow.md)
- [Allineamento dei valori allineati non valido](error-invalid-allocation-alignment.md)
- [`memcpy`](error-memcpy-param-overlap.md)e [ `strncat` sovrapposizione di parametri](error-strncat-param-overlap.md)
- [Overflow del buffer dello stack](error-stack-buffer-overflow.md) e [underflow](error-stack-buffer-underflow.md)
- [Uso dello stack `return` dopo](error-stack-use-after-return.md) e [usare After scope](error-stack-use-after-scope.md)
- [Uso della memoria dopo che è stato avvelenato](error-use-after-poison.md)

Usare AddressSanitizer per ridurre il tempo dedicato a:

- Correttezza di base
- Portabilità multipiattaforma
- Security
- test di stress
- Integrazione di un nuovo codice

AddressSanitizer, originariamente [introdotto da Google](https://www.usenix.org/conference/atc12/technical-sessions/presentation/serebryany), rappresenta una potente alternativa a entrambi i [ `/RTC` controlli degli errori di runtime](../build/reference/rtc-run-time-error-checks.md) e [ `/analyze` (analisi statica)](../build/reference/analyze-code-analysis.md). Fornisce tecnologie di ricerca dei bug in fase di esecuzione che utilizzano direttamente i sistemi di compilazione esistenti e gli asset di test esistenti.

AddressSanitizer è integrato con il sistema di progetto di Visual Studio, il sistema di compilazione CMake e l'IDE. I progetti possono abilitare AddressSanitizer impostando una proprietà del progetto o usando un'opzione del compilatore aggiuntiva: **`/fsanitize=address`** . La nuova opzione è compatibile con tutti i livelli di ottimizzazione e le configurazioni di x86 e x64. Tuttavia, non è compatibile con la funzionalità [modifica e continuazione](/visualstudio/debugger/edit-and-continue-visual-cpp), il [collegamento incrementale](../build/reference/incremental-link-incrementally.md)e [`/RTC`](../build/reference/rtc-run-time-error-checks.md) .

A partire da Visual Studio 2019 versione 16,9, la tecnologia AddressSanitizer di Microsoft consente l'integrazione con l'IDE di Visual Studio. Facoltativamente, la funzionalità può creare un file di dump di arresto anomalo del sistema quando l'igienizzatore rileva un bug in fase di esecuzione. Se si imposta la `ASAN_SAVE_DUMPS=MyFileName.dmp` variabile di ambiente prima di eseguire il programma, viene creato un file di dump di arresto anomalo del sistema con metadati aggiuntivi per un efficace [debug post-mortem](#crash-dumps) di bug accuratamente diagnosticati. Questi file di dump rendono più semplice l'uso esteso di AddressSanitizer per:

- Test del computer locale,
- Test distribuiti locali e
- Flussi di lavoro basati sul cloud per i test.

### <a name="install-the-addresssanitizer"></a>Installare AddressSanitizer

Per impostazione predefinita, le librerie e l'integrazione dell'IDE AddressSanitizer vengono installate con i carichi di lavoro C++ nell'Programma di installazione di Visual Studio. Tuttavia, se si esegue l'aggiornamento da una versione precedente di Visual Studio 2019, usare il programma di installazione per abilitare il supporto di ASan dopo l'aggiornamento:

:::image type="content" source="media/asan-installer-option.png" alt-text="Programma di installazione di Visual Studio screenshot che evidenzia il componente C++ AddressSanitizer":::

È possibile scegliere **modifica** nell'installazione di Visual Studio esistente dal programma di installazione di Visual Studio per visualizzare la schermata precedente.

> [!NOTE]
> Se si esegue Visual Studio nel nuovo aggiornamento ma non è stato installato ASan, viene visualizzato un errore durante l'esecuzione del codice:
>
> LNK1356: Impossibile trovare la libreria ' clang_rt. asan_dynamic-i386. lib '

### <a name="use-the-addresssanitizer"></a><a name="using-asan"></a> Usare AddressSanitizer

Iniziare a compilare i file eseguibili con l' **`/fsanitize=address`** opzione del compilatore usando uno dei metodi di sviluppo comuni seguenti:

- Compilazioni da riga di comando
- Sistema del progetto di Visual Studio
- Integrazione di Visual Studio CMake

 Ricompilare, quindi eseguire il programma normalmente. Questa generazione di codice espone [molti tipi di bug accuratamente diagnosticati](#error-types). Questi errori vengono segnalati in tre modi: nell'IDE del debugger, nella riga di comando o archiviati in un [nuovo tipo di file di dump](#crash-dumps) per l'elaborazione offline precisa.

Microsoft consiglia di usare AddressSanitizer nei tre flussi di lavoro standard seguenti:

- **Ciclo interno per sviluppatori**
  - Visual Studio- [riga di comando](#command-prompt)
  - Visual Studio- [sistema del progetto](#ide-msbuild)
  - Visual Studio- [CMake](#ide-cmake)

- **Ci/CD** -integrazione continua/sviluppo continuo
  - Segnalazione errori- [nuovi file di dump AddressSanitizer](#crash-dumps)

- **Fuzzing** -compilazione con il wrapper [libFuzzer](https://llvm.org/docs/LibFuzzer.html)
  - [Azure OneFuzz](https://www.microsoft.com/security/blog/2020/09/15/microsoft-onefuzz-framework-open-source-developer-tool-fix-bugs/)
  - Computer locale

Questo articolo illustra le informazioni necessarie per abilitare i tre flussi di lavoro elencati in precedenza. Le informazioni sono specifiche dell'implementazione di Windows 10 **dipendente dalla piattaforma** AddressSanitizer. Questa documentazione integra la documentazione eccellente di [Google, Apple e GCC](#external-docs) già pubblicati.

> [!NOTE]
> Il supporto corrente è limitato a x86 e x64 in Windows 10. [Inviare commenti e suggerimenti sulle informazioni](https://aka.ms/vsfeedback/browsecpp) che si desidera visualizzare nelle versioni future. I commenti e suggerimenti consentono di definire la priorità di altri igienizzatori per il futuro, ad esempio **`/fsanitize=thread`** ,, **`/fsanitize=leak`** **`/fsanitize=memory`** , **`/fsanitize=undefined`** o **`/fsanitize=hwaddress`** . Se si verificano problemi, è possibile [segnalare i bug](https://aka.ms/feedback/report?space=62) .

## <a name="use-the-addresssanitizer-from-a-developer-command-prompt"></a><a name="command-prompt"></a> Usare AddressSanitizer da un prompt dei comandi per gli sviluppatori

Usare l' **`/fsanitize=address`** opzione del compilatore in un [prompt dei comandi](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts) per gli sviluppatori per abilitare la compilazione per il runtime AddressSanitizer. L' **`/fsanitize=address`** opzione è compatibile con tutti i livelli di ottimizzazione C++ o C esistenti, ad esempio,,,, `/Od` `/O1` `/O2` `/O2 /GL` e `PGO` . L'opzione funziona con CRT statici e dinamici, ad esempio,,, `/MD` `/MDd` `/MT` e `/MTd` . Funziona se si crea un file EXE o una DLL. Le informazioni di debug sono necessarie per la formattazione ottimale degli stack di chiamate. Nell'esempio seguente `cl /fsanitize=address /Zi` viene passato nella riga di comando.

Le librerie AddressSanitizer (file con estensione LIB) vengono collegate automaticamente. Per ulteriori informazioni, vedere [AddressSanitizer Language, Build e Debug Reference](asan-building.md).

### <a name="example---basic-global-buffer-overflow"></a>Esempio-overflow del buffer globale di base

```cpp
// basic-global-overflow.cpp
#include <stdio.h>
int x[100];
int main() {
    printf("Hello!\n");
    x[100] = 5; // Boom!
    return 0;
}
```

Utilizzando un prompt dei comandi per gli sviluppatori per Visual Studio 2019, compilare *`main.cpp`* utilizzando `/fsanitize=address /Zi`

:::image type="content" source="media/asan-command-basic-global-overflow.png" alt-text="Screenshot di un prompt dei comandi che mostra il comando per compilare con le opzioni AddressSanitizer.":::

Quando si esegue l'oggetto risultante dalla *`main.exe`* riga di comando, viene creato il report degli errori formattato riportato di seguito.

Si considerino le caselle rosse sovrapposte che evidenziano sette informazioni chiave:

:::image type="content" source="media/asan-basic-global-overflow.png" alt-text="Screenshot del debugger che mostra un errore di overflow globale di base.":::

### <a name="red-highlights-from-top-to-bottom"></a>Evidenziazioni rosse, dall'alto verso il basso

1. Il bug di sicurezza della memoria è un overflow del buffer globale.
2. Sono presenti **4 byte** (32 bit) **archiviati** al di fuori di qualsiasi variabile definita dall'utente.
3. L'archivio ha avuto luogo nella funzione `main()` definita nel file `basic-global-overflow.cpp` alla riga 7.
4. La variabile denominata `x` viene definita in Basic-Global-overflow. cpp alla riga 3, a partire dalla colonna 8
5. Questa variabile globale `x` è di dimensione 400 byte
6. Il valore del [byte di ombreggiatura](./asan-shadow-bytes.md) esatto che descrive l'indirizzo di destinazione dell'archivio è `0xf9`
7. La legenda Shadow byte indica `0xf9` un'area di riempimento a destra di `int x[100]`

> [!NOTE]
> I nomi di funzione nello stack di chiamate vengono prodotti tramite il [simbolo LLVM](https://llvm.org/docs/CommandGuide/llvm-symbolizer.html) che viene richiamato dal runtime in caso di errore.

## <a name="use-the-addresssanitizer-in-visual-studio"></a><a name="ide-msbuild"></a> Usare AddressSanitizer in Visual Studio

AddressSanitizer è integrato con l'IDE di Visual Studio. Per attivare AddressSanitizer per un progetto MSBuild, fare clic con il pulsante destro del mouse sul progetto in Esplora soluzioni e scegliere **Proprietà**. Nella finestra di dialogo **pagine delle proprietà** selezionare **proprietà di configurazione**  >  **C/C++**  >  **generale**, quindi modificare la proprietà **Abilita AddressSanitizer** . Scegliere **OK** per salvare le modifiche.

:::image type="content" source="media/asan-project-system-dialog.png" alt-text="Screenshot della finestra di dialogo Pagine delle proprietà che mostra la proprietà Abilita AddressSanitizer.":::

Per creare dall'IDE, rifiutare esplicitamente le [Opzioni non compatibili](./asan-known-issues.md#incompatible-options). Per un progetto esistente compilato usando **`/Od`** (o la modalità di debug), potrebbe essere necessario disattivare queste opzioni:

- Disattiva [modifica e continuazione](/visualstudio/debugger/how-to-enable-and-disable-edit-and-continue)
- Disattiva [ `/RTC1` (controlli Runtime)](../build/reference/rtc-run-time-error-checks.md)
- Disattiva [ `/INCREMENTAL` (collegamento incrementale)](../build/reference/incremental-link-incrementally.md)

Per compilare ed eseguire il debugger, immettere **F5**. Questa finestra verrà visualizzata in Visual Studio:

:::image type="content" source="media/asan-global-buffer-overflow-F5.png" alt-text="Screenshot del debugger che mostra un errore di overflow del buffer globale.":::

## <a name="using-the-addresssanitizer-from-visual-studio-cmake"></a><a name="ide-cmake"></a> Uso di AddressSanitizer da Visual Studio: CMake

Per abilitare AddressSanitizer per [un progetto CMake creato per le finestre di destinazione](../build/cmake-projects-in-visual-studio.md), seguire questa procedura:

1. Aprire l'elenco a discesa **configurazioni** sulla barra degli strumenti nella parte superiore dell'IDE e selezionare **Gestisci configurazioni**.

   :::image type="content" source="media/asan-cmake-configuration-dropdown.png" alt-text="Screenshot dell'elenco a discesa Configurazione CMake.":::

   Questa selezione consente di aprire l'editor delle impostazioni del progetto CMake, che viene salvato in un CMakeSettings.jsfile.

1. Scegliere il collegamento **modifica JSON** nell'editor. Questa selezione passa la visualizzazione a JSON non elaborato.

1. Aggiungere la proprietà: **"addressSanitizerEnabled": true**

   Questa immagine è di CMakeSettings.jsdopo questa modifica:

   :::image type="content" source="media/asan-cmake-json.png" alt-text="Screenshot della visualizzazione dell'editor di testo di CMakeSettings.jssu.":::

1. Premere **CTRL + S** per salvare il file JSON, quindi immettere **F5** per ricompilare ed eseguire nel debugger.

Questa schermata acquisisce l'errore dalla compilazione CMake.

:::image type="content" source="media/asan-cmake-error-f5.png" alt-text="Screenshot del messaggio di errore della compilazione CMake.":::

## <a name="addresssanitizer-crash-dumps"></a><a name="crash-dumps"></a> Dump di arresto anomalo AddressSanitizer

Sono state introdotte nuove funzionalità in AddressSanitizer per l'uso con flussi di lavoro cloud e distribuiti. Questa funzionalità consente la visualizzazione offline di un errore AddressSanitizer nell'IDE. L'errore viene sovrapposto all'origine, così come si farebbe in una sessione di debug in tempo reale.

Questi nuovi file dump possono causare efficienze durante l'analisi di un bug. Non è necessario eseguire di nuovo o trovare dati remoti o cercare un computer che non sia più in linea.

Per produrre un nuovo tipo di file di dump che può essere visualizzato in Visual Studio in un altro computer in un secondo momento:

```cmd
set ASAN_SAVE_DUMPS=MyFileName.dmp
```

A partire da Visual Studio 16,9 è possibile visualizzare **un errore di diagnostica precisa**, archiviato nel *`*.dmp`* file, sopra il codice sorgente.

[Questa nuova funzionalità di dump di arresto anomalo](./asan-offline-crash-dumps.md) del sistema consente flussi di lavoro basati sul cloud o test distribuiti. Può essere usato anche per archiviare un bug dettagliato e interoperabile in qualsiasi scenario.

## <a name="example-errors"></a><a name="error-types"></a> Errori di esempio

AddressSanitizer è in grado di rilevare diversi tipi di errori di utilizzo di memoria. Ecco molti degli errori di runtime segnalati durante l'esecuzione dei file binari compilati usando l' **`/fsanitize=address`** opzione del compilatore AddressSanitizer ():

- [`alloc-dealloc-mismatch`](error-alloc-dealloc-mismatch.md)
- [`allocation-size-too-big`](error-allocation-size-too-big.md)
- [`calloc-overflow`](error-calloc-overflow.md)
- [`double-free`](error-double-free.md)
- [`dynamic-stack-buffer-overflow`](error-dynamic-stack-buffer-overflow.md)
- [`global-buffer-overflow`](error-global-buffer-overflow.md)
- [`heap-buffer-overflow`](error-heap-buffer-overflow.md)
- [`heap-use-after-free`](error-heap-use-after-free.md)
- [`invalid-allocation-alignment`](error-invalid-allocation-alignment.md)
- [`memcpy-param-overlap`](error-memcpy-param-overlap.md)
- [`new-delete-type-mismatch`](error-new-delete-type-mismatch.md)
- [`stack-buffer-overflow`](error-stack-buffer-overflow.md)
- [`stack-buffer-underflow`](error-stack-buffer-underflow.md)
- [`stack-use-after-return`](error-stack-use-after-return.md)
- [`stack-use-after-scope`](error-stack-use-after-scope.md)
- [`strncat-param-overlap`](error-strncat-param-overlap.md)
- [`use-after-poison`](error-use-after-poison.md)

Per ulteriori informazioni sugli esempi, vedere [esempi di errore AddressSanitizer](./asan-error-examples.md).

## <a name="differences-with-clang-120"></a><a name="differences"></a> Differenze con Clang 12,0

MSVC è attualmente diverso da Clang 12,0 in due aree funzionali:

- **stack-use-after-scope** : questa impostazione è attivata per impostazione predefinita e non può essere disattivata.
- **stack-use-after-return** : questa funzionalità richiede un'opzione del compilatore aggiuntiva e non è disponibile solo impostando `ASAN_OPTIONS` .

Queste decisioni sono state adottate per ridurre la matrice di test necessaria per fornire questa prima versione.

Non sono state incluse funzionalità che potrebbero causare falsi positivi in Visual Studio 2019 16,9. Tale disciplina impone l'integrità di test effettiva necessaria quando si considera l'interoperabilità con decenni di codice esistente. Nelle versioni successive è possibile considerare più funzionalità:

- [Fallimento dell'ordine di inizializzazione](https://github.com/google/sanitizers/wiki/AddressSanitizerInitializationOrderFiasco)
- [Overflow di oggetti intra](https://github.com/google/sanitizers/wiki/AddressSanitizerIntraObjectOverflow)
- [Overflow del contenitore](https://github.com/google/sanitizers/wiki/AddressSanitizerContainerOverflow)
- [Sottrazione/confronto del puntatore](https://gcc.gnu.org/onlinedocs/gcc/Instrumentation-Options.html)

Per ulteriori informazioni, vedere [compilazione per AddressSanitizer con MSVC](./asan-building.md).

## <a name="existing-industry-documentation"></a><a name="external-docs"></a> Documentazione del settore esistente

La documentazione estesa esiste già per queste implementazioni di linguaggio e dipendenti dalla piattaforma della tecnologia AddressSanitizer.

- [Google](https://github.com/google/sanitizers/wiki/AddressSanitizer)
- [Apple](https://developer.apple.com/documentation/xcode/diagnosing_memory_thread_and_crash_issues_early)
- [GCC](https://gcc.gnu.org/onlinedocs/gcc/Instrumentation-Options.html)

Questo articolo su [AddressSanitizer](https://www.usenix.org/system/files/conference/atc12/atc12-final39.pdf) descrive l'implementazione.

## <a name="see-also"></a>Vedi anche

[Problemi noti di AddressSanitizer](./asan-known-issues.md)\
[Riferimenti per il linguaggio e la compilazione AddressSanitizer](./asan-building.md)\
[Riferimento runtime AddressSanitizer](./asan-runtime.md)\
[AddressSanitizer Shadow byte](./asan-shadow-bytes.md)\
[AddressSanitizer cloud o test distribuiti](./asan-offline-crash-dumps.md)\
[Integrazione del debugger AddressSanitizer](./asan-debugger-integration.md)\
[Esempi di errore AddressSanitizer](./asan-error-examples.md)
