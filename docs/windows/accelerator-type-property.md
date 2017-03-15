---
title: "Propriet&#224; Type dei tasti di scelta rapida | Microsoft Docs"
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
  - "Type (proprietà)"
  - "VIRTKEY"
ms.assetid: 8c349bc4-e6ad-43fa-959e-f29168af35b8
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Propriet&#224; Type dei tasti di scelta rapida
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La proprietà **Type** dei tasti di scelta rapida determina se la combinazione di tasti di scelta rapida associata all'ID del tasto di scelta rapida sia una combinazione di tasti virtuali oppure un valore tasto ASCII\/ANSI.  
  
-   Se la proprietà **Type** è impostata su **ASCII**, il [modificatore](../windows/accelerator-modifier-property.md) può essere soltanto None o Alt oppure può disporre di un tasto di scelta rapida che utilizza CTRL, specificato facendo precedere il tasto da ^.  
  
-   Se la proprietà **Type** è impostata su **VIRTKEY**, è valida qualsiasi combinazione di valori di modificatori e di tasti.  
  
    > [!NOTE]
    >  Se in una tabella di tasti di scelta rapida si desidera immettere un valore che deve essere considerato come un valore ASCII\/ANSI, è sufficiente fare clic sulla proprietà Type corrispondente alla voce della tabella e selezionare ASCII dalla casella di riepilogo a discesa.  Se, tuttavia, per specificare il valore della proprietà Key si utilizza il comando **Digita carattere** \(menu **Modifica**\), è necessario modificare la proprietà **Type** da VIRTKEY in ASCII *prima* di immettere il codice per la proprietà Key.  
  
## Requisiti  
 Win32  
  
## Vedere anche  
 [Setting Accelerator Properties](../windows/setting-accelerator-properties.md)   
 [Accelerator Editor](../mfc/accelerator-editor.md)