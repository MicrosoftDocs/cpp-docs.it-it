---
description: Altre informazioni su:/MP (compilazione con più processi)
title: /MP (compilazione con più processi)
ms.date: 04/08/2019
f1_keywords:
- VC.Project.VCCLCompilerTool.MultiProcessorCompilation
helpviewer_keywords:
- -MP compiler option (C++)
- /MP compiler option (C++)
- MP compiler option (C++)
- cl.exe compiler, multi-process build
ms.openlocfilehash: d5d4441be505dfc1251b099aa95a6ce1544289ad
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97137787"
---
# <a name="mp-build-with-multiple-processes"></a>/MP (compilazione con più processi)

L'opzione **/MP** può ridurre il tempo totale di compilazione dei file di origine nella riga di comando. L'opzione **/MP** fa sì che il compilatore crei una o più copie di se stesso, ciascuna in un processo separato. Queste copie quindi compilano simultaneamente i file di origine. Pertanto, il tempo totale di compilazione dei file di origine può essere notevolmente ridotto.

## <a name="syntax"></a>Sintassi

> **/MP**[*processMax*]

## <a name="arguments"></a>Argomenti

*processMax*<br/>
(Facoltativo) Numero massimo di processi che il compilatore può creare.

L'argomento *processMax* deve essere compreso tra 1 e 65536. In caso contrario, il compilatore genera un messaggio di avviso **D9014**, ignora l'argomento *processMax* e presuppone che il numero massimo di processi sia 1.

Se si omette l'argomento *processMax* , il compilatore recupera il numero di [processori effettivi](#effective_processors) nel computer dal sistema operativo e crea un processo per ogni processore.

## <a name="remarks"></a>Commenti

L'opzione **/MP** del compilatore può ridurre notevolmente il tempo di compilazione quando si compilano molti file. Per migliorare il tempo di compilazione, il compilatore crea fino a *processMax* copie di se stesso, quindi utilizza tali copie per compilare i file di origine nello stesso momento. L'opzione **/MP** si applica alle compilazioni, ma non al collegamento o alla generazione di codice in fase di collegamento. Per impostazione predefinita, l'opzione **/MP** non è attiva.

Il miglioramento del tempo di compilazione dipende dal numero di processori presenti in un computer, dal numero di file da compilare e dalla disponibilità delle risorse di sistema, ad esempio la capacità di I/O. Provare a usare l'opzione **/MP** per determinare l'impostazione ottimale per compilare un progetto specifico. Per consigli su come scegliere l'impostazione più appropriata, vedere [Indicazioni](#guidelines).

## <a name="incompatible-options-and-language-features"></a>Opzioni incompatibili e funzionalità del linguaggio

L'opzione **/MP** è incompatibile con alcune opzioni del compilatore e funzionalità del linguaggio. Se si usa un'opzione del compilatore incompatibile con l'opzione **/MP** , il compilatore genera un avviso **D9030** e ignora l'opzione **/MP** . Se si utilizza una funzionalità del linguaggio incompatibile, il compilatore genera un errore [C2813](../../error-messages/compiler-errors-2/compiler-error-c2813.md) , quindi termina o continua a seconda dell'opzione corrente del livello di avviso del compilatore.

> [!NOTE]
> Molte delle opzioni sono incompatibili. Se fossero consentite, infatti, i compilatori in esecuzione scriverebbero contemporaneamente l'output nella console o in un determinato file. Di conseguenza, l'output risulterebbe confuso e illeggibile. In alcuni casi la combinazione di opzioni peggiorerebbe le prestazioni.

La tabella seguente elenca le opzioni del compilatore e le funzionalità del linguaggio che non sono compatibili con l'opzione **/MP** :

|Opzione o funzionalità del linguaggio|Description|
|--------------------------------|-----------------|
|Direttiva del preprocessore[#import](../../preprocessor/hash-import-directive-cpp.md)|Converte i tipi in una libreria dei tipi in classi C++ e quindi scrive tali classi in un file di intestazione.|
|[/E](e-preprocess-to-stdout.md), [/EP](ep-preprocess-to-stdout-without-hash-line-directives.md)|Copia l'output del preprocessore nello standard output (**stdout**).|
|[/GM](gm-enable-minimal-rebuild.md)|Deprecato. Consente una ricompilazione incrementale.|
|[/showIncludes](showincludes-list-include-files.md)|Scrive un elenco dei file di inclusione nello standard error (**stderr**).|
|[/Yc](yc-create-precompiled-header-file.md)|Scrive un file di intestazione precompilato.|

## <a name="diagnostic-messages"></a>Messaggi di diagnostica

Se si specifica un'opzione o una funzionalità del linguaggio che non è compatibile con l'opzione **/MP** , si riceverà un messaggio di diagnostica. La tabella seguente elenca i messaggi e il comportamento del compilatore:

|Messaggio di diagnostica|Description|Comportamento del compilatore|
|------------------------|-----------------|-----------------------|
|**C2813**|La direttiva **#import** non è compatibile con l'opzione **/MP** .|La compilazione termina, a meno che un'opzione relativa al [livello di avviso del compilatore](compiler-option-warning-level.md) non specifichi diversamente.|
|**D9014**|È stato specificato un valore non valido per l'argomento *processMax* .|Il compilatore ignora il valore non valido e presuppone che il valore sia 1.|
|**D9030**|L'opzione specificata non è compatibile con **/MP**.|Il compilatore ignora l'opzione **/MP** .|

## <a name="guidelines"></a><a name="guidelines"></a> Linee guida

### <a name="measure-performance"></a>Misurazione delle prestazioni

Per misurare le prestazioni, usare il tempo totale di compilazione. È possibile misurare il tempo di compilazione con un orologio fisico oppure tramite uno strumento software che calcola la differenza tra l'avvio e l'arresto della compilazione. Se il computer ha più processori, un orologio fisico può produrre risultati più precisi rispetto alla misurazione del tempo tramite software.

### <a name="effective-processors"></a><a name="effective_processors"></a> Effective Processors

Un computer può avere uno o più processori virtuali, noti anche come *processori effettivi*, per ognuno dei processori fisici. Ogni processore fisico può avere uno o più core e, se il sistema operativo consente l'hyperthreading per un core, ciascun core viene visualizzato come due processori virtuali.

Un computer ha ad esempio un processore effettivo se ha un processore fisico con un core e l'hyperthreading è disabilitato. Al contrario, un computer ha otto processori effettivi se ha due processori fisici, ognuno con due core, e in tutti i core è abilitato l'hyperthreading. Ovvero (8 processori effettivi) = (2 processori fisici) x (2 core per processore fisico) x (2 processori effettivi per core a causa dell'Hyper-Threading).

Se si omette l'argomento *processMax* nell'opzione **/MP** , il compilatore ottiene il numero di processori effettivi dal sistema operativo e quindi crea un processo per ogni processore effettivo. Il compilatore non può tuttavia garantire quale processo venga eseguito su un particolare processore. Questa decisione viene presa dal sistema operativo.

### <a name="number-of-processes"></a>Numero di processi

Il compilatore calcola il numero di processi usati per compilare i file di origine. Si tratta del valore più basso tra il numero di file di origine specificato sulla riga di comando e il numero di processi specificato in modo esplicito o implicito con l'opzione **/MP** . È possibile impostare in modo esplicito il numero massimo di processi se si specifica l'argomento *processMax* dell'opzione **/MP** . In alternativa, è possibile usare il valore predefinito, che è uguale al numero di processori effettivi in un computer, se si omette l'argomento *processMax* .

Si supponga, ad esempio, di specificare la riga di comando seguente:

`cl /MP7 a.cpp b.cpp c.cpp d.cpp e.cpp`

In questo caso, il compilatore usa cinque processi perché cinque è il valore più basso tra il numero di file di origine (cinque) e il numero massimo di processi (sette). In alternativa, si supponga che il computer abbia due processori effettivi e che si specifichi la riga di comando seguente:

`cl /MP a.cpp b.cpp c.cpp`

In questo caso, poiché il sistema operativo segnala la presenza di due processori, il compilatore usa due processi nel calcolo. Di conseguenza, il compilatore eseguirà la compilazione con due processi perché due è il valore più basso tra il numero di processi (due) e il numero di file di origine (tre).

### <a name="source-files-and-build-order"></a>File di origine e ordine di compilazione

È possibile che i file di origine non vengano compilati nello stesso ordine in cui appaiono nella riga di comando. Anche se il compilatore crea un set di processi contenente copie del compilatore, il sistema operativo pianifica l'esecuzione di ogni processo. Non è pertanto possibile garantire che i file di origine vengano compilati in un determinato ordine.

Un file di origine viene compilato quando è disponibile un processo per la compilazione. Se il numero di file supera quello dei processi, il primo set di file viene compilato dai processi disponibili. I file rimanenti vengono elaborati quando un processo termina la gestione di un file precedente e diventa disponibile per gestire uno dei file rimanenti.

Non specificare lo stesso file di origine più volte su una riga di comando. Ciò può verificarsi, ad esempio, se uno strumento crea automaticamente un [makefile](contents-of-a-makefile.md) in base alle informazioni sulle dipendenze in un progetto. Se non si specifica l'opzione **/MP** , il compilatore elabora l'elenco di file in sequenza e ricompila ogni occorrenza del file. Se tuttavia si specifica l'opzione **/MP** , è possibile che diversi compilatori compilino contemporaneamente lo stesso file, tentando quindi di scrivere contemporaneamente nello stesso file di output. Un compilatore acquisirà l'accesso in scrittura esclusivo al file di output e l'operazione avrà esito positivo, mentre gli altri compilatori non riusciranno a completare l'operazione e verrà generato un errore di accesso al file.

### <a name="using-type-libraries-import"></a>Uso delle librerie dei tipi (#import)

Il compilatore non supporta l'uso della direttiva [#import](../../preprocessor/hash-import-directive-cpp.md) con l'opzione **/MP** . Se possibile, seguire questa procedura per risolvere il problema:

- Spostare tutte le direttive `#import` presenti nei vari file di origine in uno o più file e quindi compilare tali file senza l'opzione **/MP** . Il risultato è un set di file di intestazione generati.

- Nei file di origine rimanenti inserire le direttive [#include](../../preprocessor/hash-include-directive-c-cpp.md) che specificano le intestazioni generate e quindi compilare i file di origine rimanenti tramite l'opzione **/MP** .

### <a name="visual-studio-project-settings"></a>Impostazioni del progetto Visual Studio

#### <a name="the-msbuildexe-tool"></a>Strumento MSBUILD.exe

Visual Studio usa lo strumento [MSBuild.exe](/visualstudio/msbuild/msbuild-reference) per creare soluzioni e progetti. L'opzione della riga di comando **/maxcpucount:**_Number_ (o **/m:**_Number_) dello strumento MSBuild.exe è in grado di compilare più progetti contemporaneamente. Inoltre, l'opzione **/MP** del compilatore consente di compilare più unità di compilazione contemporaneamente. Se l'operazione è appropriata per l'applicazione, migliorare il tempo di compilazione della soluzione usando **/MP** e/o **/maxcpucount**.

Il tempo di compilazione della soluzione dipende in parte dal numero di processi che eseguono la compilazione. L'argomento *Number* dell'opzione MSBuild [/maxcpucount](/visualstudio/msbuild/msbuild-command-line-reference) specifica il numero massimo di progetti da compilare contemporaneamente. Analogamente, l'argomento *processMax* dell'opzione del compilatore **/MP** specifica il numero massimo di unità di compilazione da compilare nello stesso momento. Se l'opzione **/maxcpucount** specifica *p* progetti e l'opzione **/MP** specifica *C* processi, viene eseguito un massimo di *p* x *c* processi contemporaneamente.

Le linee guida per decidere se utilizzare la tecnologia MSBuild o **/MP** sono le seguenti:

- Se sono presenti molti progetti con pochi file in ogni progetto, usare lo strumento MSBuild.

- Se sono presenti pochi progetti con molti file in ogni progetto, usare l'opzione **/MP** .

- Se il numero di progetti e file per progetto è bilanciato, usare sia MSBuild che **/MP**. Impostare inizialmente l'opzione **/maxcpucount** sul numero di progetti da compilare e l'opzione **/MP** sul numero di processori nel computer. Misurare le prestazioni e quindi modificare le impostazioni per ottenere risultati ottimali. Ripetere il ciclo finché non si ottiene il tempo totale di compilazione desiderato.

## <a name="see-also"></a>Vedi anche

[#import (direttiva)](../../preprocessor/hash-import-directive-cpp.md)<br/>
[Riferimenti alla riga di comando](/visualstudio/msbuild/msbuild-command-line-reference)<br/>
[/Zf (Generazione più veloce di file PDB)](zf.md)<br/>
