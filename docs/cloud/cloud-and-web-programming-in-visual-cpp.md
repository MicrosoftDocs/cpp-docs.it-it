---
title: Il cloud e Web di programmazione in Visual C++ | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-azure
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: b63611f1-9723-44d0-ba7f-c3ebef341313
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2553ac5cdc20f3d5d38a6bad77dc79fc7c1737d8
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50052878"
---
# <a name="cloud-and-web-programming-in-visual-c"></a>Programmazione Web e cloud in Visual C++

In C++, esistono diverse opzioni per la connessione al Web e al cloud.

## <a name="cloud-programming-options"></a>Il cloud le opzioni di programmazione

- [Servizi mobili di Windows Azure](http://www.windowsazure.com/develop/mobile/)

   Fornisce API native che è possibile usare nelle App Universal Windows Platform (UWP) o App desktop di Windows per connettersi a servizi mobili di Azure. Benché la maggior parte degli esempi nel sito Web sia in C#, è possibile usare anche C++. Per altre informazioni, vedere [Guida introduttiva: Aggiunta di un servizio mobile con C++](https://msdn.microsoft.com/library/windows/apps/dn263181.aspx).

- [Libreria Client di archiviazione di Microsoft Azure per C++](https://blogs.msdn.microsoft.com/windowsazurestorage/2015/04/29/microsoft-azure-storage-client-library-for-c-v1-0-0-general-availability/)

   La libreria Client di archiviazione di Azure per C++ offre un'API completa per l'uso di archiviazione di Azure, tra cui esemplificativo per effettuare le seguenti operazioni:

  - Creare, leggere, eliminare ed elencare i contenitori blob, tabelle e code.
  - Creazione, lettura, eliminazione, elenco e copia BLOB più leggere e scrivere gli intervalli di blob.
  - INSERT, delete, replace, unione ed eseguire query sulle entità in una tabella di Azure.
  - Accodamento e rimozione dalla coda dei messaggi in una coda di Azure.
  - In modo differito elencare i contenitori, BLOB, tabelle e code e in modo differito eseguire query sulle entità

- [API di OneDrive](https://dev.onedrive.com/README.htm)

   L'API di OneDrive fornisce un set di servizi HTTP per connettere l'applicazione ai file e cartelle in Office 365 e SharePoint Server 2016.

- [C++ REST SDK (nome in codice "Casablanca")](https://github.com/Microsoft/cpprestsdk)

   Fornisce un'API moderna, multipiattaforma e asincrona per l'interazione con i servizi REST.

  - Eseguire chiamate REST in qualsiasi server HTTP, con supporto incorporato per la serializzazione e analisi di documenti JSON
  - Supporta OAuth 1 e 2, che include un listener locale di reindirizzamento
  - Effettuare connessioni WebSocket rispetto ai servizi remoti
  - Un'attività completamente asincrona API basata su libreria PPL, tra cui un pool di thread predefinito

   Supporta Windows Desktop (7 +), Windows Server (2012 e versioni successive), Universal Windows Platform, Linux, OSX, Android e iOS.

- [Windows::Web::Http::HttpClient](https://msdn.microsoft.com/library/windows/apps/windows.web.http.httpclient.aspx)

   Classe client HTTP di Windows Runtime modellata sulla classe .NET Framework con lo stesso nome nello spazio dei nomi System.Web. `HttpClient` supporta completamente il caricamento e il download asincrono su HTTP e i filtri pipeline, che permettono l'inserimento di gestori HTTP personalizzati nella pipeline. Windows SDK include filtri di esempio per reti a consumo, autenticazione OAuth e altro ancora. Per le app destinate solo a Universal Windows Platform, è consigliabile usare il `Windows::Web:HttpClient` classe.

- [Interfaccia IXMLHTTPRequest2](/previous-versions/windows/desktop/api/msxml6/nn-msxml6-ixmlhttprequest2)

   Fornisce un'interfaccia COM nativa che è possibile usare in app di Windows Runtime o App desktop di Windows per connettersi a Internet tramite HTTP e generare un'operazione GET, PUT e altri comandi HTTP. Per altre informazioni, vedere [procedura dettagliata: connessione tramite attività e richieste HTTP XML](../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md).

- [Internet di Windows (WinInet)](/windows/desktop/WinInet/portal)

   API Windows che è possibile usare in app desktop di Windows per connettersi a Internet.

## <a name="see-also"></a>Vedere anche

[Visual C++](../visual-cpp-in-visual-studio.md) <br/>
[Le reti e servizi web](/windows/uwp/networking/)
