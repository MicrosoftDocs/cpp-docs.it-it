---
title: Sicurezza Internet (C++) | Microsoft Docs
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
ms.openlocfilehash: 1f5beba4f9a33a5bd9ee93baae6176d3ea592d2e
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46445815"
---
# <a name="internet-security-c"></a>Sicurezza Internet (C++)

La sicurezza del codice è un problema importante per gli sviluppatori e gli utenti di applicazioni Internet. Esistono rischi: codice dannoso, il codice che sia stato manomesso e codice da siti sconosciuti o degli autori.

Esistono due approcci alla sicurezza di base durante lo sviluppo per Internet. Il primo è denominato "sandbox". Questo approccio, un'applicazione è limitata a un particolare set di API ed esclusi da quelli potenzialmente pericolosi, ad esempio i/o file in cui un programma è stato possibile eliminare i dati sul computer dell'utente. Il secondo viene implementato usando le firme digitali. Questo approccio viene definito come "shrinkwrap" per Internet. Codice di verifica e firmati mediante la tecnologia di chiavi pubblica/chiave privata. Prima di eseguire il codice, la relativa firma digitale viene verificata per assicurarsi che il codice sia da un'origine nota autenticata e che il codice non è stato modificato perché è stato firmato.

Nel primo caso, si considera attendibile che l'applicazione non eseguirà alcun danno e si ritiene attendibile l'origine dell'applicazione. Nel secondo, le firme digitali vengono utilizzate per verificare l'autenticità. La firma digitale è uno standard del settore utilizzato per identificare e fornire i dettagli sul server di pubblicazione del codice. La tecnologia si basa sugli standard, tra cui RSA e X.509. In genere, i browser consentono agli utenti di scegliere se si desidera scaricare ed eseguire codice di origine sconosciuta.


## <a name="see-also"></a>Vedere anche

[Attività di programmazione Internet MFC](../mfc/mfc-internet-programming-tasks.md)<br/>
[Nozioni di base sulla programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)

