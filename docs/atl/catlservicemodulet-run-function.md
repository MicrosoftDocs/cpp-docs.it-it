---
title: 'Funzione CAtlServiceModuleT:: Run'
ms.date: 11/04/2016
helpviewer_keywords:
- ATL services, security
ms.assetid: 42c010f0-e60e-459c-a63b-a53a24cda93b
ms.openlocfilehash: 0f50c13912bbfef861e8650ee7589daea1e45725
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62250846"
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
[CAtlServiceModuleT::Run](../atl/reference/catlservicemodulet-class.md#run)
