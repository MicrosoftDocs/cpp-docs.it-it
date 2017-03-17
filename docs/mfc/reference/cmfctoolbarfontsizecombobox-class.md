---
title: Classe CMFCToolBarFontSizeComboBox | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCToolBarFontSizeComboBox
- AFXTOOLBARFONTCOMBOBOX/CMFCToolBarFontSizeComboBox
- AFXTOOLBARFONTCOMBOBOX/CMFCToolBarFontSizeComboBox::CMFCToolBarFontSizeComboBox
- AFXTOOLBARFONTCOMBOBOX/CMFCToolBarFontSizeComboBox::GetTwipSize
- AFXTOOLBARFONTCOMBOBOX/CMFCToolBarFontSizeComboBox::RebuildFontSizes
- AFXTOOLBARFONTCOMBOBOX/CMFCToolBarFontSizeComboBox::SetTwipSize
dev_langs:
- C++
helpviewer_keywords:
- CMFCToolBarFontSizeComboBox class
ms.assetid: 72e0c44c-6a0e-4194-a71f-ab64e3afb9b5
caps.latest.revision: 26
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
ms.openlocfilehash: 9dddb563617a708bdc8b2193fa5ee8bd10321828
ms.lasthandoff: 02/24/2017

---
# <a name="cmfctoolbarfontsizecombobox-class"></a>Classe CMFCToolBarFontSizeComboBox
Un pulsante della barra degli strumenti contenente un controllo casella combinata che consente all'utente di selezionare una dimensione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCToolBarFontSizeComboBox : public CMFCToolBarComboBoxButton  
```  
  
## <a name="members"></a>Membri  
  
### <a name="protected-constructors"></a>Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarFontSizeComboBox::CMFCToolBarFontSizeComboBox](#cmfctoolbarfontsizecombobox)|Costruisce un oggetto `CMFCToolBarFontSizeComboBox`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarFontSizeComboBox::GetTwipSize](#gettwipsize)|Restituisce la dimensione del tipo di carattere selezionato in twip.|  
|[CMFCToolBarFontSizeComboBox::RebuildFontSizes](#rebuildfontsizes)|Riempie l'elenco della casella combinata con tutte le dimensioni dei caratteri supportate per un tipo di carattere specificata.|  
|[CMFCToolBarFontSizeComboBox::SetTwipSize](#settwipsize)|Imposta le dimensioni del carattere in twip.|  
  
## <a name="remarks"></a>Note  
 È possibile utilizzare un `CMFCToolBarFontSizeComboBox` oggetto insieme con un [CMFCToolBarFontComboBox classe](../../mfc/reference/cmfctoolbarfontcombobox-class.md) sull'oggetto per consentire all'utente di selezionare un tipo di carattere.  
  
 Come aggiungere un pulsante della casella combinata tipo di carattere, è possibile aggiungere un pulsante della casella combinata dimensioni del carattere di una barra degli strumenti. Per ulteriori informazioni, vedere [CMFCToolBarFontComboBox classe](../../mfc/reference/cmfctoolbarfontcombobox-class.md).  
  
 Quando l'utente seleziona un nuovo tipo di carattere in un `CMFCToolBarFontComboBox` dell'oggetto, è possibile compilare la casella combinata dimensioni carattere con le dimensioni supportate per il tipo di carattere utilizzando il [CMFCToolBarFontSizeComboBox::RebuildFontSizes](#rebuildfontsizes) metodo.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare metodi diversi di `CMFCToolBarFontSizeComboBox` (classe) per configurare un `CMFCToolBarFontSizeComboBox` oggetto. Nell'esempio viene illustrato come recuperare le dimensioni del carattere, in twip, dalla casella di testo, compilare la casella combinata dimensioni carattere con tutte le dimensioni valide del tipo di carattere specificato e specificare le dimensioni del carattere in twip. Questo frammento di codice fa parte di [esempio riempimento Word](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_WordPad n.&8;](../../mfc/reference/codesnippet/cpp/cmfctoolbarfontsizecombobox-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)  
  
 [CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)  
  
 [CMFCToolBarFontSizeComboBox](../../mfc/reference/cmfctoolbarfontsizecombobox-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxtoolbarfontcombobox.h  
  
##  <a name="cmfctoolbarfontsizecombobox"></a>CMFCToolBarFontSizeComboBox::CMFCToolBarFontSizeComboBox  
 Costruisce un oggetto `CMFCToolBarFontSizeComboBox`.  
  
```  
CMFCToolBarFontSizeComboBox();
```  
  
##  <a name="gettwipsize"></a>CMFCToolBarFontSizeComboBox::GetTwipSize  
 Recupera le dimensioni del carattere, in twip, dalla casella di testo di una casella combinata di dimensioni del carattere.  
  
```  
int GetTwipSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il valore restituito è positivo, è la dimensione del carattere in twip. È -1 se la casella di testo della casella combinata è vuota. Se si verifica un errore, è -2.  
  
##  <a name="rebuildfontsizes"></a>CMFCToolBarFontSizeComboBox::RebuildFontSizes  
 Riempie una casella combinata di dimensioni del carattere con tutte le dimensioni valide del tipo di carattere specificato.  
  
```  
void RebuildFontSizes(const CString& strFontName);
```  
  
### <a name="parameters"></a>Parametri  
 `[in] strFontName`  
 Specifica un nome di carattere.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione quando si desidera sincronizzare tra la selezione di una casella combinata tipo di carattere e una casella combinata dimensioni del carattere, ad esempio un [CMFCToolBarFontComboBox classe](../../mfc/reference/cmfctoolbarfontcombobox-class.md).  
  
##  <a name="settwipsize"></a>CMFCToolBarFontSizeComboBox::SetTwipSize  
 Arrotonda specificato dimensioni (in twip) a quella più vicino, e quindi viene selezionato nella casella combinata con tale valore.  
  
```  
void SetTwipSize(int nSize);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nSize`  
 Specifica le dimensioni del carattere (twip) per impostare.  
  
### <a name="remarks"></a>Note  
 È possibile recuperare le dimensioni del carattere valido precedente in un secondo momento chiamando la [CMFCToolBarFontSizeComboBox::GetTwipSize](#gettwipsize) metodo.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)   
 [Classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)   
 [Classe CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)   
 [Classe CMFCFontInfo](../../mfc/reference/cmfcfontinfo-class.md)   
 [CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton)   
 [Procedura dettagliata: Inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)




