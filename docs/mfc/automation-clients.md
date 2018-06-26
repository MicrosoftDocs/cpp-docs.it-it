---
title: I client di automazione | Documenti Microsoft
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
ms.openlocfilehash: a29b11028df84a7e5e67adb7588386f77adcff06
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36929039"
---
# <a name="automation-clients"></a>client di automazione
Automazione rende possibile per l'applicazione possa modificare oggetti implementati in un'altra applicazione o esporli in modo che possano essere modificati. Un client di automazione è un'applicazione in grado di modificare gli oggetti esposti appartenenti a un'altra applicazione. L'applicazione che espone gli oggetti viene chiamato il server di automazione. Il client consente di modificare gli oggetti dell'applicazione server accedendo alle proprietà e funzioni di tali oggetti.  
  
### <a name="types-of-automation-clients"></a>Tipi di client di automazione  
 Esistono due tipi di client di automazione:  
  
-   Client in modo dinamico (in fase di esecuzione) acquisiscono informazioni sulle proprietà e operazioni del server.  
  
-   Client che deve disporre di informazioni statiche (fornite in fase di compilazione) che specifica le proprietà e operazioni del server.  
  
 I client del primo tipo acquisiscono informazioni su metodi e proprietà del server eseguendo una query del sistema OL `IDispatch` meccanismo. Sebbene non adeguato da usare per i client dinamici, `IDispatch` è difficile da usare per i client statici, in cui gli oggetti controllati deve essere noto in fase di compilazione. Per statico associata a client, le classi Microsoft Foundation forniscono la [COleDispatchDriver](../mfc/reference/coledispatchdriver-class.md) classe.  
  
 Client statici associati utilizzano una classe proxy collegata in modo statico con l'applicazione client. Questa classe fornisce un incapsulamento di C++ indipendente dai tipi di proprietà e le operazioni dell'applicazione server.  
  
 La classe `COleDispatchDriver` fornisce il supporto dell'entità per il lato client dell'automazione. Utilizzando il **Aggiungi nuovo elemento** della finestra di dialogo crei una classe derivata da `COleDispatchDriver`.  
  
 Specificare quindi il file di libreria dei tipi che descrive le proprietà e le funzioni dell'oggetto dell'applicazione server. La finestra di dialogo Aggiungi elemento legge il file e crea il `COleDispatchDriver`-derivata con funzioni membro che l'applicazione può chiamare per accedere agli oggetti dell'applicazione server in C++ in modo indipendente dai tipi. Funzionalità aggiuntive ereditato da `COleDispatchDriver` semplifica il processo di chiamata al server di automazione corretto.  
  
### <a name="handling-events-in-automation-clients"></a>Gestione degli eventi nel client di automazione  
 Se si desidera gestire gli eventi nel client di automazione, è necessario aggiungere un'interfaccia sink. MFC fornisce supporto della procedura guidata per aggiungere le interfacce di sink per i controlli ActiveX, ma non supportano per gli altri server COM. Per informazioni su come aggiungere un'interfaccia sink in un client MFC per le interfacce di origine descritto dai server COM, vedere Procedura: creare un'interfaccia Sink nel Client COM MFC-Based (181845 KB) [ http://support.microsoft.com/default.aspxscid=kb; en-us; 181845](http://support.microsoft.com/default.aspxscid=kb;en-us;181845).  
  
## <a name="see-also"></a>Vedere anche  
 [Client di automazione: Utilizzo delle librerie dei tipi](../mfc/automation-clients-using-type-libraries.md)   
 [Automazione](../mfc/automation.md)   
 [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md)

