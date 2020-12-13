---
description: 'Scopri di più su: programmazione cloud e Web in Visual C++'
title: Programmazione Web e cloud in Visual C++
ms.date: 05/14/2019
ms.assetid: b63611f1-9723-44d0-ba7f-c3ebef341313
ms.topic: overview
ms.openlocfilehash: 3d845ea89507440c07747314c24ff01bd848cf37
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97151619"
---
# <a name="cloud-and-web-programming-in-visual-c"></a>Programmazione Web e cloud in Visual C++

In C++, esistono diverse opzioni per la connessione al Web e al cloud.

## <a name="microsoft-azure-sdks-and-rest-services"></a>Microsoft Azure SDK e servizi REST

- [Libreria client di Archiviazione di Microsoft Azure per C++](https://azure.github.io/azure-storage-cpp/)

  La libreria client di Archiviazione di Azure per C++ fornisce un'API completa per l'uso di Archiviazione di Azure, con la possibilità di eseguire, a titolo esemplificativo, le seguenti operazioni:

  - Creare, leggere, eliminare ed elencare contenitori BLOB, tabelle e code.
  - Creare, leggere, eliminare, elencare e copiare BLOB, nonché leggere e scrivere intervalli di BLOB.
  - Inserire, eliminare, sostituire, unire ed eseguire query sulle entità in una tabella di Azure.
  - Accodare e rimuovere dalla coda i messaggi in una coda di Azure.
  - Elencare contenitori, BLOB, tabelle e code in modalità lazy ed eseguire query sulle entità in modalità lazy

- Gli [Azure IoT Hub SDK](/azure/iot-hub/iot-hub-devguide-sdks) ANSI C99 per Internet delle cose consentono l'esecuzione delle applicazioni IoT nel dispositivo o nel back-end.

- [OneDrive e SharePoint in Microsoft Graph](https://dev.onedrive.com/README.htm)

  L'API OneDrive fornisce un set di servizi HTTP per connettere l'applicazione a file e cartelle in Microsoft 365 e SharePoint Server 2016.

## <a name="windows-and-cross-platform-networking-apis"></a>Windows e API di rete multipiattaforma

- [C++ REST SDK (nome in codice "Casablanca")](https://github.com/Microsoft/cpprestsdk)

  Fornisce un'API moderna, multipiattaforma e asincrona per l'interazione con i servizi REST.

  - Eseguire chiamate REST a qualsiasi server HTTP, con un supporto incorporato per l'analisi e la serializzazione di documenti JSON
  - Supporta OAuth 1 e 2, incluso un listener di reindirizzamento locale
  - Stabilire connessioni WebSocket a servizi remoti
  - Un'API per le attività completamente asincrona basata su PPL, incluso un pool di thread predefinito

  Supporta Windows Desktop (7 e versioni successive), Windows Server (2012 e versioni successive), UWP (Universal Windows Platform), Linux, OSX, Android e iOS.

- [Windows::Web::Http::HttpClient](/uwp/api/windows.web.http.httpclient)

  Classe client HTTP di Windows Runtime modellata sulla classe .NET Framework con lo stesso nome nello spazio dei nomi System.Web. `HttpClient` supporta completamente il caricamento e il download asincrono su HTTP e i filtri pipeline, che permettono l'inserimento di gestori HTTP personalizzati nella pipeline. Windows SDK include filtri di esempio per reti a consumo, autenticazione OAuth e altro ancora. Per le app destinate solo alla piattaforma UWP (Universal Windows Platform) è consigliabile usare la classe `Windows::Web:HttpClient`.

- [Interfaccia IXMLHTTPRequest2](/windows/win32/api/msxml6/nn-msxml6-ixmlhttprequest2)

  Fornisce un'interfaccia COM nativa che è possibile usare in app di Windows Runtime o app desktop di Windows per connettersi a Internet su HTTP ed eseguire GET, PUT e altri comandi HTTP. Per ulteriori informazioni, vedere [procedura dettagliata: connessione tramite attività e richieste HTTP XML](../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md).

- [Internet di Windows (WinInet)](/windows/win32/WinInet/portal)

  API Windows che è possibile usare in app desktop di Windows per connettersi a Internet.

## <a name="see-also"></a>Vedi anche

[C++ in Visual Studio](../overview/visual-cpp-in-visual-studio.md) <br/>
[Centro per sviluppatori C++ e C di Microsoft Azure](https://azure.microsoft.com/develop/cpp/) <br/>
[Reti e servizi Web (UWP)](/windows/uwp/networking/)
