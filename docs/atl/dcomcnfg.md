---
title: DCOMCNFG | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
f1_keywords:
- DCOMCNFG
dev_langs:
- C++
helpviewer_keywords:
- DCOMCNFG utility
- DCOM, configuring in ATL
ms.assetid: 5a8126e9-ef27-40fb-a66e-9dce8d1a7e80
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5a165102294f9f39d25f0c3118251382ecab067b
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32357245"
---
# <a name="dcomcnfg"></a>DCOMCNFG.
**DCOMCNFG** è un'utilità di Windows NT 4.0 che consente di configurare varie impostazioni specifiche di DCOM nel Registro di sistema. Il **DCOMCNFG** finestra dispone di tre pagine: protezione predefinita, le proprietà predefinite e applicazioni. In Windows 2000 è presente una quarta pagina protocolli predefiniti.  
  
## <a name="default-security-page"></a>Pagina sicurezza predefinita  
 È possibile utilizzare la pagina Impostazioni di sicurezza predefinite per specificare le autorizzazioni predefinite per gli oggetti nel sistema. La pagina di protezione predefinita contiene tre sezioni: accesso, avvio e configurazione. Per modificare le impostazioni predefinite di una sezione, fare clic sulla rispettiva **modifica predefinite** pulsante. Queste impostazioni di sicurezza predefinito vengono archiviate nel Registro di sistema `HKEY_LOCAL_MACHINE\Software\Microsoft\OLE`.  
  
## <a name="default-protocols-page"></a>Pagina protocolli predefiniti  
 Questa pagina elenca il set di protocolli di rete disponibili per DCOM in questo computer. L'ordine riflette la priorità in cui verranno utilizzati; il primo nell'elenco ha la priorità più alta. I protocolli possono essere aggiunti o eliminati da questa pagina.  
  
## <a name="default-properties-page"></a>Pagina delle proprietà predefinite  
 Nella pagina delle proprietà predefinite, è necessario selezionare il **abilitare Distributed COM su questo computer** casella di controllo se si desidera che i client in altri computer per gli oggetti COM di accesso in esecuzione nel computer. Selezionando questa opzione imposta la `HKEY_LOCAL_MACHINE\Software\Microsoft\OLE\EnableDCOM` valore `Y`.  
  
## <a name="applications-page"></a>Pagina applicazioni  
 Modificare le impostazioni per un oggetto specifico con la pagina applicazioni. È sufficiente selezionare l'applicazione dall'elenco e fare clic su di **proprietà** pulsante. La finestra proprietà è di cinque pagine:  
  
-   La pagina generale conferma l'applicazione in uso.  
  
-   La pagina percorso consente di specificare dove l'applicazione deve essere eseguito quando un client chiama `CoCreateInstance` sul CLSID corrispondente. Se si seleziona il **eseguire l'applicazione nel seguente computer** casella di controllo e immettere un nome di computer, quindi un `RemoteServerName` valore viene aggiunto sotto l'AppID dell'applicazione. Cancellazione di **eseguire l'applicazione in questo computer** ridenominazioni di casella di controllo il `LocalService` valore `_LocalService` e, di conseguenza, disattivato.  
  
-   La pagina sicurezza è simile per la sicurezza predefinita pagina, vedere il **DCOMCNFG** finestra, ad eccezione del fatto che queste impostazioni si applicano solo all'applicazione corrente. Nuovamente, le impostazioni vengono archiviate nell'ID applicazione per l'oggetto.  
  
-   La pagina di identificazione identifica l'utente utilizzato per eseguire l'applicazione.  
  
-   Pagina endpoint Elenca il set di protocolli e gli endpoint disponibili per i client del server DCOM selezionato.  
  
## <a name="see-also"></a>Vedere anche  
 [Servizi](../atl/atl-services.md)

