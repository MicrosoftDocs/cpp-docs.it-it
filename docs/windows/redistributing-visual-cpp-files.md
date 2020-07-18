---
title: Ridistribuzione di file Visual C++
description: Visual Studio include librerie e componenti ridistribuibili che è possibile distribuire con l'app.
ms.date: 07/16/2020
helpviewer_keywords:
- application deployment [C++], file redistributing
- redistributing applications [C++]
- deploying applications [C++], file redistributing
- file redistribution [C++]
- redistributing applications [C++], about redistributing applications
ms.assetid: d201b2ce-36f1-44e5-a96c-0db81a1ba652
ms.openlocfilehash: 7a639f7ad7deb76cade47b0162012dcb70cb0d69
ms.sourcegitcommit: e15b46ea7888dbdd7e0bb47da76aeed680c3c1f3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/17/2020
ms.locfileid: "86446753"
---
# <a name="redistributing-visual-c-files"></a>Ridistribuzione di file Visual C++

> [!NOTE]
> Se si sta cercando un download di uno dei file Visual C++ Runtime, Visitare il [sito Web Microsoft](https://www.microsoft.com/) e immettere **Visual C++ Redistributable** nella casella di ricerca. Scaricare e installare il pacchetto ridistribuibile per l'architettura del computer (ad esempio x64 se si esegue Windows a 64 bit) e la versione di Visual C++ necessaria (ad esempio, 2015).

## <a name="redistributable-files-and-licensing"></a>File ridistribuibili e licenze

Quando si distribuisce un'applicazione, è necessario distribuire i file necessari per il suo supporto. Se uno di questi file viene fornito da Microsoft, verificare se è consentito ridistribuirli. È presente un collegamento alle condizioni di licenza di Visual Studio nell'IDE. Usare il collegamento condizioni di licenza nella finestra di dialogo informazioni su Microsoft Visual Studio. In alternativa, scaricare le EULA e le licenze pertinenti dalla directory delle [licenze](https://visualstudio.microsoft.com/license-terms/)di Visual Studio.

::: moniker range="vs-2019"

Per visualizzare "l'elenco REDIST" a cui si fa riferimento nella sezione "codice distribuibile" delle condizioni di licenza del software Microsoft Visual Studio 2019, vedere [file di codice distribuibile per Microsoft Visual Studio 2019](/visualstudio/releases/2019/redistribution#-distributable-code-files-for-visual-studio-2019)

::: moniker-end

::: moniker range="vs-2017"

Per visualizzare l'"elenco REDIST" a cui si fa riferimento nella sezione "codice distribuibile" delle condizioni di licenza del software Microsoft Visual Studio 2017, vedere [file di codice distribuibile per Microsoft Visual Studio 2017](/visualstudio/productinfo/2017-redistribution-vs#-distributable-code-files-for-visual-studio-2017).

::: moniker-end

::: moniker range="vs-2015"

Per visualizzare l'"elenco REDIST" a cui si fa riferimento nella sezione "codice distribuibile" delle condizioni di licenza del software Microsoft Visual Studio 2015, vedere [file di codice distribuibile per Microsoft Visual Studio 2015](/visualstudio/productinfo/2015-redistribution-vs#-distributable-code-files-for-visual-studio-2015).

::: moniker-end

Per ulteriori informazioni sui file ridistribuibili, vedere [determinazione delle dll da ridistribuire](determining-which-dlls-to-redistribute.md) ed [esempi di distribuzione](deployment-examples.md).

## <a name="locate-the-redistributable-files"></a>Individuare i file ridistribuibili

Per distribuire i file ridistribuibili, è possibile usare i pacchetti ridistribuibili installati da Visual Studio. Nelle versioni di Visual Studio a partire da 2017, questi file sono denominati *`vc_redist.arm64.exe`* , *`vc_redist.x64.exe`* e *`vc_redist.x86.exe`* . In Visual Studio 2015, Visual Studio 2017 e Visual Studio 2019 sono disponibili anche con i nomi *`vcredist_x86.exe`* , *`vcredist_x64.exe`* e *`vcredist_arm.exe`* (solo 2015).

Il modo più semplice per individuare i file ridistribuibili consiste nell'usare le variabili di ambiente impostate in un prompt dei comandi per gli sviluppatori. Nella versione più recente di Visual Studio 2019, i file ridistribuibili sono disponibili nella *`%VCINSTALLDIR%Redist\MSVC\v142`* cartella. In Visual Studio 2017 e Visual Studio 2019 sono disponibili anche in *`%VCToolsRedistDir%`* . In Visual Studio 2015 questi file sono disponibili in *`%VCINSTALLDIR%redist\<locale>`* , dove *`<locale>`* sono le impostazioni locali dei pacchetti ridistribuibili.

Un'altra opzione di distribuzione consiste nell'utilizzare i moduli unione ridistribuibili ( *`.msm`* file). In Visual Studio 2019 questi file fanno parte di un componente installabile facoltativo denominato **C++ 2019 Redistributable MSM** nel programma di installazione di Visual Studio. I moduli unione vengono installati per impostazione predefinita come parte di un'installazione di C++ in Visual Studio 2017 e Visual Studio 2015. Quando viene installato nella versione più recente di Visual Studio 2019, i moduli unione ridistribuibili sono disponibili in *`%VCINSTALLDIR%Redist\MSVC\v142\MergeModules`* . In Visual Studio 2019 e Visual Studio 2017 sono disponibili anche in *`%VCToolsRedistDir%MergeModules`* . In Visual Studio 2015 sono disponibili in *`Program Files [(x86)]\Common Files\Merge Modules`* .

## <a name="install-the-redistributable-packages"></a>Installare i pacchetti ridistribuibili

Con Visual C++ Redistributable Package vengono installate e registrate tutte le librerie di Visual C++. Se si usa uno di questi, eseguirlo come prerequisito nel sistema di destinazione prima di installare l'applicazione. È consigliabile utilizzare questi pacchetti per le distribuzioni perché consentono l'aggiornamento automatico delle librerie di Visual C++. Per un esempio relativo all'uso di questi pacchetti, vedere [Procedura dettagliata: distribuzione di un'applicazione Visual C++ tramite Visual C++ Redistributable Package](deploying-visual-cpp-application-by-using-the-vcpp-redistributable-package.md).

Ogni pacchetto Visual C++ Redistributable verifica l’esistenza di una versione più recente nel computer. Se viene rilevata una versione più recente, il pacchetto non verrà installato. A partire da Visual Studio 2015, i pacchetti ridistribuibili visualizzano un messaggio di errore che informa della mancata riuscita dell’installazione. Se un pacchetto viene eseguito utilizzando il **`/quiet`** flag, non viene visualizzato alcun messaggio di errore. In entrambi i casi, viene registrato un errore dal programma di installazione di Microsoft e al chiamante viene restituito un risultato di errore. A partire dai pacchetti di Visual Studio 2015, è possibile evitare questo errore controllando nel Registro di sistema se è installata una versione più recente. Il numero di versione installato corrente viene archiviato nella `HKEY_LOCAL_MACHINE\SOFTWARE[\Wow6432Node]\Microsoft\VisualStudio\14.0\VC\Runtimes\{x86|x64|ARM}` chiave. Il numero di versione è 14,0 per Visual Studio 2015, Visual Studio 2017 e Visual Studio 2019 perché il file ridistribuibile più recente è compatibile con la versione 2015. La chiave è `ARM` , `x86` o `x64` a seconda delle versioni di vcredist installate per la piattaforma. È necessario controllare la `Wow6432Node` sottochiave solo se si usa regedit per visualizzare la versione del pacchetto x86 installato in una piattaforma x64. Il numero di versione viene archiviato nel valore di stringa REG_SZ **`Version`** e anche nel set di **`Major`** **`Minor`** valori,, **`Bld`** e **`Rbld`** `REG_DWORD` . Per evitare un errore in fase di installazione, è necessario ignorare l'installazione del pacchetto ridistribuibile se la versione attualmente installata è più recente.

## <a name="install-the-redistributable-merge-modules"></a>Installare i moduli unione ridistribuibili

I moduli di unione ridistribuibili devono essere inclusi nel pacchetto di Windows Installer (o in un pacchetto di installazione simile) utilizzato per distribuire l'applicazione. Per altre informazioni, vedere [Ridistribuzione tramite modelli unione](redistributing-components-by-using-merge-modules.md). Per un esempio, vedere [procedura dettagliata: distribuzione di un'applicazione Visual C++ tramite un progetto di installazione](walkthrough-deploying-a-visual-cpp-application-by-using-a-setup-project.md).

## <a name="install-individual-redistributable-files"></a>Installare singoli file ridistribuibili

È anche possibile installare direttamente le DLL ridistribuibili nella *cartella locale dell'applicazione*. Si tratta della cartella che contiene il file dell'applicazione eseguibile. Per motivi di manutenzione, non è consigliabile usare questo percorso di installazione.

## <a name="potential-run-time-errors"></a>Errori di run-time potenziali

Se Windows non riesce a trovare una delle DLL ridistribuibili della libreria richieste dall'applicazione, potrebbe essere visualizzato un messaggio simile al seguente: "l'applicazione non è stata avviata perché *Library*. dll non è stato trovato. La reinstallazione dell'applicazione potrebbe risolvere il problema ".

Per risolvere questo tipo di errore, verificare che il programma di installazione dell'applicazione venga compilato correttamente. Verificare che le librerie ridistribuibili vengano distribuite correttamente nel sistema di destinazione. Per altre informazioni, vedere [Informazioni sulle dipendenze di un'applicazione Visual C++](understanding-the-dependencies-of-a-visual-cpp-application.md).

## <a name="related-articles"></a>Articoli correlati

[Ridistribuzione tramite i moduli merge](redistributing-components-by-using-merge-modules.md)\
Viene descritto come utilizzare Visual C++ modelli unione ridistribuibili per installare le librerie di runtime Visual C++ come DLL condivise nella *`%windir%\system32\`* cartella.

[Ridistribuzione di controlli ActiveX Visual C++](redistributing-visual-cpp-activex-controls.md)\
Viene illustrato come ridistribuire un'applicazione che utilizza controlli ActiveX.

[Ridistribuzione della libreria MFC](redistributing-the-mfc-library.md)\
Viene illustrato come ridistribuire un'applicazione che utilizza MFC.

[Ridistribuzione di un'applicazione ATL](redistributing-an-atl-application.md)\
Viene illustrato come ridistribuire un'applicazione che utilizza ATL. A partire da Visual Studio 2012, è necessaria nessuna libreria ridistribuibile per ATL.

[Esempi di distribuzione](deployment-examples.md)\
Collegamenti a esempi che illustrano come distribuire le applicazioni di Visual C++.

[Distribuzione di applicazioni desktop](deploying-native-desktop-applications-visual-cpp.md)\
Vengono introdotti i concetti e le tecnologie di distribuzione di Visual C++.
