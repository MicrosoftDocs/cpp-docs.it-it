---
title: "Stili Message-Box | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MB_ICONQUESTION"
  - "MB_ICONINFORMATION"
  - "MB_DEFBUTTON2"
  - "MB_YESNO"
  - "MB_OKCANCEL"
  - "MB_TASKMODAL"
  - "MB_ICONEXCLAMATION"
  - "MB_OK"
  - "MB_DEFBUTTON3"
  - "MB_YESNOCANCEL"
  - "MB_APPLMODAL"
  - "MB_RETRYCANCEL"
  - "MB_DEFBUTTON1"
  - "MB_ABORTRETRYIGNORE"
  - "MB_SYSTEMMODAL"
  - "MB_ICONSTOP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MB_ABORTRETRYIGNORE (costante)"
  - "MB_APPLMODAL (costante)"
  - "MB_DEFBUTTON1 (costante)"
  - "MB_DEFBUTTON2 (costante)"
  - "MB_DEFBUTTON3 (costante)"
  - "MB_ICONEXCLAMATION (costante)"
  - "MB_ICONINFORMATION (costante)"
  - "MB_ICONQUESTION (costante)"
  - "MB_ICONSTOP (costante)"
  - "MB_OK (costante)"
  - "MB_OKCANCEL (costante)"
  - "MB_RETRYCANCEL (costante)"
  - "MB_SYSTEMMODAL (costante)"
  - "MB_TASKMODAL (costante)"
  - "MB_YESNO (costante)"
  - "MB_YESNOCANCEL (costante)"
  - "stili finestra di messaggio"
ms.assetid: d87014c5-4ea4-4950-a27e-7bcdda67be7d
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Stili Message-Box
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

I seguenti stili delle finestre di messaggio sono disponibili.  
  
## Tipi di Message\_Box  
  
-   **MB\_ABORTRETRYIGNORE** la finestra di messaggio contiene tre pulsanti: Per interrompere, tentativo e ignora.  
  
-   **MB\_OK** la finestra di messaggio contiene un pulsante: OK.  
  
-   **MB\_OKCANCEL** la finestra di messaggio contiene due pulsanti: OK e cancel.  
  
-   **MB\_RETRYCANCEL** la finestra di messaggio contiene due pulsanti: Tentativo e cancel.  
  
-   **MB\_YESNO** la finestra di messaggio contiene due pulsanti: Sì o no.  
  
-   **MB\_YESNOCANCEL** la finestra di messaggio contiene tre pulsanti: Yes, no e cancel.  
  
## Modalità della finestra di messaggio  
  
-   **MB\_APPLMODAL** l'utente deve rispondere alla finestra di messaggio prima di procedere di lavoro nella finestra corrente.  Tuttavia, l'utente può spostarsi alle finestre delle altre applicazioni e lavoro nelle finestre.  L'impostazione predefinita è **MB\_APPLMODAL** se non **MB\_SYSTEMMODAL** né **MB\_TASKMODAL** è specificato.  
  
-   **MB\_SYSTEMMODAL** tutte le applicazioni viene sospeso finché l'utente non risponde alla finestra di messaggio.  Le finestre di messaggio modali sono utilizzate per informare l'utente degli errori seri e potenzialmente offensivi che richiedono l'attenzione controllo immediato e dovrebbe essere utilizzata sporadicamente.  
  
-   **MB\_TASKMODAL** simile a **MB\_APPLMODAL**, ma non utile in un'applicazione di classi MFC \(Microsoft Foundation.  Questo flag è riservato per un'applicazione chiamante o una libreria che non dispone di un handle di finestra disponibili.  
  
## Icone finestra di messaggio  
  
-   **MB\_ICONEXCLAMATION** esempio l'icona di un punto esclamativo appare nella finestra di messaggio.  
  
-   **MB\_ICONINFORMATION** consistere icon "in un cerchio compaio nella finestra di messaggio.  
  
-   L'icona a forma di punto interrogativo di**MB\_ICONQUESTION**Verrà visualizzata la finestra di messaggio.  
  
-   L'icona di relative segno di**MB\_ICONSTOP**Verrà visualizzata la finestra di messaggio.  
  
## Pulsanti predefiniti della finestra di messaggio  
  
-   **MB\_DEFBUTTON1** il primo pulsante è l'impostazione predefinita.  Si noti che il primo pulsante viene sempre l'impostazione predefinita a meno che **MB\_DEFBUTTON2** o **MB\_DEFBUTTON3** sia specificato.  
  
-   **MB\_DEFBUTTON2** il secondo pulsante è l'impostazione predefinita.  
  
-   **MB\_DEFBUTTON3** il terzo pulsante è l'impostazione predefinita.  
  
## Vedere anche  
 [Stili utilizzati da MFC](../../mfc/reference/styles-used-by-mfc.md)   
 [AfxMessageBox](../Topic/AfxMessageBox.md)