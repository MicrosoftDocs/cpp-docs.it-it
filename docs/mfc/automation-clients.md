---
title: I client di automazione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- clients, Automation
- Automation clients
- type libraries, Automation clients
- clients
ms.assetid: 84e34a79-06f6-4752-a33b-ae0ede1d8ecf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cca4818d0ace6270b986ddb9b99068ca9532f1b2
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46395515"
---
# <a name="automation-clients"></a>client di automazione

Automazione rende possibile per l'applicazione possa modificare oggetti implementati in un'altra applicazione o esporli in modo che possano essere modificati. Un client di automazione è un'applicazione che consente di modificare gli oggetti esposti che appartengono a un'altra applicazione. L'applicazione che espone gli oggetti viene chiamato il server di automazione. Il client consente di modificare gli oggetti dell'applicazione server accedendo alle proprietà e funzioni di tali oggetti.

### <a name="types-of-automation-clients"></a>Tipi di client di automazione

Esistono due tipi di client di automazione:

- Client che, in modo dinamico (in fase di esecuzione), acquisiscono informazioni sulle proprietà e operazioni del server.

- Client che dispone di informazioni statiche (fornite in fase di compilazione) che specifica le proprietà e operazioni del server.

I client del primo tipo acquisiscono informazioni sui metodi e proprietà del server eseguendo una query del sistema OLE `IDispatch` meccanismo. Sebbene sia adeguato da usare per i client dinamici, `IDispatch` è difficile da usare per i client statici, in cui gli oggetti gestito deve essere noto in fase di compilazione. Per statica associata ai client, Microsoft Foundation classes fornisce il [COleDispatchDriver](../mfc/reference/coledispatchdriver-class.md) classe.

Questo tipo di client di usare una classe proxy che viene collegata staticamente con l'applicazione client. Questa classe fornisce un incapsulamento di C++ indipendente dai tipi di proprietà e operazioni dell'applicazione server.

La classe `COleDispatchDriver` fornisce il supporto dell'entità per il lato client di automazione. Usando il **Aggiungi nuovo elemento** finestra di dialogo, si crea una classe derivata da `COleDispatchDriver`.

È quindi possibile specificare il file di libreria dei tipi che descrive le proprietà e le funzioni dell'oggetto dell'applicazione server. La finestra di dialogo Aggiungi elemento legge questo file e crea il `COleDispatchDriver`-derivato (classe), con funzioni membro che l'applicazione può chiamare per accedere agli oggetti dell'applicazione server in C++ in modo indipendente dai tipi. Funzionalità aggiuntive ereditata da `COleDispatchDriver` semplifica il processo di chiamata al server di automazione appropriato.

### <a name="handling-events-in-automation-clients"></a>Gestione degli eventi nel client di automazione

Se si desidera gestire gli eventi nel client di automazione, è necessario aggiungere un'interfaccia sink. MFC fornisce il supporto della procedura guidata per aggiungere interfacce di sink per i controlli ActiveX, tuttavia non è supportata per gli altri server COM. Per informazioni su come aggiungere un'interfaccia sink in un client MFC per interfacce di origine descritti dal server COM, vedere Procedura: creare un'interfaccia Sink in Client COM MFC-Based (181845 KB) al [ http://support.microsoft.com/default.aspxscid=kb; en-us; 181845](http://support.microsoft.com/default.aspxscid=kb;en-us;181845).

## <a name="see-also"></a>Vedere anche

[Client di automazione: uso delle librerie dei tipi](../mfc/automation-clients-using-type-libraries.md)<br/>
[Automazione](../mfc/automation.md)<br/>
[Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md)

