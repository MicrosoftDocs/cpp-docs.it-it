---
description: 'Altre informazioni su: client di automazione'
title: client di automazione
ms.date: 11/04/2016
helpviewer_keywords:
- clients, Automation
- Automation clients
- type libraries, Automation clients
- clients
ms.assetid: 84e34a79-06f6-4752-a33b-ae0ede1d8ecf
ms.openlocfilehash: 38379feb0881b154418daa5c02980eeee2dd21e5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97273956"
---
# <a name="automation-clients"></a>client di automazione

L'automazione consente all'applicazione di modificare gli oggetti implementati in un'altra applicazione o di esporre oggetti in modo che possano essere modificati. Un client di automazione è un'applicazione in grado di modificare gli oggetti esposti appartenenti a un'altra applicazione. L'applicazione che espone gli oggetti è chiamata server di automazione. Il client modifica gli oggetti dell'applicazione server accedendo alle proprietà e alle funzioni di tali oggetti.

### <a name="types-of-automation-clients"></a>Tipi di client di automazione

Esistono due tipi di client di automazione:

- Client che in modo dinamico (in fase di esecuzione) acquisiscono informazioni sulle proprietà e sulle operazioni del server.

- Client che possiedono informazioni statiche (fornite in fase di compilazione) che specificano le proprietà e le operazioni del server.

I client del primo tipo acquisiscono informazioni sui metodi e sulle proprietà del server eseguendo una query sul meccanismo del sistema OLE `IDispatch` . Sebbene sia appropriato da usare per i client dinamici, `IDispatch` è difficile da usare per i client statici, in cui gli oggetti da guidare devono essere noti in fase di compilazione. Per i client associati statici, le classi Microsoft Foundation forniscono la classe [COleDispatchDriver](reference/coledispatchdriver-class.md) .

I client associati statici utilizzano una classe proxy collegata in modo statico all'applicazione client. Questa classe fornisce un'incapsulamento C++ indipendente dai tipi delle proprietà e delle operazioni dell'applicazione server.

La classe `COleDispatchDriver` fornisce il supporto principale per il lato client dell'automazione. Utilizzando la finestra di dialogo **Aggiungi nuovo elemento** , è possibile creare una classe derivata da `COleDispatchDriver` .

Viene quindi specificato il file della libreria dei tipi che descrive le proprietà e le funzioni dell'oggetto dell'applicazione server. La finestra di dialogo Aggiungi elemento legge questo file e crea la `COleDispatchDriver` classe derivata da, con le funzioni membro che l'applicazione può chiamare per accedere agli oggetti dell'applicazione server in C++ in modo indipendente dai tipi. Funzionalità aggiuntive ereditate da `COleDispatchDriver` semplifica il processo di chiamata del server di automazione appropriato.

### <a name="handling-events-in-automation-clients"></a>Gestione degli eventi nei client di automazione

Se si desidera gestire gli eventi nel client di automazione, è necessario aggiungere un'interfaccia sink. MFC fornisce supporto per la procedura guidata per aggiungere interfacce di sink per i controlli ActiveX, ma non per altri server COM.

## <a name="see-also"></a>Vedi anche

[Client di automazione: utilizzo delle librerie dei tipi](automation-clients-using-type-libraries.md)<br/>
[Automazione](automation.md)<br/>
[Creazione guidata applicazione MFC](reference/mfc-application-wizard.md)
