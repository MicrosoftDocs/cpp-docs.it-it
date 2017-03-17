---
title: Classe CMFCToolTipInfo | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCToolTipInfo
- AFXTOOLTIPCTRL/CMFCToolTipInfo
- AFXTOOLTIPCTRL/CMFCToolTipInfo::m_bBalloonTooltip
- AFXTOOLTIPCTRL/CMFCToolTipInfo::m_bBoldLabel
- AFXTOOLTIPCTRL/CMFCToolTipInfo::m_bDrawDescription
- AFXTOOLTIPCTRL/CMFCToolTipInfo::m_bDrawIcon
- AFXTOOLTIPCTRL/CMFCToolTipInfo::m_bDrawSeparator
- AFXTOOLTIPCTRL/CMFCToolTipInfo::m_bRoundedCorners
- AFXTOOLTIPCTRL/CMFCToolTipInfo::m_bVislManagerTheme
- AFXTOOLTIPCTRL/CMFCToolTipInfo::m_clrBorder
- AFXTOOLTIPCTRL/CMFCToolTipInfo::m_clrFill
- AFXTOOLTIPCTRL/CMFCToolTipInfo::m_clrFillGradient
- AFXTOOLTIPCTRL/CMFCToolTipInfo::m_clrText
- AFXTOOLTIPCTRL/CMFCToolTipInfo::m_nGradientAngle
- AFXTOOLTIPCTRL/CMFCToolTipInfo::m_nMaxDescrWidth
dev_langs:
- C++
helpviewer_keywords:
- CMFCToolTipInfo class
ms.assetid: f9d3d7f8-1f08-4342-a7b2-683860e5d2a5
caps.latest.revision: 27
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: ed15ce9f3e1abb48c0a6c4eacdf662cc2ef3f9c9
ms.lasthandoff: 02/24/2017

---
# <a name="cmfctooltipinfo-class"></a>Classe CMFCToolTipInfo
Memorizza informazioni sull'aspetto visivo delle descrizioni comandi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCToolTipInfo  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolTipInfo::operator =](#operator_eq)||  
  
### <a name="data-members"></a>Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolTipInfo::m_bBalloonTooltip](#m_bballoontooltip)|Variabile booleana che indica se la descrizione comandi ha l'aspetto di un fumetto.|  
|[CMFCToolTipInfo::m_bBoldLabel](#m_bboldlabel)|Una variabile booleana che indica se le etichette della descrizione comandi vengono visualizzate in grassetto.|  
|[CMFCToolTipInfo::m_bDrawDescription](#m_bdrawdescription)|Variabile booleana che indica se la descrizione comando contiene una descrizione.|  
|[CMFCToolTipInfo::m_bDrawIcon](#m_bdrawicon)|Variabile booleana che indica se la descrizione comando contiene un'icona.|  
|[CMFCToolTipInfo::m_bDrawSeparator](#m_bdrawseparator)|Variabile booleana che indica se viene visualizzato un separatore tra l'etichetta e la descrizione della descrizione comando.|  
|[CMFCToolTipInfo::m_bRoundedCorners](#m_broundedcorners)|Variabile booleana che indica se la descrizione comando ha gli angoli arrotondati.|  
|[CMFCToolTipInfo::m_bVislManagerTheme](#m_bvislmanagertheme)|Una variabile Boolean che indica se l'aspetto della descrizione comando deve essere controllata da un gestore visualizzazione (vedere [CMFCVisualManager classe](../../mfc/reference/cmfcvisualmanager-class.md)).|  
|[CMFCToolTipInfo::m_clrBorder](#m_clrborder)|Colore del bordo della descrizione comando.|  
|[CMFCToolTipInfo::m_clrFill](#m_clrfill)|Colore dello sfondo della descrizione comando.|  
|[CMFCToolTipInfo::m_clrFillGradient](#m_clrfillgradient)|Colore del riempimento sfumato nella descrizione comandi.|  
|[CMFCToolTipInfo::m_clrText](#m_clrtext)|Colore del testo nella descrizione comandi.|  
|[CMFCToolTipInfo::m_nGradientAngle](#m_ngradientangle)|Angolo del riempimento sfumato nella descrizione comandi.|  
|[CMFCToolTipInfo::m_nMaxDescrWidth](#m_nmaxdescrwidth)|Larghezza massima possibile, in pixel, del testo nella descrizione comandi.|  
  
## <a name="remarks"></a>Note  
 Utilizzare [da CMFCToolTipCtrl classe](../../mfc/reference/cmfctooltipctrl-class.md), `CMFCToolTipInfo`, e [CTooltipManager classe](../../mfc/reference/ctooltipmanager-class.md) per implementare le descrizioni comandi personalizzate nell'applicazione. Per un esempio di come utilizzare queste classi di descrizione comandi, vedere il [da CMFCToolTipCtrl classe](../../mfc/reference/cmfctooltipctrl-class.md) argomento.  
  
## <a name="example"></a>Esempio  
 L'esempio di codice seguente illustra come impostare i valori delle variabili di membro nella classe `CMFCToolTipInfo`.  
  
 [!code-cpp[NVC_MFC_RibbonApp&#42;](../../mfc/reference/codesnippet/cpp/cmfctooltipinfo-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CMFCToolTipInfo](../../mfc/reference/cmfctooltipinfo-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxtooltipctrl.h  
  
##  <a name="m_bballoontooltip"></a>CMFCToolTipInfo::m_bBalloonTooltip  
 Specifica lo stile di visualizzazione di tutte le descrizioni comandi.  
  
```  
BOOL m_bBalloonTooltip;  
```  
  
### <a name="remarks"></a>Note  
 `TRUE`indica che le descrizioni comandi utilizzano lo stile del fumetto, `FALSE` indica che le descrizioni comandi utilizzano lo stile rettangolare.  
  
##  <a name="m_bboldlabel"></a>CMFCToolTipInfo::m_bBoldLabel  
 Specifica se il tipo di carattere del testo della descrizione comando è in grassetto.  
  
```  
BOOL m_bBoldLabel;  
```  
  
### <a name="remarks"></a>Note  
 Impostare il membro `TRUE` per visualizzare testo della descrizione comando con il tipo di carattere grassetto o `FALSE` per visualizzare le etichette della descrizione comando con tipo di carattere non in grassetto.  
  
##  <a name="m_bdrawdescription"></a>CMFCToolTipInfo::m_bDrawDescription  
 Specifica se ogni descrizione comando Visualizza il testo descrittivo.  
  
```  
BOOL m_bDrawDescription;  
```  
  
### <a name="remarks"></a>Note  
 Impostare il membro `TRUE` per visualizzare la descrizione o `FALSE` per nascondere la descrizione. È possibile specificare la descrizione in una descrizione comando chiamando [CMFCToolTipCtrl::SetDescription](../../mfc/reference/cmfctooltipctrl-class.md#setdescription)  
  
##  <a name="m_bdrawicon"></a>CMFCToolTipInfo::m_bDrawIcon  
 Specifica se tutte le descrizioni comandi visualizzate le icone.  
  
```  
BOOL m_bDrawIcon;  
```  
  
### <a name="remarks"></a>Note  
 Impostare il membro `TRUE` per visualizzare un'icona in ciascuna descrizione comandi, o `FALSE` per visualizzare le descrizioni comandi senza icone.  
  
##  <a name="m_bdrawseparator"></a>CMFCToolTipInfo::m_bDrawSeparator  
 Specifica se ogni descrizione comando dispone di un separatore tra l'etichetta e la relativa descrizione.  
  
```  
BOOL m_bDrawSeparator;  
```  
  
### <a name="remarks"></a>Note  
 Impostare il membro `TRUE` per visualizzare separatore tra descrizione comando etichetta e descrizione, o `FALSE` per visualizzare le descrizioni comandi senza separatori.  
  
##  <a name="m_broundedcorners"></a>CMFCToolTipInfo::m_bRoundedCorners  
 Specifica se tutte le descrizioni comandi hanno angoli arrotondati.  
  
```  
BOOL m_bRoundedCorners;  
```  
  
### <a name="remarks"></a>Note  
 Impostare il membro `TRUE` per visualizzare gli angoli arrotondati sulle descrizioni comandi, o `FALSE` per visualizzare gli angoli rettangolari sulle descrizioni comandi.  
  
##  <a name="m_clrborder"></a>CMFCToolTipInfo::m_clrBorder  
 Specifica il colore dei bordi per tutte le descrizioni comandi.  
  
```  
COLORREF m_clrBorder;  
```  
  
##  <a name="m_clrfill"></a>CMFCToolTipInfo::m_clrFill  
 Specifica il colore di sfondo della descrizione comando.  
  
```  
COLORREF m_clrFill;  
```  
  
### <a name="remarks"></a>Note  
 Se [CMFCToolTipInfo::m_clrFillGradient](#m_clrfillgradient) è -1, il colore di sfondo della descrizione comando è `m_clrFill`. In caso contrario, `m_clrFill` specifica il colore iniziale della sfumatura e `m_clrFillGradient` specifica il colore della fine della sfumatura. [CMFCToolTipInfo::m_nGradientAngle](#m_ngradientangle) determina la direzione della sfumatura.  
  
##  <a name="m_clrfillgradient"></a>CMFCToolTipInfo::m_clrFillGradient  
 Specifica il colore finale per uno sfondo sfumato per le descrizioni comandi.  
  
```  
COLORREF m_clrFillGradient;  
```  
  
### <a name="remarks"></a>Note  
 Se `m_clrFillGradient` è -1, non vi è alcuna sfumatura. In caso contrario, il colore iniziale della sfumatura è specificato da [CMFCToolTipInfo::m_clrFill](#m_clrfill) e il colore finale sfumatura è specificato da `m_clrFillGradient`. [CMFCToolTipInfo::m_nGradientAngle](#m_ngradientangle) determina la direzione della sfumatura.  
  
##  <a name="m_clrtext"></a>CMFCToolTipInfo::m_clrText  
 Specifica il colore del testo di tutte le descrizioni comandi.  
  
```  
COLORREF m_clrText;  
```  
  
##  <a name="m_ngradientangle"></a>CMFCToolTipInfo::m_nGradientAngle  
 Specifica l'angolo in cui viene disegnata una sfumatura dello sfondo della descrizione comandi.  
  
```  
int m_nGradientAngle;  
```  
  
### <a name="remarks"></a>Note  
 `m_nGradientAngle`Specifica l'angolo, espresso in gradi, offset di sfumatura dello sfondo della descrizione comandi da orizzontale. Se `m_nGradientAngle` è 0, viene disegnata la sfumatura da sinistra a destra. Se `m_nGradientAngle` è compreso tra 1 e 360, la sfumatura è rotazione in senso orario dal numero di gradi. Se `m_nGradientAngle` è -1, ovvero il valore predefinito, viene disegnata sfumatura dall'alto verso il basso. Questa è la stessa impostazione `m_nGradientAngle` su 90.  
  
 [CMFCToolTipInfo::m_clrFill](#m_clrfill) `clrFill` specifica il colore iniziale della sfumatura e [CMFCToolTipInfo::m_clrFillGradient](#m_clrfillgradient) `clrFillGradient` specifica il colore della fine della sfumatura. Se `m_clrFillGradient` è -1, non vi è alcuna sfumatura.  
  
##  <a name="m_nmaxdescrwidth"></a>CMFCToolTipInfo::m_nMaxDescrWidth  
 Specifica la larghezza massima della descrizione che visualizzato in ciascuna descrizione comandi. Se la larghezza della descrizione supera il valore specificato, il testo viene eseguito il wrapping.  
  
```  
int m_nMaxDescrWidth;  
```  
  
##  <a name="m_bvislmanagertheme"></a>CMFCToolTipInfo::m_bVislManagerTheme  
 Specifica se il gestore visualizzazione dell'applicazione controlla l'aspetto di tutte le descrizioni comandi.  
  
```  
BOOL m_bVislManagerTheme;  
```  
  
### <a name="remarks"></a>Note  
 Se `m_bVislManagerTheme` è `TRUE`, ogni descrizione comando richiede un nuovo [CMFCToolTipInfo](../../mfc/reference/cmfctooltipinfo-class.md) dal gestore visualizzazione dell'applicazione prima che vengono visualizzati sullo schermo e utilizza i valori in tale oggetto per determinare l'aspetto. Gli altri membri di [CMFCToolTipInfo](../../mfc/reference/cmfctooltipinfo-class.md) vengono ignorati.  
  
##  <a name="operator_eq"></a>CMFCToolTipInfo::operator =  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CMFCToolTipInfo& operator=(CMFCToolTipInfo& src);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `src`  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CTooltipManager](../../mfc/reference/ctooltipmanager-class.md)   
 [Classe da CMFCToolTipCtrl](../../mfc/reference/cmfctooltipctrl-class.md)

