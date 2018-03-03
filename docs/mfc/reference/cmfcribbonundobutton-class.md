---
title: Classe CMFCRibbonUndoButton | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
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
- CMFCRibbonUndoButton [MFC], CMFCRibbonUndoButton
- CMFCRibbonUndoButton [MFC], AddUndoAction
- CMFCRibbonUndoButton [MFC], CleanUpUndoList
- CMFCRibbonUndoButton [MFC], GetActionNumber
- CMFCRibbonUndoButton [MFC], HasMenu
ms.assetid: 5c42adf7-871d-4239-901e-47ae7fb816fc
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 720a1de11dcf4c37b4b321bb0e014a9ae4e2e459
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cmfcribbonundobutton-class"></a>Classe CMFCRibbonUndoButton
Il `CMFCRibbonUndoButton` implementa un pulsante di elenco a discesa che contiene i comandi più recenti di utente. Gli utenti possono selezionare uno o più comandi più recenti nell'elenco di riepilogo a discesa Ripristina o annullarle.  
  
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
|[CMFCRibbonUndoButton::CleanUpUndoList](#cleanupundolist)|Cancella l'elenco di azioni, l'elenco a discesa.|  
|[CMFCRibbonUndoButton::GetActionNumber](#getactionnumber)|Determina il numero di elementi che un utente ha selezionato dall'elenco a discesa.|  
|[CMFCRibbonUndoButton::HasMenu](#hasmenu)|Indica se l'oggetto contiene un menu.|  
  
## <a name="remarks"></a>Note  
 La `CMFCRibbonUndoButton` classe utilizza uno stack per rappresentare l'elenco a discesa.  
  
## <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come costruire un oggetto della `CMFCRibbonUndoButton` classe e aggiungere una nuova azione all'elenco di azioni. Questo frammento di codice fa parte di [esempio gadget della barra multifunzione](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_RibbonGadgets#2](../../mfc/reference/codesnippet/cpp/cmfcribbonundobutton-class_1.cpp)]  
  
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
 Cancella l'elenco di azioni, l'elenco a discesa.  
  
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
 Indice in base zero dell'elenco immagini dell'oggetto padre per una piccola immagine del pulsante.  
  
 [in] `nLargeImageIndex`  
 Indice in base zero dell'elenco immagini dell'oggetto padre per l'immagine di grandi dimensioni del pulsante.  
  
 [in] `hIcon`  
 Un handle per un'icona che è possibile utilizzare come immagine del pulsante.  
  
##  <a name="getactionnumber"></a>CMFCRibbonUndoButton::GetActionNumber  
 Determina il numero di elementi che un utente ha selezionato dall'elenco a discesa.  
  
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
