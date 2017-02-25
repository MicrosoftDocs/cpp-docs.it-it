---
title: "Classe CMFCRibbonButtonsGroup | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCRibbonButtonsGroup"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonButtonsGroup (classe)"
ms.assetid: b993d93e-fc1a-472f-a87f-1d7b7b499845
caps.latest.revision: 34
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 36
---
# Classe CMFCRibbonButtonsGroup
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe di `CMFCRibbonButtonsGroup` consente di organizzare un insieme di pulsanti della barra multifunzione in un gruppo.  Tutti i pulsanti nel gruppo sono direttamente accanto all'altro in orizzontale e chiuso in un bordo.  
  
## Sintassi  
  
```  
class CMFCRibbonButtonsGroup : public CMFCRibbonBaseElement  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonButtonsGroup::CMFCRibbonButtonsGroup](../Topic/CMFCRibbonButtonsGroup::CMFCRibbonButtonsGroup.md)|Costruisce un oggetto `CMFCRibbonButtonsGroup`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonButtonsGroup::AddButton](../Topic/CMFCRibbonButtonsGroup::AddButton.md)|Aggiungere un pulsante a un gruppo.|  
|[CMFCRibbonButtonsGroup::AddButtons](../Topic/CMFCRibbonButtonsGroup::AddButtons.md)|Aggiungere un elenco di pulsanti a un gruppo.|  
|[CMFCRibbonButtonsGroup::GetButton](../Topic/CMFCRibbonButtonsGroup::GetButton.md)|Restituisce un puntatore al pulsante che si trova all'indice specificato.|  
|[CMFCRibbonButtonsGroup::GetCount](../Topic/CMFCRibbonButtonsGroup::GetCount.md)|Restituisce il numero di pulsanti nel gruppo.|  
|[CMFCRibbonButtonsGroup::GetImageSize](../Topic/CMFCRibbonButtonsGroup::GetImageSize.md)|Restituisce le dimensioni delle immagini normali nel gruppo della barra multifunzione \(override [CMFCRibbonBaseElement::GetImageSize](../Topic/CMFCRibbonBaseElement::GetImageSize.md)\).|  
|[CMFCRibbonButtonsGroup::GetRegularSize](../Topic/CMFCRibbonButtonsGroup::GetRegularSize.md)|Restituisce la dimensione normale dell'elemento barra multifunzione \(override [CMFCRibbonBaseElement::GetRegularSize](../Topic/CMFCRibbonBaseElement::GetRegularSize.md)\).|  
|[CMFCRibbonButtonsGroup::HasImages](../Topic/CMFCRibbonButtonsGroup::HasImages.md)|Segnala l'oggetto di `CMFCRibbonButtonsGroup` contiene le immagini della barra degli strumenti.|  
|[CMFCRibbonButtonsGroup::OnDrawImage](../Topic/CMFCRibbonButtonsGroup::OnDrawImage.md)|L'immagine viene disegnata appropriata per un pulsante specificato, a seconda che il pulsante è normale, evidenziato o disabilitato.|  
|[CMFCRibbonButtonsGroup::RemoveAll](../Topic/CMFCRibbonButtonsGroup::RemoveAll.md)|Rimuove tutti i pulsanti dall'oggetto di `CMFCRibbonButtonsGroup`.|  
|[CMFCRibbonButtonsGroup::SetImages](../Topic/CMFCRibbonButtonsGroup::SetImages.md)|Consente di assegnare immagini al gruppo.|  
|[CMFCRibbonButtonsGroup::SetParentCategory](../Topic/CMFCRibbonButtonsGroup::SetParentCategory.md)|Imposta `CMFCRibbonCategory` padre dell'oggetto di `CMFCRibbonButtonsGroup` e di tutti i pulsanti nell'override [CMFCRibbonBaseElement::SetParentCategory](../Topic/CMFCRibbonBaseElement::SetParentCategory.md)\(\).|  
  
## Note  
 Il gruppo viene derivato da [CMFCBaseRibbonElement](../../mfc/reference/cmfcribbonbaseelement-class.md) e può essere modificato come singola entità.  È possibile posizionare il gruppo nel pannello o menu di scelta rapida.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi della classe di `CMFCRibbonButtonsGroup`.  L'esempio mostra come costruire un oggetto di `CMFCRibbonButtonsGroup`, assegnare immagini al gruppo di pulsanti della barra multifunzione e aggiungere un pulsante al gruppo di pulsanti della barra multifunzione.  Questo frammento di codice fa parte di [Esempio client di disegno](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DrawClient#2](../../mfc/reference/codesnippet/CPP/cmfcribbonbuttonsgroup-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButtonsGroup](../../mfc/reference/cmfcribbonbuttonsgroup-class.md)  
  
## Requisiti  
 **Intestazione:** afxribbonbuttonsgroup.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)