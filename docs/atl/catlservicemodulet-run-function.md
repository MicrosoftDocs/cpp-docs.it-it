---
title: 'Funzione funzione CAtlServiceModuleT:: Run'
ms.date: 11/04/2016
helpviewer_keywords:
- ATL services, security
ms.assetid: 42c010f0-e60e-459c-a63b-a53a24cda93b
ms.openlocfilehash: 0c35020996852731a8f22c15860d4cceb7a8bdb6
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69491525"
---
# <a name="catlservicemoduletrun-function"></a>Funzione funzione CAtlServiceModuleT:: Run

`Run`contiene le chiamate `PreMessageLoop`a `RunMessageLoop`, e `PostMessageLoop`. Dopo la chiamata, `PreMessageLoop` archivia innanzitutto l'ID del thread del servizio. Il servizio userà questo ID per chiudersi inviando un messaggio WM_QUIT usando la funzione API Win32, [PostThreadMessage](/windows/win32/api/winuser/nf-winuser-postthreadmessagew).

`PreMessageLoop`chiama `InitializeSecurity`quindi. Per impostazione predefinita `InitializeSecurity` , chiama [CoInitializeSecurity](/windows/win32/api/combaseapi/nf-combaseapi-coinitializesecurity) con il descrittore di sicurezza impostato su null, il che significa che qualsiasi utente può accedere all'oggetto.

Se non si desidera che il servizio specifichi la propria sicurezza, eseguire l' `PreMessageLoop` override e non `InitializeSecurity`chiamare e com determinerà le impostazioni di sicurezza del registro di sistema. Un modo pratico per configurare le impostazioni del registro di sistema è con l'utilità [DCOMCNFG](../atl/dcomcnfg.md) descritta più avanti in questa sezione.

Una volta specificata la sicurezza, l'oggetto viene registrato con COM in modo che i nuovi client possano connettersi al programma. Infine, il programma indica a gestione controllo servizi (SCM) che è in esecuzione e il programma entra in un ciclo di messaggi. Il programma rimane in esecuzione fino a quando non invia un messaggio QUIT al momento dell'arresto del servizio.

## <a name="see-also"></a>Vedere anche

[Servizi](../atl/atl-services.md)<br/>
[Classe CSecurityDesc](../atl/reference/csecuritydesc-class.md)<br/>
[Classe CSid](../atl/reference/csid-class.md)<br/>
[Classe CDacl](../atl/reference/cdacl-class.md)<br/>
[Funzione CAtlServiceModuleT:: Run](../atl/reference/catlservicemodulet-class.md#run)
