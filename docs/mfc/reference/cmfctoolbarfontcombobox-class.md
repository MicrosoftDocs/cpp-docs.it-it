---
title: Classe CMFCToolBarFontComboBox | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCToolBarFontComboBox
- AFXTOOLBARFONTCOMBOBOX/CMFCToolBarFontComboBox
- AFXTOOLBARFONTCOMBOBOX/CMFCToolBarFontComboBox::CMFCToolBarFontComboBox
- AFXTOOLBARFONTCOMBOBOX/CMFCToolBarFontComboBox::GetFontDesc
- AFXTOOLBARFONTCOMBOBOX/CMFCToolBarFontComboBox::SetFont
dev_langs: C++
helpviewer_keywords:
- CMFCToolBarFontComboBox [MFC], CMFCToolBarFontComboBox
- CMFCToolBarFontComboBox [MFC], GetFontDesc
- CMFCToolBarFontComboBox [MFC], SetFont
ms.assetid: 25f8e08c-aadd-4cb5-9581-a99d49d444b1
caps.latest.revision: "29"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 5f499c5593460b10957c7d09e01c0f458529df0d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cmfctoolbarfontcombobox-class"></a>Classe CMFCToolBarFontComboBox
Un pulsante della barra degli strumenti contenente un controllo casella combinata che consente all'utente di selezionare un tipo di carattere da un elenco di tipi di carattere del sistema.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCToolBarFontComboBox : public CMFCToolBarComboBoxButton  
```  
  
## <a name="members"></a>Membri  
  
### <a name="protected-constructors"></a>Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarFontComboBox::CMFCToolBarFontComboBox](#cmfctoolbarfontcombobox)|Costruisce un oggetto `CMFCToolBarFontComboBox`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarFontComboBox::GetFontDesc](#getfontdesc)|Restituisce un puntatore al `CMFCFontInfo` oggetto per un indice specificato nella casella combinata.|  
|[CMFCToolBarFontComboBox::SetFont](#setfont)|Seleziona un tipo di carattere nella casella combinata tipo di carattere in base a uno, il nome del tipo di carattere o il prefisso e set di caratteri del tipo di carattere.|  
  
### <a name="data-members"></a>Membri di dati  
 [CMFCToolBarFontComboBox::m_nFontHeight](#m_nfontheight)  
 L'altezza dei caratteri nella casella combinata tipo di carattere.  
  
## <a name="remarks"></a>Note  
 Per aggiungere un pulsante della casella combinata tipo di carattere a una barra degli strumenti, attenersi alla procedura seguente:  
  
1.  Riservare un ID di risorsa fittizio per il pulsante nella risorsa della barra degli strumenti padre.  
  
2.  Costruire un `CMFCToolBarFontComboBox` oggetto.  
  
3.  Nel gestore dei messaggi che elabora il `AFX_WM_RESETTOOLBAR` dei messaggi, sostituire il pulsante originale con il nuovo pulsante della casella combinata con [CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton).  
  
4.  Sincronizzare il tipo di carattere selezionato nella casella combinata con il tipo di carattere nel documento tramite il [CMFCToolBarFontComboBox::SetFont](#setfont) metodo.  
  
 Tipo di carattere del documento con il tipo di carattere selezionato nella casella combinata, utilizzare il [CMFCToolBarFontComboBox::GetFontDesc](#getfontdesc) metodo per recuperare gli attributi del tipo di carattere selezionato, utilizzare gli attributi per creare un [ CFont (Class)](../../mfc/reference/cfont-class.md) oggetto.  
  
 Il pulsante della casella combinata tipo di carattere chiama la funzione Win32 [EnumFontFamiliesEx](http://msdn.microsoft.com/library/windows/desktop/dd162620) per determinare gli schermo e la stampante tipi di carattere disponibile per il sistema.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)  
  
 [CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)  
  
 [CMFCToolBarFontComboBox](../../mfc/reference/cmfctoolbarfontcombobox-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxtoolbarfontcombobox.h  
  
##  <a name="cmfctoolbarfontcombobox"></a>CMFCToolBarFontComboBox::CMFCToolBarFontComboBox  
 Costruisce un [CMFCToolBarFontComboBox](../../mfc/reference/cmfctoolbarfontcombobox-class.md) oggetto.  
  
```  
public:  
CMFCToolBarFontComboBox(
    UINT uiID,  
    int iImage,  
    int nFontType = DEVICE_FONTTYPE | RASTER_FONTTYPE | TRUETYPE_FONTTYPE,  
    BYTE nCharSet = DEFAULT_CHARSET,  
    DWORD dwStyle = CBS_DROPDOWN,  
    int iWidth = 0,  
    BYTE nPitchAndFamily = DEFAULT_PITCH);

 
protected:  
CMFCToolBarFontComboBox(
    CObList* pLstFontsExternal,  
    int nFontType,  
    BYTE nCharSet,  
    BYTE nPitchAndFamily);  
  
CMFCToolBarFontComboBox();
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiID`  
 L'ID di comando della casella combinata.  
  
 [in] `iImage`  
 Indice in base zero di un'immagine della barra degli strumenti. L'immagine si trova nel [CMFCToolBarImages classe](../../mfc/reference/cmfctoolbarimages-class.md) oggetto [CMFCToolBar classe](../../mfc/reference/cmfctoolbar-class.md) classe gestisce.  
  
 [in] `nFontType`  
 I tipi di carattere che contiene la casella combinata. Questo parametro può essere una combinazione (OR boolean) dei valori seguenti:  
  
 DEVICE_FONTTYPE  
  
 RASTER_FONTTYPE  
  
 TRUETYPE_FONTTYPE  
  
 [in] `nCharSet`  
 Se impostato su DEFAULT_CHARSET, la casella combinata contiene i tipi di carattere denominato tutti in modo univoco in tutti i set di caratteri. (Se sono presenti due tipi di carattere con lo stesso nome, la casella combinata contiene uno di essi.) Se impostato su un valore di set di caratteri valida, la casella combinata contiene solo tipi di carattere nel set di caratteri specificato. Vedere [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037) per un elenco di caratteri possibili imposta.  
  
 [in] `dwStyle`  
 Lo stile della casella combinata. (vedere [stili casella combinata](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles))  
  
 [in] `iWidth`  
 La larghezza in pixel del controllo di modifica.  
  
 [in] `nPitchAndFamily`  
 Se impostato su DEFAULT_PITCH, la casella combinata contiene i tipi di carattere indipendentemente dalla rotazione. Se è impostata su FIXED_PITCH o VARIABLE_PITCH, la casella combinata contiene solo tipi di carattere con tale tipo di passo. Il filtro in base a una famiglia di caratteri non è attualmente supportato.  
  
 [out] `pLstFontsExternal`  
 Puntatore a un [classe CObList](../../mfc/reference/coblist-class.md) oggetto che archivia i tipi di carattere disponibili.  
  
### <a name="remarks"></a>Note  
 In genere, `CMFCToolBarFontComboBox` oggetti archiviano l'elenco dei tipi di carattere disponibili in una singola condivisione `CObList` oggetto. Se si utilizza il secondo overload del costruttore e fornire un puntatore valido a `pLstFontsExternal`che `CMFCToolBarFontComboBox` oggetto invece compilerà il `CObList` che `pLstFontsExternal` fa riferimento a con tipi di carattere disponibili.  
  
### <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come costruire un `CMFCToolBarFontComboBox` oggetto. Questo frammento di codice fa parte dell' [esempio di Word Pad](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_WordPad#7](../../mfc/reference/codesnippet/cpp/cmfctoolbarfontcombobox-class_1.cpp)]  
  
##  <a name="getfontdesc"></a>CMFCToolBarFontComboBox::GetFontDesc  
 Restituisce un puntatore al `CMFCFontInfo` oggetto per un indice specificato nella casella combinata.  
  
```  
const CMFCFontInfo* GetFontDesc(int iIndex=-1) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iIndex`  
 Specifica l'indice in base zero di un elemento della casella combinata.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CMFCFontInfo` oggetto. Se `iIndex` non specifica un indice di elemento valido, il valore restituito è `NULL`.  
  
##  <a name="m_nfontheight"></a>CMFCToolBarFontComboBox::m_nFontHeight  
 Specifica l'altezza, in pixel, di caratteri nella casella combinata tipo di carattere se la casella combinata è proprietario di stile di disegno.  
  
```  
static int m_nFontHeight  
```  
  
### <a name="remarks"></a>Note  
 Se il `m_nFontHeight` variabile è 0, l'altezza viene calcolata automaticamente in base al tipo di carattere predefinito della casella combinata. L'altezza include sia l'ascent di caratteri di sopra la linea di base e l'ascent di caratteri di sotto la linea di base.  
  
##  <a name="setfont"></a>CMFCToolBarFontComboBox::SetFont  
 Seleziona che set di caratteri nella casella combinata tipo di carattere in base al nome del tipo di carattere e carattere che viene specificati nei parametri.  
  
```  
BOOL SetFont(
    LPCTSTR lpszName,  
    BYTE nCharSet=DEFAULT_CHARSET,  
    BOOL bExact=FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszName`  
 Specifica il nome del tipo di carattere o un prefisso.  
  
 [in] `nCharSet`  
 Specifica il set di caratteri.  
  
 [in] `bExact`  
 Specifica se `lpszName` contiene il nome del tipo di carattere o il prefisso del carattere.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il tipo di carattere è stato selezionato. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se `bExact` è `TRUE`, questo metodo consente di selezionare un tipo di carattere che corrisponde esattamente al nome specificato come `lpszName`. Se `bExact` è `FALSE`, questo metodo consente di selezionare un tipo di carattere che inizia con il testo specificato come `lpszName` e che utilizza il set di caratteri che è stato specificato come `nCharSet`. Se `nCharSet` è impostato su DEFAULT_CHARSET, il set di caratteri sarà ignorato e solo `lpszName` verrà utilizzato per selezionare un tipo di carattere.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)   
 [Classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)   
 [Classe CMFCToolBarComboBoxButton](../../mfc/reference/cmfctoolbarcomboboxbutton-class.md)   
 [Classe CMFCFontInfo](../../mfc/reference/cmfcfontinfo-class.md)   
 [CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton)   
 [Procedura dettagliata: inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)



