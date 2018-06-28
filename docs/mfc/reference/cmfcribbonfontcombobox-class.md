---
title: Classe CMFCRibbonFontComboBox | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMFCRibbonFontComboBox
- AFXRIBBONCOMBOBOX/CMFCRibbonFontComboBox
- AFXRIBBONCOMBOBOX/CMFCRibbonFontComboBox::CMFCRibbonFontComboBox
- AFXRIBBONCOMBOBOX/CMFCRibbonFontComboBox::BuildFonts
- AFXRIBBONCOMBOBOX/CMFCRibbonFontComboBox::GetCharSet
- AFXRIBBONCOMBOBOX/CMFCRibbonFontComboBox::GetFontDesc
- AFXRIBBONCOMBOBOX/CMFCRibbonFontComboBox::GetFontType
- AFXRIBBONCOMBOBOX/CMFCRibbonFontComboBox::GetPitchAndFamily
- AFXRIBBONCOMBOBOX/CMFCRibbonFontComboBox::RebuildFonts
- AFXRIBBONCOMBOBOX/CMFCRibbonFontComboBox::SetFont
dev_langs:
- C++
helpviewer_keywords:
- CMFCRibbonFontComboBox [MFC], CMFCRibbonFontComboBox
- CMFCRibbonFontComboBox [MFC], BuildFonts
- CMFCRibbonFontComboBox [MFC], GetCharSet
- CMFCRibbonFontComboBox [MFC], GetFontDesc
- CMFCRibbonFontComboBox [MFC], GetFontType
- CMFCRibbonFontComboBox [MFC], GetPitchAndFamily
- CMFCRibbonFontComboBox [MFC], RebuildFonts
- CMFCRibbonFontComboBox [MFC], SetFont
ms.assetid: 33b4db50-df4f-45fa-8f05-2e6e73c31435
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 857eb87caf42e39366e261ac92c3b2f289fb41d9
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37039375"
---
# <a name="cmfcribbonfontcombobox-class"></a>Classe CMFCRibbonFontComboBox
Implementa una casella combinata che contiene un elenco dei tipi di carattere. Posizionare la casella combinata in un pannello della barra multifunzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCRibbonFontComboBox : public CMFCRibbonComboBox  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCRibbonFontComboBox::~CMFCRibbonFontComboBox`|Distruttore.|  
  
### <a name="protected-constructors"></a>Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonFontComboBox::CMFCRibbonFontComboBox](#cmfcribbonfontcombobox)|Costruisce e inizializza un oggetto `CMFCRibbonFontComboBox`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCRibbonFontComboBox::BuildFonts](#buildfonts)|Popola la casella combinata tipi di carattere della barra multifunzione con tipi di carattere del tipo di carattere, del set di caratteri e del passo e famiglia specificati.|  
|`CMFCRibbonFontComboBox::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|  
|[CMFCRibbonFontComboBox::GetCharSet](#getcharset)|Restituisce il set di caratteri specificato.|  
|[CMFCRibbonFontComboBox::GetFontDesc](#getfontdesc)||  
|[CMFCRibbonFontComboBox::GetFontType](#getfonttype)|Restituisce i tipi di carattere da visualizzare nella casella combinata. Le opzioni valide sono DEVICE_FONTTYPE, RASTER_FONTTYPE e TRUETYPE_FONTTYPE oppure qualsiasi altra combinazione bit per bit.|  
|[CMFCRibbonFontComboBox::GetPitchAndFamily](#getpitchandfamily)|Restituisce il passo e la famiglia di caratteri della barra multifunzione che vengono visualizzate nella casella combinata.|  
|`CMFCRibbonFontComboBox::GetThisClass`|Usato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
|[CMFCRibbonFontComboBox::RebuildFonts](#rebuildfonts)|Popola la casella combinata tipi di carattere della barra multifunzione con tipi di carattere del tipo di carattere, del set di caratteri e del passo e famiglia specificati in precedenza.|  
|[CMFCRibbonFontComboBox::SetFont](#setfont)|Seleziona il tipo di carattere specificato nella casella combinata.|  
  
## <a name="remarks"></a>Note  
 Dopo aver creato un `CMFCRibbonFontComboBox` dell'oggetto, aggiungerlo a un pannello della barra multifunzione chiamando [cmfcribbonpanel:: Add](../../mfc/reference/cmfcribbonpanel-class.md#add).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)  
  
 [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md)  
  
 [CMFCRibbonComboBox](../../mfc/reference/cmfcribboncombobox-class.md)  
  
 [CMFCRibbonFontComboBox](../../mfc/reference/cmfcribbonfontcombobox-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxribboncombobox. H  
  
##  <a name="buildfonts"></a>  CMFCRibbonFontComboBox::BuildFonts  
 Popola la casella combinata nella barra multifunzione con tipi di carattere.  
  
```  
void BuildFonts(
    int nFontType = DEVICE_FONTTYPE | RASTER_FONTTYPE | TRUETYPE_FONTTYPE,  
    BYTE nCharSet = DEFAULT_CHARSET,  
    BYTE nPitchAndFamily = DEFAULT_PITCH);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *nFontType*  
 Specifica il tipo di carattere dei tipi di carattere da aggiungere.  
  
 [in] *nCharSet*  
 Specifica il set di caratteri dei tipi di carattere da aggiungere.  
  
 [in] *nPitchAndFamily*  
 Specifica il passo e famiglia di caratteri da aggiungere.  
  
##  <a name="cmfcribbonfontcombobox"></a>  CMFCRibbonFontComboBox::CMFCRibbonFontComboBox  
 Costruisce e Inizializza un [CMFCRibbonFontComboBox](../../mfc/reference/cmfcribbonfontcombobox-class.md) oggetto.  
  
```  
CMFCRibbonFontComboBox(
    UINT nID,  
    int nFontType = DEVICE_FONTTYPE | RASTER_FONTTYPE | TRUETYPE_FONTTYPE,  
    BYTE nCharSet = DEFAULT_CHARSET,  
    BYTE nPitchAndFamily = DEFAULT_PITCH,  
    int nWidth = -1);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *nID*  
 L'ID di comando del comando che viene eseguito quando l'utente seleziona un elemento dalla casella combinata.  
  
 [in] *nFontType*  
 Specifica il tipo di carattere tipi da visualizzare nella casella combinata. Le opzioni valide sono **DEVICE_FONTTYPE**, **RASTER_FONTTYPE**, e **TRUETYPE_FONTTYPE**, o qualsiasi altra combinazione bit per bit.  
  
 [in] *nCharSet*  
 Filtra i tipi di carattere nella casella combinata a quelli che appartengono al set di caratteri specificato.  
  
 [in] *nPitchAndFamily*  
 Specifica il passo e famiglia di caratteri che vengono visualizzati nella casella combinata.  
  
 [in] *nWidth*  
 Specifica la larghezza, in pixel, della casella combinata.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni sulle possibili *nFontType* i valori dei parametri, vedere [EnumFontFamProc](http://msdn.microsoft.com/library/windows/desktop/dd162621) nella documentazione di Windows SDK.  
  
 Per ulteriori informazioni sui set di caratteri valida che può essere assegnato a *nCharSet*e i valori validi che possono essere assegnati a *nPitchAndFamily*, vedere [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037) di Documentazione di Windows SDK.  
  
##  <a name="getfontdesc"></a>  CMFCRibbonFontComboBox::GetFontDesc  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
const CMFCFontInfo* GetFontDesc(int iIndex = -1) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] *iIndex*  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="rebuildfonts"></a>  CMFCRibbonFontComboBox::RebuildFonts  
 Popola la casella combinata nella barra multifunzione con tipi di carattere di tipo di carattere specificato in precedenza, set di caratteri e del passo e famiglia.  
  
```  
void RebuildFonts();
```  
  
### <a name="remarks"></a>Note  
 È possibile specificare il tipo di carattere, set di caratteri e casella passo e famiglia di caratteri da includere nella casella combinata tipo di carattere della barra multifunzione di [costruttore](#cmfcribbonfontcombobox) per questa classe, o chiamando [CMFCRibbonFontComboBox::BuildFonts](#buildfonts).  
  
##  <a name="setfont"></a>  CMFCRibbonFontComboBox::SetFont  
 Seleziona il tipo di carattere specificato nella casella combinata.  
  
```  
BOOL SetFont(
    LPCTSTR lpszName,  
    BYTE nCharSet = DEFAULT_CHARSET,  
    BOOL bExact = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 ' lpszName *  
 Specifica il nome del tipo di carattere da selezionare.  
  
 *nCharSet*  
 Specifica il set di caratteri per il tipo di carattere selezionato.  
  
 *bExact*  
 `TRUE` Per specificare che il set di caratteri deve corrispondere quando si seleziona un tipo di carattere. `FALSE` per specificare che il set di caratteri può essere ignorato quando si seleziona un tipo di carattere.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il tipo di carattere specificato è stata trovata e selezionata. in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
  
##  <a name="getcharset"></a>  CMFCRibbonFontComboBox::GetCharSet  
 Restituisce il set di caratteri specificato.  
  
```  
BYTE GetCharSet() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Set di caratteri (vedere LOGFONT nella documentazione di Windows SDK).  
  
### <a name="remarks"></a>Note  
  
##  <a name="getfonttype"></a>  CMFCRibbonFontComboBox::GetFontType  
 Restituisce i tipi di carattere da visualizzare nella casella combinata. Le opzioni valide sono DEVICE_FONTTYPE, RASTER_FONTTYPE e TRUETYPE_FONTTYPE oppure qualsiasi altra combinazione bit per bit.  
  
```  
int GetFontType() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Tipi di carattere (vedere EnumFontFamProc nella documentazione di Windows SDK).  
  
### <a name="remarks"></a>Note  
  
##  <a name="getpitchandfamily"></a>  CMFCRibbonFontComboBox::GetPitchAndFamily  
 Restituisce il passo e la famiglia di caratteri della barra multifunzione che vengono visualizzate nella casella combinata.  
  
```  
BYTE GetPitchAndFamily() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Passo e famiglia (vedere LOGFONT nella documentazione di Windows SDK).  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCRibbonComboBox](../../mfc/reference/cmfcribboncombobox-class.md)
