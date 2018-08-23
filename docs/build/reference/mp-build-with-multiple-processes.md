---
title: /MP (compilazione con più processi) | Microsoft Docs
ms.custom: ''
ms.date: 02/22/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCCLCompilerTool.MultiProcessorCompilation
dev_langs:
- C++
helpviewer_keywords:
- -MP compiler option (C++)
- /MP compiler option (C++)
- MP compiler option (C++)
- cl.exe compiler, multi-process build
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3e61f1ac30c2a50cbbefe6c0cbd9e28011a0d0bd
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42573240"
---
# <a name="mp-build-with-multiple-processes"></a>/MP (compilazione con più processi)

L'opzione **/MP** può ridurre il tempo totale di compilazione dei file di origine nella riga di comando. L'opzione **/MP** fa sì che il compilatore crei una o più copie di se stesso, ciascuna in un processo separato. Queste copie quindi compilano simultaneamente i file di origine. Pertanto, il tempo totale di compilazione dei file di origine può essere notevolmente ridotto.

## <a name="syntax"></a>Sintassi

> **/MP**[*processMax*]

## <a name="arguments"></a>Argomenti

*processMax*<br/>
(Facoltativo) Numero massimo di processi che il compilatore può creare.

Il *processMax* argomento deve essere compreso tra 1 e 65536. In caso contrario, il compilatore genera il messaggio di avviso **D9014**, ignora le *processMax* argomento e presuppone che il numero massimo di processi sia 1.

Se si omette il *processMax* argomento, il compilatore recupera il numero della [processori effettivi](#effective_processors) nel computer dal sistema operativo e crea un processo per ogni processore.

## <a name="remarks"></a>Note

L'opzione **/MP** del compilatore può ridurre notevolmente il tempo di compilazione quando si compilano molti file. Per migliorare i tempi di compilazione, il compilatore crea fino a *processMax* copie di se stesso e quindi Usa tali copie per compilare i file di origine nello stesso momento. L'opzione **/MP** si applica alle compilazioni, ma non al collegamento o alla generazione di codice in fase di collegamento. Per impostazione predefinita, l'opzione **/MP** non è attiva.

Il miglioramento del tempo di compilazione dipende dal numero di processori presenti in un computer, dal numero di file da compilare e dalla disponibilità delle risorse di sistema, ad esempio la capacità di I/O. Provare a usare l'opzione **/MP** per determinare l'impostazione ottimale per compilare un progetto specifico. Per consigli su come scegliere l'impostazione più appropriata, vedere [Indicazioni](#guidelines).

## <a name="incompatible-options-and-language-features"></a>Opzioni incompatibili e funzionalità del linguaggio

L'opzione **/MP** è incompatibile con alcune opzioni del compilatore e funzionalità del linguaggio. Se si usa un'opzione del compilatore incompatibile con il **/MP** opzione, il compilatore genererà l'avviso **D9030** e ignora il **/MP** opzione. Se si usa una funzionalità del linguaggio incompatibile, il compilatore genera l'errore [C2813](../../error-messages/compiler-errors-2/compiler-error-c2813.md) quindi terminerà o proseguirà a seconda l'avviso opzione relativa al livello del compilatore corrente.

> [!NOTE]
> Molte delle opzioni sono incompatibili. Se fossero consentite, infatti, i compilatori in esecuzione scriverebbero contemporaneamente l'output nella console o in un determinato file. Di conseguenza, l'output risulterebbe confuso e illeggibile. In alcuni casi la combinazione di opzioni peggiorerebbe le prestazioni.

La tabella seguente elenca le opzioni del compilatore e le funzionalità del linguaggio che non sono compatibili con l'opzione **/MP** :

|Opzione o funzionalità del linguaggio|Descrizione|
|--------------------------------|-----------------|
|Direttiva del preprocessore[#import](../../preprocessor/hash-import-directive-cpp.md) |Converte i tipi in una libreria dei tipi in classi C++ e quindi scrive tali classi in un file di intestazione.|
|[/E](../../build/reference/e-preprocess-to-stdout.md), [/EP](../../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md)|Copia l'output del preprocessore nello standard output (**stdout**).|
|[/Gm](../../build/reference/gm-enable-minimal-rebuild.md)|Consente una ricompilazione incrementale.|
|[/showIncludes](../../build/reference/showincludes-list-include-files.md)|Scrive un elenco dei file di inclusione nello standard error (**stderr**).|
|[/Yc](../../build/reference/yc-create-precompiled-header-file.md)|Scrive un file di intestazione precompilato.|

## <a name="diagnostic-messages"></a>Messaggi di diagnostica

Se si specifica un'opzione o una funzionalità del linguaggio che non è compatibile con l'opzione **/MP** , si riceverà un messaggio di diagnostica. La tabella seguente elenca i messaggi e il comportamento del compilatore:

|Messaggio di diagnostica|Descrizione|Comportamento del compilatore|
|------------------------|-----------------|-----------------------|
|**C2813**|La direttiva **#import** non è compatibile con l'opzione **/MP** .|La compilazione termina, a meno che un'opzione relativa al [livello di avviso del compilatore](../../build/reference/compiler-option-warning-level.md) non specifichi diversamente.|
|**D9014**|Viene specificato un valore non valido per il *processMax* argomento.|Il compilatore ignora il valore non valido e presuppone che il valore sia 1.|
|**D9030**|L'opzione specificata non è compatibile con **/MP**.|Il compilatore ignora l'opzione **/MP** .|

## <a name="guidelines"></a> Indicazioni

### <a name="measure-performance"></a>Misurazione delle prestazioni

Per misurare le prestazioni, usare il tempo totale di compilazione. È possibile misurare il tempo di compilazione con un orologio fisico oppure tramite uno strumento software che calcola la differenza tra l'avvio e l'arresto della compilazione. Se il computer ha più processori, un orologio fisico può produrre risultati più precisi rispetto alla misurazione del tempo tramite software.

### <a name="effective_processors"></a> Effective Processors

Un computer può avere uno o più processori virtuali, che sono anche dette *processori effettivi*, per ognuno dei processori fisici. Ogni processore fisico può avere uno o più core e, se il sistema operativo consente l'hyperthreading per un core, ciascun core viene visualizzato come due processori virtuali.

Un computer ha ad esempio un processore effettivo se ha un processore fisico con un core e l'hyperthreading è disabilitato. Al contrario, un computer ha otto processori effettivi se ha due processori fisici, ognuno con due core, e in tutti i core è abilitato l'hyperthreading. Vale a dire, (8 processori effettivi) = (2 processori fisici) x (2 core per processore fisico) x (2 processori effettivi per core a causa dell'hyperthreading).

Se si omette il *processMax* argomento il **/MP** opzione, il compilatore Ottiene il numero di processori effettivi dal sistema operativo e quindi crea un processo per ogni processore effettivo. Il compilatore non può tuttavia garantire quale processo venga eseguito su un particolare processore. Questa decisione viene presa dal sistema operativo.

### <a name="number-of-processes"></a>Numero di processi

Il compilatore calcola il numero di processi usati per compilare i file di origine. Si tratta del valore più basso tra il numero di file di origine specificato sulla riga di comando e il numero di processi specificato in modo esplicito o implicito con l'opzione **/MP** . È possibile impostare il numero massimo di processi in modo esplicito se si specifica la *processMax* argomento delle **/MP** opzione. Oppure è possibile usare l'impostazione predefinita, che è uguale al numero di processori effettivi in un computer, se si omette il *processMax* argomento.

Si supponga, ad esempio, di specificare la riga di comando seguente:

`cl /MP7 a.cpp b.cpp c.cpp d.cpp e.cpp`

In questo caso, il compilatore usa cinque processi perché cinque è il valore più basso tra il numero di file di origine (cinque) e il numero massimo di processi (sette). In alternativa, si supponga che il computer abbia due processori effettivi e che si specifichi la riga di comando seguente:

`cl /MP a.cpp b.cpp c.cpp`

In questo caso, poiché il sistema operativo segnala la presenza di due processori, il compilatore usa due processi nel calcolo. Di conseguenza, il compilatore eseguirà la compilazione con due processi perché due è il valore più basso tra il numero di processi (due) e il numero di file di origine (tre).

### <a name="source-files-and-build-order"></a>File di origine e ordine di compilazione

È possibile che i file di origine non vengano compilati nello stesso ordine in cui appaiono nella riga di comando. Anche se il compilatore crea un set di processi contenente copie del compilatore, il sistema operativo pianifica l'esecuzione di ogni processo. Non è pertanto possibile garantire che i file di origine vengano compilati in un determinato ordine.

Un file di origine viene compilato quando è disponibile un processo per la compilazione. Se il numero di file supera quello dei processi, il primo set di file viene compilato dai processi disponibili. I file rimanenti vengono elaborati quando un processo termina la gestione di un file precedente e diventa disponibile per gestire uno dei file rimanenti.

Non specificare lo stesso file di origine più volte su una riga di comando. Ciò può verificarsi, ad esempio, se uno strumento crea automaticamente un [makefile](../../build/contents-of-a-makefile.md) in base alle informazioni sulle dipendenze in un progetto. Se non si specifica l'opzione **/MP** , il compilatore elabora l'elenco di file in sequenza e ricompila ogni occorrenza del file. Se tuttavia si specifica l'opzione **/MP** , è possibile che diversi compilatori compilino contemporaneamente lo stesso file, tentando quindi di scrivere contemporaneamente nello stesso file di output. Un compilatore acquisirà l'accesso in scrittura esclusivo al file di output e l'operazione avrà esito positivo, mentre gli altri compilatori non riusciranno a completare l'operazione e verrà generato un errore di accesso al file.

### <a name="using-type-libraries-import"></a>Uso delle librerie dei tipi (#import)

Il compilatore non supporta l'uso della direttiva [#import](../../preprocessor/hash-import-directive-cpp.md) con l'opzione **/MP** . Se possibile, seguire questa procedura per risolvere il problema:

- Spostare tutte le direttive `#import` presenti nei vari file di origine in uno o più file e quindi compilare tali file senza l'opzione **/MP** . Il risultato è un set di file di intestazione generati.

- Nei file di origine rimanenti inserire le direttive [#include](../../preprocessor/hash-include-directive-c-cpp.md) che specificano le intestazioni generate e quindi compilare i file di origine rimanenti tramite l'opzione **/MP** .

### <a name="visual-studio-project-settings"></a>Impostazioni del progetto Visual Studio

#### <a name="the-msbuildexe-tool"></a>Strumento MSBUILD.exe

Visual Studio Usa la [MSBuild.exe](/visualstudio/msbuild/msbuild-reference) strumento per creare soluzioni e progetti. Il **/maxcpucount:**_numero_ (o **/m:**_numero_) opzione della riga di comando dello strumento MSBuild.exe può compilare progetti di più di stesso tempo. Inoltre, l'opzione **/MP** del compilatore consente di compilare più unità di compilazione contemporaneamente. Se l'operazione è appropriata per l'applicazione, migliorare il tempo di compilazione della soluzione usando **/MP** e/o **/maxcpucount**.

Il tempo di compilazione della soluzione dipende in parte dal numero di processi che eseguono la compilazione. Il *numero* argomento delle [/maxcpucount](/visualstudio/msbuild/msbuild-command-line-reference) opzione di MSBuild specifica il numero massimo di progetti da compilare contemporaneamente. Analogamente, il *processMax* argomento del **/MP** opzione del compilatore specifica il numero massimo di unità di compilazione per compilare contemporaneamente. Se il **/maxcpucount** opzione specifica *P* progetti e le **/MP** opzione specifica *C* processi, un massimo di *P*  x *C* eseguano i processi nello stesso momento.

 Le indicazioni per decidere se usare MSBuild o **/MP** tecnologia è come segue:

- Se sono presenti numerosi progetti con pochi file in ogni progetto, usare lo strumento MSBuild.

- Se sono presenti pochi progetti con molti file in ogni progetto, usare l'opzione **/MP** .

- Se il numero di progetti e file per ogni progetto è bilanciato, usare entrambi MSBuild e **/MP**. Impostare inizialmente l'opzione **/maxcpucount** sul numero di progetti da compilare e l'opzione **/MP** sul numero di processori nel computer. Misurare le prestazioni e quindi modificare le impostazioni per ottenere risultati ottimali. Ripetere il ciclo finché non si ottiene il tempo totale di compilazione desiderato.

#### <a name="the-gm-compiler-option"></a>Opzione /Gm del compilatore

Per impostazione predefinita, la compilazione di un progetto abilita l'opzione **/Gm** del compilatore (compilazioni incrementali) per le compilazioni di debug e la disabilita per le compilazioni di rilascio. L'opzione **/MP** del compilatore viene pertanto disabilitata automaticamente nelle compilazioni di debug perché entra in conflitto con l'opzione **/Gm** predefinita del compilatore.

## <a name="see-also"></a>Vedere anche

[#import (direttiva)](../../preprocessor/hash-import-directive-cpp.md)<br/>
[Riferimenti alla riga di comando](/visualstudio/msbuild/msbuild-command-line-reference)<br/>
[/Zf (generazione più veloce di file PDB)](zf.md)<br/>
