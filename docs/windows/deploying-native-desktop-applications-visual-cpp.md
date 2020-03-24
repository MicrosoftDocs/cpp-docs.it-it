---
title: Distribuzione di applicazioni desktop native (Visual C++)
ms.date: 05/11/2018
helpviewer_keywords:
- deploying applications [C++]
- application deployment [C++]
- Visual C++, application deployment
- application deployment [C++], about application deployment
- deploying applications [C++], about deploying applications
- distributing applications [C++]
ms.assetid: 37f1691e-d67c-41e4-926e-528a237a9bac
ms.topic: overview
ms.openlocfilehash: e9ae5db05c0835bb65a65cdccf58ab7f7d1b789f
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80160190"
---
# <a name="deploying-native-desktop-applications-visual-c"></a>Distribuzione di applicazioni desktop native (Visual C++)

La distribuzione rappresenta il processo con il quale si mette a disposizione un'applicazione o un componente pronto per l'installazione su altri computer. La pianificazione della distribuzione inizia quando viene creata un'applicazione nel computer di uno sviluppatore. La distribuzione termina quando l'applicazione è installata e pronta per essere eseguita nel computer di un utente.

Visual Studio offre le diverse tecnologie per la distribuzione di applicazioni Windows. Queste includono la distribuzione ClickOnce e la distribuzione con Windows Installer.

- È possibile usare ClickOnce per distribuire applicazioni C++ destinate ad assembly misti, puri e verificabili Common Language Runtime (CLR). Nonostante sia possibile usare Windows Installer per distribuire un'applicazione gestita, è consigliabile usare ClickOnce, perché sfrutta le funzionalità di sicurezza di .NET Framework come, ad esempio, la firma di manifesti. ClickOnce non supporta la distribuzione di applicazioni C++ native. Per altre informazioni, vedere [ClickOnce Deployment for Visual C++ Applications](clickonce-deployment-for-visual-cpp-applications.md).

- La tecnologia Windows Installer può essere usata per distribuire applicazioni C++ native o applicazioni C++ destinate al CLR.

Gli articoli presenti in questa sezione della documentazione illustrano come assicurare che un'applicazione Visual C++ nativa venga eseguita in un qualsiasi computer che offre una piattaforma di destinazione supportata, quali file è necessario includere in un pacchetto di installazione e le modalità consigliate per ridistribuire i componenti da cui dipende l'applicazione.

## <a name="in-this-section"></a>Contenuto della sezione

- [Distribuzione in Visual C++](deployment-in-visual-cpp.md)

- [Concetti della distribuzione](deployment-concepts.md)

- [Informazioni sulle dipendenze di un'applicazione Visual C++](understanding-the-dependencies-of-a-visual-cpp-application.md)

- [Determinazione delle DLL da ridistribuire](determining-which-dlls-to-redistribute.md)

- [Scelta di un metodo di distribuzione](choosing-a-deployment-method.md)

- [Distribuzione di Universal CRT](universal-crt-deployment.md).

- [Ridistribuzione di file Visual C++](redistributing-visual-cpp-files.md)

- [Esempi di distribuzione](deployment-examples.md)

- [Ridistribuzione di applicazioni client Web](redistributing-web-client-applications.md)

- [ClickOnce Deployment for Visual C++ Applications](clickonce-deployment-for-visual-cpp-applications.md)

- [Esecuzione di un'applicazione C++ /clr in una versione runtime precedente](running-a-cpp-clr-application-on-a-previous-runtime-version.md)

## <a name="related-sections"></a>Sezioni correlate

- [Compilazione di applicazioni isolate C/C++ e di assembly side-by-side](../build/building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)

- [Distribuzione](/dotnet/framework/deployment/index)

- [Risoluzione dei problemi relativi alle applicazioni isolate C/C++ e agli assembly side-by-side](../build/troubleshooting-c-cpp-isolated-applications-and-side-by-side-assemblies.md)
