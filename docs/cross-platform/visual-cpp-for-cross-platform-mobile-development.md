---
title: Sviluppo di app per dispositivi mobili multipiattaforma con C++
ms.date: 11/14/2019
ms.assetid: 0bb872d6-981b-4c96-9143-fcec5336bf0d
ms.openlocfilehash: dd2ea678d7689fac60bcee3555772b87df06e31b
ms.sourcegitcommit: a673f6a54cc97e3d4cd032b10aa8dce7f0539d39
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/28/2020
ms.locfileid: "78177542"
---
# <a name="cross-platform-mobile-development-with-c"></a>Sviluppo di app per dispositivi mobili multipiattaforma con C++

È possibile compilare app C++ native per dispositivi iOS, Android e Windows usando gli strumenti multipiattaforma disponibili in Visual Studio. **Sviluppo per dispositivi C++ mobili con** è un carico di lavoro disponibile nel programma di installazione di Visual Studio. Installa gli SDK e gli strumenti necessari per lo sviluppo multipiattaforma di librerie condivise e app native. Quando è installato, è possibile usare C++ per creare codice che viene eseguito su dispositivi e piattaforme iOS e Android, Windows, Windows Store e Xbox.

La scrittura di codice per più piattaforme è spesso frustrante. I linguaggi e gli strumenti di sviluppo primari per iOS, Android e Windows sono diversi a seconda della piattaforma. Comunque, tutte le piattaforme supportano la scrittura di codice in C++. Si tratta del denominatore comune che può consentire il riutilizzo del codice di base su più piattaforme. Il codice nativo scritto in C++ può essere più efficiente e meno incline alla decompilazione. Il riutilizzo del codice può assicurare un risparmio di tempo e impegno durante la creazione di app per piattaforme multiple.

Lo sviluppo C++ con per lo sviluppo di app per dispositivi mobili multipiattaforma presenta diversi vantaggi:

- **Installazione semplice.** Il programma di installazione di Visual Studio acquisisce e installa gli strumenti e gli SDK di terze parti necessari per compilare app o librerie per Android e iOS. Configurazione e configurazione sono semplici e prevalentemente automatiche.

- **Ambiente di compilazione potente e familiare.** Creare creare facilmente progetti e soluzioni multipiattaforma condivisibili con i modelli di Visual Studio. Gestire le proprietà per tutti i progetti usando un'unica interfaccia comune. Modificare tutto il codice nell'editor di Visual Studio e sfruttare la tecnologia IntelliSense multipiattaforma incorporata per il completamento del codice e l'evidenziazione degli errori.

- **Esperienza di debug unificata.** USA gli strumenti di debug di qualità elevata in Visual Studio per guardare ed esaminare C++ il codice in tutte le piattaforme: dispositivi e emulatori Android, simulatori e dispositivi iOS e dispositivi ed emulatori Windows o Windows Store.

## <a name="get-the-tools"></a>Ottenere gli strumenti

Lo sviluppo di C++ applicazioni per dispositivi mobili con è un carico di lavoro installabile incluso in Visual Studio. Per i prerequisiti e le istruzioni di installazione, vedere [installare lo sviluppo di app per C++dispositivi mobili multipiattaforma con ](../cross-platform/install-visual-cpp-for-cross-platform-mobile-development.md). Per compilare il codice per iOS, è necessario anche un computer Mac e un account Apple iOS Developer Per altre informazioni, vedere [Install And Configure Tools to Build using iOS](../cross-platform/install-and-configure-tools-to-build-using-ios.md) (Installare e configurare strumenti per compilare con iOS).

## <a name="come-up-to-speed"></a>Diventare operativi

Se si proviene dallo sviluppo per Android o iOS, sono disponibili ottimi materiali per iniziare. Visual Studio è un ambiente di sviluppo espressivo e potente. Per informazioni su come usarlo, vedere la [Guida introduttiva per sviluppatori Android](/previous-versions/windows/apps/dn275875\(v=win.10\)) o la [Guida introduttiva per sviluppatori iOS](/previous-versions/windows/apps/jj657966\(v=win.10\)). Questi articoli presentano Visual Studio e i concetti necessari per sviluppare app multipiattaforma per Windows e Windows Store. Per iniziare a scrivere la prima app multipiattaforma per iOS e Android, vedere [creare un'applicazione OpenGL ES in Android e iOS](../cross-platform/build-an-opengl-es-application-on-android-and-ios.md).

Lo sviluppo per dispositivi C++ mobili con carico di lavoro include diversi modelli utili per iniziare a usare le app:

- Applicazione NativeActivity (Android)

  Crea un'app C++ OpenGL completa come progetto Android NativeActivity.

- Applicazione OpenGLES (Android, iOS)

  Creare una soluzione con un set di progetti per compilare un'app Android NativeActivity e un'app per iOS. Queste app usano librerie specifiche della piattaforma create mediante il codice C++ OpenGL ES comune per disegnare lo stesso cubo rotante in ogni app.

- Libreria condivisa (Android, iOS)

  Crea una soluzione con progetti per creare un file di libreria dinamica Android (con estensione so) e un file di libreria statica iOS (con estensione a) mediante il codice C++ comune in un progetto condiviso.

- Applicazione di base (Android, Ant)

  Crea un progetto di app Android "Hello, World" che usa solo il codice sorgente Java e il sistema di compilazione Ant.

- Applicazione di base (Android, Gradle)

  Crea un progetto di app Android "Hello, World" che usa solo il codice sorgente Java e il sistema di compilazione Gradle.

- Libreria di base (Android, Ant)

  Crea un progetto di libreria Android "Hello, World" che usa solo il codice sorgente Java e il sistema di compilazione Ant.

- Libreria di base (Android, Gradle)

  Crea un progetto di libreria Android "Hello, World" che usa solo il codice sorgente Java e il sistema di compilazione Gradle.

- Libreria condivisa dinamica (Android)

  Crea un file di libreria dinamica Android (con estensione so) usando il codice C++.

- Applicazione OpenGLES 2 (iOS)

  Crea una soluzione con un set di progetti per la compilazione di un'app iOS OpenGL ES 2. L'app usa una libreria di codice C++ OpenGL ES per disegnare il cubo rotante in un'app iOS. Questa app può essere un buon punto di partenza per ottenere informazioni su come importare le librerie C++ nell'app iOS.

- Libreria statica (Android)

  Crea un progetto per compilare una libreria statica per Android. In un'app per Android è possibile collegare solo una libreria dinamica, ma un numero qualsiasi di librerie statiche.

- Libreria statica (iOS)

  Crea un progetto per compilare una libreria statica per iOS.

- Progetto makefile (Android)

  Crea un wrapper di progetto per i propri progetti makefile Android.

## <a name="try-out-sample-code"></a>Provare il codice di esempio

Scaricare esempi che illustrano come creare librerie di codice condiviso che è possibile usare nelle app Windows, Android e iOS. Vedere quindi gli esempi di come creare app complete per le attività native per Android. Per un'introduzione, vedere [Cross-Platform Mobile Development Examples](../cross-platform/cross-platform-mobile-development-examples.md).

## <a name="see-also"></a>Vedere anche

[Installare lo sviluppo di app per dispositivi C++ mobili multipiattaforma con](../cross-platform/install-visual-cpp-for-cross-platform-mobile-development.md)\
[Installare e configurare gli strumenti per la compilazione con iOS](../cross-platform/install-and-configure-tools-to-build-using-ios.md)\
[Creare un'app per Android Native activity](../cross-platform/create-an-android-native-activity-app.md)\
[Compilare un'applicazione OpenGL ES in Android e iOS](../cross-platform/build-an-opengl-es-application-on-android-and-ios.md)\
[Esempi di sviluppo di app per dispositivi mobili multipiattaforma](../cross-platform/cross-platform-mobile-development-examples.md)
