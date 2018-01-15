---
title: L'applicazione di effetti controllo dell'Account utente (UAC) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- UAC [C++]
- security [C++], User Account Control
- user accounts [C++]
- User Account Control [C++]
ms.assetid: 0d001870-253e-4989-b689-f78035953799
caps.latest.revision: "5"
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e609c16d63974506a06d6ec553cf4be09509acb9
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="how-user-account-control-uac-affects-your-application"></a>Effetti del Controllo dell'account utente sull'applicazione
Il Controllo dell'account utente è una funzionalità di Windows Vista in cui gli account utente dispongono di privilegi limitati. Per informazioni dettagliate sul Controllo dell'account utente, visitare i siti seguenti:  
  
-   [Step by Step Guida per il controllo di Account utente di Windows Vista](http://go.microsoft.com/fwlink/p/?linkid=53781)  
  
-   [Procedure consigliate e linee guida per le applicazioni in un ambiente con privilegiato minimi](http://go.microsoft.com/fwlink/p/?linkid=82444)  
  
-   [Per delineare e configurare controllo Account utente in Windows Vista](http://go.microsoft.com/fwlink/p/?linkid=82445)  
  
## <a name="building-projects-after-enabling-uac"></a>Compilazione di progetti dopo aver attivato il Controllo dell'account utente  
 Se si compila un progetto Visual C++ in Windows Vista con il controllo dell'account utente disabilitato, e si decide di attivare la funzionalità in un secondo momento, è necessario cancellare i dati e ricompilare il progetto per far sì che funzioni correttamente.  
  
## <a name="applications-that-require-administrative-privileges"></a>Applicazioni che richiedono privilegi di amministratore  
 Per impostazione predefinita, il linker di Visual C++ incorpora un frammento del controllo dell'account utente nel manifesto di un'applicazione con un livello di esecuzione di `asInvoker`. Se l'applicazione richiede privilegi di amministratore per essere eseguita correttamente (ad esempio, se modifica il nodo HKLM del Registro di sistema o scrive in aree protette del disco, come la directory di Windows), è necessario modificarla.  
  
 La prima opzione consiste nel modificare il frammento del controllo del manifesto per modificare il livello di esecuzione per *requireAdministrator*. L'applicazione richiederà quindi all'utente le credenziali amministrative prima dell'esecuzione. Per informazioni su come eseguire questa operazione, vedere [/MANIFESTUAC (informazioni dell'account vengono incorporati nel manifesto)](../build/reference/manifestuac-embeds-uac-information-in-manifest.md).  
  
 La seconda opzione consiste nel non incorporare un frammento del controllo dell'account utente nel manifesto specificando il **/MANIFESTUAC: No** l'opzione del linker. In questo caso, l'applicazione verrà eseguita virtualizzata. Qualsiasi modifica apportata al Registro di sistema o al file system non viene conservata quando l'applicazione viene terminata.  
  
 Il diagramma di flusso riportato di seguito descrive la modalità di esecuzione dell'applicazione a seconda che il controllo dell'account utente sia attivato e che l'applicazione includa un manifesto del controllo dell'account utente.  
  
 ![Comportamento del caricatore di Windows Vista](media/uacflowchart.png "UACflowchart")  
  
## <a name="see-also"></a>Vedere anche  
 [Procedure di sicurezza consigliate](security-best-practices-for-cpp.md)