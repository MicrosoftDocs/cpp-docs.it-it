---
title: Il cloud e Web di programmazione in Visual C++ | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-azure
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: b63611f1-9723-44d0-ba7f-c3ebef341313
caps.latest.revision: "13"
author: ghogen
ms.author: ghogen
manager: ghogen
ms.openlocfilehash: 4763dd9048f1d43bde1bd9b67126f85533f6f0c8
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="cloud-and-web-programming-in-visual-c"></a>Programmazione Web e cloud in Visual C++
In C++, esistono diverse opzioni per la connessione al Web e al cloud.  
  
 [Servizi mobili di Windows Azure](http://www.windowsazure.com/develop/mobile/)  
 Fornisce API native che è possibile usare in app di Windows Store e app desktop di Windows per connettersi a Servizi mobili di Microsoft Azure. Benché la maggior parte degli esempi nel sito Web sia in C#, è possibile usare anche C++. Per altre informazioni, vedere [Guida introduttiva: Aggiunta di un servizio mobile con C++](http://msdn.microsoft.com/library/windows/apps/dn263181.aspx).  

 [Libreria Client di archiviazione di Microsoft Azure per C++](https://blogs.msdn.microsoft.com/windowsazurestorage/2015/04/29/microsoft-azure-storage-client-library-for-c-v1-0-0-general-availability/)  
 La libreria Client di archiviazione di Azure per C++ fornisce un'API completa per l'utilizzo di archiviazione di Azure, inclusi, a titolo esemplificativo, le seguenti operazioni:

- Creare, leggere, eliminare ed elencare i contenitori blob, tabelle e code.
- Creazione, lettura, eliminare, elenco e copia BLOB più leggere e scrivere gli intervalli di blob.
- INSERT, delete, replace, merge e le entità di query in una tabella di Azure.
- Accodamento e rimozione dalla coda di messaggi in una coda di Azure.
- Elenco in modo differito contenitori, BLOB, tabelle e code ed eseguire una query in modo differito entità

[OneDrive API](https://dev.onedrive.com/README.htm)  
 L'API di OneDrive fornisce un set di servizi HTTP per connettersi all'applicazione di file e cartelle in Office 365 e SharePoint Server 2016.

[C++ REST SDK (nome in codice "Casablanca")](https://github.com/Microsoft/cpprestsdk)  
Fornisce un'API moderna, multipiattaforma e asincrona per l'interazione con i servizi REST.

-   Eseguire le chiamate REST su qualsiasi server HTTP, con supporto incorporato per il documento JSON durante l'analisi e serializzazione
-   Supporta OAuth 1 e 2, che include un listener locale di reindirizzamento
-   Verificare le connessioni WebSocket nei servizi remoti
-   Un'attività asincrona completamente API basata sul libreria PPL, incluso un pool di thread predefinito

Supporta Windows Desktop (7 +), Windows Server (2012 +), piattaforma universale di Windows, Linux, OS x, Android e iOS. 
  
[Windows::Web::Http::HttpClient](https://msdn.microsoft.com/en-us/library/windows/apps/windows.web.http.httpclient.aspx)  
 Classe client HTTP di Windows Runtime modellata sulla classe .NET Framework con lo stesso nome nello spazio dei nomi System.Web. `HttpClient` supporta completamente il caricamento e il download asincrono su HTTP e i filtri pipeline, che permettono l'inserimento di gestori HTTP personalizzati nella pipeline. Windows SDK include filtri di esempio per reti a consumo, autenticazione OAuth e altro ancora. Per le app destinate solo a Universal Windows Platform, è consigliabile utilizzare la `Windows::Web:HttpClient` classe. 
  
[Interfaccia IXMLHTTPRequest2](http://msdn.microsoft.com/library/windows/apps/hh831151.aspx)  
 Fornisce un'interfaccia COM nativa che è possibile usare in app di Windows Store o app desktop di Windows per connettersi a Internet su HTTP ed eseguire GET, PUT e altri comandi HTTP. Per ulteriori informazioni, vedere [procedura dettagliata: connessione tramite attività e richieste HTTP XML](../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md).  
  
[Internet di Windows (WinInet)](http://msdn.microsoft.com/library/windows/desktop/aa385331\(v=vs.85\).aspx)  
 API Windows che è possibile usare in app desktop di Windows per connettersi a Internet.  
  
## <a name="see-also"></a>Vedere anche  
 [Visual C++](../visual-cpp-in-visual-studio.md)   
 [Connessione a reti e servizi web (applicazioni Windows Store scritte in c# /Visual Basic/C++ e XAML)](http://msdn.microsoft.com/library/windows/apps/br229573.aspx)