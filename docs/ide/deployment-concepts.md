---
title: Concetti della distribuzione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Windows Installer [C++]
- dependencies [C++], application deployment and
- application deployment [C++], about application deployment
- deploying applications [C++], about deploying applications
- libraries [C++], application deployment issues
ms.assetid: ebd7f246-ab54-40e8-87fa-dac02c0047b3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 16f135011f7b67debdf51f6ddbde00a79d130602
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43199692"
---
# <a name="deployment-concepts"></a>Concetti principali della distribuzione

Questa sezione illustra le considerazioni principali da tenere presenti per la distribuzione di applicazioni C++.

## <a name="windows-installer-deployment-in-c"></a>Distribuzione con Windows Installer in C+++

Per la distribuzione, i progetti Visual C++ usano in genere l'installazione tradizionale tramite Windows Installer. Per preparare una distribuzione con Windows Installer, si include l'applicazione in un file setup.exe e si distribuisce tale file insieme a un pacchetto di installazione (con estensione msi). Gli utenti eseguono quindi setup.exe per installare l'applicazione.

Per creare il pacchetto dell'applicazione, si aggiunge un progetto di installazione alla soluzione. Dopo la compilazione, vengono creati i file del programma di installazione e del relativo pacchetto da distribuire agli utenti. Per altre informazioni, vedere [Scelta di un metodo di distribuzione](../ide/choosing-a-deployment-method.md).

## <a name="library-dependencies"></a>Dipendenze libreria

Se un'applicazione C/C++ viene compilata tramite le funzionalità offerte dalle librerie di Visual C++, in runtime è dipendente dalla presenza di tali librerie. Per eseguire l'applicazione, è necessario collegarla, in modo statico o dinamico, alle librerie di Visual C++ necessarie. Se un'applicazione è collegata in modo dinamico a una libreria di Visual C++, tale libreria deve essere presente durante l'esecuzione, perché possa essere caricata. D'altra parte, se l'applicazione è collegata in modo statico a una libreria di Visual C++, non è necessario che le DLL corrispondenti siano presenti nel computer dell'utente. Il collegamento statico, tuttavia, ha alcune conseguenze negative, ad esempio l'aumento delle dimensioni dei file dell'applicazione e una maggiore difficoltà potenziale di manutenzione. Per altre informazioni, vedere [Vantaggi dell'uso delle DLL](../build/dlls-in-visual-cpp.md#advantages-of-using-dlls).

## <a name="packaging-and-redistributing"></a>Creazione di pacchetti e ridistribuzione

Le librerie di Visual C++ vengono incluse nei pacchetti sotto forma di DLL e tutte le librerie necessarie per le applicazioni C/C++ vengono installate da Visual Studio nel computer dello sviluppatore. Quando si distribuisce l'applicazione agli utenti, tuttavia, nella maggior parte dei casi non è possibile richiedere l'installazione di Visual Studio per eseguirla. È importante essere in grado di ridistribuire solo le parti di Visual C++ necessarie per eseguire correttamente l'applicazione.

Per altre informazioni sulla creazione di pacchetti e la ridistribuzione, vedere gli argomenti seguenti:

- [Determinazione delle DLL da ridistribuire](../ide/determining-which-dlls-to-redistribute.md).

- [Scelta di un metodo di distribuzione](../ide/choosing-a-deployment-method.md).

- [Distribuzione di Universal CRT](universal-crt-deployment.md).

Per esempi di distribuzione e suggerimenti per la risoluzione dei problemi, vedere:

- [Esempi di distribuzione](../ide/deployment-examples.md).

- [Risoluzione dei problemi relativi alle applicazioni isolate C/C++ e agli assembly side-by-side](../build/troubleshooting-c-cpp-isolated-applications-and-side-by-side-assemblies.md).

## <a name="see-also"></a>Vedere anche

- [Distribuzione di applicazioni desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)
- [Informazioni sulle dipendenze di un'applicazione Visual C++](../ide/understanding-the-dependencies-of-a-visual-cpp-application.md)
- [Distribuzione con Windows Installer](https://msdn.microsoft.com/121be21b-b916-43e2-8f10-8b080516d2a0)
