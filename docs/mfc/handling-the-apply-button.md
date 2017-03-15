---
title: "Gestione del pulsante Applica | Microsoft Docs"
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
  - "pulsante Applica nella finestra delle proprietà"
  - "finestre delle proprietà, pulsante Applica"
ms.assetid: 7e977015-59b8-406f-b545-aad0bfd8d55b
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Gestione del pulsante Applica
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le finestre delle proprietà è disponibile una funzionalità che le finestre di dialogo standard non fanno: Consentono all'utente applicare le modifiche apportate prima di chiudere la finestra delle proprietà.  Questa operazione viene eseguita utilizzando il pulsante di applicare.  Questo articolo vengono illustrati i metodi che è possibile utilizzare per implementare questa funzionalità correttamente.  
  
 Finestre di dialogo modali generalmente applicate le impostazioni a un oggetto esterno quando l'utente fa clic su OK per chiudere la finestra di dialogo.  Lo stesso vale per una finestra delle proprietà: Quando l'utente fa clic su OK, le nuove impostazioni nella finestra delle proprietà hanno effetto.  
  
 Tuttavia, è possibile consentire all'utente di salvare le impostazioni senza chiudere la finestra di dialogo delle proprietà.  Si tratta della funzione del pulsante di applicare.  Il pulsante applica per applicare le impostazioni correnti in tutte le pagine delle proprietà all'oggetto esterno, invece di applicare soltanto le impostazioni correnti attualmente alla pagina attiva.  
  
 Per impostazione predefinita, il pulsante apply è disabilitato sempre.  È necessario scrivere il codice per abilitare il pulsante apply al momento appropriato ed è necessario scrivere il codice per implementare l'effetto Apply, come illustrato di seguito.  
  
 Se non si desidera fornire la funzionalità di applicare all'utente, non è necessario rimuovere il pulsante di applicare.  Può lasciarlo disabilitato, come in genere tra applicazioni che utilizzano il supporto standard della finestra delle proprietà disponibili nelle versioni future di Windows.  
  
 Per segnalare una pagina come eseguite modificando e abilitare il pulsante apply, chiamata **CPropertyPage::SetModified\( TRUE \)**.  Se le pagine riferimento essere modificato, il pulsante di applicare rimarrà attualmente attivo, indipendentemente dal fatto che ovvero la pagina attiva è stata modificata.  
  
 È necessario chiamare [CPropertyPage::SetModified](../Topic/CPropertyPage::SetModified.md) ogni volta che l'utente modifica le impostazioni nella pagina.  Un modo per rilevare quando un utente modifica un'impostazione nella pagina è implementare i gestori di notifica delle modifiche per ognuno dei controlli nella pagina delle proprietà, come **EN\_CHANGE** o **BN\_CLICKED**.  
  
 Per implementare l'effetto del pulsante apply, la finestra delle proprietà deve comunicare il proprietario, o un altro oggetto esterno nell'applicazione, applicare le impostazioni correnti nelle pagine delle proprietà.  Contemporaneamente, la finestra delle proprietà deve disabilitare il pulsante dell'applicazione chiamando **CPropertyPage::SetModified\( FALSE \)** per tutte le pagine che venivano applicate le modifiche all'oggetto esterno.  
  
 Per un esempio di questo processo, vedere a MFC l'esempio generale [PROPDLG](../top/visual-cpp-samples.md).  
  
## Vedere anche  
 [Finestre delle proprietà](../mfc/property-sheets-mfc.md)