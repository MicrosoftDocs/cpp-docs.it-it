---
title: Determinazione delle DLL da ridistribuire
ms.date: 03/25/2019
helpviewer_keywords:
- redistributing DLLs
- DLLs [C++], redistributing
- dependencies [C++], application deployment and
- application deployment [C++], DLL redistribution
- deploying applications [C++], DLL redistribution
ms.assetid: f7a2cb42-fb48-42ab-abd2-b35e2fd5601a
ms.openlocfilehash: dd600e2b3e094b1547badd93596a9dbed2438fb3
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62345329"
---
# <a name="determining-which-dlls-to-redistribute"></a>Determinazione delle DLL da ridistribuire

Quando si compila un'applicazione che usa librerie DLL fornite da Visual Studio, gli utenti che vogliono eseguire l'applicazione dovranno avere le stesse DLL nei propri computer. Poiché la maggior parte degli utenti probabilmente non dispone di Visual Studio, è necessario fornire loro queste DLL. Visual Studio rende le DLL disponibili sotto forma di *file ridistribuibili* che è possibile includere nel programma di installazione dell'applicazione.

Per includere le DLL ridistribuibili in modo più semplice nel programma di installazione, le DLL sono disponibili anche sotto forma di *pacchetti ridistribuibili* autonomi. Si tratta di file eseguibili specifici per l'architettura che installano i file ridistribuibili nel computer dell'utente tramite distribuzione centrale. Ad esempio, vcredist\_x86.exe vengono installate le librerie a 32 bit x86 a computer, vcredist\_x64.exe vengono installate le librerie a 64 bit x64 computer e vcredist\_ARM.exe vengono installate le librerie per computer ARM. È consigliabile usare la distribuzione centrale perché Microsoft può aggiornare in modo indipendente queste librerie tramite il servizio Windows Update. Oltre alla copia nell'installazione di Visual Studio, i pacchetti ridistribuibili correnti sono disponibili per il download. Per i collegamenti ai pacchetti ridistribuibili più recenti supportati per set di strumenti correnti e precedenti, vedere [Download delle più recenti versioni di Visual C++ supportate](https://support.microsoft.com/help/2977003/the-latest-supported-visual-c-downloads). È possibile trovare versioni precedenti specifiche dei pacchetti ridistribuibili cercando "Pacchetti ridistribuibili Visual C++" nell'[Area download Microsoft](http://go.microsoft.com/fwlink/p/?LinkId=158431).

Il numero di versione principale del pacchetto ridistribuibile distribuito deve corrispondere alla versione del set di strumenti di Visual Studio usato per creare l'applicazione e il numero di versione secondaria deve essere uguale o superiore. Visual Studio 2017 e Visual Studio 2015 hanno numeri di versione compatibili per i set di strumenti. Questo significa che i file ridistribuibili di Visual Studio 2017 possono essere usati da app compilate con il set di strumenti 2015. Anche se possono essere compatibili, non è supportato l'uso dei file ridistribuibili 2015 in app create usando il set di strumenti 2017. È supportato solo l'uso di un pacchetto ridistribuibile di una versione corrispondente alla versione del set di strumenti o più recente.

Un altro modo per includere le DLL ridistribuibili nel programma di installazione è l'uso di *modelli unione*. Questi moduli di Microsoft Installer sono inclusi nel programma di installazione dell'applicazione, che li installa. I modelli unione per le DLL ridistribuibili sono disponibili nella directory di installazione di Visual Studio in \\VC\\Redist\MSVC\\*versione*\\MergeModules\\. Nelle versioni precedenti di Visual Studio, questi file sono disponibili nella directory \\Programmi o \\Programmi (x86) in una sottodirectory Common Files\\Merge Modules. Per altre informazioni sull'uso di questi file, vedere [Ridistribuzione di componenti tramite modelli unione](redistributing-components-by-using-merge-modules.md).

Nell'installazione di Visual Studio sono incluse anche le singole DLL ridistribuibili. Per impostazione predefinita, vengono installate nella directory di installazione di Visual Studio, nella cartella \\VC\\Redist\\MSVC\\*versione*. I numeri di *versione* possono rappresentare numeri di build secondaria diversi di un singolo set comune di file ridistribuibili. Usare la versione più recente dei file DLL di libreria, dei pacchetti ridistribuibili o dei modelli unione presenti in tali directory. È possibile usare queste librerie per la distribuzione locale, installandole nella stessa directory dell'applicazione. La distribuzione locale non è consigliabile, perché in questo caso ci si assume la responsabilità del recapito degli aggiornamenti delle applicazioni distribuite. La distribuzione centrale tramite pacchetti ridistribuibili è preferibile.

Per determinare quali DLL è necessario ridistribuire con l'applicazione, raccogliere un elenco delle DLL da cui dipende l'applicazione. Queste sono in genere elencate come input di librerie di importazione per il linker. Alcune librerie, ad esempio vcruntime e UCRT (Universal C Runtime Library), sono incluse per impostazione predefinita. Se l'app o una delle relative dipendenze usa LoadLibrary per caricare in modo dinamico una DLL, quest'ultima potrebbe non essere elencata tra gli input al linker. Un modo per raccogliere l'elenco delle DLL caricate in modo dinamico consiste nell'eseguire lo strumento Dependency Walker (depends.exe) per l'app, come descritto in [Informazioni sulle dipendenze di un'applicazione Visual C++](understanding-the-dependencies-of-a-visual-cpp-application.md). Questo strumento, tuttavia, è obsoleto e potrebbe segnalare che non riesce a trovare alcune DLL.

Se si ha l'elenco delle dipendenze, confrontarlo con l'elenco collegato nel file Redist.txt nella directory di installazione di Microsoft Visual Studio o con l'"elenco REDIST" di DLL ridistribuibili a cui viene fatto riferimento nella sezione "Codice distribuibile" del Contratto di licenza per il software Microsoft per la copia di Visual Studio in uso. Per Visual Studio 2017, vedere [Codice distribuibile per Microsoft Visual Studio 2017 (inclusi utilità, estendibilità e file del server di compilazione)](http://go.microsoft.com/fwlink/p/?linkid=823098). Per Visual Studio 2015, vedere [Codice distribuibile per Microsoft Visual Studio 2015 e Microsoft Visual Studio 2015 SDK (inclusi utilità e file del server di compilazione)](http://go.microsoft.com/fwlink/p/?linkid=799794). Per Visual Studio 2013, l'elenco è disponibile online in [Distributable Code for Microsoft Visual Studio 2013 and Microsoft Visual Studio 2013 SDK](http://go.microsoft.com/fwlink/p/?LinkId=313603) (Codice distribuibile per Microsoft Visual Studio 2013 e Microsoft Visual Studio 2013 SDK).

Nelle versioni di Visual Studio precedenti a Visual Studio 2015, la Libreria di runtime C (CRT) era inclusa come DLL ridistribuibile in msvc*versione*.dll. A partire da Visual Studio 2015, le funzioni in CRT sono state sottoposte a refactoring nelle librerie vcruntime e UCRT. La libreria UCRT è ora un componente di sistema di Windows 10 gestito da Windows Update ed è disponibile in tutti i sistemi operativi Windows 10. Per distribuire l'applicazione a sistemi operativi precedenti, può essere necessario ridistribuire anche la libreria UCRT. Una versione precedente di questa è inclusa nei file ridistribuibili di Visual Studio e viene installata solo nei sistemi operativi precedenti a Windows 10, e solo se non è già installata alcuna versione della libreria UCRT. Per una versione installabile della libreria UCRT per i sistemi di livello inferiore come pacchetto di aggiornamento di sistema Microsoft, vedere [Windows 10 Universal C Runtime](https://www.microsoft.com/download/details.aspx?id=48234) nell'Area download Microsoft.

Non è possibile ridistribuire tutti i file inclusi in Visual Studio. È consentito ridistribuire solo i file specificati in Redist.txt o "nell'elenco REDIST" online. Le versioni di debug delle applicazioni e le varie DLL di debug di Visual C++ non sono ridistribuibili. Per altre informazioni, vedere [Scelta di un metodo di distribuzione](choosing-a-deployment-method.md).

Nella tabella seguente vengono descritte alcune DLL di Visual C++ da cui l'applicazione potrebbe dipendere.

|Libreria di Visual C++|Descrizione|Si applica a|
|--------------------------|-----------------|----------------|
|vcruntime*versione*.dll|Libreria di runtime per codice nativo.|Applicazioni che usano i servizi di avvio e terminazione normali dei linguaggi C e C++ normali.|
|vccorlib*version*.dll|Libreria di runtime per codice gestito.|Applicazioni che usano i servizi del linguaggio C++ per il codice gestito.|
|msvcp*versione*.dll e msvcp*versione*_*dotnumber*.dll|Libreria C++ standard per codice nativo.|Applicazioni che usano la [libreria C++ standard](../standard-library/cpp-standard-library-reference.md).|
|concrt*versione*.dll|Libreria di runtime di concorrenza per codice nativo.|Applicazioni che usano il [runtime di concorrenza](../parallel/concrt/concurrency-runtime.md).|
|mfc*versione*.dll|Libreria MFC.|Applicazioni che usano la [libreria MFC](../mfc/mfc-desktop-applications.md).|
|mfc*version* *language*.dll|Risorse della libreria MFC.|Applicazioni che usano risorse di lingua specifiche per MFC.|
|mfc*version*u.dll|Libreria MFC con supporto Unicode.|Applicazioni che usano la [libreria MFC](../mfc/mfc-desktop-applications.md) e richiedono il supporto per Unicode.|
|mfcmifc80.dll|Libreria di interfacce gestite MFC.|Applicazioni che usano la [libreria MFC](../mfc/mfc-desktop-applications.md) con [Controlli Windows Form](/dotnet/framework/winforms/controls/index).|
|mfcm*version*.dll|Libreria gestita MFC.|Applicazioni che usano la [libreria MFC](../mfc/mfc-desktop-applications.md) con [Controlli Windows Form](/dotnet/framework/winforms/controls/index).|
|mfcm*version*u.dll|Libreria gestita MFC con supporto Unicode.|Applicazioni che usano la [libreria MFC](../mfc/mfc-desktop-applications.md) con [Controlli Windows Form](/dotnet/framework/winforms/controls/index) e richiedono il supporto per Unicode.|
|vcamp*version*.dll|Libreria AMP per codice nativo.|Applicazioni che usano il codice della [libreria AMP C++](../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md).|
|vcomp*version*.dll|Libreria OpenMP per codice nativo.|Applicazioni che usano il codice della [libreria OpenMP C++](../parallel/openmp/openmp-in-visual-cpp.md).|

> [!NOTE]
> Non è più necessario ridistribuire Active Template Library come DLL separata. Le sue funzionalità sono state spostate in intestazioni e in una libreria statica.

Per altre informazioni su come ridistribuire queste DLL con l'applicazione, vedere [Ridistribuzione di file Visual C++](redistributing-visual-cpp-files.md). Per alcuni esempi, vedere [Esempi di distribuzione](deployment-examples.md).

In genere non è necessario ridistribuire le DLL di sistema, perché fanno parte del sistema operativo. Possono tuttavia verificarsi eccezioni, ad esempio quando l'applicazione verrà eseguita in versioni diverse dei sistemi operativi Microsoft. In questo caso, assicurarsi di leggere le Condizioni di licenza corrispondenti. Tentare inoltre di aggiornare le DLL di sistema tramite Windows Update, Service Pack o pacchetti ridistribuibili forniti da Microsoft.

## <a name="see-also"></a>Vedere anche

[Scelta di un metodo di distribuzione](choosing-a-deployment-method.md)<br/>
[Distribuzione di applicazioni desktop](deploying-native-desktop-applications-visual-cpp.md)
