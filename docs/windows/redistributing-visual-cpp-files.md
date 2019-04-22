---
title: Ridistribuzione di file Visual C++
ms.date: 11/04/2016
helpviewer_keywords:
- application deployment [C++], file redistributing
- redistributing applications [C++]
- deploying applications [C++], file redistributing
- file redistribution [C++]
- redistributing applications [C++], about redistributing applications
ms.assetid: d201b2ce-36f1-44e5-a96c-0db81a1ba652
ms.openlocfilehash: 2bf4297a6c61d16c68d6a9cb893aed78b9d7609d
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58786244"
---
# <a name="redistributing-visual-c-files"></a>Ridistribuzione di file Visual C++

> [!NOTE]
> Se questa pagina è stata visualizzata durante la ricerca della pagina di download di uno dei file del Runtime di Visual C++, Andare alla [sito Web Microsoft](http://www.microsoft.com/) e immettere **Visual C++ Redistributable** nella casella di ricerca. Scaricare e installare il pacchetto ridistribuibile per l'architettura del computer (ad esempio x64 se si esegue Windows a 64 bit) e la versione di Visual C++ necessaria (ad esempio, 2015).

Quando si distribuisce un'applicazione, è necessario distribuire i file necessari per il suo supporto. Se alcuni di questi file sono forniti da Microsoft, verificare di disporre dell'autorizzazione per ridistribuirli. Per esaminare le condizioni di licenza di Visual Studio, vedere il collegamento Condizioni di licenza nella finestra di dialogo Informazioni su Microsoft Visual Studio nell'IDE o scaricare il file [Contratto di licenza per il software Microsoft](https://visualstudio.microsoft.com/license-terms/mlt687465/). Per visualizzare l'"elenco REDIST" a cui viene fatto riferimento nella sezione "Codice distribuibile" del Contratto di licenza per il software Microsoft per alcune edizioni di Visual Studio, vedere [Codice distribuibile per Microsoft Visual Studio 2017 e Microsoft Visual Studio 2017 SDK (inclusi utilità e file del server di compilazione)](/visualstudio/productinfo/2017-redistribution-vs) o, per Visual Studio 2015, vedere [Codice distribuibile per Microsoft Visual Studio 2015 e Microsoft Visual Studio 2015 SDK](/visualstudio/productinfo/2015-redistribution-vs). Per altre informazioni sui file ridistribuibili, vedere [Determinazione delle DLL da ridistribuire](determining-which-dlls-to-redistribute.md) ed [Esempi di distribuzione](deployment-examples.md).

Per distribuire file Visual C++ ridistribuibili è possibile usare i pacchetti ridistribuibili di Visual C++ (VCRedist\_x86.exe, VCRedist\_x64.exe o VCRedist\_arm.exe) inclusi in Visual Studio. In Visual Studio 2017 è possibile trovare questi file nella cartella Programmi [ (x86)]\\Microsoft Visual Studio\\2017\\_edizione_\\VC\\Redist\\MSVC\\_versione-lib_, dove _edizione_ è l'edizione di Visual Studio installata e _versione-lib_ è la versione delle librerie da ridistribuire. In Visual Studio 2015, questi file si trovano nella directory di installazione di Visual Studio in Programmi [(x86)]\Microsoft Visual Studio *versione*\VC\redist\\*impostazioni locali*\\. Un'altra opzione consiste nell'usare modelli unione ridistribuibili (file con estensione msm), disponibili in Visual Studio 2017 nella cartella Programmi [(x86)]\\Microsoft Visual Studio\\2017\\_edizione_\\VC\\Redist\\MSVC\\_versione-lib_\\MergeModules\\. In Visual Studio 2015 questi moduli sono disponibili in Programmi [(x86)]\Common Files\Merge Modules\\. È anche possibile installare direttamente le DLL di Visual C++ ridistribuibili nella *cartella locale dell'applicazione*, vale a dire la cartella contenente il file eseguibile dell'applicazione. Per motivi di manutenzione, non è consigliabile utilizzare questo percorso di installazione.

Con Visual C++ Redistributable Package vengono installate e registrate tutte le librerie di Visual C++. Se si utilizza uno di questi pacchetti, è necessario impostarlo affinché venga eseguito nel sistema di destinazione come prerequisito dell'installazione dell'applicazione. È consigliabile utilizzare questi pacchetti per le distribuzioni perché consentono l'aggiornamento automatico delle librerie di Visual C++. Per un esempio su come usare questi pacchetti, vedere [procedura dettagliata: Distribuzione di un'applicazione Visual C++ tramite Visual C++ Redistributable Package](deploying-visual-cpp-application-by-using-the-vcpp-redistributable-package.md).

Ogni pacchetto Visual C++ Redistributable verifica l’esistenza di una versione più recente nel computer. Se viene trovata una versione più recente, il pacchetto non viene installato. A partire da Visual Studio 2015, i pacchetti ridistribuibili visualizzano un messaggio di errore che informa della mancata riuscita dell’installazione. Se un pacchetto viene eseguito usando il flag **/quiet**, non viene visualizzato alcun messaggio di errore. In entrambi i casi, viene registrato un errore dal programma di installazione di Microsoft e al chiamante viene restituito un risultato di errore. A partire dai pacchetti di Visual Studio 2015, è possibile evitare questo errore controllando nel Registro di sistema se è installata una versione più recente. La versione attualmente installata è memorizzata nella chiave HKEY_LOCAL_MACHINE\SOFTWARE[\Wow6432Node]\Microsoft\VisualStudio\\_versione-vs_\VC\Runtimes\\{x86|x64|ARM}, dove _versione-vs_ è il numero di versione per Visual Studio (14.0 sia per Visual Studio 2015 che per Visual Studio 2017, perché il ridistribuibile 2017 aggiornato è compatibile a livello binario con la versione 2015), e dove la chiave è ARM, x86 o x64 a seconda delle versioni vcredist installate per la piattaforma. È necessario controllare nella sottochiave Wow6432Node solo se si usa RegEdit per visualizzare la versione del pacchetto x86 installato in una piattaforma x64. Il numero di versione è memorizzato nel valore stringa REG_SZ **Version** e anche nel set di valori REG_DWORD **Major**, **Minor**, **Bld**, e **Rbld**. Per evitare un errore in fase di installazione, è necessario ignorare l'installazione del pacchetto ridistribuibile se la versione attualmente installata è più recente.

Se si utilizza un modello merge contenente una DLL Visual C++, è necessario includerlo nel pacchetto di Windows Installer (o un pacchetto di installazione simile) utilizzato per distribuire l'applicazione. Per altre informazioni, vedere [Ridistribuzione tramite modelli unione](redistributing-components-by-using-merge-modules.md). Per un esempio, vedere [Procedura dettagliata: Distribuzione di un Visual C++ Application con un progetto di installazione](walkthrough-deploying-a-visual-cpp-application-by-using-a-setup-project.md), cui viene illustrato come usare InstallShield Limited Edition per creare un pacchetto di installazione.

## <a name="potential-run-time-errors"></a>Possibili errori di runtime

Se Windows non vengono trovati della libreria ridistribuibile DLL necessarie per l'applicazione, potrebbe essere visualizzato un messaggio simile al seguente: "Questa applicazione non è riuscito ad avviare perché *libreria*. dll non è stato trovato. Re-installing the application may fix this problem." (Impossibile avviare l'applicazione. File "libreria".dll non trovato. Il problema potrebbe essere risolto reinstallando l'applicazione).

Per risolvere questo tipo di errore, assicurarsi che il programma di installazione dell'applicazione venga compilato correttamente e che le librerie ridistribuibili vengano distribuite correttamente nel sistema di destinazione. Per altre informazioni, vedere [Informazioni sulle dipendenze di un'applicazione Visual C++](understanding-the-dependencies-of-a-visual-cpp-application.md).

## <a name="related-topics"></a>Argomenti correlati

|Titolo|Descrizione|
|-----------|-----------------|
|[Ridistribuzione tramite modelli unione](redistributing-components-by-using-merge-modules.md)|Descrive come usare i modelli unione ridistribuibili di Visual C++ per installare le librerie di runtime di Visual C++ come DDL condivise nella cartella %windir%\system32\.|
|[Ridistribuzione di controlli ActiveX di Visual C++](redistributing-visual-cpp-activex-controls.md)|Viene illustrato come ridistribuire un'applicazione che utilizza controlli ActiveX.|
|[Ridistribuzione della libreria MFC](redistributing-the-mfc-library.md)|Viene illustrato come ridistribuire un'applicazione che utilizza MFC.|
|[Ridistribuzione di un'applicazione ATL](redistributing-an-atl-application.md)|Viene illustrato come ridistribuire un'applicazione che utilizza ATL. A partire da Visual Studio 2012, è necessaria nessuna libreria ridistribuibile per ATL.|
|[Esempi di distribuzione](deployment-examples.md)|Collegamenti a esempi che illustrano come distribuire le applicazioni di Visual C++.|
|[Distribuzione di applicazioni desktop](deploying-native-desktop-applications-visual-cpp.md)|Vengono introdotti i concetti e le tecnologie di distribuzione di Visual C++.|