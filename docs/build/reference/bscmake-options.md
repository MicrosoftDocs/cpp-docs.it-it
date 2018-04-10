---
title: Opzioni di BSCMAKE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
ms.topic: article
f1_keywords:
- VC.Project.VCBscMakeTool.OutputFile
- VC.Project.VCBscMakeTool.SuppressStartupBanner
- VC.Project.VCBscMakeTool.PreserveSBR
dev_langs:
- C++
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
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 46c258a5591615bb277823ccc5261fade3c5e2af
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="bscmake-options"></a>Opzioni di BSCMAKE
In questa sezione vengono descritte le opzioni disponibili per il controllo di BSCMAKE. Diverse opzioni controllano il contenuto del file di informazioni di visualizzazione escludendo o includendo determinate informazioni. Le opzioni di esclusione consentono BSCMAKE per velocizzare l'esecuzione e possono comportare un file BSC più piccolo. I nomi delle opzioni sono sensibili alle maiuscole (ad eccezione di **/Help** e **/NOLOGO**).  
  
 Solo **/NOLOGO** e **/o** sono disponibili dall'interno dell'ambiente di sviluppo di Visual Studio.  Vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md) per informazioni sull'accesso alle pagine delle proprietà del progetto.  
  
 /EI ( `filename`...)  
 Esclude il contenuto del file di inclusione specificati dal file di informazioni di visualizzazione. Per specificare più file, separarli con uno spazio e racchiudere l'elenco tra parentesi. Le parentesi non sono necessarie se si specifica solo uno `filename`. Utilizzare **/Ei** lungo con il **/Es** opzione per escludere i file non esclusi da **/Es**.  
  
 /EL  
 Esclude i simboli locali. Il valore predefinito è per includere i simboli locali. Per ulteriori informazioni sui simboli locali, vedere [la creazione di un File SBR](../../build/reference/creating-an-dot-sbr-file.md).  
  
 Em  
 Esclude i simboli nel corpo della macro. Utilizzare **em** da includere solo i nomi delle macro nel file di informazioni di visualizzazione. Il valore predefinito consiste nell'includere sia i nomi delle macro e il risultato delle espansioni della macro.  
  
 /ER ( `symbol`...)  
 Esclude i simboli specificati dal file di informazioni di visualizzazione. Per specificare più nomi di simboli, separarli con uno spazio e racchiudere l'elenco tra parentesi. Le parentesi non sono necessarie se si specifica solo uno `symbol`.  
  
 /Es  
 Esclude dal file di informazioni di visualizzazione ogni file di inclusione specificato con un percorso assoluto o trovato in un percorso assoluto specificato nella variabile di ambiente INCLUDE. (In genere, si tratta il sistema di file di inclusione, contenenti numerose informazioni che potrebbero non essere necessario nel file di informazioni di esplorazione.) Questa opzione non esclude i file specificati senza un percorso o con i percorsi relativi o i file trovati in un percorso relativo in INCLUDE. È possibile utilizzare il **/Ei** opzione insieme a **/Es** per escludere i file **/Es** non esclusi. Se si desidera escludere solo alcuni dei file che **/Es** esclude, utilizzare **/Ei** anziché **/Es** ed elencare i file che si desidera escludere.  
  
 /errorreport: [Nessuno &#124; prompt dei comandi &#124; coda &#124; invio]  
 Consente di inviare a Microsoft informazioni sugli errori interni in bscmake.exe.  
  
 Per ulteriori informazioni su **/errorreport**, vedere [/errorReport (segnala interni del compilatore gli errori)](../../build/reference/errorreport-report-internal-compiler-errors.md).  
  
 /HELP  
 Visualizza un riepilogo della sintassi della riga di comando di BSCMAKE.  
  
 /Iu  
 Sono presenti simboli senza riferimenti. Per impostazione predefinita, BSCMAKE non registra i simboli definiti ma non viene fatto riferimento. Se un file SBR è stato compresso, questa opzione non ha effetto per tale file di input perché il compilatore è già rimosso i simboli senza riferimenti.  
  
 /n  
 Forza una compilazione non incrementale. Utilizzare  **/n**  per forzare una compilazione completa del file di informazioni di visualizzazione o se non è presente un file BSC e per impedire che i file SBR vengano troncati. Vedere [la modalità di compilazione di un File BSC in BSCMAKE](../../build/reference/how-bscmake-builds-a-dot-bsc-file.md).  
  
 /NOLOGO  
 Elimina il messaggio di copyright BSCMAKE.  
  
 /o`filename`  
 Specifica un nome per il file di informazioni. Per impostazione predefinita, il file di informazioni viene assegnato il nome base del primo file sbr e l'estensione bsc.  
  
 /S ( `filename`...)  
 Indica a BSCMAKE per elaborare il file di inclusione specificato la prima volta che viene rilevata e per escludere, in caso contrario. Utilizzare questa opzione per risparmiare tempo di elaborazione quando un file (ad esempio un'intestazione, o h, file per un file c o file di origine con estensione cpp) è incluso in diversi file di origine, ma resta invariato a seguito di pre-elaborazione direttive ogni volta. È anche possibile utilizzare questa opzione se un file viene modificato in modo che non è importanti per il file di informazioni che si sta creando. Per specificare più file, separarli con uno spazio e racchiudere l'elenco tra parentesi. Le parentesi non sono necessarie se si specifica solo uno `filename`. Se si desidera escludere il file ogni volta che viene incluso, utilizzare il **/Ei** o **/Es** opzione.  
  
 /v  
 Fornisce un output dettagliato, che include il nome di ogni file SBR in fase di elaborazione e informazioni sull'esecuzione completa di BSCMAKE.  
  
 /?  
 Visualizza un breve riepilogo della sintassi della riga di comando di BSCMAKE.  
  
 La seguente riga di comando BSCMAKE di eseguire una compilazione completa di Main. BSC da tre file SBR. Indica inoltre BSCMAKE per escludere le istanze duplicate di Toolbox. h:  
  
```  
BSCMAKE /n /S toolbox.h /o main.bsc file1.sbr file2.sbr file3.sbr  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a BSCMAKE](../../build/reference/bscmake-reference.md)