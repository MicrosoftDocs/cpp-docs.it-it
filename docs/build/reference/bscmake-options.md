---
title: Opzioni di BSCMAKE
ms.date: 11/04/2016
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
ms.openlocfilehash: b1d62e8d122cb4f08feef60d6936359b3e246749
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62272871"
---
# <a name="bscmake-options"></a>Opzioni di BSCMAKE

> [!WARNING]
> Sebbene BSCMAKE venga ancora installato con Visual Studio, non viene più usato dall'IDE. A partire da Visual Studio 2008, le informazioni di visualizzazione e sui simboli vengono automaticamente archiviate in un file sdf di SQL Server nella cartella della soluzione.

In questa sezione vengono descritte le opzioni disponibili per il controllo di BSCMAKE. Diverse opzioni controllano il contenuto del file di informazioni di visualizzazione da escluse o incluse alcune informazioni. Le opzioni di esclusione possono consentire a BSCMAKE per velocizzare l'esecuzione e possono comportare un file BSC più piccolo. I nomi di opzione sono tra maiuscole e minuscole (ad eccezione di **/Help** e **/NOLOGO**).

Solo **/NOLOGO** e **/o** sono disponibili all'interno dell'ambiente di sviluppo di Visual Studio.  Visualizzare [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md) per informazioni su accesso pagine delle proprietà di un progetto.

**/Ei (** *filename*...**)**<br/>
Esclude il contenuto del file di inclusione specificati dal file di informazioni di visualizzazione. Per specificare più file, separare i nomi con uno spazio e racchiudere l'elenco tra parentesi. Le parentesi non sono necessarie se si specifica solo uno *filename*. Uso **/Ei** con il **/Es** opzione per escludere i file non esclusi da **/Es**.

**/El**<br/>
Esclude i simboli locali. L'impostazione predefinita consiste nell'includere simboli locali. Per altre informazioni sui simboli locali, vedere [creazione di un File SBR](creating-an-dot-sbr-file.md).

**/Em**<br/>
Esclude i simboli nel corpo della macro. Uso **/em** da includere solo i nomi delle macro nel file di informazioni di visualizzazione. Il valore predefinito è di includere entrambe le macro e il risultato delle espansioni della macro.

**/ER (** *simbolo*... **)**<br/>
Esclude i simboli specificati dal file di informazioni di visualizzazione. Per specificare più nomi di simbolo, separare i nomi con uno spazio e racchiudere l'elenco tra parentesi. Le parentesi non sono necessarie se si specifica solo uno *simbolo*.

**/Es**<br/>
Esclude il file di informazioni di ogni file di inclusione specificato con un percorso assoluto o trovata in un percorso assoluto specificato nella variabile di ambiente INCLUDE. (In genere, questi sono il sistema di file di inclusione, contenenti numerose informazioni che potrebbe non essere necessaria nel file di informazioni di esplorazione.) Questa opzione non esclude i file specificati senza un percorso o i percorsi relativi o i file trovati in un percorso relativo in file di inclusione. È possibile usare la **/Ei** opzione insieme a **/Es** per escludere i file **/Es** non esclude. Se si desidera escludere solo alcuni dei file che **/Es** esclude, usare **/Ei** anziché **/Es** ed elencare i file da escludere.

**/errorreport:**[**none** &#124; **prompt** &#124; **queue** &#124; **send**]<br/>
Consente di inviare a Microsoft informazioni sugli errori interni in bscmake.exe.

Per ulteriori informazioni sul **/errorreport**, vedere [/errorReport (segnala interni del compilatore gli errori)](errorreport-report-internal-compiler-errors.md).

**/HELP**<br/>
Visualizza un riepilogo della sintassi della riga di comando di BSCMAKE.

**/Iu**<br/>
Include simboli senza riferimenti. Per impostazione predefinita, BSCMAKE non registra alcun simbolo definito, ma non viene fatto riferimento. Se un file SBR già compressi, questa opzione ha effetto per tale file di input perché il compilatore è già rimosso i simboli senza riferimenti.

**/n**<br/>
Forza una compilazione non incrementale. Uso **/n** per forzare una build completa del file di informazioni di visualizzazione o meno è presente un file BSC e per impedire che i file SBR vengano troncati. Visualizzare [come compilazione di un File BSC in BSCMAKE](how-bscmake-builds-a-dot-bsc-file.md).

**/NOLOGO**<br/>
Elimina il messaggio di copyright BSCMAKE.

**/o** *filename*<br/>
Specifica un nome per il file di informazioni. Per impostazione predefinita, il file di informazioni di BSCMAKE fornisce il nome base del primo file sbr e un'estensione bsc.

**/S (** *filename*...**)**<br/>
Indica a BSCMAKE per elaborare la prima volta che si è verificato il file di inclusione specificati e per evitare che in caso contrario. Usare questa opzione per risparmiare tempo di elaborazione quando un file (ad esempio un'intestazione, o. h, file per un file. c o file di origine con estensione cpp) è incluso in vari file di origine, ma resta invariato a seguito di pre-elaborazione direttive ogni volta. È anche possibile usare questa opzione se un file viene modificato in modo che non è importanti per il file di informazioni che si sta creando. Per specificare più file, separare i nomi con uno spazio e racchiudere l'elenco tra parentesi. Le parentesi non sono necessarie se si specifica solo uno *filename*. Se si desidera escludere il file ogni volta che viene incluso, usare il **/Ei** oppure **/Es** opzione.

**/v**<br/>
Fornisce l'output dettagliato, che include il nome di ogni file SBR in fase di elaborazione e informazioni sull'esecuzione completa di BSCMAKE.

**/?**<br/>
Consente di visualizzare un breve riepilogo della sintassi della riga di comando di BSCMAKE.

La seguente riga di comando a BSCMAKE per eseguire una build completa del file Main. BSC dai tre file SBR. Indica inoltre BSCMAKE per escludere le istanze duplicate di Toolbox. h:

```
BSCMAKE /n /S toolbox.h /o main.bsc file1.sbr file2.sbr file3.sbr
```

## <a name="see-also"></a>Vedere anche

[Riferimento a BSCMAKE](bscmake-reference.md)
