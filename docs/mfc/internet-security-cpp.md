---
description: 'Altre informazioni su: sicurezza Internet (C++)'
title: Sicurezza Internet (C++)
ms.date: 11/04/2016
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
ms.openlocfilehash: 870695abc89ba022a333829ec974d2f1e9147a53
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97335853"
---
# <a name="internet-security-c"></a>Sicurezza Internet (C++)

La protezione del codice costituisce un problema importante per gli sviluppatori e per gli utenti di applicazioni Internet. Esistono rischi: codice dannoso, codice che è stato alterato e codice da siti o autori sconosciuti.

Esistono due approcci di base alla sicurezza quando si sviluppa per Internet. Il primo è denominato "sandboxing". Con questo approccio, un'applicazione è limitata a un particolare set di API ed è esclusa da quelli potenzialmente pericolosi, ad esempio l'I/O dei file, in cui un programma potrebbe eliminare i dati nel computer di un utente. Il secondo viene implementato usando le firme digitali. Questo approccio viene definito "shrinkwrap" per Internet. Il codice viene verificato e firmato usando la tecnologia chiave privata/chiave pubblica. Prima di eseguire il codice, viene verificata la firma digitale per verificare che il codice provenga da un'origine autenticata nota e che il codice non sia stato modificato perché è stato firmato.

Nel primo caso, si considera attendibile che l'applicazione non provochi danni e si considera attendibile l'origine dell'applicazione. Nel secondo, le firme digitali vengono usate per verificare l'autenticità. La firma digitale è uno standard di settore usato per identificare e fornire dettagli sull'autore del codice. La relativa tecnologia si basa su standard, tra cui RSA e X. 509. I browser in genere consentono agli utenti di scegliere se vogliono scaricare ed eseguire codice di origine sconosciuta.

## <a name="see-also"></a>Vedi anche

[Attività di programmazione Internet MFC](mfc-internet-programming-tasks.md)<br/>
[Nozioni fondamentali sulla programmazione Internet MFC](mfc-internet-programming-basics.md)
