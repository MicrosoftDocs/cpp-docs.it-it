---
description: 'Altre informazioni su: funzione CAtlServiceModuleT:: Run Function'
title: 'Funzione funzione CAtlServiceModuleT:: Run'
ms.date: 11/04/2016
helpviewer_keywords:
- ATL services, security
ms.assetid: 42c010f0-e60e-459c-a63b-a53a24cda93b
ms.openlocfilehash: f8bba170236138f6491c49506bccd29bc23d9dec
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97148343"
---
# <a name="catlservicemoduletrun-function"></a>Funzione funzione CAtlServiceModuleT:: Run

`Run` contiene le chiamate a `PreMessageLoop` , `RunMessageLoop` e `PostMessageLoop` . Dopo la chiamata, `PreMessageLoop` archivia innanzitutto l'ID del thread del servizio. Il servizio userà questo ID per chiudersi inviando un messaggio di WM_QUIT usando la funzione API Win32 [PostThreadMessage](/windows/win32/api/winuser/nf-winuser-postthreadmessagew).

`PreMessageLoop` chiama quindi `InitializeSecurity` . Per impostazione predefinita, `InitializeSecurity` chiama [CoInitializeSecurity](/windows/win32/api/combaseapi/nf-combaseapi-coinitializesecurity) con il descrittore di sicurezza impostato su null, il che significa che qualsiasi utente può accedere all'oggetto.

Se non si desidera che il servizio specifichi la propria sicurezza, eseguire l'override `PreMessageLoop` e non chiamare `InitializeSecurity` e com determinerà le impostazioni di sicurezza del registro di sistema. Un modo pratico per configurare le impostazioni del registro di sistema è con l'utilità [DCOMCNFG](../atl/dcomcnfg.md) descritta più avanti in questa sezione.

Una volta specificata la sicurezza, l'oggetto viene registrato con COM in modo che i nuovi client possano connettersi al programma. Infine, il programma indica a gestione controllo servizi (SCM) che è in esecuzione e il programma entra in un ciclo di messaggi. Il programma rimane in esecuzione fino a quando non invia un messaggio QUIT al momento dell'arresto del servizio.

## <a name="see-also"></a>Vedi anche

[Services](../atl/atl-services.md)<br/>
[Classe CSecurityDesc](../atl/reference/csecuritydesc-class.md)<br/>
[Classe CSid](../atl/reference/csid-class.md)<br/>
[Classe CDacl](../atl/reference/cdacl-class.md)<br/>
[Funzione CAtlServiceModuleT:: Run](../atl/reference/catlservicemodulet-class.md#run)
