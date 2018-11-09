---
title: Piattaforme supportate (Visual C++)
ms.date: 11/04/2016
ms.technology:
- cpp-tools
helpviewer_keywords:
- Visual C++, platforms supported
- platforms [C++]
ms.assetid: 0d893056-4008-411a-b3d1-5f57fd7da95c
author: mikeblome
ms.author: mblome
ms.openlocfilehash: 5a077ae90078e4157c154cae2821e67642eff64a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50459436"
---
# <a name="supported-platforms-visual-c"></a>Piattaforme supportate (Visual C++)

Le applicazioni compilate con Visual Studio possono essere destinate a diverse piattaforme come indicato di seguito.

|Sistema operativo|x86|X64|ARM|
|----------------------|---------|---------|---------|
|Windows XP|X\*|X\*||
|Windows Server 2003|X\*|X\*||
|Windows Vista|x|x||
|Windows Server 2008|x|x||
|Windows 7|x|x||
|Windows Server 2012 R2|x|x||
|Windows 8|x|x|x|
|Windows 8,1|x|x|x|
|Windows 10|x|x|x|
|Android \*\*|x|x|x|
|iOS \*\*|x|x|x|
|Linux \*\*\*|x|x|x|

\* È possibile usare il set di strumenti della piattaforma Windows XP in Visual Studio 2017, Visual Studio 2015, Visual Studio 2013 e Visual Studio 2012 Update 1 o versione successiva per la compilazione di progetti Windows XP e Windows Server 2003. Per informazioni su come usare questo set di strumenti della piattaforma, vedere [Configurazione di programmi per Windows XP](build/configuring-programs-for-windows-xp.md). Per altre informazioni sulla modifica del set di strumenti della piattaforma, vedere [Procedura: Modificare il framework di destinazione e il set di strumenti della piattaforma](build/how-to-modify-the-target-framework-and-platform-toolset.md).

\*\* È possibile installare il carico di lavoro **Sviluppo di applicazioni per dispositivi mobili con C++** nel programma di installazione di Visual Studio 2017 (o nel componente facoltativo **Visual C++ per lo sviluppo di app per dispositivi mobili multipiattaforma** nell'installazione di Visual Studio 2015) destinato alle piattaforme iOS o Android. Per istruzioni, vedere [Installare Visual C++ per lo sviluppo di app per dispositivi mobili multipiattaforma](/visualstudio/cross-platform/install-visual-cpp-for-cross-platform-mobile-development). Per compilare il codice iOS, è necessario disporre di un computer Mac e soddisfare altri requisiti. Per un elenco di prerequisiti e istruzioni di installazione, vedere [Installare e configurare gli strumenti per la compilazione con iOS](/visualstudio/cross-platform/install-and-configure-tools-to-build-using-ios). È possibile compilare il codice x86 o ARM in modo che corrisponda all'hardware di destinazione. Utilizzare le configurazioni x86 da compilare per il simulatore iOS, l’emulatore Microsoft Visual Studio e alcuni dispositivi Android. Utilizzare le configurazioni ARM da compilare per dispositivi iOS e la maggior parte dei dispositivi Android.

\*\*\* È possibile installare il carico di lavoro **Sviluppo di applicazioni Linux con C++** nel programma di installazione di Visual Studio 2017 per specificare come destinazione le piattaforme Linux. Per le istruzioni, vedere [Scaricare, installare e configurare il carico di lavoro Linux](linux/download-install-and-setup-the-linux-development-workload.md). Poiché questo set di strumenti compila l'eseguibile nel computer di destinazione, è possibile eseguire la compilazione per qualsiasi architettura supportata.

Per informazioni su come impostare la configurazione della piattaforma di destinazione, vedere [Procedura: Configurare i progetti Visual C++ per piattaforme x64 a 64 bit](build/how-to-configure-visual-cpp-projects-to-target-64-bit-platforms.md).

## <a name="see-also"></a>Vedere anche

- [Strumenti e funzionalità di Visual C++ nelle versioni di Visual Studio](ide/visual-cpp-tools-and-features-in-visual-studio-editions.md)
- [Introduzione](/visualstudio/ide/getting-started-with-visual-cpp-in-visual-studio)