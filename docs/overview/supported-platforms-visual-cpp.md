---
description: 'Altre informazioni su: piattaforme supportate (Visual C++)'
title: Piattaforme supportate (Visual C++)
ms.date: 12/02/2019
ms.technology: cpp-tools
helpviewer_keywords:
- Visual C++, platforms supported
- platforms [C++]
ms.assetid: 0d893056-4008-411a-b3d1-5f57fd7da95c
ms.openlocfilehash: 80f8693a8cef7368953779d82100ce02e41f5cd8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97207514"
---
# <a name="supported-platforms-visual-c"></a>Piattaforme supportate (Visual C++)

Le applicazioni compilate con Visual Studio possono essere destinate a diverse piattaforme come indicato di seguito.

|Sistema operativo|x86|x64|ARM|ARM64\*\*\*\*|
|----------------------|---------|---------|---------|---------|
|Windows XP|X\*|X\*|||
|Windows Server 2003|X\*|X\*|||
|Windows Vista|X|X|||
|Windows Server 2008|X|X|||
|Windows 7|X|X|||
|Windows Server 2012 R2|X|X|||
|Windows 8|X|X|X||
|Windows 8.1|X|X|X||
|Windows 10|X|X|X|X|
|Android \*\*|X|X|X|X|
|iOS \*\*|X|X|X|X|
|Linux \*\*\*|X|X|X|X|

\* È possibile utilizzare il set di strumenti della piattaforma Windows XP incluso in Visual Studio 2017, Visual Studio 2015, Visual Studio 2013 e Visual Studio 2012 Update 1 per compilare progetti Windows XP e Windows Server 2003. Per informazioni su come usare questo set di strumenti della piattaforma, vedere [Configurazione di programmi per Windows XP](../build/configuring-programs-for-windows-xp.md). Per altre informazioni sulla modifica del set di strumenti della piattaforma, vedere [Procedura: Modificare il framework di destinazione e il set di strumenti della piattaforma](../build/how-to-modify-the-target-framework-and-platform-toolset.md).

\*\* È possibile installare il carico di lavoro **Sviluppo di applicazioni per dispositivi mobili con C++** nel programma di installazione di Visual Studio 2017 e versioni successive. Nell'installazione di Visual Studio 2015 scegliere il componente facoltativo **Visual C++ per lo sviluppo di app per dispositivi mobili multipiattaforma** per specificare come destinazione le piattaforme iOS o Android. Per istruzioni, vedere [Installare Visual C++ per lo sviluppo di app per dispositivi mobili multipiattaforma](/visualstudio/cross-platform/install-visual-cpp-for-cross-platform-mobile-development). Per compilare il codice iOS, è necessario disporre di un computer Mac e soddisfare altri requisiti. Per un elenco di prerequisiti e istruzioni di installazione, vedere [Installare e configurare gli strumenti per la compilazione con iOS](/visualstudio/cross-platform/install-and-configure-tools-to-build-using-ios). È possibile compilare il codice x86 o ARM in modo che corrisponda all'hardware di destinazione. Utilizzare le configurazioni x86 da compilare per il simulatore iOS, l’emulatore Microsoft Visual Studio e alcuni dispositivi Android. Utilizzare le configurazioni ARM da compilare per dispositivi iOS e la maggior parte dei dispositivi Android.

\*\*\* È possibile installare il carico di lavoro **Sviluppo di applicazioni Linux con C++** nel programma di installazione di Visual Studio 2017 e versioni successive per specificare come destinazione le piattaforme Linux. Per le istruzioni, vedere [Scaricare, installare e configurare il carico di lavoro Linux](../linux/download-install-and-setup-the-linux-development-workload.md). Poiché questo set di strumenti compila l'eseguibile nel computer di destinazione, è possibile eseguire la compilazione per qualsiasi architettura supportata.

\*\*\*\* Il supporto ARM64 è disponibile in Visual Studio 2017 e versioni successive.

Per informazioni su come impostare la configurazione della piattaforma di destinazione, vedere [Procedura: Configurare i progetti Visual C++ per piattaforme x64 a 64 bit](../build/how-to-configure-visual-cpp-projects-to-target-64-bit-platforms.md).

## <a name="see-also"></a>Vedi anche

- [Strumenti e funzionalità di Visual C++ nelle versioni di Visual Studio](visual-cpp-tools-and-features-in-visual-studio-editions.md)
- [Per iniziare](/visualstudio/ide/getting-started-with-cpp-in-visual-studio)
