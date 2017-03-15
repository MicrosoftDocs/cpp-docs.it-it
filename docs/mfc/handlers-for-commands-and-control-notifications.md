---
title: "Gestori per comandi e notifiche dei controlli | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "comandi, gestori per"
  - "controlli [MFC], notifiche"
  - "funzioni [C++], gestore"
  - "gestori"
  - "gestori, comando"
  - "gestori, notifica controllo"
  - "notifiche, gestori per il controllo"
ms.assetid: 20f57f4a-f577-4c09-80a2-43faf32a1c2e
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Gestori per comandi e notifiche dei controlli
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Non esistono gestori predefiniti per i controlli o i messaggi di notifica del controllo.  Pertanto, i gestori per queste categorie di messaggi vengono associati solo per convenzione di denominazione.  Quando si esegue il mapping del comando o la notifica di controllo ad un gestore, le Finestre Proprietà propone un nome basato sull'ID di comando o nel codice di notifica del controllo.  È possibile accettare il nome proposto, modificarli, oppure sostituirlo.  
  
 La convenzione suggerisce di denominare i gestori per l'oggetto dell'interfaccia utente che rappresentano in entrambe le categorie .  Pertanto un gestore per il comando Taglia dal menu Modifica potrebbe essere denominato  
  
 [!code-cpp[NVC_MFCMessageHandling#4](../mfc/codesnippet/CPP/handlers-for-commands-and-control-notifications_1.h)]  
  
 Poiché il comando Taglia viene implementato in genere nelle applicazioni, il framework predefinisce l'ID di comando per il comando Taglia come **ID\_EDIT\_CUT**.  Per un elenco degli ID di comandi predefiniti, vedere il file. AFXRES.H.  Per ulteriori informazioni sui comandi, vedere [Comandi predefiniti](../mfc/standard-commands.md).  
  
 Inoltre, la convenzione suggerisce che un gestore può essere denominato per un messaggio di notifica **BN\_CLICKED** da un pulsante con etichetta "Mio pulsante".  
  
 [!code-cpp[NVC_MFCMessageHandling#5](../mfc/codesnippet/CPP/handlers-for-commands-and-control-notifications_2.h)]  
  
 È possibile assegnare a questo comando un ID di `IDC_MY_BUTTON` perché è equivalente ad un oggetto dell'interfaccia utente specifico dell'applicazione.  
  
 Entrambe le categorie di messaggi non accettano argomenti e non restituiscono valori.  
  
## Vedere anche  
 [Dichiarazioni di funzioni gestore messaggi](../mfc/declaring-message-handler-functions.md)