---
title: '/Guard: ehcont (Abilita i metadati della continuazione EH)'
description: "Guida di riferimento all'opzione del compilatore Microsoft C++/Guard: ehcont."
ms.date: 06/03/2020
f1_keywords:
- /guard:ehcont
- VC.Project.VCCLCompilerTool.GuardEHContMetadata
helpviewer_keywords:
- /guard:ehcont
- /guard:ehcont compiler option
ms.openlocfilehash: e8775b331440e932efb16148ee15acf1c740cd6e
ms.sourcegitcommit: 7e011c68ca7547469544fac87001a33a37e1792e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2020
ms.locfileid: "84425538"
---
# <a name="guardehcont-enable-eh-continuation-metadata"></a>/Guard: ehcont (Abilita i metadati della continuazione EH)

Abilita la generazione di metadati di continuazione EH (EHCONT) da parte del compilatore.

## <a name="syntax"></a>Sintassi

> **`/guard:ehcont`**[**`-`**]

## <a name="remarks"></a>Commenti

L' **`/guard:ehcont`** opzione fa sì che il compilatore generi un elenco ordinato di indirizzi virtuali relativi (RVA) di tutte le destinazioni di continuazione di gestione delle eccezioni valide per un file binario. Viene usato durante il runtime per `NtContinue` la `SetThreadContext` convalida del puntatore all'istruzione e. Per impostazione predefinita, **`/guard:ehcont`** è disattivato e deve essere abilitato in modo esplicito. Per disabilitare in modo esplicito questa opzione, usare **`/guard:ehcont-`** .

L' **`/guard:ehcont`** opzione è disponibile in Visual Studio 2019 versione 16,7 e successive. La funzionalità è supportata per i processi a 64 bit in un sistema operativo a 64 bit.

La [tecnologia di imposizione del flusso di controllo (CET)](https://software.intel.com/sites/default/files/managed/4d/2a/control-flow-enforcement-technology-preview.pdf) è una funzionalità di sicurezza basata su hardware che protegge dagli attacchi basati sulla programmazione basata sul ritorno (POR). Mantiene uno "shadow stack" per ogni stack di chiamate per applicare l'integrità del flusso di controllo.

Quando gli stack shadow sono disponibili per impedire gli attacchi por, gli utenti malintenzionati passano a usare altre tecniche di exploit. Una tecnica che può usare è il danneggiamento del valore del puntatore all'istruzione all'interno della struttura del [contesto](/windows/win32/api/winnt/ns-winnt-context) . Questa struttura viene passata alle chiamate di sistema che reindirizzano l'esecuzione di un thread, ad esempio `NtContinue` , [`RtlRestoreContext`](/windows/win32/api/winnt/nf-winnt-rtlrestorecontext) e [`SetThreadContext`](/windows/win32/api/processthreadsapi/nf-processthreadsapi-setthreadcontext) . La `CONTEXT` struttura è archiviata in memoria. Il danneggiamento del puntatore all'istruzione che contiene può causare il trasferimento dell'esecuzione da parte del sistema a un indirizzo controllato da un utente malintenzionato. Attualmente, `NTContinue` può essere chiamato con qualsiasi punto di continuità. Per questo motivo è essenziale convalidare il puntatore all'istruzione quando gli stack shadow sono abilitati.

`RtlRestoreContext`e `NtContinue` vengono usati durante la rimozione delle eccezioni strutturate (SEH) per la rimozione del frame di destinazione che contiene il `__except` blocco. Non è previsto che il puntatore all'istruzione del `__except` blocco si trovi nello stack shadow, perché la convalida del puntatore all'istruzione non riesce. L' **`/guard:ehcont`** opzione del compilatore genera una "tabella di continuazione eh". Contiene un elenco ordinato di RVA di tutte le destinazioni di continuazione di gestione delle eccezioni valide nel file binario. `NtContinue`prima controlla lo stack di ombreggiatura per il puntatore all'istruzione fornito dall'utente. se il puntatore all'istruzione non viene trovato, viene eseguita la verifica della tabella di continuazione EH dal file binario che contiene il puntatore all'istruzione. Se il file binario che lo contiene non è stato compilato con la tabella, per la compatibilità con i file binari legacy `NtContinue` è consentito continuare. È importante distinguere tra i file binari legacy che non dispongono di dati EHCONT e i file binari contenenti dati EHCONT ma nessuna voce di tabella. Il primo consente a tutti gli indirizzi all'interno del file binario come destinazioni di continuazione valide. Il secondo non consente alcun indirizzo all'interno del file binario come destinazione di continuazione valida.

**`/guard:ehcont`** È necessario passare l'opzione sia al compilatore che al linker per generare RVA di destinazione di continuazione eh per un file binario. Se il file binario viene compilato con un solo comando `cl` , il compilatore passa l'opzione al linker. Il compilatore passa anche l' [**`/guard:cf`**](guard-enable-control-flow-guard.md) opzione al linker. Se si compilano e si collegano separatamente, queste opzioni devono essere impostate sia nei comandi del compilatore che del linker.

È possibile collegare il codice compilato utilizzando **`/guard:ehcont`** a librerie e file oggetto compilati senza di esso. Il linker restituisce un errore irreversibile in uno di questi scenari:

- Una sezione di codice ha "rimozione locale". Per ulteriori informazioni, vedere chiusura anomala nell' [istruzione try-finally](../../cpp/try-finally-statement.md#abnormal-termination).

- Una sezione EH (XData) contiene puntatori a una sezione di codice e non sono per SEH.

- I puntatori sono per SEH, ma il file oggetto non è stato compilato usando il collegamento a livello di funzione ([/Gy](gy-enable-function-level-linking.md)) per produrre COMDAT.

Il linker restituisce un errore irreversibile perché non è in grado di generare metadati in questi scenari. Ciò significa che è probabile che la generazione di un'eccezione provochi un arresto anomalo in fase di esecuzione.

Per informazioni sulla sezione SEH trovate in COMDAT, ma non compilate usando **`/guard:ehcont`** , il linker genera un avviso **LNK4291**. In questo caso, il linker genera metadati corretti ma conservativi per la sezione. Per ignorare questo avviso, usare [/Ignore (Ignora avvisi specifici)](ignore-ignore-specific-warnings.md).

Se il linker non è in grado di generare metadati, genera uno degli errori seguenti:

- **`LNK2046`**`: module contains _local_unwind but was not compiled with /guard:ehcont`

- **`LNK2047`**`: module contains C++ EH or complex EH metadata but was not compiled with /guard:ehcont.`

Per verificare se un file binario contiene dati EHCONT, cercare gli elementi seguenti durante il dump della configurazione di caricamento del file binario:

```cmd
e:\>link /dump /loadconfig CETTest.exe
...
            10417500 Guard Flags
...
                       EH Continuation table present      // EHCONT guard flag present
...
    0000000180018640 Guard EH continuation table
                  37 Guard EH continuation count          // May be 0 if no exception handling is used in the binary. Still counts has having EHCONT data.
...
    Guard EH Continuation Table                           // List of RVAs

          Address
          --------
           0000000180002CF5
           0000000180002F03
           0000000180002F0A
...
```

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione**delle  >  proprietà di generazione del codice**C/C++**  >  **Code Generation** .

1. Selezionare la proprietà **Abilita metadati di continuazione** .

1. Nel controllo a discesa scegliere **Sì (/Guard: ehcont)** per abilitare i metadati di continuazione eh oppure **No (/Guard: ehcont-)** per disabilitarlo.

## <a name="see-also"></a>Vedere anche

[/Guard (Abilita Guard flusso di controllo)](guard-enable-control-flow-guard.md)\
[Opzioni del compilatore MSVC](compiler-options.md)\
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
