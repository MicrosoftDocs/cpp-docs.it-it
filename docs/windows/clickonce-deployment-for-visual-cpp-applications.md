---
title: Distribuzione ClickOnce per applicazioni Visual C++
ms.date: 11/04/2016
helpviewer_keywords:
- deploying applications [C++], ClickOnce
- application deployment [C++], ClickOnce
- ClickOnce deployment [C++], C++ applications
ms.assetid: 9988c546-0936-452c-932f-9c76daa42157
ms.openlocfilehash: 4408db9d129c03ee5df9b006b03c6586df02afb1
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69513761"
---
# <a name="clickonce-deployment-for-visual-c-applications"></a>Distribuzione ClickOnce per applicazioni Visual C++

Visual Studio offre due diverse tecnologie per la distribuzione di applicazioni Windows: distribuzione ClickOnce e distribuzione con [Windows Installer](/windows/win32/Msi/windows-installer-portal).

## <a name="clickonce-deployment-in-c"></a>Distribuzione ClickOnce in C++

L'ambiente C++ di sviluppo visivo non supporta direttamente la distribuzione dei progetti C++ di Visual Studio con ClickOnce, ma gli strumenti sono disponibili per l'utilizzo.

> [!NOTE]
>  Visual Studio non supporta ClickOnce negli ambienti di sviluppo Visual C# e Visual Basic. Se il progetto di C++ Visual Studio è una dipendenza di un C# progetto visivo, è possibile pubblicare l'applicazione (incluse le relative dipendenze) usando la distribuzione C# ClickOnce dall'ambiente di sviluppo visivo.

Per distribuire un'applicazione Visual C++ tramite ClickOnce, è necessario prima compilare un [manifesto dell'applicazione ClickOnce](/visualstudio/deployment/clickonce-application-manifest) e un [manifesto della distribuzione ClickOnce](/visualstudio/deployment/clickonce-deployment-manifest) usando [Mage.exe (Strumento per la generazione e la modifica di manifesti)](/dotnet/framework/tools/mage-exe-manifest-generation-and-editing-tool) o la relativa versione dell'interfaccia utente grafica (per informazioni, vedere [MageUI.exe (Strumento per la generazione e la modifica di manifesti, client grafico)](/dotnet/framework/tools/mageui-exe-manifest-generation-and-editing-tool-graphical-client)).

Utilizzare innanzitutto Mage.exe per compilare il manifesto dell'applicazione. Il file risultante avrà l'estensione manifest. Ricorrere quindi a Mage.exe per compilare il manifesto di distribuzione. Il file risultante avrà l'estensione application. A questo punto, firmare i manifesti.

Il manifesto dell'applicazione deve specificare il processore di destinazione (**x86**, **x64** o **ARM**). Vedere [Prerequisiti per la distribuzione di applicazioni a 64 bit](/visualstudio/deployment/deploying-prerequisites-for-64-bit-applications) per informazioni su queste opzioni.

Il nome dei manifesti di applicazione e distribuzione deve inoltre differire dal nome dell'applicazione C++, in modo da evitare eventuali conflitti tra il manifesto dell'applicazione creato da Mage.exe e il manifesto esterno che fa parte dell'applicazione C++.

Durante la distribuzione è necessario installare tutte le librerie Visual C++ da cui l'applicazione dipende. Per stabilire le dipendenze di una determinata applicazione, è possibile utilizzare depends.exe o l'utilità DUMPBIN con l'opzione /DEPENDENTS. Per altre informazioni sulle dipendenze, vedere [Informazioni sulle dipendenze di un'applicazione Visual C++](understanding-the-dependencies-of-a-visual-cpp-application.md). Potrebbe essere necessario eseguire VCRedist.exe, l'utilità che consente di installare le librerie Visual C++ nel computer di destinazione.

Potrebbe anche essere necessario compilare un programma di avvio automatico (programma di installazione dei prerequisiti) per consentire all'applicazione di distribuire i componenti richiesti. Per informazioni sul programma di avvio automatico, vedere [Creazione di pacchetti del programma di avvio automatico](/visualstudio/deployment/creating-bootstrapper-packages).

Per una descrizione dettagliata della tecnologia, vedere [Sicurezza e distribuzione di ClickOnce](/visualstudio/deployment/clickonce-security-and-deployment). Per un esempio dettagliato della distribuzione ClickOnce, vedere [Procedura dettagliata: Distribuzione manuale di un'applicazione ClickOnce](/visualstudio/deployment/walkthrough-manually-deploying-a-clickonce-application).

## <a name="see-also"></a>Vedere anche

[Mage.exe (Strumento per la generazione e la modifica di manifesti)](/dotnet/framework/tools/mage-exe-manifest-generation-and-editing-tool)<br>
[MageUI.exe (Strumento per la generazione e la modifica di manifesti, client grafico)](/dotnet/framework/tools/mageui-exe-manifest-generation-and-editing-tool-graphical-client)<br>
[Makecert.exe (Certificate Creation Tool)](/windows/win32/SecCrypto/makecert) (Makecert.exe, strumento di creazione certificati)<br>
[Distribuzione di applicazioni desktop](deploying-native-desktop-applications-visual-cpp.md)<br>
[Distribuzione di applicazioni, servizi e componenti](/visualstudio/deployment/deploying-applications-services-and-components)<br>
[Sicurezza e distribuzione di ClickOnce](/visualstudio/deployment/clickonce-security-and-deployment)<br>
[Creazione di programmi di avvio automatico](/visualstudio/deployment/creating-bootstrapper-packages)<br>
[Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)<br>
[Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md)
