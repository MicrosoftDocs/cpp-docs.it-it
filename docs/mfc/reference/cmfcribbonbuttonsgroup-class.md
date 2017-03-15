---
title: Classe CMFCRibbonButtonsGroup | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCRibbonButtonsGroup
dev_langs:
- C++
helpviewer_keywords:
- CMFCRibbonButtonsGroup class
ms.assetid: b993d93e-fc1a-472f-a87f-1d7b7b499845
caps.latest.revision: 34
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 2d8909ca63bd1d9121e1126d46a08312521cc4ac
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcribbonbuttonsgroup-class"></a>Classe CMFCRibbonButtonsGroup
La `CMFCRibbonButtonsGroup` classe consente di organizzare un set di pulsanti della barra multifunzione in un gruppo. Tutti i pulsanti nel gruppo sono direttamente adiacenti l'uno rispetto all'altro in senso orizzontale e racchiusi da un bordo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCRibbonButtonsGroup : public CMFCRibbonBaseElement  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonButtonsGroup::CMFCRibbonButtonsGroup](#cmfcribbonbuttonsgroup)|Costruisce un oggetto `CMFCRibbonButtonsGroup`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonButtonsGroup::AddButton](#addbutton)|Aggiunge un pulsante a un gruppo.|  
|[CMFCRibbonButtonsGroup::AddButtons](#addbuttons)|Aggiunge un elenco di pulsanti a un gruppo.|  
|[CMFCRibbonButtonsGroup::GetButton](#getbutton)|Restituisce un puntatore al pulsante che si trova in corrispondenza dell'indice specificato.|  
|[CMFCRibbonButtonsGroup::GetCount](#getcount)|Restituisce il numero di pulsanti nel gruppo.|  
|[CMFCRibbonButtonsGroup::GetImageSize](#getimagesize)|Restituisce le dimensioni dell'immagine delle immagini normale nel gruppo della barra multifunzione (esegue l'override di [CMFCRibbonBaseElement::GetImageSize](../../mfc/reference/cmfcribbonbaseelement-class.md#getimagesize).)|  
|[CMFCRibbonButtonsGroup::GetRegularSize](#getregularsize)|Restituisce le dimensioni regolari dell'elemento della barra multifunzione (esegue l'override di [CMFCRibbonBaseElement::GetRegularSize](../../mfc/reference/cmfcribbonbaseelement-class.md#getregularsize).)|  
|[CMFCRibbonButtonsGroup::HasImages](#hasimages)|Report se il `CMFCRibbonButtonsGroup` oggetto contiene le immagini della barra degli strumenti.|  
|[CMFCRibbonButtonsGroup::OnDrawImage](#ondrawimage)|Disegna l'immagine appropriata per un pulsante specificato, a seconda se il pulsante è normale, evidenziata o disabilitato.|  
|[CMFCRibbonButtonsGroup::RemoveAll](#removeall)|Rimuove tutti i pulsanti dal `CMFCRibbonButtonsGroup` oggetto.|  
|[CMFCRibbonButtonsGroup::SetImages](#setimages)|Assegna al gruppo di immagini.|  
|[CMFCRibbonButtonsGroup::SetParentCategory](#setparentcategory)|Imposta l'elemento padre `CMFCRibbonCategory` di `CMFCRibbonButtonsGroup` oggetto e tutti i pulsanti all'interno di esso (esegue l'override di [CMFCRibbonBaseElement::SetParentCategory](../../mfc/reference/cmfcribbonbaseelement-class.md#setparentcategory).)|  
  
## <a name="remarks"></a>Note  
 Il gruppo è derivato da [CMFCBaseRibbonElement](../../mfc/reference/cmfcribbonbaseelement-class.md) e può essere modificato come una singola entità. È possibile posizionare il gruppo di menu qualsiasi pannello o finestra popup.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare metodi diversi di `CMFCRibbonButtonsGroup` (classe). Nell'esempio viene illustrato come costruire un `CMFCRibbonButtonsGroup` dell'oggetto, assegnare le immagini al gruppo di pulsanti della barra multifunzione e aggiungere un pulsante al gruppo di pulsanti della barra multifunzione. Questo frammento di codice fa parte di [esempio disegnare Client](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DrawClient n.&2;](../../mfc/reference/codesnippet/cpp/cmfcribbonbuttonsgroup-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButtonsGroup](../../mfc/reference/cmfcribbonbuttonsgroup-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxribbonbuttonsgroup. h  
  
##  <a name="a-nameaddbuttona--cmfcribbonbuttonsgroupaddbutton"></a><a name="addbutton"></a>CMFCRibbonButtonsGroup::AddButton  
 Aggiunge un pulsante a un gruppo.  
  
```  
void AddButton(CMFCRibbonBaseElement* pButton);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pButton`  
 Un puntatore a un pulsante per aggiungere.  
  
##  <a name="a-nameaddbuttonsa--cmfcribbonbuttonsgroupaddbuttons"></a><a name="addbuttons"></a>CMFCRibbonButtonsGroup::AddButtons  
 Aggiunge un elenco di pulsanti a un gruppo.  
  
```  
void AddButtons(
    const CList<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>& lstButtons);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lstButtons`  
 Un elenco di puntatori ai pulsanti che si desidera aggiungere.  
  
##  <a name="a-namecmfcribbonbuttonsgroupa--cmfcribbonbuttonsgroupcmfcribbonbuttonsgroup"></a><a name="cmfcribbonbuttonsgroup"></a>CMFCRibbonButtonsGroup::CMFCRibbonButtonsGroup  
 Costruisce un oggetto `CMFCRibbonButtonsGroup`.  
  
```  
CMFCRibbonButtonsGroup();
CMFCRibbonButtonsGroup(CMFCRibbonBaseElement* pButton);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pButton`  
 Specifica un pulsante per aggiungere all'oggetto appena creato `CMFCRibbonButtonsGroup` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetbuttona--cmfcribbonbuttonsgroupgetbutton"></a><a name="getbutton"></a>CMFCRibbonButtonsGroup::GetButton  
 Restituisce un puntatore al pulsante che si trova in corrispondenza dell'indice specificato.  
  
```  
CMFCRibbonBaseElement* GetButton(int i) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `i`  
 Indice in base zero di un pulsante da restituire.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al pulsante che si trova in corrispondenza dell'indice specificato. `NULL`Se l'indice specificato è compreso nell'intervallo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetcounta--cmfcribbonbuttonsgroupgetcount"></a><a name="getcount"></a>CMFCRibbonButtonsGroup::GetCount  
 Restituisce il numero di pulsanti nel gruppo.  
  
```  
int GetCount() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di pulsanti nel gruppo.  
  
##  <a name="a-namegetimagesizea--cmfcribbonbuttonsgroupgetimagesize"></a><a name="getimagesize"></a>CMFCRibbonButtonsGroup::GetImageSize  
 Recupera le dimensioni di immagine di origine di protetto `CMFCToolBarImages` membro `m_Images`.  
  
```  
const CSize GetImageSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce le dimensioni dell'immagine origine delle immagini della barra degli strumenti, se presenti, o un `CSize` pari a zero se non.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetregularsizea--cmfcribbonbuttonsgroupgetregularsize"></a><a name="getregularsize"></a>CMFCRibbonButtonsGroup::GetRegularSize  
 Recupera le dimensioni massime dell'elemento gruppo della barra multifunzione.  
  
```  
virtual CSize GetRegularSize(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore al contesto di dispositivo del gruppo della barra multifunzione.  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namehasimagesa--cmfcribbonbuttonsgrouphasimages"></a><a name="hasimages"></a>CMFCRibbonButtonsGroup::HasImages  
 Report se il `CMFCRibbonButtonsGroup` oggetto contiene le immagini della barra degli strumenti.  
  
```  
BOOL HasImages() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se il metodo protetto `CMFCToolBarImages` membro `m_Images` contiene le immagini, o FALSE se non.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameondrawimagea--cmfcribbonbuttonsgroupondrawimage"></a><a name="ondrawimage"></a>CMFCRibbonButtonsGroup::OnDrawImage  
 Disegna l'immagine appropriata per un pulsante specificato, a seconda se il pulsante è normale, evidenziata o disabilitato.  
  
```  
virtual void OnDrawImage(
    CDC* pDC,  
    CRect rectImage,  
    CMFCRibbonBaseElement* pButton,  
    int nImageIndex);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore al contesto di dispositivo di `CMFCRibbonButtonsGroup` oggetto.  
  
 [in] `rectImage`  
 Il rettangolo in cui disegnare l'immagine.  
  
 [in] `pButton`  
 Pulsante per il quale disegnare l'immagine.  
  
 [in] `nImageIndex`  
 Indice dell'immagine da disegnare sul pulsante (in una delle matrici di tre immagini per i pulsanti normale, evidenziati o disabilitati).  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameremovealla--cmfcribbonbuttonsgroupremoveall"></a><a name="removeall"></a>CMFCRibbonButtonsGroup::RemoveAll  
 Rimuove tutti i pulsanti dal `CMFCRibbonButtonsGroup` oggetto.  
  
```  
void RemoveAll();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesetimagesa--cmfcribbonbuttonsgroupsetimages"></a><a name="setimages"></a>CMFCRibbonButtonsGroup::SetImages  
 Assegna le immagini al gruppo di pulsanti della barra multifunzione.  
  
```  
void SetImages(
    CMFCToolBarImages* pImages,  
    CMFCToolBarImages* pHotImages,  
    CMFCToolBarImages* pDisabledImages);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pImages`  
 Immagini normali.  
  
 [in] `pHotImages`  
 Immagini a caldo.  
  
 [in] `pDisabledImages`  
 Immagini disabilitate.  
  
### <a name="remarks"></a>Note  
 Chiamare `SetImages` prima di aggiungere pulsanti a un gruppo. Il numero di immagini deve essere maggiore o uguale al numero di pulsanti da aggiungere al gruppo.  
  
> [!NOTE]
>  Le immagini a caldo sono immagini che vengono visualizzate quando il puntatore viene posizionato sul pulsante. Le immagini disabilitate sono immagini che vengono visualizzate quando il pulsante è disabilitato.  
  
##  <a name="a-namesetparentcategorya--cmfcribbonbuttonsgroupsetparentcategory"></a><a name="setparentcategory"></a>CMFCRibbonButtonsGroup::SetParentCategory  
 Imposta l'elemento padre `CMFCRibbonCategory` di `CMFCRibbonButtonsGroup` oggetto e tutti i pulsanti all'interno di esso.  
  
```  
virtual void SetParentCategory(CMFCRibbonCategory* pCategory);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pCategory`  
 Puntatore alla categoria padre impostare (i gruppi a schede nella barra multifunzione vengono chiamati categorie).  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)

