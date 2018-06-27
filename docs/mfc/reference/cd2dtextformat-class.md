---
title: Classe CD2DTextFormat | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
- CD2DTextFormat [MFC], CD2DTextFormat
- CD2DTextFormat [MFC], Create
- CD2DTextFormat [MFC], Destroy
- CD2DTextFormat [MFC], Get
- CD2DTextFormat [MFC], GetFontFamilyName
- CD2DTextFormat [MFC], GetLocaleName
- CD2DTextFormat [MFC], IsValid
- CD2DTextFormat [MFC], ReCreate
- CD2DTextFormat [MFC], m_pTextFormat
ms.assetid: db194cec-9dae-4644-ab84-7c43b7164117
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 017267a2b633ee8e0a9c23149fe9d3cb7a8be980
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36955469"
---
# <a name="cd2dtextformat-class"></a>Classe CD2DTextFormat
Wrapper per IDWriteTextFormat.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CD2DTextFormat : public CD2DResource;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DTextFormat::CD2DTextFormat](#cd2dtextformat)|Costruisce un oggetto CD2DTextFormat.|  
|[CD2DTextFormat:: ~ CD2DTextFormat](#cd2dtextformat__~cd2dtextformat)|Distruttore. Chiamata eseguita quando viene eliminata definitivamente un oggetto formato di testo D2D.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DTextFormat::Create](#create)|Crea un CD2DTextFormat. (Esegue l'override [CD2DResource:: Create](../../mfc/reference/cd2dresource-class.md#create).)|  
|[CD2DTextFormat::Destroy](#destroy)|Elimina un oggetto CD2DTextFormat. (Esegue l'override [CD2DResource:: Destroy](../../mfc/reference/cd2dresource-class.md#destroy).)|  
|[CD2DTextFormat::Get](#get)|Restituisce l'interfaccia IDWriteTextFormat|  
|[CD2DTextFormat::GetFontFamilyName](#getfontfamilyname)|Ottiene una copia del nome di famiglia del tipo di carattere.|  
|[CD2DTextFormat::GetLocaleName](#getlocalename)|Ottiene una copia del nome delle impostazioni locali.|  
|[CD2DTextFormat::IsValid](#isvalid)|Controlla la validità della risorsa (esegue l'override [CD2DResource:: IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|  
|[CD2DTextFormat::ReCreate](#recreate)|Ricrea un CD2DTextFormat. (Esegue l'override [CD2DResource:: ReCreate](../../mfc/reference/cd2dresource-class.md#recreate).)|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DTextFormat::operator IDWriteTextFormat *](#operator_idwritetextformat_star)|Restituisce l'interfaccia IDWriteTextFormat|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CD2DTextFormat::m_pTextFormat](#m_ptextformat)|Un puntatore a un oggetto IDWriteTextFormat.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DTextFormat](../../mfc/reference/cd2dtextformat-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrendertarget. h  
  
##  <a name="_dtorcd2dtextformat"></a>  CD2DTextFormat:: ~ CD2DTextFormat  
 Distruttore. Chiamata eseguita quando viene eliminata definitivamente un oggetto formato di testo D2D.  
  
```  
virtual ~CD2DTextFormat();
```  
  
##  <a name="cd2dtextformat"></a>  CD2DTextFormat::CD2DTextFormat  
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
 *pParentTarget*  
 Puntatore alla destinazione di rendering.  
  
 *strFontFamilyName*  
 Un oggetto CString che contiene il nome della famiglia di caratteri.  
  
 *FontSize*  
 La dimensione logica del tipo di carattere in unità DIP ("device independent pixel). Un DIP è pari a 1/96 di pollice.  
  
 *fontWeight*  
 Un valore che indica lo spessore del carattere per l'oggetto testo.  
  
 *fontStyle*  
 Un valore che indica lo stile del carattere per l'oggetto testo.  
  
 *fontStretch*  
 Un valore che indica l'estensione del carattere per l'oggetto testo.  
  
 *strFontLocale*  
 Un oggetto CString che contiene il nome delle impostazioni locali.  
  
 *pFontCollection*  
 Un puntatore a un oggetto di raccolta del tipo di carattere. Quando è NULL, indica la raccolta di tipo di carattere del sistema.  
  
 *flag bAutoDestroy*  
 Indica che l'oggetto verrà eliminato dal proprietario (pParentTarget).  
  
##  <a name="create"></a>  CD2DTextFormat::Create  
 Crea un CD2DTextFormat.  
  
```  
virtual HRESULT Create(CRenderTarget* */);
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituirà un codice di errore HRESULT.  
  
##  <a name="destroy"></a>  CD2DTextFormat::Destroy  
 Elimina un oggetto CD2DTextFormat.  
  
```  
virtual void Destroy();
```  
  
##  <a name="get"></a>  CD2DTextFormat::Get  
 Restituisce l'interfaccia IDWriteTextFormat  
  
```  
IDWriteTextFormat* Get();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia IDWriteTextFormat o NULL se l'oggetto non è ancora inizializzato.  
  
##  <a name="getfontfamilyname"></a>  CD2DTextFormat::GetFontFamilyName  
 Ottiene una copia del nome di famiglia del tipo di carattere.  
  
```  
CString GetFontFamilyName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto CString che contiene il nome di famiglia del tipo di carattere corrente.  
  
##  <a name="getlocalename"></a>  CD2DTextFormat::GetLocaleName  
 Ottiene una copia del nome delle impostazioni locali.  
  
```  
CString GetLocaleName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto CString che contiene il nome delle impostazioni locali correnti.  
  
##  <a name="isvalid"></a>  CD2DTextFormat::IsValid  
 Verifica la validità della risorsa  
  
```  
virtual BOOL IsValid() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la risorsa è valido. in caso contrario, FALSE.  
  
##  <a name="m_ptextformat"></a>  CD2DTextFormat::m_pTextFormat  
 Un puntatore a un oggetto IDWriteTextFormat.  
  
```  
IDWriteTextFormat* m_pTextFormat;  
```  
  
##  <a name="operator_idwritetextformat_star"></a>  CD2DTextFormat::operator IDWriteTextFormat *  
 Restituisce l'interfaccia IDWriteTextFormat  
  
```  
operator IDWriteTextFormat*();
```   
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia IDWriteTextFormat o NULL se l'oggetto non è ancora inizializzato.  
  
##  <a name="recreate"></a>  CD2DTextFormat::ReCreate  
 Ricrea un CD2DTextFormat.  
  
```  
virtual HRESULT ReCreate(CRenderTarget* */);
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituirà un codice di errore HRESULT.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)
