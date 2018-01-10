---
title: Determinazione delle DLL da ridistribuire | Documenti Microsoft
ms.custom: 
ms.date: 09/21/2017
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- redistributing DLLs
- DLLs [C++], redistributing
- dependencies [C++], application deployment and
- application deployment [C++], DLL redistribution
- deploying applications [C++], DLL redistribution
ms.assetid: f7a2cb42-fb48-42ab-abd2-b35e2fd5601a
caps.latest.revision: "31"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a3cc7b80e16abeecc756e7fa480c7bfe71682382
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="determining-which-dlls-to-redistribute"></a>Determinazione delle DLL da ridistribuire

Quando si compila un'applicazione che usa DLL della libreria fornite da Visual Studio, gli utenti dell'applicazione devono disporre delle stesse DLL nei propri computer per eseguire l'applicazione. Poiché la maggior parte degli utenti probabilmente non dispone di Visual Studio, è necessario fornire loro queste DLL. Visual Studio rende le DLL disponibili come *file ridistribuibili* che è possibile includere nel programma di installazione dell'applicazione.

Per rendere più semplice includere le DLL ridistribuibili nel programma di installazione, sono disponibili come autonomo *pacchetti ridistribuibili*. Si tratta di file eseguibili specifici per l'architettura da usare distribuzione centrale per installare i file ridistribuibili nel computer dell'utente. Ad esempio, vcredist\_x86.exe vengono installate le librerie di 32 bit per x86 computer, vcredist\_x64.exe installa le librerie a 32 e 64 bit per x64 computer e vcredist\_ARM.exe vengono installate le librerie per ARM computer. Poiché Microsoft è possibile utilizzare il servizio Windows Update per aggiornare in modo indipendente queste librerie, è consigliabile distribuzione centrale. Oltre alla copia nell'installazione di Visual Studio, i pacchetti ridistribuibili correnti sono disponibili per il download [VisualStudio.com/Downloads](https://www.visualstudio.com/downloads/) nella sezione altri strumenti e Framework.

Il numero di versione principale del pacchetto ridistribuibile di distribuire deve corrispondere alla versione del set di strumenti di Visual Studio utilizzato per creare l'applicazione. Visual Studio 2017 e Visual Studio 2015 hanno numeri di versione compatibile del set di strumenti, che significa che il 2017 Visual Studio i file ridistribuibili possono essere utilizzati da app compilate con il set di strumenti 2015. Sebbene si possa essere compatibile, non è supportata con i file ridistribuibili 2015 nelle App create utilizzando il set di strumenti 2017. È supportato solo tramite il pacchetto ridistribuibile che è uguale o più recenti della versione del set di strumenti. Per i collegamenti per i più recenti supportati pacchetti ridistribuibili per set di strumenti precedenti, vedere [la versione più recente supportato il download di Visual C++](https://support.microsoft.com/en-us/help/2977003/the-latest-supported-visual-c-downloads). Versioni precedenti specifiche dei pacchetti ridistribuibili possono essere trovate cercando il [Microsoft Download Center](http://go.microsoft.com/fwlink/p/?LinkId=158431) per "Visual C++ Redistributable Package".

Un altro modo per includere le DLL ridistribuibili nel programma di installazione è utilizzare *moduli unione*. Questi moduli di Microsoft Installer sono inclusi e installati dal programma di installazione dell'applicazione. I modelli unione per le DLL ridistribuibili sono disponibili nella directory di installazione di Visual Studio in \\VC\\Redist\MSVC\\*versione*\\MergeModules\\ . Nelle versioni precedenti di Visual Studio, questi file sono disponibili nel \\programmi o \\(x86) directory programmi in un file comuni\\sottodirectory moduli unione. Per ulteriori informazioni sull'utilizzo di questi file, vedere [ridistribuzione dei componenti tramite modelli Merge](../ide/redistributing-components-by-using-merge-modules.md).

Le singole DLL ridistribuibili sono incluse anche nell'installazione di Visual Studio. Per impostazione predefinita, vengono installati nella directory di installazione di Visual Studio nel \\VC\\Redist\\opzioni: MSVC\\*versione* cartella. Il *versione* numeri possono rappresentare numeri di build secondaria diverse di un singolo set comune di file ridistribuibili. Utilizzare la versione più recente di qualsiasi file DLL della libreria, il pacchetto ridistribuibile o un modulo unione trovato in tali directory. È possibile utilizzare queste librerie per la distribuzione locale, installandoli nella stessa directory dell'applicazione. Si sconsiglia di distribuzione locale perché rende è responsabile per la distribuzione di aggiornamenti per le applicazioni distribuite. Distribuzione centrale tramite pacchetti ridistribuibili è preferita.

Per determinare quali DLL è necessario ridistribuire con l'applicazione, raccogliere un elenco delle DLL da cui dipende l'applicazione. In genere elencate come input al linker di libreria di importazione. Alcune librerie, ad esempio vcruntime e Universal C Runtime Library (UCRT), sono inclusi per impostazione predefinita. Se l'applicazione o una delle relative dipendenze Usa LoadLibrary dinamicamente caricare una DLL, tale DLL potrebbe non essere elencato negli input al linker. Un modo per raccogliere l'elenco di DLL a caricamento dinamico è di eseguire lo strumento Dependency Walker (depends.exe) nella tua app, come descritto nella [le dipendenze di un'applicazione Visual C++](../ide/understanding-the-dependencies-of-a-visual-cpp-application.md). Sfortunatamente, questo strumento non è aggiornato e potrebbe segnalare che non è possibile trovare alcune DLL.

Quando si dispone l'elenco di dipendenze, confrontarlo di all'elenco collegato nel file Redist.txt nella directory di installazione di Microsoft Visual Studio o per "l'elenco REDIST" di DLL ridistribuibili a cui fa riferimento nella sezione "File di codice distribuibile" delle condizioni di licenza Software Microsoft per la copia di Visual Studio. Per Visual Studio 2017, vedere [codice distribuibile per Microsoft Visual Studio 2017 (include utilità, estensibilità e i file del server di compilazione)](http://go.microsoft.com/fwlink/p/?linkid=823098). Per Visual Studio 2015, vedere [codice distribuibile per Microsoft Visual Studio 2015 e Microsoft Visual Studio 2015 SDK (include utilità e file di compilazione)](http://go.microsoft.com/fwlink/p/?linkid=799794). Per Visual Studio 2013, l'elenco è disponibile online in [codice distribuibile per Microsoft Visual Studio 2013 e Microsoft Visual Studio 2013 SDK](http://go.microsoft.com/fwlink/p/?LinkId=313603).

Nelle versioni di Visual Studio precedenti a Visual Studio 2015, la libreria di Runtime C (CRT) è incluso come una DLL ridistribuibile, in opzioni: msvc*versione*. dll. A partire da Visual Studio 2015, le funzioni in CRT sono state sottoposta a refactoring nella libreria vcruntime e la libreria UCRT. La libreria UCRT è ora un componente del sistema in Windows 10, gestiti da Windows Update. È disponibile in tutti i sistemi operativi Windows 10. Per distribuire l'applicazione ai sistemi operativi precedenti, potrebbe essere necessario ridistribuire anche la libreria UCRT. Una versione precedente di UCRT è incluso nei file ridistribuibili di Visual Studio, che viene installato solo nei sistemi operativi precedenti a Windows 10, e solo se non è già installata alcuna versione della libreria UCRT. Per una versione installabile della libreria UCRT per i sistemi di livello inferiore come un pacchetto di aggiornamento del sistema di Microsoft, vedere [Windows 10 Universal C Runtime](https://www.microsoft.com/en-us/download/details.aspx?id=48234) nel Microsoft Download Center.

Non è possibile ridistribuire tutti i file inclusi in Visual Studio. È consentito ridistribuire solo i file specificati in Redist.txt o "nell'elenco REDIST" online. Le versioni di debug delle applicazioni e le varie DLL di debug di Visual C++ non sono ridistribuibili. Per ulteriori informazioni, vedere [scelta di un metodo di distribuzione](../ide/choosing-a-deployment-method.md).

Nella tabella seguente vengono descritte alcune DLL di Visual C++ da cui l'applicazione potrebbe dipendere.

|Libreria di Visual C++|Descrizione|Si applica a|
|--------------------------|-----------------|----------------|
|vcruntime*versione*. dll|Libreria di runtime per il codice nativo.|Applicazioni che utilizzano i normali C e C++ language avvio e terminazione servizi.|
|vccorlib*versione*. dll|Libreria di runtime per il codice gestito.|Applicazioni che utilizzano i servizi di linguaggio C++ per il codice gestito.|
|msvcp*versione*. dll|Libreria Standard C++ per il codice nativo.|Le applicazioni che utilizzano il [della libreria Standard C++](../standard-library/cpp-standard-library-reference.md).|
|concrt*versione*. dll|Libreria di Runtime di concorrenza per il codice nativo.|Le applicazioni che utilizzano il [Runtime di concorrenza](../parallel/concrt/concurrency-runtime.md).|
|MFC*versione*. dll|Libreria MFC.|Le applicazioni che utilizzano il [libreria MFC](../mfc/mfc-desktop-applications.md).|
|MFC*versione* *language*. dll|Microsoft Foundation Classes (MFC) risorse di libreria.|Applicazioni che utilizzano risorse di lingua specifico per MFC.|
|MFC*versione*u.dll|Libreria MFC con supporto Unicode.|Le applicazioni che utilizzano il [libreria MFC](../mfc/mfc-desktop-applications.md) e richiedono il supporto di Unicode.|
|mfcmifc80.dll|Libreria di interfacce gestite MFC.|Le applicazioni che utilizzano il [libreria MFC](../mfc/mfc-desktop-applications.md) con [controlli Windows Form](/dotnet/framework/winforms/controls/index).|
|mfcm*versione*. dll|Libreria gestita MFC.|Le applicazioni che utilizzano il [libreria MFC](../mfc/mfc-desktop-applications.md) con [controlli Windows Form](/dotnet/framework/winforms/controls/index).|
|mfcm*versione*u.dll|Libreria gestita MFC con supporto Unicode.|Le applicazioni che utilizzano il [libreria MFC](../mfc/mfc-desktop-applications.md) con [controlli Windows Form](/dotnet/framework/winforms/controls/index) e richiedono il supporto di Unicode.|
|vcamp*versione*. dll|Libreria AMP per il codice nativo.|Le applicazioni che utilizzano il [libreria C++ AMP](../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md) codice.|
|vcomp*versione*. dll|Libreria di OpenMP per il codice nativo.|Le applicazioni che utilizzano il [della libreria C++ OpenMP](../parallel/openmp/openmp-in-visual-cpp.md) codice.|

> [!NOTE]
> Non è più necessario ridistribuire Active Template Library come DLL separata. Le sue funzionalità sono state spostate in intestazioni e in una libreria statica.

Per ulteriori informazioni sulla ridistribuzione di queste DLL con l'applicazione, vedere [ridistribuzione di file Visual C++](../ide/redistributing-visual-cpp-files.md). Per esempi, vedere [esempi di distribuzione](../ide/deployment-examples.md).

In genere non è necessario ridistribuire le DLL di sistema, perché fanno parte del sistema operativo. Possono tuttavia verificarsi eccezioni, ad esempio quando l'applicazione verrà eseguita in versioni diverse dei sistemi operativi Microsoft. In questo caso, assicurarsi di leggere le Condizioni di licenza corrispondenti. Tentare inoltre di aggiornare le DLL di sistema tramite Windows Update, Service Pack o pacchetti ridistribuibili forniti da Microsoft.

## <a name="see-also"></a>Vedere anche

[Scelta di un metodo di distribuzione](../ide/choosing-a-deployment-method.md)

[Distribuzione di applicazioni Desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)
