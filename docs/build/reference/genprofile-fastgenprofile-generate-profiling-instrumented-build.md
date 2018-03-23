---
title: /GENPROFILE, /FASTGENPROFILE (generare Build instrumentata di profilatura) | Documenti Microsoft
ms.custom: ''
ms.date: 03/14/2018
ms.technology:
- cpp-tools
ms.topic: article
f1_keywords:
- GENPROFILE
- FASTGENPROFILE
- /GENPROFILE
- /FASTGENPROFILE
helpviewer_keywords:
- GENPROFILE
- FASTGENPROFILE
ms.assetid: deff5ce7-46f5-448a-b9cd-a7a83a6864c6
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b6174c1fdd53ec14f0cb63292a9036caabc98a7d
ms.sourcegitcommit: ee7d74683af7631441c8c7f65ef5ceceaee4a5ee
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/22/2018
---
# <a name="genprofile-fastgenprofile-generate-profiling-instrumented-build"></a>/GENPROFILE, /FASTGENPROFILE (Generare la build instrumentata di profilatura)

Specifica la generazione di un file PDG dal linker per supportare l'ottimizzazione PGO. **/ GENPROFILE** e **/FASTGENPROFILE** usano parametri predefiniti diversi. Uso **/GENPROFILE** di preferire precisione utilizzo della memoria e velocità durante la profilatura. Uso **/FASTGENPROFILE** di preferire precisione minore utilizzo della memoria e velocità.

## <a name="syntax"></a>Sintassi

> **/ GENPROFILE**[**:**{[**COUNTER32**|**COUNTER64**] | [ **EXACT**|**NOEXACT**] | **MEMMAX =**_#_|**MEMMIN =**_#_| [ **Percorso**|**NOPATH** ] | [ **TRACKEH** |**NOTRACKEH** ] | **PGD =**_filename_}]<br/>
> **/ FASTGENPROFILE**[**:**{[**COUNTER32**|**COUNTER64**] | [ **EXACT**|**NOEXACT**] | **MEMMAX =**_#_|**MEMMIN =**_#_| [ **Percorso**|**NOPATH** ] | [ **TRACKEH** |**NOTRACKEH** ] | **PGD =**_filename_}]

### <a name="arguments"></a>Argomenti

Uno dei seguenti argomenti, può essere specificato per **/GENPROFILE** oppure **/FASTGENPROFILE**. Gli argomenti elencati di seguito separati da una barra verticale (**|**) carattere si escludono a vicenda. Utilizzare la virgola (**,**) carattere per separare le opzioni.

**COUNTER32** &#124; **COUNTER64**<br/>
Utilizzare **COUNTER32** per specificare l'utilizzo di contatori di probe a 32 bit, e **COUNTER64** per specificare i contatori di probe a 64 bit. Quando si specifica **/GENPROFILE**, il valore predefinito è **COUNTER64**. Quando si specifica **/FASTGENPROFILE**, il valore predefinito è **COUNTER32**.

**ESATTO** &AMP;#124; **NOEXACT**<br/>
Uso **EXACT** per specificare incrementi interlocked thread-safe per le ricerche. **NOEXACT** specifica le operazioni di incremento non protette per le ricerche. Il valore predefinito è **NOEXACT**.

**MEMMAX**=*value*, **MEMMIN**=*value*<br/>
Uso **MEMMAX** e **MEMMIN** per specificare le dimensioni di prenotazione minime e massime per dati di training in memoria. Il valore è la quantità di memoria da riservare in byte. Per impostazione predefinita, questi valori vengono determinati da un approccio euristico interno.

**PATH**  &#124; **NOPATH** <br/>
Uso **percorso** per specificare un set separato di contatori PGO per ogni percorso univoco a una funzione. Uso **NOPATH** per specificare un solo set di contatori per ogni funzione. Quando si specifica **/GENPROFILE**, il valore predefinito è **percorso** . Quando si specifica **/FASTGENPROFILE**, il valore predefinito è **NOPATH** .

**TRACKEH**  &#124; **NOTRACKEH** <br/>
Specifica se usare i contatori aggiuntivi per mantenere un conteggio accurato quando vengono generate eccezioni durante il training. Uso **TRACKEH** per specificare i contatori aggiuntivi per un conteggio esatto. Utilizzare **NOTRACKEH** per specificare i contatori singoli per il codice che non usa l'eccezione gestione o che non riscontra eccezioni negli scenari di training.  Quando si specifica **/GENPROFILE**, il valore predefinito è **TRACKEH** . Quando si specifica **/FASTGENPROFILE**, il valore predefinito è **NOTRACKEH** .

**PGD**=*filename*<br/>
Specifica un nome del file di base per il file PGD. Per impostazione predefinita, il linker usa il nome del file immagine eseguibile di base con estensione PGD.

## <a name="remarks"></a>Note

Il **/GENPROFILE** e **/FASTGENPROFILE** opzioni indicano al linker di generare il file di strumentazione profilatura necessario per supportare il training dell'applicazione per l'ottimizzazione guidata da profilo (PGO). Queste opzioni sono una novità di Visual Studio 2015. Preferisce queste opzioni all'oggetto deprecato **/LTCG: PGINSTRUMENT**, **/PGD** e **/POGOSAFEMODE** opzioni e il **PogoSafeMode**,  **VCPROFILE_ALLOC_SCALE** e **VCPROFILE_PATH** le variabili di ambiente. Le informazioni di profilatura generate dal training relativo alle applicazioni vengono usate come input per eseguire le ottimizzazioni mirate dell'intero programma durante la compilazione. È possibile impostare opzioni aggiuntive per controllare varie funzionalità di profilatura per le prestazioni durante il training relativo alle app e le compilazioni. Le opzioni predefinite specificate da **/GENPROFILE** forniscono risultati più accurati, soprattutto per grandi e complesse applicazioni multithread. Il **/FASTGENPROFILE** opzione Usa valori predefiniti diversi per un footprint di memoria inferiore e prestazioni più veloci durante il training, a scapito della precisione.

Le informazioni di profilatura vengono acquisite quando si esegue l'applicazione instrumentata dopo avere compilato usando **/GENPROFILE** dei **/FASTGENPROFILE**. Queste informazioni vengono acquisite quando si specifica il [/USEPROFILE](useprofile.md) opzione del linker per eseguire la profilatura passaggio e quindi utilizzato l'istruzione di compilazione ottimizzata. Per altre informazioni su come eseguire il training dell'app e informazioni dettagliate sui dati raccolti, vedere [ottimizzazione PGO](profile-guided-optimizations.md).

È necessario specificare anche **/LTCG** quando si specifica **/GENPROFILE** oppure **/FASTGENPROFILE**.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** > **riga di comando** pagina delle proprietà.

1. Immettere il **/GENPROFILE** o **/FASTGENPROFILE** opzioni e gli argomenti in di **opzioni aggiuntive** casella. Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)<br/>
[/LTCG (generazione di codice in fase di collegamento)](../../build/reference/ltcg-link-time-code-generation.md)<br/>
