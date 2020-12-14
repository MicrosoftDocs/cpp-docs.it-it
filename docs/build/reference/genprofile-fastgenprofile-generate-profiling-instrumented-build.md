---
description: Altre informazioni su:/GENPROFILE,/FASTGENPROFILE (genera la compilazione instrumentata di profilatura)
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
ms.openlocfilehash: 7bb0f9b1c7a6036c5e721f79b438bf9dd6504111
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97200234"
---
# <a name="genprofile-fastgenprofile-generate-profiling-instrumented-build"></a>/GENPROFILE, /FASTGENPROFILE (Generare la build instrumentata di profilatura)

Specifica la generazione di un file PDG dal linker per supportare l'ottimizzazione PGO. **/GENPROFILE** e **/FASTGENPROFILE** usano parametri predefiniti diversi. Usare **/GENPROFILE** per preferire la precisione rispetto alla velocità e all'utilizzo della memoria durante la profilatura. Usare **/FASTGENPROFILE** per ottimizzare l'utilizzo di memoria inferiore e velocizzare la precisione.

## <a name="syntax"></a>Sintassi

> **/GENPROFILE** \[ **:**{ \[ **COUNTER32** \| **COUNTER64**] \| \[ **exact** \| **noexact**] \| **MEMMAX =** _#_ \| **MEMMIN =** _#_ \| \[ **path** \| **NOPATH**] \| \[ **TRACKEH** \| **NOTRACKEH** ] \| **PGD =**_filename_}] \
> **/FASTGENPROFILE** \[ **:**{ \[ **COUNTER32** \| **COUNTER64**] \| \[ **exact** \| **noexact**] \| **MEMMAX =** _#_ \| **MEMMIN =** _#_ \| [**percorso** \| **NOPATH** ] \| \[ **TRACKEH** \| **NOTRACKEH** ] \| **PGD =**_filename_}]

### <a name="arguments"></a>Argomenti

È possibile specificare uno degli argomenti seguenti in **/GENPROFILE** o **/FASTGENPROFILE**. Gli argomenti elencati qui separati da un carattere pipe ( **|** ) si escludono a vicenda. Usare un carattere virgola (**,**) per separare le opzioni.

**COUNTER32** &#124; **COUNTER64**<br/>
Usare **COUNTER32** per specificare l'uso dei contatori di probe a 32 bit e **COUNTER64** per specificare i contatori di probe a 64 bit. Quando si specifica **/GENPROFILE**, il valore predefinito è **COUNTER64**. Quando si specifica **/FASTGENPROFILE**, il valore predefinito è **COUNTER32**.

**Esatta** &#124; **noexact**<br/>
Usare **exact** per specificare incrementi Interlocked thread-safe per i probe. **Noexact** specifica le operazioni di incremento non protette per i probe. Il valore predefinito è **noexact**.

**MEMMAX** = *valore*,  = *valore* MEMMIN<br/>
Usare **MEMMAX** e **MEMMIN** per specificare le dimensioni di prenotazione massime e minime per i dati di training in memoria. Il valore è la quantità di memoria da riservare in byte. Per impostazione predefinita, questi valori vengono determinati da un approccio euristico interno.

**Percorso**  &#124; **NOPATH** <br/>
Usare **path**  per specificare un set separato di contatori PGO per ogni percorso univoco di una funzione. Usare **NOPATH**  per specificare un solo set di contatori per ogni funzione. Quando si specifica **/GENPROFILE**, il valore predefinito è **path** . Quando si specifica **/FASTGENPROFILE**, il valore predefinito è **NOPATH** .

**TRACKEH**  &#124; **NOTRACKEH** <br/>
Specifica se usare i contatori aggiuntivi per mantenere un conteggio accurato quando vengono generate eccezioni durante il training. Usare **TRACKEH**  per specificare i contatori aggiuntivi per un conteggio esatto. Usare **NOTRACKEH**  per specificare i contatori singoli per il codice che non usa la gestione delle eccezioni o che non riscontra eccezioni negli scenari di training.  Quando si specifica **/GENPROFILE**, il valore predefinito è **TRACKEH** . Quando si specifica **/FASTGENPROFILE**, il valore predefinito è **NOTRACKEH** .

**PGD** = *nome file*<br/>
Specifica un nome del file di base per il file PGD. Per impostazione predefinita, il linker usa il nome del file immagine eseguibile di base con estensione PGD.

## <a name="remarks"></a>Commenti

Le opzioni **/GENPROFILE** e **/FASTGENPROFILE** indicano al linker di generare il file di strumentazione per la profilatura necessario per supportare il training delle applicazioni per l'ottimizzazione PGO (PGO). Queste opzioni sono nuove in Visual Studio 2015. Preferire queste opzioni alle opzioni deprecate **/LTCG: PGINSTRUMENT**, **/PGD** e **/POGOSAFEMODE** e alle variabili di ambiente **POGOSAFEMODE**, **VCPROFILE_ALLOC_SCALE** e **VCPROFILE_PATH** . Le informazioni di profilatura generate dal training relativo alle applicazioni vengono usate come input per eseguire le ottimizzazioni mirate dell'intero programma durante la compilazione. È possibile impostare opzioni aggiuntive per controllare varie funzionalità di profilatura per le prestazioni durante il training relativo alle app e le compilazioni. Le opzioni predefinite specificate da **/GENPROFILE** forniscono risultati più accurati, soprattutto per app multithread complesse e di grandi dimensioni. L'opzione **/FASTGENPROFILE** usa valori predefiniti diversi per un footprint di memoria inferiore e prestazioni più veloci durante il training, a scapito dell'accuratezza.

Le informazioni di profilatura vengono acquisite quando si esegue l'app instrumentata dopo la compilazione usando **/GENPROFILE** di **/FASTGENPROFILE**. Queste informazioni vengono acquisite quando si specifica l'opzione del linker [/USEPROFILE](useprofile.md) per eseguire il passaggio di profilatura e quindi si usa per guidare l'istruzione di compilazione ottimizzata. Per altre informazioni su come eseguire il training dell'app e informazioni dettagliate sui dati raccolti, vedere [ottimizzazione](../profile-guided-optimizations.md)PGO.

È inoltre necessario specificare **/LTCG** quando si specifica **/GENPROFILE** o **/FASTGENPROFILE**.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la   >  pagina delle proprietà della riga di comando del **linker** proprietà di configurazione  >   .

1. Immettere le opzioni **/GENPROFILE** o **/FASTGENPROFILE** e gli argomenti nella casella **Opzioni aggiuntive** . Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)<br/>
[/LTCG (generazione di codice in fase di collegamento)](ltcg-link-time-code-generation.md)<br/>
