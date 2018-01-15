---
title: I client di automazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- clients, Automation
- Automation clients
- type libraries, Automation clients
- clients
ms.assetid: 84e34a79-06f6-4752-a33b-ae0ede1d8ecf
caps.latest.revision: "14"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9cfb6aae5c947d1f36019e548c72b22a3304aa12
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="automation-clients"></a>client di automazione
Automazione rende possibile per l'applicazione possa modificare oggetti implementati in un'altra applicazione o esporli in modo che possano essere modificati. Un client di automazione è un'applicazione in grado di modificare gli oggetti esposti appartenenti a un'altra applicazione. L'applicazione che espone gli oggetti viene chiamato il server di automazione. Il client consente di modificare gli oggetti dell'applicazione server accedendo alla proprietà di tali oggetti e funzioni.  
  
### <a name="types-of-automation-clients"></a>Tipi di client di automazione  
 Esistono due tipi di client di automazione:  
  
-   Client in modo dinamico (in fase di esecuzione) acquisiscono informazioni sulle proprietà e operazioni del server.  
  
-   Client che dispone di informazioni statiche (fornite in fase di compilazione) che specifica le proprietà e operazioni del server.  
  
 I client del primo tipo acquisiscono informazioni su metodi e proprietà del server eseguendo una query del sistema OLE `IDispatch` meccanismo. Sebbene sia adeguato da usare per i client dinamici, `IDispatch` è difficile da usare per i client statici, in cui gli oggetti controllati deve essere noto in fase di compilazione. Per statico associata a client, Microsoft Foundation classes fornisce il [COleDispatchDriver](../mfc/reference/coledispatchdriver-class.md) classe.  
  
 Client statici associati utilizzano una classe proxy collegata in modo statico con l'applicazione client. Questa classe fornisce un incapsulamento di C++ indipendente dai tipi di proprietà e le operazioni dell'applicazione server.  
  
 La classe `COleDispatchDriver` fornisce il supporto dell'entità per il lato client di automazione. Utilizzo di `Add New Item` nella finestra di dialogo creare una classe derivata da `COleDispatchDriver`.  
  
 È quindi possibile specificare il file di libreria dei tipi che descrive le proprietà e le funzioni dell'oggetto dell'applicazione server. La finestra di dialogo Aggiungi elemento legge il file e crea il `COleDispatchDriver`-derivata con funzioni membro che l'applicazione può chiamare per accedere agli oggetti dell'applicazione server C++ in modo indipendente dai tipi. Funzionalità aggiuntive ereditato da `COleDispatchDriver` semplifica il processo di chiamata al server di automazione corretto.  
  
### <a name="handling-events-in-automation-clients"></a>Gestione degli eventi nel client di automazione  
 Se si desidera gestire gli eventi nel client di automazione, è necessario aggiungere un'interfaccia sink. MFC fornisce il supporto della procedura guidata per aggiungere le interfacce di sink per i controlli ActiveX, ma non supportano per gli altri server COM. Per informazioni su come aggiungere un'interfaccia sink in un client MFC per le interfacce di origine descritto dai server COM, vedere Procedura: creare un'interfaccia Sink nel Client COM MFC-Based (KB 181845) [http://support.microsoft.com/default.aspxscid=kb;en-us; 181845](http://support.microsoft.com/default.aspxscid=kb;en-us;181845).  
  
## <a name="see-also"></a>Vedere anche  
 [Client di automazione: Utilizzo delle librerie dei tipi](../mfc/automation-clients-using-type-libraries.md)   
 [Automazione](../mfc/automation.md)   
 [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md)

