---
title: Opzioni di BSCMAKE
description: Informazioni di riferimento sulle opzioni della riga di comando di Microsoft BSCMAKE Utility.
ms.date: 02/09/2020
f1_keywords:
- VC.Project.VCBscMakeTool.OutputFile
- VC.Project.VCBscMakeTool.SuppressStartupBanner
- VC.Project.VCBscMakeTool.PreserveSBR
helpviewer_keywords:
- /v BSCMAKE option
- Iu BSCMAKE option
- browse information files (.bsc), content
- /Er BSCMAKE option
- NOLOGO BSCMAKE option
- /s BSCMAKE option
- /Ei BSCMAKE option
- /o BSCMAKE option
- /NOLOGO BSCMAKE option
- /Iu BSCMAKE option
- s BSCMAKE option (/s)
- /Em BSCMAKE option
- Em BSCMAKE option
- Es BSCMAKE option
- files [C++], BSCMAKE
- Er BSCMAKE option
- BSCMAKE, options for controlling files
- controlling BSCMAKE options
- El BSCMAKE option
- /El BSCMAKE option
- /Es BSCMAKE option
- Ei BSCMAKE option
ms.assetid: fa2f1e06-c684-41cf-80dd-6a554835ebd2
ms.openlocfilehash: f0fd0e01d3325267ac175435aab65b5d0a9d47ea
ms.sourcegitcommit: 8414cd91297dea88c480e208c7b5301db9972f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2020
ms.locfileid: "77257793"
---
# <a name="bscmake-options"></a>Opzioni di BSCMAKE

> [!WARNING]
> Sebbene BSCMAKE venga ancora installato con Visual Studio, non viene più usato dall'IDE. A partire da Visual Studio 2008, le informazioni relative a Browse e Symbol vengono archiviate automaticamente in un file di *`.sdf`* SQL Server nella cartella della soluzione.

In questa sezione vengono descritte le opzioni disponibili per il controllo di BSCMAKE. Diverse opzioni controllano il contenuto del file di informazioni di visualizzazione escludendo o includendo determinate informazioni. Le opzioni di esclusione possono consentire l'esecuzione più veloce di BSCMAKE e possono generare un file di *`.bsc`* più piccolo. I nomi delle opzioni fanno distinzione tra maiuscole e minuscole (ad eccezione di **/Help** e **/nologo**).

Solo **/nologo** e **/o** sono disponibili nell'ambiente di sviluppo di Visual Studio.  Per informazioni sull'accesso alle pagine delle proprietà di un progetto, vedere [ C++ impostare le proprietà del compilatore e della compilazione in Visual Studio](../working-with-project-properties.md) .

**/Ei (** _nomefile_... **)** \
Esclude il contenuto dei file di inclusione specificati dal file di informazioni di visualizzazione. Per specificare più file, separare i nomi con uno spazio e racchiudere l'elenco tra parentesi. Se si specifica un solo *nome file*, le parentesi non sono necessarie. Usare **/ei** insieme all'opzione **/es** per escludere i file non esclusi da **/es**.

\ **/El**
Esclude i simboli locali. Il valore predefinito consiste nell'includere i simboli locali. Per ulteriori informazioni sui simboli locali, vedere [creazione di un file SBR](creating-an-dot-sbr-file.md).

\ **/em**
Esclude i simboli nel corpo delle macro. Usare **/em** per includere solo i nomi delle macro nel file di informazioni di visualizzazione. Per impostazione predefinita, vengono inclusi sia i nomi delle macro sia il risultato delle espansioni della macro.

**/Er (** _simbolo_... **)** \
Esclude i simboli specificati dal file di informazioni di visualizzazione. Per specificare più nomi di simboli, separare i nomi con uno spazio e racchiudere l'elenco tra parentesi. Quando si specifica un solo *simbolo*, le parentesi non sono necessarie.

\ **/es**
Esclude ogni file di inclusione specificato con un percorso assoluto o trovato in un percorso assoluto specificato nella variabile di ambiente INCLUDE. In genere, questi file sono i file di inclusione di sistema, che contengono molte informazioni che potrebbero non essere necessarie nel file di informazioni di visualizzazione. Questa opzione non esclude i file specificati senza un percorso o con percorsi relativi oppure i file trovati in un percorso relativo in INCLUDE. È possibile usare l'opzione **/ei** insieme a **/es** per escludere i file non esclusi da **/es** . Se si desidera escludere solo alcuni file, utilizzare **/ei** anziché **/es**ed elencare i file che si desidera escludere.

**/errorreport:** [**Nessuna** &#124; &#124; coda &#124; messaggi di richiesta **inviati**] \
Questa opzione è deprecata. A partire da Windows Vista, la segnalazione degli errori è controllata dalle impostazioni di [segnalazione errori Windows (WER)](/windows/win32/wer/windows-error-reporting) .

\ **/Help**
Visualizza un riepilogo della sintassi della riga di comando BSCMAKE.

\ **/IU**
Include simboli senza riferimenti. Per impostazione predefinita, BSCMAKE non registra alcun simbolo definito ma a cui non si fa riferimento. Se un file di *`.sbr`* è stato compresso, questa opzione non ha alcun effetto sul file di input perché il compilatore ha già rimosso i simboli senza riferimenti.

**/n**\
Impone una compilazione non incrementale. Utilizzare **/n** per forzare una compilazione completa del file di informazioni di visualizzazione, indipendentemente dal fatto che esista o meno un file di *`.bsc`* e impedire il troncamento dei file di *`.sbr`* . Scopri in [che modo BSCMAKE compila un file BSC](how-bscmake-builds-a-dot-bsc-file.md).

\ **/nologo**
Evita il messaggio di copyright BSCMAKE.

**/o** *nomefile*\
Specifica un nome per il file di informazioni di visualizzazione. Per impostazione predefinita, BSCMAKE fornisce al file di informazioni di visualizzazione il nome di base del primo file di *`.sbr`* e un'estensione di *`.bsc`* .

**/S (** _nomefile_... **)** \
Indica a BSCMAKE di elaborare il file di inclusione specificato la prima volta che viene rilevato ed escluderlo in caso contrario. Usare questa opzione per risparmiare tempo di elaborazione quando un file, ad esempio un'intestazione o *`.h`* file per un file di origine *`.c`* o *`.cpp`* , è incluso in diversi file di origine, ma non viene modificato dalle direttive di pre-elaborazione ogni volta. Usare questa opzione se un file viene modificato in modi non importanti per il file di informazioni di visualizzazione che si sta creando. Per specificare più file, separare i nomi con uno spazio e racchiudere l'elenco tra parentesi. Se si specifica un solo *nome file*, le parentesi non sono necessarie. Se si desidera escludere il file ogni volta che viene incluso, utilizzare l'opzione **/ei** o **/es** .

\ **/v**
Fornisce l'output dettagliato, che include il nome di ogni file di *`.sbr`* elaborato e le informazioni sull'esecuzione BSCMAKE completa.

**/?** \
Visualizza un breve riepilogo della sintassi della riga di comando BSCMAKE.

La riga di comando seguente indica a BSCMAKE di eseguire una build completa di MAIN. BSC da tre file di *`.sbr`* . Indica anche a BSCMAKE di escludere le istanze duplicate della casella degli strumenti. h:

```cmd
BSCMAKE /n /S toolbox.h /o main.bsc file1.sbr file2.sbr file3.sbr
```

## <a name="see-also"></a>Vedere anche

[Riferimento a BSCMAKE](bscmake-reference.md)
