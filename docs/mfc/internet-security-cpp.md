---
title: Sicurezza Internet (C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- code signing [MFC], Internet security
- sandboxing [MFC]
- digital signatures [MFC], Internet security
- code signing [MFC]
- Web application security [MFC]
- code access security [MFC], Internet security considerations
- security [MFC]
- security [MFC], Internet
- Internet applications [MFC], security
- Web application security [MFC], Internet security approaches
ms.assetid: bf0da697-81bc-41f0-83fa-d7f82ed83df8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f4454eceae2cc5f2e6b46510fe95889c664a568a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33348850"
---
# <a name="internet-security-c"></a>Sicurezza Internet (C++)
La sicurezza del codice è un fattore importante per gli sviluppatori e gli utenti delle applicazioni Internet. Esistono rischi: codice dannoso, il codice che è stato manomesso e codice da siti o autori sconosciuti.  
  
 Esistono due approcci alla sicurezza quando si sviluppa per Internet. Il primo viene denominato "sandbox". In questo caso, un'applicazione è limitata a un particolare set di API ed escluso da quelli potenzialmente pericolosi, ad esempio i/o file in cui un programma può distruggere i dati nel computer dell'utente. Il secondo viene implementato con le firme digitali. Questo approccio viene definito come "confezione" per Internet. Codice viene verificato e firmato con la tecnologia di chiave pubblica/chiave privata. Prima dell'esecuzione del codice, per assicurarsi che il codice da un'origine conosciuta autenticata, e che il codice non è stato modificato dopo la firma viene verificata la firma digitale.  
  
 Nel primo caso, si considera attendibile l'applicazione non eseguirà alcun problema che si ritiene attendibile l'origine dell'applicazione. Nella seconda, firme digitali vengono utilizzate per verificare l'autenticità. La firma digitale è uno standard di settore utilizzato per identificare e fornire informazioni dettagliate sui server di pubblicazione del codice. La tecnologia è basata su standard, tra cui RSA e x. 509. In genere, i browser consentono agli utenti di scegliere se scaricare ed eseguire codice di origine sconosciuta.  
  
  
## <a name="see-also"></a>Vedere anche  
 [Attività di programmazione Internet MFC](../mfc/mfc-internet-programming-tasks.md)   
 [Nozioni di base sulla programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)

