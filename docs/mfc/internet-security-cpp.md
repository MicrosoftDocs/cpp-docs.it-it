---
title: Sicurezza Internet (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1a44e528e871d784c432730799c44ac91af465be
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="internet-security-c"></a>Sicurezza Internet (C++)
La sicurezza del codice è un fattore importante per gli sviluppatori e gli utenti delle applicazioni Internet. Esistono rischi: codice dannoso, il codice che è stato manomesso e codice da siti o autori sconosciuti.  
  
 Esistono due approcci alla sicurezza quando si sviluppa per Internet. Il primo viene denominato "sandbox". In questo caso, un'applicazione è limitata a un particolare set di API ed escluso da quelli potenzialmente pericolosi, ad esempio i/o file in cui un programma può distruggere i dati nel computer dell'utente. Il secondo viene implementato con le firme digitali. Questo approccio viene definito come "confezione" per Internet. Codice viene verificato e firmato con la tecnologia di chiave pubblica/chiave privata. Prima dell'esecuzione del codice, per assicurarsi che il codice da un'origine conosciuta autenticata, e che il codice non è stato modificato dopo la firma viene verificata la firma digitale.  
  
 Nel primo caso, si considera attendibile l'applicazione non eseguirà alcun problema che si ritiene attendibile l'origine dell'applicazione. Nella seconda, firme digitali vengono utilizzate per verificare l'autenticità. La firma digitale è uno standard di settore utilizzato per identificare e fornire informazioni dettagliate sui server di pubblicazione del codice. La tecnologia è basata su standard, tra cui RSA e x. 509. In genere, i browser consentono agli utenti di scegliere se scaricare ed eseguire codice di origine sconosciuta.  
  
  
## <a name="see-also"></a>Vedere anche  
 [Attività di programmazione Internet MFC](../mfc/mfc-internet-programming-tasks.md)   
 [Nozioni di base sulla programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)

