---
title: Classe CMFCFontComboBox | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
- CMFCFontComboBox [MFC], CMFCFontComboBox
- CMFCFontComboBox [MFC], GetSelFont
- CMFCFontComboBox [MFC], SelectFont
- CMFCFontComboBox [MFC], Setup
- CMFCFontComboBox [MFC], m_bDrawUsingFont
ms.assetid: 9a53fb0c-7b45-486d-8187-2a4c723d9fbb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0ec8840e4a379ce50b9474c114f0a2879d2e7bca
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43686157"
---
# <a name="cmfcfontcombobox-class"></a>Classe CMFCFontComboBox
Il `CMFCFontComboBox` classe crea un controllo casella combinata che contiene un elenco dei tipi di carattere.  
  
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
|`CMFCFontComboBox::CompareItem`|Chiamato dal framework per determinare la posizione relativa di un nuovo elemento nella casella di elenco ordinato di controllo della casella combinata tipo di carattere corrente. (Esegue l'override [CComboBox::CompareItem](../../mfc/reference/ccombobox-class.md#compareitem).)|  
|`CMFCFontComboBox::DrawItem`|Chiamata eseguita dal framework per disegnare un elemento specificato nel controllo della casella combinata tipo di carattere corrente. (Esegue l'override [CComboBox::DrawItem](../../mfc/reference/ccombobox-class.md#drawitem).)|  
|[CMFCFontComboBox::GetSelFont](#getselfont)|Recupera le informazioni sul tipo di carattere attualmente selezionato.|  
|`CMFCFontComboBox::MeasureItem`|Chiamato dal framework per informa Windows delle dimensioni della casella di riepilogo nel controllo della casella combinata tipo di carattere corrente. (Esegue l'override [CComboBox::MeasureItem](../../mfc/reference/ccombobox-class.md#measureitem).)|  
|`CMFCFontComboBox::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati per la [TranslateMessage](/windows/desktop/api/winuser/nf-winuser-translatemessage) e [DispatchMessage](/windows/desktop/api/winuser/nf-winuser-dispatchmessage) funzioni di Windows. Esegue l'override di [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).|  
|[CMFCFontComboBox::SelectFont](#selectfont)|Seleziona il tipo di carattere che corrisponde ai criteri specificati dalla casella combinata tipo di carattere.|  
|[CMFCFontComboBox::Setup](#setup)|Inizializza l'elenco di elementi nella casella combinata tipo di carattere.|  
  
### <a name="data-members"></a>Membri di dati  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CMFCFontComboBox::m_bDrawUsingFont](#m_bdrawusingfont)|Indica al framework del tipo di carattere da utilizzare per disegnare le etichette degli elementi nella casella combinata tipo di carattere corrente.|  
  
## <a name="remarks"></a>Note  
 Usare un `CMFCFontComboBox` dell'oggetto in una finestra di dialogo, aggiungere un `CMFCFontComboBox` variabile alla classe della finestra di dialogo. Quindi nel `OnInitDialog` metodo della classe della finestra di dialogo, chiamata di [CMFCFontComboBox::Setup](#setup) metodo per inizializzare l'elenco di elementi nel controllo della casella combinata.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CComboBox](../../mfc/reference/ccombobox-class.md)  
  
 [CMFCFontComboBox](../../mfc/reference/cmfcfontcombobox-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxfontcombobox.h  
  
##  <a name="cmfcfontcombobox"></a>  CMFCFontComboBox::CMFCFontComboBox  
 Costruisce un oggetto `CMFCFontComboBox`.  
  
```  
CMFCFontComboBox();
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="getselfont"></a>  CMFCFontComboBox::GetSelFont  
 Recupera le informazioni sul tipo di carattere attualmente selezionato.  
  
```  
CMFCFontInfo* GetSelFont() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a [classe CMFCFontInfo](../../mfc/reference/cmfcfontinfo-class.md) che descrive un tipo di carattere. Può essere NULL se nessun tipo di carattere è selezionata nella casella combinata.  
  
### <a name="remarks"></a>Note  
  
##  <a name="m_bdrawusingfont"></a>  CMFCFontComboBox::m_bDrawUsingFont  
 Indica al framework del tipo di carattere da utilizzare per disegnare le etichette degli elementi nella casella combinata tipo di carattere corrente.  
  
```  
static BOOL m_bDrawUsingFont;  
```  
  
### <a name="remarks"></a>Note  
 Impostare questo membro su TRUE per indicare al framework di usare lo stesso carattere per disegnare ogni elemento di etichetta. Impostare questo membro su FALSE per indirizzare il framework per disegnare ogni elemento etichetta con il tipo di carattere il cui nome è lo stesso come etichetta. Il valore predefinito di questo membro è FALSE.  
  
##  <a name="selectfont"></a>  CMFCFontComboBox::SelectFont  
 Seleziona il tipo di carattere che corrisponde ai criteri specificati dalla casella combinata tipo di carattere.  
  
```  
BOOL SelectFont(CMFCFontInfo* pDesc);

 
BOOL SelectFont(
    LPCTSTR lpszName,  
    BYTE nCharSet=DEFAULT_CHARSET);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pDesc*  
 Punta a un oggetto di descrizione del tipo di carattere.  
  
 [in] *lpszName*  
 Specifica il nome del tipo di carattere.  
  
 [in] *nCharSet*  
 Specifica un set di caratteri. Il valore predefinito è DEFAULT_CHARSET. Per altre informazioni, vedere la `lfCharSet` membro della [LOGFONT](/windows/desktop/api/wingdi/ns-wingdi-taglogfonta) struttura.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se l'oggetto descrizione tipo di carattere specificato o il nome del tipo di carattere e set di caratteri; corrisponde a un elemento nella casella combinata tipo di carattere in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per selezionare e scorrere fino all'elemento nella casella combinata tipo di carattere che corrisponde al tipo di carattere specificato.  
  
### <a name="example"></a>Esempio  
 L'esempio seguente illustra come usare il `SelectFont` metodo nel `CMFCFontComboBox` classe. In questo esempio fa parte il [esempio di nuovi controlli](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#34](../../mfc/reference/codesnippet/cpp/cmfcfontcombobox-class_1.h)]  
[!code-cpp[NVC_MFC_NewControls#35](../../mfc/reference/codesnippet/cpp/cmfcfontcombobox-class_2.cpp)]  
  
##  <a name="setup"></a>  CMFCFontComboBox::Setup  
 Inizializza l'elenco di elementi nella casella combinata tipo di carattere.  
  
```  
BOOL Setup(
    int nFontType=DEVICE_FONTTYPE|RASTER_FONTTYPE|TRUETYPE_FONTTYPE,  
    BYTE nCharSet=DEFAULT_CHARSET,  
    BYTE nPitchAndFamily=DEFAULT_PITCH);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *nFontType*  
 Specifica il tipo di carattere. Il valore predefinito è la combinazione bit per bit (OR) di DEVICE_FONTTYPE, RASTER_FONTTYPE e TRUETYPE_FONTTYPE.  
  
 [in] *nCharSet*  
 Specifica il set di caratteri del tipo di carattere. Il valore predefinito è DEFAULT_CHARSET.  
  
 [in] *nPitchAndFamily*  
 Specifica del tipo di carattere passo e famiglia. Il valore predefinito è DEFAULT_PITCH.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la casella combinata tipo di carattere è stata inizializzata correttamente. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Questo metodo inizializza la casella combinata tipo di carattere enumerando i tipi di carattere attualmente installati che corrispondono ai parametri specificati e l'inserimento di tali nomi di caratteri nella casella combinata tipo di carattere.  
  
### <a name="example"></a>Esempio  
 L'esempio seguente illustra come usare il `Setup` metodo nel `CMFCFontComboBox` classe. In questo esempio fa parte il [esempio di nuovi controlli](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#34](../../mfc/reference/codesnippet/cpp/cmfcfontcombobox-class_1.h)]  
[!code-cpp[NVC_MFC_NewControls#36](../../mfc/reference/codesnippet/cpp/cmfcfontcombobox-class_3.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCToolBarFontComboBox](../../mfc/reference/cmfctoolbarfontcombobox-class.md)   
 [Classe CMFCFontInfo](../../mfc/reference/cmfcfontinfo-class.md)
