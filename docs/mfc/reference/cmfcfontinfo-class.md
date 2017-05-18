---
title: Classe CMFCFontInfo | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCFontInfo
- AFXTOOLBARFONTCOMBOBOX/CMFCFontInfo
- AFXTOOLBARFONTCOMBOBOX/CMFCFontInfo::GetFullName
- AFXTOOLBARFONTCOMBOBOX/CMFCFontInfo::m_nCharSet
- AFXTOOLBARFONTCOMBOBOX/CMFCFontInfo::m_nPitchAndFamily
- AFXTOOLBARFONTCOMBOBOX/CMFCFontInfo::m_nType
- AFXTOOLBARFONTCOMBOBOX/CMFCFontInfo::m_strName
- AFXTOOLBARFONTCOMBOBOX/CMFCFontInfo::m_strScript
dev_langs:
- C++
helpviewer_keywords:
- CMFCFontInfo class
- CMFCFontInfo::CMFCFontInfo constructor
ms.assetid: f88329b2-d74e-4921-9441-a3bb6536a049
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: ac1409bcfce389cbc334edd2b864f7505d7443c7
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcfontinfo-class"></a>Classe CMFCFontInfo
La `CMFCFontInfo` classe descrive il nome e altri attributi del tipo di carattere.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCFontInfo : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCFontInfo`|Costruisce un oggetto `CMFCFontInfo`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCFontInfo::GetFullName](#getfullname)|Recupera i nomi concatenati di un tipo di carattere e il relativo carattere impostati (script).|  
  
### <a name="data-members"></a>Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCFontInfo::m_nCharSet](#m_ncharset)|Un valore che specifica il set di caratteri (script) associato al carattere.|  
|[CMFCFontInfo::m_nPitchAndFamily](#m_npitchandfamily)|Un valore che specifica il tono e la famiglia del tipo di carattere.|  
|[CMFCFontInfo::m_nType](#m_ntype)|Un valore che specifica il tipo del tipo di carattere.|  
|[CMFCFontInfo::m_strName](#m_strname)|Il nome del tipo di carattere; ad esempio, **Arial**.|  
|[CMFCFontInfo::m_strScript](#m_strscript)|Il nome di un set di caratteri (script) associato al carattere.|  
  
## <a name="remarks"></a>Note  
 È possibile collegare un `CMFCFontInfo` oggetto su un elemento del [CMFCToolBarFontComboBox classe](../../mfc/reference/cmfctoolbarfontcombobox-class.md) (classe). Chiamare il [CMFCToolBarFontComboBox::GetFontDesc](../../mfc/reference/cmfctoolbarfontcombobox-class.md#getfontdesc) metodo per recuperare un puntatore a un `CMFCFontInfo` oggetto.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare diversi membri della `CMFCFontInfo` classe. Nell'esempio viene illustrato come ottenere un `CMFCFontInfo` dell'oggetto da un `CMFCRibbonFontComboBox`e come accedere alle variabili locali. Questo esempio fa parte di [esempio Demo di Office 2007](../../visual-cpp-samples.md).  
  
 [!code-cpp[6 NVC_MFC_MSOffice2007Demo](../../mfc/reference/codesnippet/cpp/cmfcfontinfo-class_1.cpp)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxtoolbarfontcombobox.h  
  
##  <a name="cmfcfontinfo"></a>CMFCFontInfo::CMFCFontInfo  
 Costruisce un oggetto `CMFCFontInfo`.  
  
```  
CMFCFontInfo(
    LPCTSTR lpszName,  
    LPCTSTR lpszScript,  
    BYTE nCharSet,  
    BYTE nPitchAndFamily,  
    int nType);  
  
CMFCFontInfo(const CMFCFontInfo& src);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszName`  
 Il nome del tipo di carattere. Per ulteriori informazioni, vedere il `lfFaceName` membro del [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037) struttura.  
  
 [in] `lpszScript`  
 Il nome dello script (set di caratteri) del tipo di carattere.  
  
 [in] `nCharSet`  
 Un valore che specifica il set di caratteri (script) del tipo di carattere. Per ulteriori informazioni, vedere il `lfCharSet` membro del [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037) struttura.  
  
 [in] `nPitchAndFamily`  
 Un valore che specifica il tono e la famiglia del tipo di carattere. Per ulteriori informazioni, vedere il `lfPitchAndFamily` membro del [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037) struttura.  
  
 [in] `nType`  
 Un valore che specifica il tipo di carattere. Questo parametro può essere una combinazione bit per bit (OR) di DEVICE_FONTTYPE, RASTER_FONTTYPE e TRUETYPE_FONTTYPE.  
  
 [in] `src`  
 Un oggetto esistente `CMFCFontInfo` oggetto i cui membri vengono utilizzati per costruire questo `CMFCFontInfo` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
 Questa documentazione vengono utilizzati i termini *set di caratteri* e *script* in modo intercambiabile. Oggetto *script*, noto anche come un sistema di scrittura, è un insieme di caratteri e le regole per la scrittura di tali caratteri in una o più lingue. L'insieme di caratteri include l'alfabeto e la punteggiatura utilizzata in tale script. Alfabeto latino, ad esempio, viene utilizzato per l'inglese come si è parlato negli Stati Uniti e il relativo alfabeto include i caratteri dalla alla Z. Il `lfCharSet` membro del [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037) struttura specifica un set di caratteri. Ad esempio, il valore `ANSI_CHARSET` specifica il [!INCLUDE[vcpransi](../../atl-mfc-shared/reference/includes/vcpransi_md.md)] set di caratteri che include la lettera dell'alfabeto latino.  
  
##  <a name="getfullname"></a>CMFCFontInfo::GetFullName  
 Recupera i nomi concatenati di un tipo di carattere e il relativo carattere impostati (script).  
  
```  
CString GetFullName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Stringa che contiene il nome del tipo di carattere e lo script.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per ottenere il nome completo del tipo di carattere. Ad esempio, se è il nome del carattere è `Arial` script il tipo di carattere è `Cyrillic`, questo metodo restituisce "Arial (alfabeto cirillico)".  
  
##  <a name="m_ncharset"></a>CMFCFontInfo::m_nCharSet  
 Un valore che specifica il set di caratteri (script) associato al carattere.  
  
```  
const BYTE m_nCharSet;  
```  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere il `nCharSet` parametro il [CMFCFontInfo::CMFCFontInfo](#cmfcfontinfo) costruttore.  
  
##  <a name="m_npitchandfamily"></a>CMFCFontInfo::m_nPitchAndFamily  
 Un valore che specifica il tono (dimensioni) e la famiglia (ad esempio, serif, sans-serif e a spaziatura fissa) del tipo di carattere.  
  
```  
const BYTE m_nPitchAndFamily;  
```  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere il `nPitchAndFamily` parametro il [CMFCFontInfo::CMFCFontInfo](#cmfcfontinfo) costruttore.  
  
##  <a name="m_ntype"></a>CMFCFontInfo::m_nType  
 Un valore che specifica il tipo del tipo di carattere.  
  
```  
const int m_nType;  
```  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere il `nType` parametro il [CMFCFontInfo::CMFCFontInfo](#cmfcfontinfo) costruttore.  
  
##  <a name="m_strname"></a>CMFCFontInfo::m_strName  
 Il nome del tipo di carattere: ad esempio, **Arial**.  
  
```  
const CString m_strName;  
```  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere il `lpszName` parametro il [CMFCFontInfo::CMFCFontInfo](#cmfcfontinfo) costruttore.  
  
##  <a name="m_strscript"></a>CMFCFontInfo::m_strScript  
 Il nome di un set di caratteri (script) associato al carattere.  
  
```  
const CString m_strScript;  
```  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere il `lpszScript` parametro il [CMFCFontInfo::CMFCFontInfo](#cmfcfontinfo) costruttore.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCToolBarFontComboBox](../../mfc/reference/cmfctoolbarfontcombobox-class.md)   
 [Classe CMFCToolBarFontSizeComboBox](../../mfc/reference/cmfctoolbarfontsizecombobox-class.md)

