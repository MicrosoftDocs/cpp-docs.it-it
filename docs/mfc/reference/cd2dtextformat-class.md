---
title: Classe CD2DTextFormat | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CD2DTextFormat
- AFXRENDERTARGET/CD2DTextFormat
- AFXRENDERTARGET/CD2DTextFormat::CD2DTextFormat
- AFXRENDERTARGET/CD2DTextFormat::Create
- AFXRENDERTARGET/CD2DTextFormat::Destroy
- AFXRENDERTARGET/CD2DTextFormat::Get
- AFXRENDERTARGET/CD2DTextFormat::GetFontFamilyName
- AFXRENDERTARGET/CD2DTextFormat::GetLocaleName
- AFXRENDERTARGET/CD2DTextFormat::IsValid
- AFXRENDERTARGET/CD2DTextFormat::ReCreate
- AFXRENDERTARGET/CD2DTextFormat::m_pTextFormat
dev_langs:
- C++
helpviewer_keywords:
- CD2DTextFormat class
ms.assetid: db194cec-9dae-4644-ab84-7c43b7164117
caps.latest.revision: 16
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
ms.openlocfilehash: 5f7347dbbad8290bfdc800cbacaf21400583a392
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cd2dtextformat-class"></a>Classe CD2DTextFormat
Un wrapper per IDWriteTextFormat.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CD2DTextFormat : public CD2DResource;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DTextFormat::CD2DTextFormat](#cd2dtextformat)|Costruisce un oggetto CD2DTextFormat.|  
|[CD2DTextFormat:: ~ CD2DTextFormat](#cd2dtextformat__~cd2dtextformat)|Distruttore. Chiamato quando viene eliminato un oggetto formato di testo D2D.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DTextFormat::Create](#create)|Crea un CD2DTextFormat. (Esegue l'override di [CD2DResource:: Create](../../mfc/reference/cd2dresource-class.md#create).)|  
|[CD2DTextFormat::Destroy](#destroy)|Elimina un oggetto CD2DTextFormat. (Esegue l'override di [CD2DResource:: Destroy](../../mfc/reference/cd2dresource-class.md#destroy).)|  
|[CD2DTextFormat::Get](#get)|Restituisce l'interfaccia IDWriteTextFormat|  
|[CD2DTextFormat::GetFontFamilyName](#getfontfamilyname)|Ottiene una copia del nome di famiglia del tipo di carattere.|  
|[CD2DTextFormat::GetLocaleName](#getlocalename)|Ottiene una copia del nome delle impostazioni locali.|  
|[CD2DTextFormat::IsValid](#isvalid)|Controlla la validità della risorsa (esegue l'override di [CD2DResource:: IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|  
|[CD2DTextFormat::ReCreate](#recreate)|Consente di ricreare un CD2DTextFormat. (Esegue l'override di [CD2DResource:: ReCreate](../../mfc/reference/cd2dresource-class.md#recreate).)|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DTextFormat::operator IDWriteTextFormat *](#operator_idwritetextformat_star)|Restituisce l'interfaccia IDWriteTextFormat|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DTextFormat::m_pTextFormat](#m_ptextformat)|Un puntatore a un oggetto IDWriteTextFormat.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DTextFormat](../../mfc/reference/cd2dtextformat-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrendertarget. h  
  
##  <a name="_dtorcd2dtextformat"></a>CD2DTextFormat:: ~ CD2DTextFormat  
 Distruttore. Chiamato quando viene eliminato un oggetto formato di testo D2D.  
  
```  
virtual ~CD2DTextFormat();
```  
  
##  <a name="cd2dtextformat"></a>CD2DTextFormat::CD2DTextFormat  
 Costruisce un oggetto CD2DTextFormat.  
  
```  
CD2DTextFormat(
    CRenderTarget* pParentTarget,  
    const CString& strFontFamilyName,  
    FLOAT fontSize,  
    DWRITE_FONT_WEIGHT fontWeight = DWRITE_FONT_WEIGHT_NORMAL,  
    DWRITE_FONT_STYLE fontStyle = DWRITE_FONT_STYLE_NORMAL,  
    DWRITE_FONT_STRETCH fontStretch = DWRITE_FONT_STRETCH_NORMAL,  
    const CString& strFontLocale = _T(""),  
    IDWriteFontCollection* pFontCollection = NULL,  
    BOOL bAutoDestroy = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `pParentTarget`  
 Puntatore alla destinazione di rendering.  
  
 `strFontFamilyName`  
 Un oggetto CString che contiene il nome della famiglia di caratteri.  
  
 `fontSize`  
 La dimensione logica del tipo di carattere nelle unità DIP ("device-independent pixel"). Un DIP è pari a 1/96 di pollice.  
  
 `fontWeight`  
 Un valore che indica lo spessore del carattere per l'oggetto testo.  
  
 `fontStyle`  
 Un valore che indica lo stile del carattere per l'oggetto testo.  
  
 `fontStretch`  
 Un valore che indica l'estensione del carattere per l'oggetto testo.  
  
 `strFontLocale`  
 Un oggetto CString che contiene il nome delle impostazioni locali.  
  
 `pFontCollection`  
 Un puntatore a un oggetto raccolta di tipi di carattere. Quando è NULL, indica la raccolta di tipi di carattere di sistema.  
  
 `bAutoDestroy`  
 Indica che l'oggetto verrà eliminata dal proprietario (pParentTarget).  
  
##  <a name="create"></a>CD2DTextFormat::Create  
 Crea un CD2DTextFormat.  
  
```  
virtual HRESULT Create(CRenderTarget* */);
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.  
  
##  <a name="destroy"></a>CD2DTextFormat::Destroy  
 Elimina un oggetto CD2DTextFormat.  
  
```  
virtual void Destroy();
```  
  
##  <a name="get"></a>CD2DTextFormat::Get  
 Restituisce l'interfaccia IDWriteTextFormat  
  
```  
IDWriteTextFormat* Get();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia IDWriteTextFormat o NULL se l'oggetto non è ancora inizializzato.  
  
##  <a name="getfontfamilyname"></a>CD2DTextFormat::GetFontFamilyName  
 Ottiene una copia del nome di famiglia del tipo di carattere.  
  
```  
CString GetFontFamilyName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto CString che contiene il nome della famiglia corrente.  
  
##  <a name="getlocalename"></a>CD2DTextFormat::GetLocaleName  
 Ottiene una copia del nome delle impostazioni locali.  
  
```  
CString GetLocaleName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto CString che contiene il nome delle impostazioni locali correnti.  
  
##  <a name="isvalid"></a>CD2DTextFormat::IsValid  
 Verifica la validità della risorsa  
  
```  
virtual BOOL IsValid() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la risorsa è valido. in caso contrario FALSE.  
  
##  <a name="m_ptextformat"></a>CD2DTextFormat::m_pTextFormat  
 Un puntatore a un oggetto IDWriteTextFormat.  
  
```  
IDWriteTextFormat* m_pTextFormat;  
```  
  
##  <a name="operator_idwritetextformat_star"></a>CD2DTextFormat::operator IDWriteTextFormat *  
 Restituisce l'interfaccia IDWriteTextFormat  
  
```  
operator IDWriteTextFormat*();
```   
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia IDWriteTextFormat o NULL se l'oggetto non è ancora inizializzato.  
  
##  <a name="recreate"></a>CD2DTextFormat::ReCreate  
 Consente di ricreare un CD2DTextFormat.  
  
```  
virtual HRESULT ReCreate(CRenderTarget* */);
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

