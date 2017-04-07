---
title: Classe CMFCRibbonUndoButton | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCRibbonUndoButton
- AFXRIBBONUNDOBUTTON/CMFCRibbonUndoButton
- AFXRIBBONUNDOBUTTON/CMFCRibbonUndoButton::CMFCRibbonUndoButton
- AFXRIBBONUNDOBUTTON/CMFCRibbonUndoButton::AddUndoAction
- AFXRIBBONUNDOBUTTON/CMFCRibbonUndoButton::CleanUpUndoList
- AFXRIBBONUNDOBUTTON/CMFCRibbonUndoButton::GetActionNumber
- AFXRIBBONUNDOBUTTON/CMFCRibbonUndoButton::HasMenu
dev_langs:
- C++
helpviewer_keywords:
- CMFCRibbonUndoButton class
ms.assetid: 5c42adf7-871d-4239-901e-47ae7fb816fc
caps.latest.revision: 35
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: d4406e21a7e2a945965020d85a748b93d66b5682
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcribbonundobutton-class"></a>Classe CMFCRibbonUndoButton
La `CMFCRibbonUndoButton` classe implementa un pulsante di elenco a discesa che contiene i comandi utente più recenti. Gli utenti possono selezionare uno o più comandi più recenti nell'elenco di riepilogo a discesa Ripristina o annullarle.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCRibbonUndoButton : public CMFCRibbonGallery  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonUndoButton::CMFCRibbonUndoButton](#cmfcribbonundobutton)|Costruisce un nuovo `CMFCRibbonUndoButton` oggetto utilizzando l'ID di comando specificato, l'etichetta di testo e immagini dall'elenco di immagini dell'oggetto padre.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonUndoButton::AddUndoAction](#addundoaction)|Aggiunge una nuova azione all'elenco di azioni.|  
|[CMFCRibbonUndoButton::CleanUpUndoList](#cleanupundolist)|Cancella l'elenco di azione, ovvero l'elenco di riepilogo a discesa.|  
|[CMFCRibbonUndoButton::GetActionNumber](#getactionnumber)|Determina il numero di elementi che un utente selezionato dall'elenco a discesa.|  
|[CMFCRibbonUndoButton::HasMenu](#hasmenu)|Indica se l'oggetto contiene un menu.|  
  
## <a name="remarks"></a>Note  
 La `CMFCRibbonUndoButton` classe utilizza uno stack per rappresentare l'elenco a discesa.  
  
## <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come creare un oggetto della `CMFCRibbonUndoButton` classe e aggiungere una nuova azione all'elenco di azioni. Questo frammento di codice fa parte di [esempio barra multifunzione gadget](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_RibbonGadgets n.&2;](../../mfc/reference/codesnippet/cpp/cmfcribbonundobutton-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)  
  
 [CMFCRibbonGallery](../../mfc/reference/cmfcribbongallery-class.md)  
  
 [CMFCRibbonUndoButton](../../mfc/reference/cmfcribbonundobutton-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxribbonundobutton.h  
  
##  <a name="addundoaction"></a>CMFCRibbonUndoButton::AddUndoAction  
 Aggiunge una nuova azione all'elenco di azioni.  
  
```  
void AddUndoAction(LPCTSTR lpszLabel);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszLabel`  
 L'etichetta dell'azione che verrà visualizzato nell'elenco a discesa.  
  
##  <a name="cleanupundolist"></a>CMFCRibbonUndoButton::CleanUpUndoList  
 Cancella l'elenco di azione, ovvero l'elenco di riepilogo a discesa.  
  
```  
void CleanUpUndoList();
```  
  
##  <a name="cmfcribbonundobutton"></a>CMFCRibbonUndoButton::CMFCRibbonUndoButton  
 Costruisce un nuovo `CMFCRibbonUndoButton` oggetto utilizzando l'ID di comando specificato, l'etichetta di testo e immagini dall'elenco di immagini dell'oggetto padre.  
  
```  
CMFCRibbonUndoButton(
    UINT nID,  
    LPCTSTR lpszText,  
    int nSmallImageIndex=-1,  
    int nLargeImageIndex=-1);

 
CMFCRibbonUndoButton(
    UINT nID,  
    LPCTSTR lpszText,  
    HICON hIcon);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nID`  
 Specifica l'identificatore di comando.  
  
 [in] `lpszText`  
 Specifica l'etichetta di testo del pulsante.  
  
 [in] `nSmallImageIndex`  
 Indice in base zero dell'elenco immagini dell'oggetto padre per l'immagine di ridotte dimensioni del pulsante.  
  
 [in] `nLargeImageIndex`  
 Indice in base zero dell'elenco immagini dell'oggetto padre per l'immagine di grandi dimensioni del pulsante.  
  
 [in] `hIcon`  
 Handle per un'icona che è possibile utilizzare come immagine del pulsante.  
  
##  <a name="getactionnumber"></a>CMFCRibbonUndoButton::GetActionNumber  
 Determina il numero di elementi che un utente selezionato dall'elenco a discesa.  
  
```  
int GetActionNumber() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di elementi che un utente ha selezionato.  
  
##  <a name="hasmenu"></a>CMFCRibbonUndoButton::HasMenu  
 Indica se l'oggetto contiene un menu.  
  
```  
virtual BOOL HasMenu() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce sempre `TRUE`.  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCRibbonGallery](../../mfc/reference/cmfcribbongallery-class.md)   
 [Classe CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)

