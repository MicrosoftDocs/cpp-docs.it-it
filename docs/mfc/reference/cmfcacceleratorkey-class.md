---
title: "CMFCAcceleratorKey Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCAcceleratorKey"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCAcceleratorKey class"
ms.assetid: d140fbf7-23db-45ea-a63e-414a5ec7b3d5
caps.latest.revision: 36
caps.handback.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCAcceleratorKey Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una classe di supporto che implementa il mapping di base virtuale e la formattazione.  
  
## Sintassi  
  
```  
class CMFCAcceleratorKey : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCAcceleratorKey::CMFCAcceleratorKey](../Topic/CMFCAcceleratorKey::CMFCAcceleratorKey.md)|Costruisce un oggetto `CMFCAcceleratorKey`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCAcceleratorKey::Format](../Topic/CMFCAcceleratorKey::Format.md)|Converte la struttura di ACCEL nella relativa rappresentazione visiva.|  
|[CMFCAcceleratorKey::SetAccelerator](../Topic/CMFCAcceleratorKey::SetAccelerator.md)|Imposta il tasto di scelta rapida per l'oggetto `CMFCAcceleratorKey`.|  
  
## Note  
 I tasti di scelta rapida sono noti anche come tasti di scelta rapida.  Se si desidera visualizzare i tasti di scelta rapida in immessi, [CMFCAcceleratorKeyAssignCtrl Class](../../mfc/reference/cmfcacceleratorkeyassignctrl-class.md) esegue il mapping dei tasti di scelta rapida, come Alt\+Shift\+S, a un formato di testo personalizzato, come "ALT \+ MAIUSC \+ S".  Ogni oggetto mappe `CMFCAcceleratorKey` un singolo tasto di scelta rapida a un formato di testo.  
  
 Per ulteriori informazioni su come utilizzare i tasti di scelta rapida e le tabelle dei tasti di scelta rapida, vedere[CKeyboardManager Class](../../mfc/reference/ckeyboardmanager-class.md).  
  
## Esempio  
 Nell'esempio seguente viene illustrato come costruire un oggetto `CMFCAcceleratorKey` e come utilizzare il metodo `Format`.  
  
 [!code-cpp[NVC_MFC_RibbonApp#30](../../mfc/reference/codesnippet/CPP/cmfcacceleratorkey-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCAcceleratorKey](../../mfc/reference/cmfcacceleratorkey-class.md)  
  
## Requisiti  
 **intestazione:** afxacceleratorkey.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CKeyboardManager Class](../../mfc/reference/ckeyboardmanager-class.md)