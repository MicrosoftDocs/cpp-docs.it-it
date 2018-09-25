---
title: Distribuzione ClickOnce per applicazioni Visual C++ | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- deploying applications [C++], ClickOnce
- application deployment [C++], ClickOnce
- ClickOnce deployment [C++], C++ applications
ms.assetid: 9988c546-0936-452c-932f-9c76daa42157
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fabce61d84072cd27482f94fa32c8fd91850b797
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46378904"
---
# <a name="clickonce-deployment-for-visual-c-applications"></a>Distribuzione ClickOnce per applicazioni Visual C++

Visual Studio offre due diverse tecnologie per la distribuzione di applicazioni Windows: la distribuzione ClickOnce o la distribuzione [Windows Installer](/windows/desktop/Msi/windows-installer-portal).

## <a name="clickonce-deployment-in-c"></a>Distribuzione ClickOnce in C++

L'ambiente di sviluppo di Visual C++ non supporta direttamente la distribuzione dei progetti Visual C++ con ClickOnce, ma sono disponibili strumenti che consentono di ottenere questo risultato.

> [!NOTE]
>  Visual Studio non supporta ClickOnce negli ambienti di sviluppo Visual C# e Visual Basic. Se il progetto Visual C++ è una dipendenza di un progetto Visual C#, l'applicazione e le relative dipendenze potranno essere pubblicate usando la distribuzione ClickOnce dall'ambiente di sviluppo di Visual C#.

Per distribuire un'applicazione Visual C++ tramite ClickOnce, è necessario prima compilare un [manifesto dell'applicazione ClickOnce](/visualstudio/deployment/clickonce-application-manifest) e un [manifesto della distribuzione ClickOnce](/visualstudio/deployment/clickonce-deployment-manifest) usando [Mage.exe (Strumento per la generazione e la modifica di manifesti)](/dotnet/framework/tools/mage-exe-manifest-generation-and-editing-tool) o la relativa versione dell'interfaccia utente grafica (per informazioni, vedere [MageUI.exe (Strumento per la generazione e la modifica di manifesti, client grafico)](/dotnet/framework/tools/mageui-exe-manifest-generation-and-editing-tool-graphical-client)).

Utilizzare innanzitutto Mage.exe per compilare il manifesto dell'applicazione. Il file risultante avrà l'estensione manifest. Ricorrere quindi a Mage.exe per compilare il manifesto di distribuzione. Il file risultante avrà l'estensione application. A questo punto, firmare i manifesti.

Il manifesto dell'applicazione deve specificare il processore di destinazione (**x86**, **x64** o **ARM**). Vedere [Prerequisiti per la distribuzione di applicazioni a 64 bit](/visualstudio/deployment/deploying-prerequisites-for-64-bit-applications) per informazioni su queste opzioni.

Il nome dei manifesti di applicazione e distribuzione deve inoltre differire dal nome dell'applicazione C++, in modo da evitare eventuali conflitti tra il manifesto dell'applicazione creato da Mage.exe e il manifesto esterno che fa parte dell'applicazione C++.

Durante la distribuzione è necessario installare tutte le librerie Visual C++ da cui l'applicazione dipende. Per stabilire le dipendenze di una determinata applicazione, è possibile utilizzare depends.exe o l'utilità DUMPBIN con l'opzione /DEPENDENTS. Per altre informazioni sulle dipendenze, vedere [Informazioni sulle dipendenze di un'applicazione Visual C++](../ide/understanding-the-dependencies-of-a-visual-cpp-application.md). Potrebbe essere necessario eseguire VCRedist.exe, l'utilità che consente di installare le librerie Visual C++ nel computer di destinazione.

Potrebbe anche essere necessario compilare un programma di avvio automatico (programma di installazione dei prerequisiti) per consentire all'applicazione di distribuire i componenti richiesti. Per informazioni sul programma di avvio automatico, vedere [Creazione di pacchetti del programma di avvio automatico](/visualstudio/deployment/creating-bootstrapper-packages).

Per una descrizione dettagliata della tecnologia, vedere [Sicurezza e distribuzione di ClickOnce](/visualstudio/deployment/clickonce-security-and-deployment). Per un esempio dettagliato della distribuzione ClickOnce, vedere [Procedura dettagliata: Distribuzione manuale di un'applicazione ClickOnce](/visualstudio/deployment/walkthrough-manually-deploying-a-clickonce-application).

## <a name="see-also"></a>Vedere anche

[Mage.exe (Strumento per la generazione e la modifica di manifesti)](/dotnet/framework/tools/mage-exe-manifest-generation-and-editing-tool)<br>
[MageUI.exe (Strumento per la generazione e la modifica di manifesti, client grafico)](/dotnet/framework/tools/mageui-exe-manifest-generation-and-editing-tool-graphical-client)<br>
[Makecert.exe (Certificate Creation Tool)](https://msdn.microsoft.com/library/windows/desktop/aa386968) (Makecert.exe, strumento di creazione certificati)<br>
[Distribuzione di applicazioni desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)<br>
[Distribuzione di applicazioni, servizi e componenti](/visualstudio/deployment/deploying-applications-services-and-components)<br>
[Sicurezza e distribuzione di ClickOnce](/visualstudio/deployment/clickonce-security-and-deployment)<br>
[Creazione di programmi di avvio automatico](/visualstudio/deployment/creating-bootstrapper-packages)<br>
[Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)<br>
[Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md)