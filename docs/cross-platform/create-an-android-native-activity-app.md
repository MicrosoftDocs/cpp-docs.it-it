---
title: Creare un'app NativeActivity di Android
ms.date: 10/17/2019
ms.assetid: 884014b1-5208-45ec-b0da-ad0070d2c24d
ms.openlocfilehash: 664729a920076839f5f9b4440768fe3adb846803
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92924191"
---
# <a name="create-an-android-native-activity-app"></a>Creare un'app NativeActivity di Android

Quando si installa il carico di lavoro **sviluppo di app per dispositivi mobili multipiattaforma con C++** , è possibile usare Visual Studio per creare app Android Native con funzionalità complete. Android Native Development Kit (NDK) è un set di strumenti che consente di implementare la maggior parte dell'app Android usando codice C/C++ puro. Alcuni codici INI di Java fungono da collante per consentire al codice C/C++ di interagire con Android. Android NDK ha introdotto una funzionalità che consente di creare app NativeActivity con l'API Android di livello 9. Il codice NativeActivity è molto usato per creare app per giochi o con un elevato contenuto grafico che usano Unreal Engine o OpenGL. Questo argomento illustra la creazione di un'app NativeActivity semplice che usa OpenGL. Gli argomenti aggiuntivi illustrano il ciclo di vita di sviluppo relativo alla modifica, la compilazione, il debug e la distribuzione del codice NativeActivity.

## <a name="requirements"></a>Requisiti

Prima di poter creare un'app Android Native Activity, è necessario assicurarsi di aver soddisfatto tutti i requisiti di sistema e di aver installato il carico di lavoro **sviluppo di applicazioni per dispositivi mobili con C++** in Visual Studio. Per altre informazioni, vedere [installare lo sviluppo di app per dispositivi mobili multipiattaforma con C++](../cross-platform/install-visual-cpp-for-cross-platform-mobile-development.md). Verificare che gli SDK e gli strumenti di terze parti richiesti siano inclusi nell'installazione e che sia installato un emulatore Android.

## <a name="create-a-new-native-activity-project"></a>Creare un nuovo progetto NativeActivity

In questa esercitazione verrà innanzitutto creato un nuovo progetto Android Native Activity e quindi verrà compilata ed eseguita l'app predefinita in un emulatore Android.

::: moniker range="msvc-150"

1. In Visual Studio scegliere **File** > **Nuovo** > **Progetto** .

1. Nella finestra di dialogo **Nuovo progetto** , in **Modelli** , scegliere **Visual C++** > **Multipiattaforma** e quindi scegliere il modello **Applicazione NativeActivity (Android)** .

1. Assegnare all'app un nome come *MyAndroidApp* , quindi scegliere **OK** .

   ![Creazione di un progetto NativeActivity](../cross-platform/media/cppmdd-newproject.png "Creazione di un progetto NativeActivity")

   Visual Studio crea la nuova soluzione e apre Esplora soluzioni.

   ![Progetto Native Activity in Esplora soluzioni](../cross-platform/media/cppmdd-rc-na-solutionexp.png "Progetto Native Activity in Esplora soluzioni")

::: moniker-end

::: moniker range=">=msvc-160"

1. In Visual Studio scegliere **File** > **Nuovo** > **Progetto** .

1. Nella finestra di dialogo **Crea un nuovo progetto** selezionare il modello **applicazione nativa (Android)** , quindi scegliere **Avanti** .

1. Nella finestra di dialogo **Configura nuovo progetto** immettere un nome, ad esempio *MyAndroidApp* , in **nome progetto** , quindi scegliere **Crea** .

   Visual Studio crea la nuova soluzione e apre Esplora soluzioni.

::: moniker-end

La nuova soluzione per app NativeActivity di Android include due progetti:

- `MyAndroidApp.NativeActivity`, che contiene i riferimenti e il codice glue per l'app da eseguire come NativeActivity in Android. L'implementazione dei punti di ingresso dal codice glue si trova nel file *main.cpp* . Le intestazioni precompilate sono in *pch.h* . Questo progetto di app NativeActivity viene compilato in un file di libreria condivisa con estensione *so* che viene selezionato dal progetto Packaging.

- `MyAndroidApp.Packaging`, che crea il file con estensione *apk* per la distribuzione nei dispositivi o negli emulatori Android. Questo progetto contiene le risorse e il file *AndroidManifest.xml* in cui sono state impostate le proprietà del manifesto. Contiene anche il file *build.xml* , che controlla il processo di compilazione Ant. Per impostazione predefinita, è impostato come progetto di avvio in modo che possa essere distribuito ed eseguito direttamente da Visual Studio.

## <a name="build-and-run-the-default-android-native-activity-app"></a>Compilare ed eseguire l'app NativeActivity predefinita per Android

Compilare ed eseguire l'app generata dal modello per verificare l'installazione e la configurazione. Per questo test iniziale, eseguire l'app in uno dei profili di dispositivo installati dall'emulatore di Android. Se si preferisce testare l'app in un'altra destinazione, è possibile caricare l'emulatore di destinazione o connettere il dispositivo al computer.

## <a name="to-build-and-run-the-default-native-activity-app"></a>Per compilare ed eseguire l'app NativeActivity predefinita

1. Se non è già selezionato, scegliere **x86** dall'elenco a discesa **piattaforme soluzione** .

     ![Selezione di x86 dal menu a discesa Piattaforme soluzione](../cross-platform/media/cppmdd-rc-na-solution-x86.png "Selezione di x86 dal menu a discesa Piattaforme soluzione")

     Se l'elenco **Piattaforme soluzione** non è visualizzato, scegliere **Piattaforme soluzione** dall'elenco a discesa **Aggiungi o rimuovi pulsanti** e scegliere la piattaforma.

1. Sulla barra dei menu scegliere **Compila**  >  **Compila soluzione** .

     La finestra di output visualizza l'output del processo di compilazione per i due progetti della soluzione.

1. Scegliere uno dei profili emulatore Android come destinazione di distribuzione.

     Se sono stati installati altri emulatori o è stato connesso un dispositivo Android, è possibile selezionarli nell'elenco a discesa delle destinazioni della distribuzione.

1. Premere **F5** per avviare il debug o **MAIUSC** + **F5** per avviare senza eseguire il debug.

   Ecco come appare l'app predefinita in un emulatore Android.

   ![Emulatore in cui viene eseguita l'app](../cross-platform/media/cppmdd-emulator-running-app.png "Emulatore in cui viene eseguita l'app")

   All'avvio dell'emulatore in Visual Studio, il processo di caricamento e distribuzione del codice richiede qualche istante. Una volta avviata l'app, è possibile impostare i punti di interruzione e usare il debugger per eseguire il codice un'istruzione alla volta, esaminare le variabili locali e controllare i valori.

1. Premere **MAIUSC** + **F5** per arrestare il debug.

   L'emulatore è un processo separato che continua a essere eseguito. È possibile modificare, compilare e distribuire il codice più volte nello stesso emulatore.
