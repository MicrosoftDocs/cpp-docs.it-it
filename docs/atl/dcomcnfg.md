---
title: "DCOMCNFG | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "DCOMCNFG"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DCOM, configuring in ATL"
  - "DCOMCNFG utility"
ms.assetid: 5a8126e9-ef27-40fb-a66e-9dce8d1a7e80
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# DCOMCNFG
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**DCOMCNFG** è un'utilità di Windows NT 4.0 che consente di configurare le varie impostazioni DCOM\- specifiche nel Registro di sistema.  La finestra **DCOMCNFG** dispone di tre pagine: Sicurezza predefinita, le proprietà predefinite e applicazioni.  In Windows 2000 la quarta pagina, protocolli predefiniti, è presente.  
  
## Pagina predefinita di sicurezza  
 È possibile utilizzare la pagina predefinita di sicurezza per specificare le autorizzazioni predefinite per gli oggetti nel sistema.  La pagina predefinita di sicurezza ha tre sezioni: Access, avvio e configurazione.  Per modificare le impostazioni predefinite di una sezione, fare clic sul pulsante corrispondente **Modifica predefinite**.  Queste impostazioni di sicurezza predefinite vengono archiviate nel Registro di sistema in `HKEY_LOCAL_MACHINE\Software\Microsoft\OLE`.  
  
## Pagina predefinita dei protocolli  
 In questa pagina sono elencate il set protocolli di rete disponibili a DCOM sul computer.  L'ordine riflette la priorità in cui verranno utilizzati, il primo l'elenco ha la priorità più elevata.  I protocolli possono essere aggiunti o eliminati da questa pagina.  
  
## Pagina delle proprietà predefinite  
 Le proprietà predefinite pagina, è necessario selezionare la casella di controllo **Abilita DCOM in questo computer** se si desidera che i client su altri computer per accedere agli oggetti COM in esecuzione sul computer.  Selezionare il set di opzioni `HKEY_LOCAL_MACHINE\Software\Microsoft\OLE\EnableDCOM` stima a `Y`.  
  
## Pagina di applicazioni  
 Modificare le impostazioni per un determinato oggetto con la pagina di applicazioni.  Selezionare semplicemente l'applicazione dall'elenco e fare clic sul pulsante **Proprietà**.  Nella Finestra Proprietà sono disponibili cinque pagine:  
  
-   La pagina generale conferma l'applicazione in uso.  
  
-   La pagina di posizione consente di specificare dove l'applicazione deve essere eseguita quando un client chiama `CoCreateInstance` il CLSID rilevante.  Se si seleziona la casella di controllo **Esegui l'applicazione nel computer seguente** e si immette un nome computer, un valore `RemoteServerName` in verrà aggiunta l'appid per l'applicazione.  Deselezionare la casella di controllo **Run application on this computer** rinomina il valore `LocalService` a `_LocalService` e, pertanto, lo disabiliti.  
  
-   La pagina di sicurezza è simile alla pagina predefinita di sicurezza di ricerca nella finestra **DCOMCNFG**, ma queste impostazioni si applicano solo all'applicazione corrente.  Nuovamente, le impostazioni vengono memorizzate nell'appid di tale oggetto.  
  
-   La pagina di identificazione identifica quali utente viene utilizzato per eseguire l'applicazione.  
  
-   Gli endpoint degli elenchi l'insieme dei protocolli e di endpoint disponibili per l'utilizzo da parte dei client del server selezionato DCOM.  
  
## Vedere anche  
 [Servizi](../atl/atl-services.md)