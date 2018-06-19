---
title: Classe CMFCToolBarFontSizeComboBox | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
- CMFCToolBarFontSizeComboBox [MFC], CMFCToolBarFontSizeComboBox
- CMFCToolBarFontSizeComboBox [MFC], GetTwipSize
- CMFCToolBarFontSizeComboBox [MFC], RebuildFontSizes
- CMFCToolBarFontSizeComboBox [MFC], SetTwipSize
ms.assetid: 72e0c44c-6a0e-4194-a71f-ab64e3afb9b5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4b2c5734618bf1bedc72fe78dbeaada8c437391f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33372782"
---
# <a name="cmfctoolbarfontsizecombobox-class"></a>Classe CMFCToolBarFontSizeComboBox
Un pulsante della barra degli strumenti contenente un controllo casella combinata che consente all'utente di selezionare una dimensione del carattere.  
  
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
|[CMFCToolBarFontSizeComboBox::GetTwipSize](#gettwipsize)|Restituisce le dimensioni del tipo di carattere selezionato in twip.|  
|[CMFCToolBarFontSizeComboBox::RebuildFontSizes](#rebuildfontsizes)|Riempie l'elenco della casella combinata con tutte le dimensioni del carattere supportato per un tipo di carattere specificato.|  
|[CMFCToolBarFontSizeComboBox::SetTwipSize](#settwipsize)|Imposta le dimensioni del carattere in twip.|  
  
## <a name="remarks"></a>Note  
 È possibile utilizzare un `CMFCToolBarFontSizeComboBox` oggetto insieme a un [CMFCToolBarFontComboBox classe](../../mfc/reference/cmfctoolbarfontcombobox-class.md) oggetto per consentire agli utenti di selezionare un tipo di carattere.  
  
 Come aggiungere un pulsante della casella combinata tipo di carattere, è possibile aggiungere un pulsante della casella combinata tipo di carattere dimensioni di una barra degli strumenti. Per ulteriori informazioni, vedere [CMFCToolBarFontComboBox classe](../../mfc/reference/cmfctoolbarfontcombobox-class.md).  
  
 Quando l'utente seleziona un nuovo tipo di carattere in un `CMFCToolBarFontComboBox` dell'oggetto, è possibile compilare la casella combinata dimensioni carattere con le dimensioni supportate per il tipo di carattere utilizzando il [CMFCToolBarFontSizeComboBox::RebuildFontSizes](#rebuildfontsizes) metodo.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare i vari metodi nella `CMFCToolBarFontSizeComboBox` classe per configurare un `CMFCToolBarFontSizeComboBox` oggetto. Nell'esempio viene illustrato come recuperare le dimensioni del carattere, in twip, dalla casella di testo, riempire la casella combinata dimensioni carattere con tutte le dimensioni valide del tipo di carattere specificato e specificare le dimensioni del carattere in twip. Questo frammento di codice fa parte dell' [esempio di Word Pad](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_WordPad#8](../../mfc/reference/codesnippet/cpp/cmfctoolbarfontsizecombobox-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)  
  
 [CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)  
  
 [CMFCToolBarFontSizeComboBox](../../mfc/reference/cmfctoolbarfontsizecombobox-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxtoolbarfontcombobox.h  
  
##  <a name="cmfctoolbarfontsizecombobox"></a>  CMFCToolBarFontSizeComboBox::CMFCToolBarFontSizeComboBox  
 Costruisce un oggetto `CMFCToolBarFontSizeComboBox`.  
  
```  
CMFCToolBarFontSizeComboBox();
```  
  
##  <a name="gettwipsize"></a>  CMFCToolBarFontSizeComboBox::GetTwipSize  
 Recupera le dimensioni del carattere, in twip, dalla casella di testo di una casella combinata di dimensioni del carattere.  
  
```  
int GetTwipSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il valore restituito è positivo, è la dimensione del carattere in twip. È -1 se la casella di testo della casella combinata è vuota. Se si verifica un errore è -2.  
  
##  <a name="rebuildfontsizes"></a>  CMFCToolBarFontSizeComboBox::RebuildFontSizes  
 Riempie una casella combinata di dimensioni del carattere con tutte le dimensioni valide del tipo di carattere specificato.  
  
```  
void RebuildFontSizes(const CString& strFontName);
```  
  
### <a name="parameters"></a>Parametri  
 `[in] strFontName`  
 Specifica un nome di carattere.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione quando si desidera sincronizzare tra la selezione in una casella combinata tipo di carattere e una casella combinata di dimensioni del carattere, ad esempio un [CMFCToolBarFontComboBox classe](../../mfc/reference/cmfctoolbarfontcombobox-class.md).  
  
##  <a name="settwipsize"></a>  CMFCToolBarFontSizeComboBox::SetTwipSize  
 Arrotonda specificato dimensione (in twip) per le dimensioni in punti e quindi imposta più vicino alla dimensione selezionata nella casella combinata con tale valore.  
  
```  
void SetTwipSize(int nSize);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nSize`  
 Specifica le dimensioni del carattere (in twip) per impostare.  
  
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
 [Procedura dettagliata: inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)



