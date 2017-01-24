---
title: "Propriet&#224; Modifier dei tasti di scelta rapida | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Modifier (proprietà)"
ms.assetid: f05a9379-e037-4cfb-b6ef-d2c655bcfa7f
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Propriet&#224; Modifier dei tasti di scelta rapida
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Di seguito vengono riportati i valori ammessi per la proprietà Modifier nella tabella dei tasti di scelta rapida.  
  
|Valore|Descrizione|  
|------------|-----------------|  
|**Nessuno**|Viene premuto soltanto il tasto impostato.  Questa impostazione viene principalmente utilizzata con i valori ASCII\/ANSI da 001 a 026, che vengono interpretati come valori compresi tra ^A e ^Z \(tra CTRL\-A e CTRL\-Z\).|  
|**Alt**|Prima del tasto impostato è necessario premere ALT.|  
|**Ctrl**|Prima del tasto impostato è necessario premere CTRL.  Questa impostazione non è valida se la proprietà Type è impostata su ASCII.|  
|**Spostamento**|Prima del tasto impostato è necessario premere MAIUSC.|  
|**Ctrl\+Alt**|Prima del tasto impostato è necessario premere CTRL e ALT.  Questa impostazione non è valida se la proprietà Type è impostata su ASCII.|  
|**Ctrl\+Shift**|Prima del tasto impostato è necessario premere CTRL e MAIUSC.  Questa impostazione non è valida se la proprietà Type è impostata su ASCII.|  
|**Alt\+Shift**|Prima del tasto impostato è necessario premere ALT e MAIUSC.  Questa impostazione non è valida se la proprietà Type è impostata su ASCII.|  
|**Ctrl\+Alt\+Shift**|Prima del tasto impostato è necessario premere CTRL, ALT e MAIUSC.  Questa impostazione non è valida se la proprietà Type è impostata su ASCII.|  
  
## Requisiti  
 Win32  
  
## Vedere anche  
 [Setting Accelerator Properties](../windows/setting-accelerator-properties.md)   
 [Accelerator Editor](../mfc/accelerator-editor.md)