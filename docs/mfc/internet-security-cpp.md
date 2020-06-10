---
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
ms.openlocfilehash: ce044014c5c2e13528cea8b982227b0ec8bc03fc
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84621531"
---
# <a name="internet-security-c"></a>Sicurezza Internet (C++)

La protezione del codice costituisce un problema importante per gli sviluppatori e per gli utenti di applicazioni Internet. Esistono rischi: codice dannoso, codice che è stato alterato e codice da siti o autori sconosciuti.

Esistono due approcci di base alla sicurezza quando si sviluppa per Internet. Il primo è denominato "sandboxing". Con questo approccio, un'applicazione è limitata a un particolare set di API ed è esclusa da quelli potenzialmente pericolosi, ad esempio l'I/O dei file, in cui un programma potrebbe eliminare i dati nel computer di un utente. Il secondo viene implementato usando le firme digitali. Questo approccio viene definito "shrinkwrap" per Internet. Il codice viene verificato e firmato usando la tecnologia chiave privata/chiave pubblica. Prima di eseguire il codice, viene verificata la firma digitale per verificare che il codice provenga da un'origine autenticata nota e che il codice non sia stato modificato perché è stato firmato.

Nel primo caso, si considera attendibile che l'applicazione non provochi danni e si considera attendibile l'origine dell'applicazione. Nel secondo, le firme digitali vengono usate per verificare l'autenticità. La firma digitale è uno standard di settore usato per identificare e fornire dettagli sull'autore del codice. La relativa tecnologia si basa su standard, tra cui RSA e X. 509. I browser in genere consentono agli utenti di scegliere se vogliono scaricare ed eseguire codice di origine sconosciuta.

## <a name="see-also"></a>Vedere anche

[Attività di programmazione Internet MFC](mfc-internet-programming-tasks.md)<br/>
[Nozioni fondamentali sulla programmazione Internet MFC](mfc-internet-programming-basics.md)
