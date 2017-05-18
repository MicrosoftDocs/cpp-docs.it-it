---
title: Classe CMFCFontComboBox | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCFontComboBox
- AFXFONTCOMBOBOX/CMFCFontComboBox
- AFXFONTCOMBOBOX/CMFCFontComboBox::CMFCFontComboBox
- AFXFONTCOMBOBOX/CMFCFontComboBox::GetSelFont
- AFXFONTCOMBOBOX/CMFCFontComboBox::SelectFont
- AFXFONTCOMBOBOX/CMFCFontComboBox::Setup
- AFXFONTCOMBOBOX/CMFCFontComboBox::m_bDrawUsingFont
dev_langs:
- C++
helpviewer_keywords:
- CMFCFontComboBox::DrawItem method
- CMFCFontComboBox::PreTranslateMessage method
- CMFCFontComboBox::MeasureItem method
- CMFCFontComboBox class
- CMFCFontComboBox::CompareItem method
ms.assetid: 9a53fb0c-7b45-486d-8187-2a4c723d9fbb
caps.latest.revision: 29
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 1252f5ca102637e70cc384afd723464aec4144b4
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcfontcombobox-class"></a>Classe CMFCFontComboBox
La `CMFCFontComboBox` classe crea un controllo casella combinata che contiene un elenco di tipi di carattere.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCFontComboBox : public CComboBox  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCFontComboBox::CMFCFontComboBox](#cmfcfontcombobox)|Costruisce un oggetto `CMFCFontComboBox`.|  
|`CMFCFontComboBox::~CMFCFontComboBox`|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCFontComboBox::CompareItem`|Chiamato dal framework per determinare la posizione relativa di un nuovo elemento nella casella di elenco ordinato del controllo della casella combinata tipo di carattere corrente. (Esegue l'override di [CComboBox::CompareItem](../../mfc/reference/ccombobox-class.md#compareitem).)|  
|`CMFCFontComboBox::DrawItem`|Chiamato dal framework per disegnare un elemento specificato nel controllo casella combinata tipo di carattere corrente. (Esegue l'override di [CComboBox::DrawItem](../../mfc/reference/ccombobox-class.md#drawitem).)|  
|[CMFCFontComboBox::GetSelFont](#getselfont)|Recupera le informazioni sul tipo di carattere attualmente selezionato.|  
|`CMFCFontComboBox::MeasureItem`|Chiamato dal framework per informare delle dimensioni della casella di riepilogo nel controllo casella combinata tipo di carattere corrente. (Esegue l'override di [CComboBox::MeasureItem](../../mfc/reference/ccombobox-class.md#measureitem).)|  
|`CMFCFontComboBox::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati per il [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) e [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) funzioni di Windows. (Esegue l'override di [CWnd:: PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).)|  
|[CMFCFontComboBox::SelectFont](#selectfont)|Seleziona il tipo di carattere che corrisponde ai criteri specificati dalla casella combinata tipo di carattere.|  
|[CMFCFontComboBox::Setup](#setup)|Inizializza l'elenco di elementi nella casella combinata tipo di carattere.|  
  
### <a name="data-members"></a>Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCFontComboBox::m_bDrawUsingFont](#m_bdrawusingfont)|Indica il tipo di carattere da utilizzare per disegnare le etichette degli elementi nella casella combinata tipo di carattere corrente per il framework.|  
  
## <a name="remarks"></a>Note  
 Per utilizzare un `CMFCFontComboBox` oggetto in una finestra di dialogo, aggiungere un `CMFCFontComboBox` variabile per la classe di finestra di dialogo. Quindi nel `OnInitDialog` metodo della classe della finestra di dialogo, chiamata di [CMFCFontComboBox::Setup](#setup) metodo per inizializzare l'elenco di elementi nel controllo casella combinata.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CComboBox](../../mfc/reference/ccombobox-class.md)  
  
 [CMFCFontComboBox](../../mfc/reference/cmfcfontcombobox-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxfontcombobox.h  
  
##  <a name="cmfcfontcombobox"></a>CMFCFontComboBox::CMFCFontComboBox  
 Costruisce un oggetto `CMFCFontComboBox`.  
  
```  
CMFCFontComboBox();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getselfont"></a>CMFCFontComboBox::GetSelFont  
 Recupera le informazioni sul tipo di carattere attualmente selezionato.  
  
```  
CMFCFontInfo* GetSelFont() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a [CMFCFontInfo classe](../../mfc/reference/cmfcfontinfo-class.md) oggetto che descrive un tipo di carattere. Può essere `NULL` se nessun tipo di carattere è selezionata nella casella combinata.  
  
### <a name="remarks"></a>Note  
  
##  <a name="m_bdrawusingfont"></a>CMFCFontComboBox::m_bDrawUsingFont  
 Indica il tipo di carattere da utilizzare per disegnare le etichette degli elementi nella casella combinata tipo di carattere corrente per il framework.  
  
```  
static BOOL m_bDrawUsingFont;  
```  
  
### <a name="remarks"></a>Note  
 Impostare il membro `TRUE` per indicare al framework di utilizzare lo stesso carattere per disegnare l'etichetta di ogni elemento. Impostare il membro `FALSE` per indirizzare il framework per disegnare l'etichetta di ogni elemento con il tipo di carattere il cui nome è lo stesso come etichetta. Il valore predefinito di questo membro è `FALSE`.  
  
##  <a name="selectfont"></a>CMFCFontComboBox::SelectFont  
 Seleziona il tipo di carattere che corrisponde ai criteri specificati dalla casella combinata tipo di carattere.  
  
```  
BOOL SelectFont(CMFCFontInfo* pDesc);

 
BOOL SelectFont(
    LPCTSTR lpszName,  
    BYTE nCharSet=DEFAULT_CHARSET);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDesc`  
 Punta a un oggetto di descrizione del tipo di carattere.  
  
 [in] `lpszName`  
 Specifica un nome di carattere.  
  
 [in] `nCharSet`  
 Specifica un set di caratteri. Il valore predefinito è DEFAULT_CHARSET. Per ulteriori informazioni, vedere il `lfCharSet` membro del [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037) struttura.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se un elemento nella casella combinata tipo di carattere corrisponde l'oggetto descrizione tipo di carattere specificata o nome del tipo di carattere e charset; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per selezionare e scorrere fino all'elemento nella casella combinata tipo di carattere che corrisponde al tipo di carattere specificata.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `SelectFont` metodo la `CMFCFontComboBox` classe. Questo esempio fa parte di [esempio nuovi controlli](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls&#34;](../../mfc/reference/codesnippet/cpp/cmfcfontcombobox-class_1.h)]  
[!code-cpp[NVC_MFC_NewControls&#35;](../../mfc/reference/codesnippet/cpp/cmfcfontcombobox-class_2.cpp)]  
  
##  <a name="setup"></a>CMFCFontComboBox::Setup  
 Inizializza l'elenco di elementi nella casella combinata tipo di carattere.  
  
```  
BOOL Setup(
    int nFontType=DEVICE_FONTTYPE|RASTER_FONTTYPE|TRUETYPE_FONTTYPE,  
    BYTE nCharSet=DEFAULT_CHARSET,  
    BYTE nPitchAndFamily=DEFAULT_PITCH);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nFontType`  
 Specifica il tipo di carattere. Il valore predefinito è la combinazione bit per bit (OR) di DEVICE_FONTTYPE, RASTER_FONTTYPE e TRUETYPE_FONTTYPE.  
  
 [in] `nCharSet`  
 Specifica il set di caratteri di tipo di carattere. Il valore predefinito è DEFAULT_CHARSET.  
  
 [in] `nPitchAndFamily`  
 Specifica il tono di carattere e la famiglia. Il valore predefinito è DEFAULT_PITCH.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la casella combinata tipo di carattere è stata inizializzata correttamente. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Questo metodo inizializza la casella combinata tipo di carattere enumerando i tipi di carattere attualmente installati che corrispondono ai parametri specificati e l'inserimento di tali nomi di carattere nella casella combinata tipo di carattere.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `Setup` metodo la `CMFCFontComboBox` classe. Questo esempio fa parte di [esempio nuovi controlli](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls&#34;](../../mfc/reference/codesnippet/cpp/cmfcfontcombobox-class_1.h)]  
[!code-cpp[NVC_MFC_NewControls&#36;](../../mfc/reference/codesnippet/cpp/cmfcfontcombobox-class_3.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCToolBarFontComboBox](../../mfc/reference/cmfctoolbarfontcombobox-class.md)   
 [Classe CMFCFontInfo](../../mfc/reference/cmfcfontinfo-class.md)

