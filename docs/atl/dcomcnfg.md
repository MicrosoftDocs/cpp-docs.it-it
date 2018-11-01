---
title: DCOMCNFG
ms.date: 11/04/2016
f1_keywords:
- DCOMCNFG
helpviewer_keywords:
- DCOMCNFG utility
- DCOM, configuring in ATL
ms.assetid: 5a8126e9-ef27-40fb-a66e-9dce8d1a7e80
ms.openlocfilehash: 8bf85c32093051b124d007a04eed2bbf10a56039
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50552646"
---
# <a name="dcomcnfg"></a>DCOMCNFG

DCOMCNFG è un'utilità di Windows NT 4.0 che consente di configurare varie impostazioni DCOM specifico nel Registro di sistema. La finestra DCOMCNFG dispone di tre pagine: protezione predefinita, le proprietà predefinite e le applicazioni. In Windows 2000 è presente una quarta pagina, protocolli predefiniti.

## <a name="default-security-page"></a>Pagina sicurezza predefinita

È possibile utilizzare la pagina Impostazioni di sicurezza predefinite per specificare le autorizzazioni predefinite per gli oggetti nel sistema. Questa pagina include tre sezioni: l'accesso, avvio e configurazione. Per modificare le impostazioni predefinite della sezione, fare clic sulla rispettiva **modifica predefinite** pulsante. Queste impostazioni di sicurezza predefiniti vengono archiviate nel Registro di sistema `HKEY_LOCAL_MACHINE\Software\Microsoft\OLE`.

## <a name="default-protocols-page"></a>Pagina protocolli predefiniti

Questa pagina elenca il set di protocolli di rete disponibili per DCOM in questo computer. L'ordine riflette la priorità in cui verranno usate; il primo nell'elenco ha la priorità più alta. Protocolli possono essere aggiunti o eliminati da questa pagina.

## <a name="default-properties-page"></a>Pagina delle proprietà predefinito

Nella pagina delle proprietà predefinito, è necessario selezionare la **abilitare Distributed COM su questo computer** casella di controllo se si desidera che i client in altri computer per accedere a COM oggetti in esecuzione nel computer. Selezionando questa opzione imposta la `HKEY_LOCAL_MACHINE\Software\Microsoft\OLE\EnableDCOM` valore `Y`.

## <a name="applications-page"></a>Pagina delle applicazioni

Modificare le impostazioni per un determinato oggetto con la pagina delle applicazioni. È sufficiente selezionare l'applicazione dall'elenco e scegliere il **proprietà** pulsante. Finestra delle proprietà dispone di cinque pagine:

- La pagina generale conferma l'applicazione che si sta lavorando.

- La pagina percorso consente di specificare in cui l'applicazione deve essere eseguito quando un client chiama `CoCreateInstance` sul CLSID corrispondente. Se si seleziona il **eseguire l'applicazione nel computer seguente** casella di controllo e immettere un nome computer, quindi un `RemoteServerName` valore viene aggiunto sotto l'AppID per l'applicazione. La cancellazione il **esecuzione dell'applicazione in questo computer** casella di controllo ridenominazioni le `LocalService` valore `_LocalService` e, in tal modo, lo disabilita.

- La pagina sicurezza è simile alla pagina di sicurezza predefinite disponibile nella finestra DCOMCNFG, ad eccezione del fatto che queste impostazioni si applicano solo all'applicazione corrente. Anche in questo caso, le impostazioni vengono archiviate nell'ID applicazione per l'oggetto.

- La pagina di identificazione identifica quale utente viene usato per eseguire l'applicazione.

- Pagina endpoint Elenca il set di protocolli e gli endpoint disponibili per l'uso da parte dei client del server selezionato DCOM.

## <a name="see-also"></a>Vedere anche

[Servizi](../atl/atl-services.md)

