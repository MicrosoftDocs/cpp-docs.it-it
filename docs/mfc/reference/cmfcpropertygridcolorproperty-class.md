---
title: "CMFCPropertyGridColorProperty Class | Microsoft Docs"
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
  - "CMFCPropertyGridColorProperty"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCPropertyGridColorProperty class"
  - "CMFCPropertyGridColorProperty::FormatProperty method"
  - "CMFCPropertyGridColorProperty::OnClickButton method"
  - "CMFCPropertyGridColorProperty::OnDrawValue method"
  - "CMFCPropertyGridColorProperty::OnEdit method"
  - "CMFCPropertyGridColorProperty::OnUpdateValue method"
ms.assetid: af37be93-a91e-40a2-9a65-0f3412c6f0f8
caps.latest.revision: 33
caps.handback.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCPropertyGridColorProperty Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMFCPropertyGridColorProperty` supporta un elemento controllo elenco delle proprietà che apre una finestra di dialogo di selezione colore.  
  
## Sintassi  
  
```  
class CMFCPropertyGridColorProperty : public CMFCPropertyGridProperty  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPropertyGridColorProperty::CMFCPropertyGridColorProperty](../Topic/CMFCPropertyGridColorProperty::CMFCPropertyGridColorProperty.md)|Costruisce un oggetto `CMFCPropertyGridColorProperty`.|  
|`CMFCPropertyGridColorProperty::~CMFCPropertyGridColorProperty`|Distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPropertyGridColorProperty::EnableAutomaticButton](../Topic/CMFCPropertyGridColorProperty::EnableAutomaticButton.md)|Abilita il pulsante "automatico" \(*Automatic*\) nella finestra di dialogo di selezione colore.  Il pulsante "automatico" \(Automatic\) standard è denominato **Automatico**.|  
|[CMFCPropertyGridColorProperty::EnableOtherButton](../Topic/CMFCPropertyGridColorProperty::EnableOtherButton.md)|Abilita il pulsante "altro" \(*Other*\) nella finestra di dialogo di selezione colore.  Il pulsante "altro" \(Other\) standard è denominato **Altri colori...**.|  
|`CMFCPropertyGridColorProperty::FormatProperty`|Formatta la rappresentazione di testo di un valore della proprietà.  Esegue l'override di [CMFCPropertyGridProperty::FormatProperty](../Topic/CMFCPropertyGridProperty::FormatProperty.md).|  
|[CMFCPropertyGridColorProperty::GetColor](../Topic/CMFCPropertyGridColorProperty::GetColor.md)|Ottiene il colore corrente della proprietà.|  
|`CMFCPropertyGridColorProperty::GetThisClass`|Usato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|  
|`CMFCPropertyGridColorProperty::OnClickButton`|Chiamato dal framework quando l'utente fa clic su un pulsante contenuto in una proprietà.  Esegue l'override di [CMFCPropertyGridProperty::OnClickButton](../Topic/CMFCPropertyGridProperty::OnClickButton.md).|  
|`CMFCPropertyGridColorProperty::OnDrawValue`|Chiamato dal framework per visualizzare il valore della proprietà.  Esegue l'override di [CMFCPropertyGridProperty::OnDrawValue](../Topic/CMFCPropertyGridProperty::OnDrawValue.md).|  
|`CMFCPropertyGridColorProperty::OnEdit`|Chiamato dal framework quando l'utente sta per modificare il valore di una proprietà.  Esegue l'override di [CMFCPropertyGridProperty::OnEdit](../Topic/CMFCPropertyGridProperty::OnEdit.md).|  
|`CMFCPropertyGridColorProperty::OnUpdateValue`|Chiamato dal framework quando viene modificato il valore di una proprietà modificabile.  Esegue l'override di [CMFCPropertyGridProperty::OnUpdateValue](../Topic/CMFCPropertyGridProperty::OnUpdateValue.md).|  
|[CMFCPropertyGridColorProperty::SetColor](../Topic/CMFCPropertyGridColorProperty::SetColor.md)|Imposta un nuovo colore per la proprietà.|  
|[CMFCPropertyGridColorProperty::SetColumnsNumber](../Topic/CMFCPropertyGridColorProperty::SetColumnsNumber.md)|Specifica il numero di colonne nella griglia delle proprietà del colore corrente.|  
|[CMFCPropertyGridColorProperty::SetOriginalValue](../Topic/CMFCPropertyGridColorProperty::SetOriginalValue.md)|Imposta il valore originale di una proprietà modificabile.|  
  
## Note  
 La classe `CMFCPropertyGridColorProperty` supporta una proprietà Color che è possibile aggiungere a un controllo elenco delle proprietà.  Per altre informazioni, vedere la [CMFCPropertyGridCtrl Class](../../mfc/reference/cmfcpropertygridctrl-class.md).  
  
## Esempio  
 L'esempio seguente illustra come costruire un oggetto della classe `CMFCPropertyGridColorProperty` e configurare tale oggetto usando diversi metodi della classe `CMFCPropertyGridColorProperty`.  Il codice illustra come abilitare i pulsanti "automatico" \(Automatic\) e "altro" \(Other\) e come impostare il colore e il numero di colonne.  Questo esempio fa parte dell'[esempio relativo ai nuovi controlli](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#13](../../mfc/reference/codesnippet/CPP/cmfcpropertygridcolorproperty-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCPropertyGridProperty](../../mfc/reference/cmfcpropertygridproperty-class.md)  
  
 [CMFCPropertyGridColorProperty](../../mfc/reference/cmfcpropertygridcolorproperty-class.md)  
  
## Requisiti  
 **Intestazione:** afxpropertygridctrl.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCPropertyGridCtrl Class](../../mfc/reference/cmfcpropertygridctrl-class.md)   
 [CMFCPropertyGridProperty Class](../../mfc/reference/cmfcpropertygridproperty-class.md)