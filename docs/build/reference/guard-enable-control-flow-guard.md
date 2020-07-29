---
title: /guard (abilita la protezione del flusso di controllo)
ms.date: 11/04/2016
f1_keywords:
- /guard
- VC.Project.VCCLCompilerTool.ControlFlowGuard
ms.assetid: be495323-f59f-4cf3-a6b6-8ee69e6a19dd
ms.openlocfilehash: 8661f94e0ee35f8d5e2c8caba1fc01bbf4072876
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87190689"
---
# <a name="guard-enable-control-flow-guard"></a>/guard (abilita la protezione del flusso di controllo)

Abilita la generazione dei controlli di sicurezza di Guard flusso di controllo nel compilatore.

## <a name="syntax"></a>Sintassi

```
/guard:cf[-]
```

## <a name="remarks"></a>Osservazioni

L'opzione **/guard:cf** fa in modo che il compilatore analizzi il flusso di controllo per verificare la presenza di destinazioni di chiamata indiretta in fase di compilazione e che quindi inserisca il codice per verificare le destinazioni in fase di esecuzione. Per impostazione predefinita, **/guard:cf** è disattivato e deve essere abilitato in modo esplicito. Per disabilitare in modo esplicito questa opzione, usare **/guard:cf-**.

**Visual Studio 2017 e versioni successive**: questa opzione aggiunge le protezioni per le **`switch`** istruzioni che generano jump table.

Quando si specifica l'opzione **/guard:cf** (Guard flusso di controllo), il compilatore e il linker inseriscono controlli di sicurezza aggiuntivi in fase di esecuzione per rilevare i tentativi di violazione del codice. Durante la compilazione e il collegamento tutte le chiamate indirette presenti nel codice vengono analizzate allo scopo di individuare tutte le posizioni raggiungibili dal codice quando viene eseguito correttamente. Queste informazioni vengono archiviate in strutture aggiuntive nelle intestazioni dei file binari. Il compilatore inserisce anche un controllo prima di ogni chiamata indiretta presente nel codice al fine di garantire che la destinazione corrisponde a una delle posizioni verificate. Se il controllo eseguito su un sistema operativo compatibile con Guard flusso di controllo non riesce in fase di esecuzione, il programma viene chiuso dal sistema operativo.

Un comune attacco al software sfrutta in genere bug che si riscontrano nella gestione di input imprevisti o particolari. Input appositamente creato e inviato a un'applicazione potrebbe ad esempio sovrascrivere una posizione che contiene un puntatore a codice eseguibile utilizzabile per reindirizzare il flusso di controllo a codice controllato dall'autore dell'attacco. I controlli di runtime di Guard flusso di controllo non consentono di correggere i bug causati dal danneggiamento del codice nell'eseguibile, ma possono contrastarne l'azione e impedire all'autore dell'attacco di usarli per eseguire codice arbitrario. Guard flusso di controllo è quindi uno strumento di prevenzione che impedisce chiamate a posizioni che non siano i punti di ingresso alle funzioni presenti nel codice. L'effetto di questa funzionalità è analogo a quello ottenuto con Protezione esecuzione programmi, con i controlli dello stack  [/GS](gs-buffer-security-check.md) e con la funzionalità ASLR (Address Space Layout Randomization) di [/DYNAMICBASE](dynamicbase-use-address-space-layout-randomization.md) e [/HIGHENTROPYVA](highentropyva-support-64-bit-aslr.md) , in quanto riduce le possibilità che il codice venga usato come vettore di un attacco.

Per compilare codice che usa la tecnica di prevenzione degli attacchi con Guard flusso di controllo, è necessario passare l'opzione **/guard:cf** sia al compilatore che al linker. Se il file binario viene compilato con un solo comando `cl` , il compilatore passa l'opzione al linker. Se invece le operazioni di compilazione e collegamento vengono eseguite separatamente, l'opzione deve essere impostata nei comandi sia del compilatore che del linker. È richiesta anche l'opzione /DYNAMICBASE del linker. Per verificare che il file binario contenga i dati di Guard flusso di controllo, usare il comando `dumpbin /headers /loadconfig` . I file binari abilitati per Guard flusso di controllo contengono `Guard` nell'elenco delle caratteristiche dei file EXE o DLL, mentre i flag Guard includono `CF Instrumented` e `FID table present`.

L'opzione **/guard:cf** è incompatibile con [/ZI](z7-zi-zi-debug-information-format.md) (informazioni di debug di Modifica e continuazione) o con [/clr](clr-common-language-runtime-compilation.md) (compilazione Common Language Runtime).

Il codice compilato con **/guard:cf** può essere collegato a librerie e file oggetto non compilati con l'opzione. La protezione di Guard flusso di controllo è abilitata solo per questo codice quando viene anche collegato con l'opzione **/guard:cf** e viene eseguito in un sistema operativo che riconosce Guard flusso di controllo. Dal momento che il codice compilato senza l'opzione non consente di bloccare un attacco, è consigliabile usare l'opzione per tutto il codice compilato. I controlli di Guard flusso di controllo comportano un certo costo in termini di runtime, tuttavia l'analisi del compilatore prova a ottimizzare quelli su collegamenti indiretti di cui è possibile comprovare la sicurezza.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare **Proprietà di configurazione**, **C/C++**, **Generazione codice**.

1. Selezionare la proprietà **Guard flusso di controllo** .

1. Nel controllo a discesa scegliere **Sì** per abilitare Guard flusso di controllo oppure **No** per disabilitarlo.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
