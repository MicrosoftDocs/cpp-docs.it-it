---
title: Installare lo sviluppo di app per dispositivi mobili multipiattaforma con C++
ms.date: 10/17/2019
ms.assetid: aaea6b8d-55eb-4427-8185-c050f855c257
ms.openlocfilehash: 6a573b0f7ba261b97af9de24e67f733acac0532f
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90041952"
---
# <a name="install-cross-platform-mobile-development-with-c"></a>Installare lo sviluppo di app per dispositivi mobili multipiattaforma con C++

È possibile usare C++ in Visual Studio per compilare app desktop di Windows, app piattaforma UWP (Universal Windows Platform) (UWP) e app Linux. È ora possibile compilare app C++ per Android e iOS. Il carico di lavoro **sviluppo di applicazioni per dispositivi mobili con C++** è un set di componenti installabile in Visual Studio. Sono inclusi i modelli di Visual Studio per iOS, Android e UWP multipiattaforma. Il carico di lavoro installa gli SDK e gli strumenti multipiattaforma necessari per iniziare rapidamente. Non sarà necessario individuarli, scaricarli e configurarli manualmente. Con questi strumenti di Visual Studio è possibile creare, modificare, eseguire il debug e testare facilmente i progetti multipiattaforma.

Questo articolo descrive come installare gli strumenti e il software di terze parti necessari per sviluppare app multipiattaforma in C++ con Visual Studio. Per una panoramica, vedere [Visual C++ per lo sviluppo di codice per dispositivi mobili multipiattaforma](https://visualstudio.microsoft.com/vs/features/cplusplus-mdd/)

## <a name="requirements"></a>Requisiti

::: moniker range="vs-2017"

- Per i requisiti di installazione, vedere [Requisiti di sistema per la famiglia di prodotti Visual Studio 2017](/visualstudio/productinfo/vs2017-system-requirements-vs).

   > [!IMPORTANT]
   > Se si usa Windows 7 o Windows Server 2008 R2, è possibile sviluppare codice per le applicazioni desktop di Windows, le app e le librerie Android Native Activity, nonché le app e le librerie di codice per iOS, ma non le app di Windows Store o UWP.

::: moniker-end
::: moniker range=">=vs-2019"

- Per i requisiti di installazione, vedere [Requisiti di sistema per la famiglia di prodotti Visual Studio 2017](/visualstudio/releases/2019/system-requirements).

   > [!IMPORTANT]
   > Se si usa Windows 7 o Windows Server 2008 R2, è possibile sviluppare codice per applicazioni desktop di Windows classiche, librerie e app Android NativeActivity, nonché librerie di codice e app per iOS, ma non app di Windows Phone o UWP.

::: moniker-end

Per compilare le app per specifiche piattaforme del dispositivo sono necessari alcuni requisiti aggiuntivi:

- Gli emulatori Android x86 inclusi nel Android SDK funzionano meglio nei computer che possono usare l'accelerazione hardware, ad esempio Intel Hardware Accelerated Execution Manager (HAXM). Per ulteriori informazioni, vedere [accelerazione hardware per le prestazioni dell'emulatore (Hyper-V & HAXM)](/xamarin/android/get-started/installation/android-emulator/hardware-acceleration?tabs=vswin&pivots=windows).

- La compilazione di codice per iOS richiede un ID Apple, un account iOS Developer Program e un computer Mac in grado di eseguire [Xcode](https://developer.apple.com/xcode/) versione 10,2 o successiva in OS X Mavericks (versione 10,9) o versioni successive. Per un collegamento alla procedura di installazione, vedere [Installare gli strumenti per iOS](#install-tools-for-ios).

- Gli emulatori Windows Phone richiedono un computer in grado di eseguire Hyper-V. Per poter installare ed eseguire gli emulatori, è prima necessario abilitare la funzionalità Hyper-V in Windows. Per altre informazioni, vedere i [requisiti di sistema](/visualstudio/cross-platform/system-requirements-for-the-visual-studio-emulator-for-android) dell'emulatore.

## <a name="get-the-tools"></a>Get the tools

Il carico di lavoro Sviluppo di applicazioni per dispositivi mobili con C++ è disponibile nelle edizioni Community, Professional ed Enterprise di Visual Studio. Per ottenere Visual Studio, passare alla pagina dei [download di Visual Studio](https://visualstudio.microsoft.com/downloads/) . Gli strumenti di sviluppo per dispositivi mobili multipiattaforma sono disponibili a partire da Visual Studio 2015.

## <a name="install-the-tools"></a>Installare gli strumenti

Il Programma di installazione di Visual Studio include un carico di lavoro **sviluppo di applicazioni per dispositivi mobili con C++** . Questo carico di lavoro installa gli strumenti del linguaggio C++, i modelli e i componenti necessari per lo sviluppo di Android e iOS in Visual Studio. Include i set di strumenti GCC e clang necessari per le compilazioni e il debug di Android. Il carico di lavoro installa il Android SDK e i componenti per comunicare con un Mac per lo sviluppo iOS. Installa anche strumenti di terze parti e Software Development Kit necessari per supportare lo sviluppo di app iOS e Android. Molti di questi strumenti di terze parti sono software open source necessari per il supporto della piattaforma Android.

- Android Native Development Kit (NDK), Apache Ant e gli strumenti di sviluppo per Android C++ sono necessari per compilare codice C++ destinato alla piattaforma Android.

  > [!NOTE]
  > Alcuni strumenti di Android NDK non supportano i caratteri Unicode nei percorsi di file e nei nomi di file. Se il percorso o il nome file di un progetto o di un file di origine contiene caratteri Unicode, il progetto non verrà compilato.

- Google emulatore Android e Intel Hardware Accelerated Execution Manager (HAXM) sono componenti facoltativi, ma consigliati. I driver Intel HAXM funzionano solo con processori Intel e sono incompatibili con alcune macchine virtuali, incluso Hyper-V. È possibile sviluppare ed eseguire il debug direttamente su un dispositivo Android, ma spesso è più semplice usare un emulatore sul desktop per il debug.

- Gli strumenti di sviluppo iOS c++ sono necessari per compilare codice C++ destinato alla piattaforma iOS.

> [!NOTE]
> Se si usa Visual Studio 2015, vedere [Installare Visual C++ per lo sviluppo di app per dispositivi mobili multipiattaforma (Visual Studio 2015)](install-visual-cpp-for-cross-platform-mobile-development.md?view=vs-2015&preserve-view=true)

### <a name="install-the-mobile-development-with-c-workload"></a>Installare il carico di lavoro Sviluppo di applicazioni per dispositivi mobili con C++

1. Eseguire il **programma di installazione di Visual Studio** dal menu **Start**.

1. Se è già stato installato Visual Studio, scegliere il pulsante **Modifica** per la versione installata di Visual Studio che si vuole modificare. In caso contrario, scegliere **Installa** per installare Visual Studio.

1. Con la scheda **Carichi di lavoro** selezionata, scorrere verso il basso e selezionare il carico di lavoro **Sviluppo di applicazioni per dispositivi mobili con C++** nel programma di installazione di Visual Studio. Quando questo carico di lavoro è selezionato, verranno selezionati anche altri componenti necessari per lo sviluppo C++. È anche possibile scegliere altri carichi di lavoro e singoli componenti da installare contemporaneamente. Per compilare codice multipiattaforma destinato anche a UWP, selezionare il carico di lavoro **Sviluppo di app per la piattaforma UWP (Universal Windows Platform)**.

1. Nel riquadro **Dettagli di installazione** espandere **Sviluppo di applicazioni per dispositivi mobili con C++**. Nella sezione **Facoltativo** è possibile scegliere altre versioni di NDK, l'emulatore Android di Google, Intel Hardware Accelerated Execution Manager e lo strumento di accelerazione per le build IncrediBuild.

1. Per impostazione predefinita, nel carico di lavoro sono inclusi uno o più componenti di installazione di Android SDK. Sono disponibili altre versioni di Android SDK. Per aggiungerne una all'installazione, scegliere la scheda **Singoli componenti** e quindi scorrere verso il basso fino alla sezione **SDK, librerie e framework** per effettuare la selezione.

1. Scegliere il pulsante **Modifica** o **Installa** per installare il carico di lavoro **Sviluppo di applicazioni per dispositivi mobili con C++** e gli altri carichi di lavoro e componenti facoltativi selezionati.

   Al termine dell'installazione, chiudere il programma di installazione e riavviare il computer. Alcune azioni di installazione per i componenti di terze parti non hanno effetto finché il computer non viene riavviato.

   > [!IMPORTANT]
   > Il riavvio è necessario per assicurare la corretta installazione di tutti i componenti.

1. Aprire Visual Studio.

## <a name="install-tools-for-ios"></a>Install tools for iOS

È possibile usare Visual Studio per modificare, eseguire il debug e distribuire codice iOS al simulatore iOS. Oppure, in un dispositivo iOS. A causa delle restrizioni di licenza, il codice deve essere compilato in remoto su un Mac. Per compilare ed eseguire app iOS con Visual Studio, è innanzitutto necessario configurare e configurare l'agente remoto nel Mac. Per istruzioni dettagliate sull'installazione, prerequisiti e le opzioni di configurazione, vedere [Installare e configurare strumenti per la compilazione con iOS](../cross-platform/install-and-configure-tools-to-build-using-ios.md). Se non si compila per iOS, è possibile ignorare questo passaggio.

## <a name="install-or-update-dependencies-manually"></a>Installare o aggiornare manualmente le dipendenze

Non è necessario installare tutte le dipendenze di terze parti quando si installa il carico di lavoro **sviluppo di applicazioni per dispositivi mobili con C++** (o in Visual Studio 2015, l'opzione di sviluppo Visual C++ per dispositivi mobili). Installarli in un secondo momento usando la procedura descritta in [installare gli strumenti](#install-the-tools). Il programma di installazione di Visual Studio viene aggiornato regolarmente per installare i componenti di terze parti più recenti. Usarlo per installare gli SDK e NDK aggiornati. Possono anche essere installate a aggiornate in modo indipendente da Visual Studio.

Per aggiornare l'SDK, è possibile eseguire di nuovo l'App SDK Manager nella directory Android SDK. Per installare gli strumenti facoltativi e i livelli API aggiuntivi. L'installazione degli aggiornamenti potrebbe non riuscire se non si usa **Esegui come amministratore** per eseguire l'app SDK Manager. In caso di problemi durante la compilazione di un'app Android, in SDK Manager verificare la disponibilità di aggiornamenti per gli SDK installati.

Per usare alcuni degli emulatori di Android SDK, potrebbe essere necessario configurare l'accelerazione hardware. Per ulteriori informazioni, vedere [accelerazione hardware per le prestazioni dell'emulatore (Hyper-V & HAXM)](/xamarin/android/get-started/installation/android-emulator/hardware-acceleration?tabs=vswin).

Nella maggior parte dei casi, Visual Studio è in grado di rilevare le configurazioni per il software di terze parti installato. Mantiene i percorsi di installazione in variabili di ambiente interne. È possibile eseguire l'override dei percorsi predefiniti di questi strumenti di sviluppo multipiattaforma nell'IDE di Visual Studio.

### <a name="to-set-the-paths-for-third-party-tools"></a>Per impostare i percorsi per gli strumenti di terze parti

1. Sulla barra dei menu di Visual Studio selezionare **strumenti**  >  **Opzioni**.

1. Nella finestra di dialogo **Opzioni** selezionare **Multipiattaforma** > **C++** > **Android**.

   ![Opzioni di percorso dello strumento Android](../cross-platform/media/cppmdd-options-android.png "Opzioni di percorso dello strumento Android")

1. Per modificare il percorso usato da uno strumento, selezionare la casella di controllo accanto al percorso e modificare il percorso della cartella nella casella di testo. È anche possibile usare il pulsante Sfoglia (**...**) per aprire una finestra di dialogo **Selezionare il percorso** in cui scegliere la cartella.

1. Scegliere **OK** per salvare i percorsi personalizzati delle cartelle degli strumenti.

## <a name="see-also"></a>Vedi anche

[Installare e configurare gli strumenti per la compilazione con iOS](install-and-configure-tools-to-build-using-ios.md)\
[Visual C++ per lo sviluppo di codice per dispositivi mobili multipiattaforma](https://visualstudio.microsoft.com/vs/features/cplusplus-mdd/)
