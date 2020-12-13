---
description: 'Altre informazioni su: DCOMCNFG'
title: DCOMCNFG
ms.date: 11/04/2016
helpviewer_keywords:
- DCOMCNFG utility
- DCOM, configuring in ATL
ms.assetid: 5a8126e9-ef27-40fb-a66e-9dce8d1a7e80
ms.openlocfilehash: d99b0018d63cedbccaf57ec4cadeb649f390dcf1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97153161"
---
# <a name="dcomcnfg"></a>DCOMCNFG

DCOMCNFG è un'utilità di Windows NT 4,0 che consente di configurare diverse impostazioni specifiche di DCOM nel registro di sistema. La finestra DCOMCNFG è costituita da tre pagine: sicurezza predefinita, proprietà predefinite e applicazioni. In Windows 2000 è presente una quarta pagina, ovvero i protocolli predefiniti.

## <a name="default-security-page"></a>Pagina sicurezza predefinita

È possibile utilizzare la pagina sicurezza predefinita per specificare le autorizzazioni predefinite per gli oggetti nel sistema. La pagina sicurezza predefinita include tre sezioni: accesso, avvio e configurazione. Per modificare le impostazioni predefinite di una sezione, fare clic sul pulsante **modifica predefinito** corrispondente. Queste impostazioni di sicurezza predefinite sono memorizzate nel registro di sistema in `HKEY_LOCAL_MACHINE\Software\Microsoft\OLE` .

## <a name="default-protocols-page"></a>Pagina protocolli predefiniti

Questa pagina elenca il set di protocolli di rete disponibili per DCOM in questo computer. L'ordine riflette la priorità in cui verranno utilizzate. il primo nell'elenco ha la priorità più alta. I protocolli possono essere aggiunti o eliminati da questa pagina.

## <a name="default-properties-page"></a>Pagina proprietà predefinite

Nella pagina proprietà predefinite è necessario selezionare la casella di controllo **Abilita Distributed COM nel computer** se si desidera che i client in altri computer accedano a oggetti com in esecuzione nel computer. Se si seleziona questa opzione `HKEY_LOCAL_MACHINE\Software\Microsoft\OLE\EnableDCOM` , il valore verrà impostato su `Y` .

## <a name="applications-page"></a>Pagina delle applicazioni

È possibile modificare le impostazioni per un oggetto specifico con la pagina applicazioni. È sufficiente selezionare l'applicazione dall'elenco e fare clic sul pulsante **Proprietà** . Il Finestra Proprietà è costituito da cinque pagine:

- Nella pagina generale viene confermata l'applicazione utilizzata.

- La pagina percorso consente di specificare dove deve essere eseguita l'applicazione quando un client chiama `CoCreateInstance` sul CLSID pertinente. Se si seleziona la casella di controllo **Esegui applicazione nel computer seguente** e si immette un nome computer, `RemoteServerName` verrà aggiunto un valore nell'AppID per l'applicazione. Se si deseleziona la casella di controllo **Esegui applicazione sul computer** , il `LocalService` valore viene rinominato in `_LocalService` e, pertanto, viene disabilitato.

- La pagina sicurezza è simile alla pagina sicurezza predefinita presente nella finestra DCOMCNFG, con la differenza che queste impostazioni si applicano solo all'applicazione corrente. Anche in questo caso, le impostazioni vengono archiviate nell'AppID per tale oggetto.

- La pagina di identificazione identifica l'utente utilizzato per eseguire l'applicazione.

- La pagina Endpoint elenca il set di protocolli ed endpoint disponibili per l'utilizzo da parte dei client del server DCOM selezionato.

## <a name="see-also"></a>Vedi anche

[Services](../atl/atl-services.md)
