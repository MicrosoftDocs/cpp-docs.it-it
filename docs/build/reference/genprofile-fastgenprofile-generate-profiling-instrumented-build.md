---
title: /GENPROFILE, /FASTGENPROFILE (Generare la build instrumentata di profilatura)
ms.date: 03/14/2018
f1_keywords:
- GENPROFILE
- FASTGENPROFILE
- /GENPROFILE
- /FASTGENPROFILE
helpviewer_keywords:
- GENPROFILE
- FASTGENPROFILE
ms.assetid: deff5ce7-46f5-448a-b9cd-a7a83a6864c6
ms.openlocfilehash: cf6327b175344f1e2914792eb47a4838e544ea24
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57813877"
---
# <a name="genprofile-fastgenprofile-generate-profiling-instrumented-build"></a>/GENPROFILE, /FASTGENPROFILE (Generare la build instrumentata di profilatura)

Specifica la generazione di un file PDG dal linker per supportare l'ottimizzazione PGO. **/ GENPROFILE** e **/FASTGENPROFILE** usano parametri predefiniti diversi. Uso **/GENPROFILE** di preferire utilizzo della memoria e velocità di precisione durante la profilatura. Uso **/FASTGENPROFILE** per favorire la riduzione minore utilizzo della memoria e velocità rispetto alla precisione.

## <a name="syntax"></a>Sintassi

> **/ GENPROFILE**[**:**{[**COUNTER32**|**COUNTER64**] | [ **EXACT**|**NOEXACT**] | **MEMMAX =**_#_|**MEMMIN =**_#_| [ **TRACCIATO**|**NOPATH** ] | [ **TRACKEH** |**NOTRACKEH** ] | **PGD =**_filename_}]<br/>
> **/ FASTGENPROFILE**[**:**{[**COUNTER32**|**COUNTER64**] | [ **EXACT**|**NOEXACT**] | **MEMMAX =**_#_|**MEMMIN =**_#_| [ **TRACCIATO**|**NOPATH** ] | [ **TRACKEH** |**NOTRACKEH** ] | **PGD =**_filename_}]

### <a name="arguments"></a>Argomenti

Uno dei seguenti argomenti, può essere specificato per **/GENPROFILE** oppure **/FASTGENPROFILE**. Gli argomenti elencati di seguito separati da una barra verticale (**|**) carattere si escludono a vicenda. Usare una virgola (**,**) carattere per separare le opzioni.

**COUNTER32** &#124; **COUNTER64**<br/>
Usare **COUNTER32** per specificare l'utilizzo di contatori di probe a 32 bit, e **COUNTER64** per specificare i contatori di probe a 64 bit. Quando si specifica **/GENPROFILE**, il valore predefinito è **COUNTER64**. Quando si specifica **/FASTGENPROFILE**, il valore predefinito è **COUNTER32**.

**EXACT** &#124; **NOEXACT**<br/>
Uso **EXACT** per specificare incrementi interlocked thread-safe per le ricerche. **NOEXACT** specifica le operazioni di incremento non protette per le ricerche. Il valore predefinito è **NOEXACT**.

**MEMMAX**=*value*, **MEMMIN**=*value*<br/>
Uso **MEMMAX** e **MEMMIN** per specificare le dimensioni di prenotazione minime e massime per i dati di training in memoria. Il valore è la quantità di memoria da riservare in byte. Per impostazione predefinita, questi valori vengono determinati da un approccio euristico interno.

**PATH**  &#124; **NOPATH** <br/>
Uso **percorso** per specificare un set separato di contatori PGO per ogni percorso univoco a una funzione. Uso **NOPATH** per specificare un solo set di contatori per ogni funzione. Quando si specifica **/GENPROFILE**, il valore predefinito è **percorso** . Quando si specifica **/FASTGENPROFILE**, il valore predefinito è **NOPATH** .

**TRACKEH**  &#124; **NOTRACKEH** <br/>
Specifica se usare i contatori aggiuntivi per mantenere un conteggio accurato quando vengono generate eccezioni durante il training. Uso **TRACKEH** per specificare i contatori aggiuntivi per un conteggio esatto. Usare **NOTRACKEH** per specificare i contatori singoli per il codice che non utilizza eccezione manipolazione o che non riscontra eccezioni negli scenari di formazione.  Quando si specifica **/GENPROFILE**, il valore predefinito è **TRACKEH** . Quando si specifica **/FASTGENPROFILE**, il valore predefinito è **NOTRACKEH** .

**PGD**=*nomefile*<br/>
Specifica un nome del file di base per il file PGD. Per impostazione predefinita, il linker usa il nome del file immagine eseguibile di base con estensione PGD.

## <a name="remarks"></a>Note

Il **/GENPROFILE** e **/FASTGENPROFILE** opzioni indicano al linker di generare il file di strumentazione di profilatura necessario per supportare la formazione dell'applicazione per l'ottimizzazione PGO (PGO). Queste opzioni sono novità di Visual Studio 2015. Queste opzioni all'oggetto deprecato preferisce **/LTCG: PGINSTRUMENT**, **/PGD** e **/POGOSAFEMODE** opzioni e il **PogoSafeMode**,  **VCPROFILE_ALLOC_SCALE** e **VCPROFILE_PATH** le variabili di ambiente. Le informazioni di profilatura generate dal training relativo alle applicazioni vengono usate come input per eseguire le ottimizzazioni mirate dell'intero programma durante la compilazione. È possibile impostare opzioni aggiuntive per controllare varie funzionalità di profilatura per le prestazioni durante il training relativo alle app e le compilazioni. Le opzioni predefinite specificate da **/GENPROFILE** forniscono risultati più accurati, soprattutto per grandi e complesse applicazioni multithread. Il **/FASTGENPROFILE** opzione Usa valori predefiniti diversi per un impatto minore sulla memoria e migliorare le prestazioni durante il training, a scapito della precisione.

Le informazioni di profilatura vengono acquisite quando si esegue l'applicazione instrumentata dopo avere compilato usando **/GENPROFILE** dei **/FASTGENPROFILE**. Queste informazioni vengono acquisite quando si specifica la [/USEPROFILE](useprofile.md) opzione del linker per l'esecuzione della profilatura passaggio e quindi utilizzato per guidare il passaggio di compilazione ottimizzata. Per altre informazioni su come eseguire il training di app e informazioni dettagliate sui dati raccolti, vedere [le ottimizzazioni PGO](../profile-guided-optimizations.md).

È necessario specificare anche **/LTCG** quando si specifica **/GENPROFILE** oppure **/FASTGENPROFILE**.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** > **della riga di comando** pagina delle proprietà.

1. Immettere il **/GENPROFILE** o **/FASTGENPROFILE** opzioni e gli argomenti in di **opzioni aggiuntive** casella. Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Riferimento del linker MSVC](linking.md)<br/>
[Opzioni del Linker MSVC](linker-options.md)<br/>
[/LTCG (generazione di codice in fase di collegamento)](ltcg-link-time-code-generation.md)<br/>
