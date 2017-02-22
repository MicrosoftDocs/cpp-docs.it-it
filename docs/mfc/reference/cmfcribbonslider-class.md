---
title: "CMFCRibbonSlider Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCRibbonSlider"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonSlider class"
ms.assetid: 9351ac34-f234-4e42-91e2-763f1989c8ff
caps.latest.revision: 43
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 45
---
# CMFCRibbonSlider Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCRibbonSlider` implementa un dispositivo di scorrimento che è possibile aggiungere a una barra multifunzione o una barra di stato della barra multifunzione.  Il dispositivo di scorrimento della barra multifunzione simile ai dispositivi di scorrimento dello zoom visualizzati nelle applicazioni di Office 2007.  
  
## Sintassi  
  
```  
class CMFCRibbonSlider : public CMFCRibbonBaseElement  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonSlider::CMFCRibbonSlider](../Topic/CMFCRibbonSlider::CMFCRibbonSlider.md)|Costrutti e inizializza un dispositivo di scorrimento della barra multifunzione.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonSlider::GetPos](../Topic/CMFCRibbonSlider::GetPos.md)|Restituisce la posizione corrente del dispositivo di scorrimento.|  
|[CMFCRibbonSlider::GetRangeMax](../Topic/CMFCRibbonSlider::GetRangeMax.md)|Restituisce il valore massimo del dispositivo di scorrimento.|  
|[CMFCRibbonSlider::GetRangeMin](../Topic/CMFCRibbonSlider::GetRangeMin.md)|Restituisce il valore minimo del dispositivo di scorrimento.|  
|[CMFCRibbonSlider::GetRegularSize](../Topic/CMFCRibbonSlider::GetRegularSize.md)|Restituisce la dimensione normale dell'elemento barra multifunzione.  \(Override [CMFCRibbonBaseElement::GetRegularSize](../Topic/CMFCRibbonBaseElement::GetRegularSize.md)\).|  
|[CMFCRibbonSlider::GetZoomIncrement](../Topic/CMFCRibbonSlider::GetZoomIncrement.md)|Restituisce la dimensione dell'incremento dello zoom per il dispositivo di scorrimento.|  
|[CMFCRibbonSlider::HasZoomButtons](../Topic/CMFCRibbonSlider::HasZoomButtons.md)|Specifica se il dispositivo di scorrimento ha pulsanti dello zoom.|  
|[CMFCRibbonSlider::OnDraw](../Topic/CMFCRibbonSlider::OnDraw.md)|Chiamato dal framework per disegnare l'elemento barra multifunzione.  \(Override [CMFCRibbonBaseElement::OnDraw](../Topic/CMFCRibbonBaseElement::OnDraw.md)\).|  
|[CMFCRibbonSlider::SetPos](../Topic/CMFCRibbonSlider::SetPos.md)|Imposta la posizione corrente del dispositivo di scorrimento.|  
|[CMFCRibbonSlider::SetRange](../Topic/CMFCRibbonSlider::SetRange.md)|Specifica l'intervallo del dispositivo di scorrimento impostando i valori minimo e massimo.|  
|[CMFCRibbonSlider::SetZoomButtons](../Topic/CMFCRibbonSlider::SetZoomButtons.md)|Mostra o nasconde i pulsanti dello zoom.|  
|[CMFCRibbonSlider::SetZoomIncrement](../Topic/CMFCRibbonSlider::SetZoomIncrement.md)|Dimensione degli insiemi dell'incremento dello zoom per il dispositivo di scorrimento.|  
  
## Note  
 È possibile utilizzare il metodo `SetRange` per configurare l'intervallo degli incrementi dello zoom per il dispositivo di scorrimento.  È possibile impostare la posizione corrente del dispositivo di scorrimento tramite il metodo `SetPos`.  
  
 È possibile visualizzare i pulsanti circolari dello zoom sul lato destro e sinistro del dispositivo di scorrimento tramite il metodo `SetZoomButtons`.  Per impostazione predefinita, il controllo è orizzontale, il pulsante zoom di sinistra viene visualizzato un segno di sottrazione e il pulsante destro dello zoom viene visualizzato un segno più.  
  
 Il metodo `SetZoomIncrement` definisce incremento per aggiungere o sottrarre dalla posizione corrente quando un utente fa clic sui pulsanti dello zoom.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi della classe `CMFCRibbonSlider` per impostare le proprietà del dispositivo di scorrimento.  L'esempio mostra come costruire un oggetto `CMFCRibbonSlider`, visualizzare pulsanti dello zoom, impostare la posizione corrente del dispositivo di scorrimento e impostare l'intervallo di valori per il dispositivo di scorrimento.  
  
 [!code-cpp[NVC_MFC_RibbonApp#12](../../mfc/reference/codesnippet/CPP/cmfcribbonslider-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonSlider](../../mfc/reference/cmfcribbonslider-class.md)  
  
## Requisiti  
 **intestazione:** afxribbonslider.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCRibbonBaseElement Class](../../mfc/reference/cmfcribbonbaseelement-class.md)