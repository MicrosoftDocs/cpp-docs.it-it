---
description: 'Altre informazioni su: automazione'
title: automazione
ms.date: 11/04/2016
helpviewer_keywords:
- Automation servers, about Automation servers
- clients, Automation
- programmatic control [MFC]
- properties [MFC], Automation
- MFC, COM support
- OLE Automation
- Automation
- servers [MFC], Automation
- Automation clients
- sample applications [MFC], Automation
- methods [MFC]
- passing parameters, Automation
- Automation method [MFC]
- Automation, passing parameters
- Automation property [MFC]
- MFC COM, Automation
- methods [MFC], Automation
ms.assetid: 329117f0-c1aa-4680-a901-bfb71277dfba
ms.openlocfilehash: 8a038a3590c3db9c90c8f99eaaa6f98d2c4e20cc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339839"
---
# <a name="automation"></a>automazione

L'automazione (precedentemente nota come automazione OLE) fa sì che un'applicazione possa modificare oggetti implementati in un'altra applicazione o esporli in modo che possano essere modificati.

Un [server di automazione](automation-servers.md) è un'applicazione (un tipo di server COM) che espone le proprie funzionalità tramite interfacce COM ad altre applicazioni, chiamate [client di automazione](automation-clients.md). L'esposizione consente ai client di automazione di automatizzare determinate funzioni accedendo direttamente agli oggetti e utilizzando i servizi che essi forniscono.

I server e i client di automazione utilizzano le interfacce COM che derivano sempre da `IDispatch` e accettano e restituiscono uno specifico set di tipi di dati denominati tipi di automazione. È possibile automatizzare qualsiasi oggetto che espone un'interfaccia di automazione, fornendo i metodi e le proprietà a cui è possibile accedere da altre applicazioni. L'automazione è disponibile sia per gli oggetti OLE che per gli oggetti COM. L'oggetto automatizzato potrebbe essere locale o remoto (in un altro computer a cui si accede attraverso una rete), quindi esistono due categorie di automazione:

- Automazione (locale).

- Automazione remota (su una rete, utilizzando Distributed COM o DCOM).

L'esposizione degli oggetti è utile quando le applicazioni forniscono funzionalità utili per altre applicazioni. Ad esempio, un controllo ActiveX è un tipo di server di automazione; l'applicazione che contiene il controllo ActiveX è il client di automazione del controllo.

Ad esempio, un elaboratore di testo potrebbe esporre la propria funzionalità di controllo ortografico ad altri programmi. L'esposizione degli oggetti consente ai fornitori di migliorare le proprie applicazioni sfruttando funzionalità preconfezionate di altre applicazioni. In questo modo, l'automazione applica alcuni dei principi della programmazione orientata a oggetti, ad esempio la possibilità di riutilizzo e l'incapsulamento, a livello delle stesse applicazioni.

Più importante è il supporto che l'automazione fornisce agli utenti e ai provider di soluzioni. Esponendo la funzionalità dell'applicazione tramite un'interfaccia comune e definita chiaramente, l'automazione consente di compilare soluzioni complete in un unico linguaggio di programmazione generale, come ad esempio Microsoft Visual Basic, anziché in diversi macro linguaggi specifici per applicazione.

Molte applicazioni commerciali, quali Microsoft Excel e Microsoft Visual C++, permettono di automatizzare gran parte delle funzionalità che offrono. Ad esempio, in Visual C++, è possibile scrivere macro VBScript per automatizzare compilazioni, aspetti della modifica di codice o attività di debug.

## <a name="passing-parameters-in-automation"></a><a name="_core_passing_parameters_in_automation"></a> Passaggio di parametri nell'automazione

Una difficoltà nel creare metodi di automazione consiste nel contribuire a fornire un meccanismo "sicuro" uniforme per passare dati tra i server e i client di automazione. L'automazione utilizza il tipo **VARIANT** per passare i dati. Il tipo **VARIANT** è un'unione contrassegnata. Contiene un membro dati per il valore (si tratta di un'unione anonima C++) e un membro dati che indica il tipo di informazioni archiviate nell'unione. Il tipo **VARIANT** supporta numerosi tipi di dati standard: interi a 2 e a 4 byte, numeri in virgola mobile a 4 e a 8 byte, stringhe e valori Boolean. Supporta inoltre i tipi **HRESULT** (codici di errore OLE), **Currency** (un tipo numerico a virgola fissa) e **Data** (data e ora assoluti), nonché i puntatori alle `IUnknown` `IDispatch` interfacce e.

Il tipo **VARIANT** è incapsulato nella classe [COleVariant](reference/colevariant-class.md) . Le classi **CURRENCY** e **DATE** di supporto sono incapsulate nelle classi [COleCurrency](reference/colecurrency-class.md) e [COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md) .

## <a name="automation-samples"></a>Esempi di automazione

- [AUTOCLIK](../overview/visual-cpp-samples.md) Utilizzare questo esempio per apprendere le tecniche di automazione e come base per l'apprendimento dell'automazione remota.

- [ACDUAL](../overview/visual-cpp-samples.md) Aggiunge interfacce duali a un'applicazione server di automazione.

- [CALCDRIV](../overview/visual-cpp-samples.md) Applicazione client di automazione che controlla MFCCALC.

- [INPROC](../overview/visual-cpp-samples.md) Mostra un'applicazione server di automazione in-process.

- [IPDRIVE](../overview/visual-cpp-samples.md) Applicazione client di automazione che controlla INPROC.

- [MFCCALC](../overview/visual-cpp-samples.md) Mostra un'applicazione client di automazione.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Client di automazione](automation-clients.md)

- [Server di automazione](automation-servers.md)

- [OLE](ole-in-mfc.md)

- [tecnologia Active](mfc-com.md)

## <a name="what-do-you-want-to-do"></a>Cosa si vuole fare

- [Aggiungere una classe di automazione](automation-servers.md)

- [Utilizzare le librerie dei tipi](automation-clients-using-type-libraries.md)

- [Accedere a server di automazione](automation-servers.md)

- [Scrivere client di automazione in C++](automation-clients.md)

## <a name="see-also"></a>Vedi anche

[MFC COM](mfc-com.md)
