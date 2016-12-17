---
title: "Classe CBaseKeyFrame | Microsoft Docs"
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
  - "CBaseKeyFrame"
  - "afxanimationcontroller/CBaseKeyFrame"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CBaseKeyFrame (classe)"
ms.assetid: 285a2eff-e7c4-43be-b5aa-737727e6866d
caps.latest.revision: 17
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CBaseKeyFrame
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa la funzionalità di base di un fotogramma chiave.  
  
## Sintassi  
  
```  
class CBaseKeyFrame : public CObject;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBaseKeyFrame::CBaseKeyFrame](../Topic/CBaseKeyFrame::CBaseKeyFrame.md)|Costruisce un oggetto fotogramma chiave.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBaseKeyFrame::AddToStoryboard](../Topic/CBaseKeyFrame::AddToStoryboard.md)|Aggiunge un fotogramma chiave allo storyboard.|  
|[CBaseKeyFrame::GetAnimationKeyframe](../Topic/CBaseKeyFrame::GetAnimationKeyframe.md)|Restituisce il valore del fotogramma chiave sottostante.|  
|[CBaseKeyFrame::IsAdded](../Topic/CBaseKeyFrame::IsAdded.md)|Indica se un fotogramma chiave è stato aggiunto ad uno storyboard.|  
|[CBaseKeyFrame::IsKeyframeAtOffset](../Topic/CBaseKeyFrame::IsKeyframeAtOffset.md)|Specifica se il fotogramma chiave deve essere aggiunto allo storyboard al momento dell'offset, o dopo la transizione.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBaseKeyFrame::m\_bAdded](../Topic/CBaseKeyFrame::m_bAdded.md)|Specifica se questo fotogramma chiave è stato aggiunto ad uno storyboard.|  
|[CBaseKeyFrame::m\_bIsKeyframeAtOffset](../Topic/CBaseKeyFrame::m_bIsKeyframeAtOffset.md)|Specifica se questo fotogramma chiave deve essere aggiunto allo storyboard in corrispondenza di un offset da un altro fotogramma chiave esistente o alla fine di qualche transizione.|  
|[CBaseKeyFrame::m\_keyframe](../Topic/CBaseKeyFrame::m_keyframe.md)|Rappresenta un fotogramma chiave API di animazione Windows.  Quando non è inizializzato un fotogramma chiave, questo viene impostato sul valore UI\_ANIMATION\_KEYFRAME\_STORYBOARD\_START predefinito.|  
  
## Note  
 Incapsula la variabile UI\_ANIMATION\_KEYFRAME.  Serve come classe di base per qualsiasi implementazione del fotogramma chiave.  Un fotogramma chiave rappresenta un momento all'interno di uno storyboard e può essere utilizzato per specificare l'ora di inizio e l'ora di fine delle transizioni.  Esistono due tipi di fotogrammi chiave: i fotogrammi chiave aggiunti allo storyboard in corrispondenza dell'offset specificato \(in ora\) o i fotogrammi chiave aggiunti dopo la transizione specificata.  Poiché non è possibile conoscere la durata di alcune transizioni prima che inizi l'animazione, i valori effettivi di alcuni fotogrammi chiave vengono determinati solo in fase di runtime.  Poiché i fotogrammi chiave possono dipendere dalle transizioni, che a loro volta dipendono dai fotogrammi, è importante impedire ricorsioni infinite in caso di compilazione di catene del fotogramma chiave.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseKeyFrame](../../mfc/reference/cbasekeyframe-class.md)  
  
## Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)