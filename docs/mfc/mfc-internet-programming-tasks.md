---
title: Attività di programmazione Internet MFC
ms.date: 09/12/2018
helpviewer_keywords:
- Internet applications [MFC], getting started
- Internet applications [MFC], first steps
ms.assetid: 6377e9b8-07c4-4380-b63b-05f5a9061313
ms.openlocfilehash: 6d8a542ada94bc52ee2000bc92ae0457ec87609c
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84617954"
---
# <a name="mfc-internet-programming-tasks"></a>Attività di programmazione Internet MFC

Questa sezione contiene i passaggi dettagliati per l'aggiunta del supporto Internet alle applicazioni. Negli argomenti viene illustrato come utilizzare le classi MFC per abilitare Internet per le applicazioni esistenti e come aggiungere il supporto dei documenti attivi al componente COM esistente. Si desidera creare un documento con le virgolette predefinite, i punteggi di calcio di Pittsburgh e la temperatura più recente in Antartide Microsoft offre una serie di tecnologie che consentono di eseguire questa operazione su Internet.

Le tecnologie attive includono i controlli ActiveX (precedentemente controlli OLE) e i documenti attivi; WinInet per recuperare e salvare facilmente i file su Internet; e moniker asincroni per il download di dati efficiente. In Visual C++ sono disponibili procedure guidate che consentono di iniziare rapidamente a usare un'applicazione iniziale. Per un'introduzione a queste tecnologie, vedere [nozioni di base sulla programmazione Internet MFC](mfc-internet-programming-basics.md) e [com MFC](mfc-com.md).

È sempre stato necessario eseguire l'FTP di un file, ma non sono state apprese le classi WinSock e i protocolli di programmazione di rete WinInet che incapsulano questi protocolli, offrendo un semplice set di funzioni che è possibile usare per scrivere un'applicazione client su Internet per scaricare i file tramite HTTP, FTP e gopher. È possibile utilizzare WinInet per eseguire ricerche nelle directory nel disco rigido o in tutto il mondo. È possibile raccogliere in modo trasparente i dati di diversi tipi diversi e presentarli all'utente in un'interfaccia integrata.

Sono presenti grandi quantità di dati per il download di moniker asincroni che forniscono una soluzione COM (Component Object Model) per il rendering progressivo di oggetti di grandi dimensioni. WinInet può essere usato anche in modo asincrono.

Nella tabella seguente vengono descritte alcune delle operazioni che è possibile eseguire con queste tecnologie.

|Hai|Per|È necessario|
|--------------|-----------------|----------------|
|Un server Web.|Tenere traccia degli accessi e delle informazioni dettagliate sulle richieste URL.|Scrivere un filtro, richiedere notifiche per gli eventi di accesso e il mapping degli URL.|
|Web browser.|Fornire contenuto dinamico.|Creare controlli ActiveX e documenti attivi.|
|Un'applicazione basata su documenti.|Aggiungere il supporto per il file FTP a.|Usare WinInet o moniker asincroni.|

Per informazioni dettagliate su come iniziare, vedere gli argomenti seguenti:

- [Scelte di progettazione delle applicazioni](application-design-choices.md)

- [Scrittura di applicazioni MFC](writing-mfc-applications.md)

- [Controlli ActiveX in Internet](activex-controls-on-the-internet.md)

- [Aggiornamento di un controllo ActiveX esistente](upgrading-an-existing-activex-control.md)

- [Moniker asincroni in Internet](asynchronous-monikers-on-the-internet.md)

- [Test delle applicazioni Internet](testing-internet-applications.md)

- [Sicurezza Internet](internet-security-cpp.md)

## <a name="see-also"></a>Vedere anche

[Nozioni fondamentali sulla programmazione Internet MFC](mfc-internet-programming-basics.md)<br/>
[Informazioni Internet per attività](internet-information-by-task.md)
