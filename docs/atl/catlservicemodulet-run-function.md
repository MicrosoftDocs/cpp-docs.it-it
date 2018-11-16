---
title: 'Funzione CAtlServiceModuleT:: Run'
ms.date: 11/04/2016
f1_keywords:
- CServiceModule::Run
- CServiceModule.Run
- CSecurityDescriptor
helpviewer_keywords:
- ATL services, security
ms.assetid: 42c010f0-e60e-459c-a63b-a53a24cda93b
ms.openlocfilehash: 91b6465dd975a1e3227d1416f2b78a8abbd441ad
ms.sourcegitcommit: b032daf81cb5fdb1f5a988277ee30201441c4945
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/15/2018
ms.locfileid: "51694322"
---
# <a name="catlservicemoduletrun-function"></a>Funzione CAtlServiceModuleT:: Run

`Run` contiene le chiamate a `PreMessageLoop`, `RunMessageLoop`, e `PostMessageLoop`. Dopo essere stato chiamato, `PreMessageLoop` Archivia prima l'ID del thread. del servizio Il servizio userà questo ID per la chiusura inviando un messaggio WM_QUIT mediante la funzione API Win32, [PostThreadMessage](/windows/desktop/api/winuser/nf-winuser-postthreadmessagea).

`PreMessageLoop` chiama quindi `InitializeSecurity`. Per impostazione predefinita `InitializeSecurity` chiamate [CoInitializeSecurity](/windows/desktop/api/combaseapi/nf-combaseapi-coinitializesecurity) con il descrittore di sicurezza impostato su NULL, il che significa che ogni utente abbia accesso all'oggetto.

Se il servizio per specificare il proprio sistema di protezione non desiderate, eseguire l'override `PreMessageLoop` e non chiamare `InitializeSecurity`, COM verrà quindi determinare le impostazioni di sicurezza dal Registro di sistema. È un modo pratico per configurare le impostazioni del Registro di sistema con il [DCOMCNFG](../atl/dcomcnfg.md) utilità illustrati più avanti in questa sezione.

Una volta sicurezza viene specificata, l'oggetto è registrato con COM in modo che i nuovi client possono connettersi al programma. Infine, il programma indica a Gestione controllo servizi (SCM) che è in esecuzione e il programma entra in un ciclo di messaggi. Il programma rimane in esecuzione fino a quando non inserisce un messaggio quit al momento della chiusura del servizio.

## <a name="see-also"></a>Vedere anche

[Servizi](../atl/atl-services.md)<br/>
[Classe CSecurityDesc](../atl/reference/csecuritydesc-class.md)<br/>
[Classe CSid](../atl/reference/csid-class.md)<br/>
[Classe CDacl](../atl/reference/cdacl-class.md)<br/>
[CAtlServiceModuleT:: Run](../atl/reference/catlservicemodulet-class.md#run)

