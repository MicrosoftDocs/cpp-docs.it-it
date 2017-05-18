---
title: Classe CD2DTextLayout | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CD2DTextLayout
- AFXRENDERTARGET/CD2DTextLayout
- AFXRENDERTARGET/CD2DTextLayout::CD2DTextLayout
- AFXRENDERTARGET/CD2DTextLayout::Create
- AFXRENDERTARGET/CD2DTextLayout::Destroy
- AFXRENDERTARGET/CD2DTextLayout::Get
- AFXRENDERTARGET/CD2DTextLayout::GetFontFamilyName
- AFXRENDERTARGET/CD2DTextLayout::GetLocaleName
- AFXRENDERTARGET/CD2DTextLayout::IsValid
- AFXRENDERTARGET/CD2DTextLayout::ReCreate
- AFXRENDERTARGET/CD2DTextLayout::SetFontFamilyName
- AFXRENDERTARGET/CD2DTextLayout::SetLocaleName
- AFXRENDERTARGET/CD2DTextLayout::m_pTextLayout
dev_langs:
- C++
helpviewer_keywords:
- CD2DTextLayout class
ms.assetid: 724bd13c-f2ef-4e55-a775-8cb04b7b7908
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
ms.openlocfilehash: b9d3873058613041042857b7edf213d207f058c5
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cd2dtextlayout-class"></a>Classe CD2DTextLayout
Un wrapper per IDWriteTextLayout.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CD2DTextLayout : public CD2DResource;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DTextLayout::CD2DTextLayout](#cd2dtextlayout)|Costruisce un oggetto CD2DTextLayout.|  
|[CD2DTextLayout:: ~ CD2DTextLayout](#cd2dtextlayout__~cd2dtextlayout)|Distruttore. Chiamato quando viene eliminato un oggetto di layout di testo D2D.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DTextLayout::Create](#create)|Crea un CD2DTextLayout. (Esegue l'override di [CD2DResource:: Create](../../mfc/reference/cd2dresource-class.md#create).)|  
|[CD2DTextLayout::Destroy](#destroy)|Elimina un oggetto CD2DTextLayout. (Esegue l'override di [CD2DResource:: Destroy](../../mfc/reference/cd2dresource-class.md#destroy).)|  
|[CD2DTextLayout::Get](#get)|Restituisce l'interfaccia IDWriteTextLayout|  
|[CD2DTextLayout::GetFontFamilyName](#getfontfamilyname)|Copia il nome di famiglia del tipo di carattere del testo nella posizione specificata.|  
|[CD2DTextLayout::GetLocaleName](#getlocalename)|Ottiene il nome delle impostazioni locali del testo nella posizione specificata.|  
|[CD2DTextLayout::IsValid](#isvalid)|Controlla la validità della risorsa (esegue l'override di [CD2DResource:: IsValid](../../mfc/reference/cd2dresource-class.md#isvalid).)|  
|[CD2DTextLayout::ReCreate](#recreate)|Consente di ricreare un CD2DTextLayout. (Esegue l'override di [CD2DResource:: ReCreate](../../mfc/reference/cd2dresource-class.md#recreate).)|  
|[CD2DTextLayout::SetFontFamilyName](#setfontfamilyname)|Nome della famiglia di caratteri con terminazione null set per il testo all'interno di un intervallo di testo specificato|  
|[CD2DTextLayout::SetLocaleName](#setlocalename)|Imposta il nome delle impostazioni locali per il testo all'interno di un intervallo di testo specificato|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DTextLayout::operator IDWriteTextLayout *](#operator_idwritetextlayout_star)|Restituisce l'interfaccia IDWriteTextLayout|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CD2DTextLayout::m_pTextLayout](#m_ptextlayout)|Un puntatore a un oggetto IDWriteTextLayout.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DTextLayout](../../mfc/reference/cd2dtextlayout-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxrendertarget. h  
  
##  <a name="_dtorcd2dtextlayout"></a>CD2DTextLayout:: ~ CD2DTextLayout  
 Distruttore. Chiamato quando viene eliminato un oggetto di layout di testo D2D.  
  
```  
virtual ~CD2DTextLayout();
```  
  
##  <a name="cd2dtextlayout"></a>CD2DTextLayout::CD2DTextLayout  
 Costruisce un oggetto CD2DTextLayout.  
  
```  
CD2DTextLayout(
    CRenderTarget* pParentTarget,  
    const CString& strText,  
    CD2DTextFormat& textFormat,  
    const CD2DSizeF& sizeMax,  
    BOOL bAutoDestroy = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `pParentTarget`  
 Puntatore alla destinazione di rendering.  
  
 `strText`  
 Un oggetto CString che contiene la stringa per creare un nuovo oggetto CD2DTextLayout.  
  
 `textFormat`  
 Un oggetto CString che contiene il formato da applicare alla stringa.  
  
 `sizeMax`  
 Le dimensioni della finestra di layout.  
  
 `bAutoDestroy`  
 Indica che l'oggetto verrà eliminata dal proprietario (pParentTarget).  
  
##  <a name="create"></a>CD2DTextLayout::Create  
 Crea un CD2DTextLayout.  
  
```  
virtual HRESULT Create(CRenderTarget* */);
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.  
  
##  <a name="destroy"></a>CD2DTextLayout::Destroy  
 Elimina un oggetto CD2DTextLayout.  
  
```  
virtual void Destroy();
```  
  
##  <a name="get"></a>CD2DTextLayout::Get  
 Restituisce l'interfaccia IDWriteTextLayout  
  
```  
IDWriteTextLayout* Get();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia IDWriteTextLayout o NULL se l'oggetto non è ancora inizializzato.  
  
##  <a name="getfontfamilyname"></a>CD2DTextLayout::GetFontFamilyName  
 Copia il nome di famiglia del tipo di carattere del testo nella posizione specificata.  
  
```  
CString GetFontFamilyName(
    UINT32 currentPosition,  
    DWRITE_TEXT_RANGE* textRange = NULL) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `currentPosition`  
 La posizione del testo da esaminare.  
  
 `textRange`  
 L'intervallo di testo che presenta la stessa formattazione del testo nella posizione specificata da currentPosition. Ciò significa che l'esecuzione ha la stessa formattazione della posizione specificata, ad esempio il nome della famiglia.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto CString che contiene il nome della famiglia corrente.  
  
##  <a name="getlocalename"></a>CD2DTextLayout::GetLocaleName  
 Ottiene il nome delle impostazioni locali del testo nella posizione specificata.  
  
```  
CString GetLocaleName(
    UINT32 currentPosition,  
    DWRITE_TEXT_RANGE* textRange = NULL) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `currentPosition`  
 Posizione del testo da analizzare.  
  
 `textRange`  
 L'intervallo di testo che presenta la stessa formattazione del testo nella posizione specificata da currentPosition. Ciò significa che l'esecuzione ha la stessa formattazione della posizione specificata, ad esempio il nome delle impostazioni locali.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto CString che contiene il nome delle impostazioni locali correnti.  
  
##  <a name="isvalid"></a>CD2DTextLayout::IsValid  
 Verifica la validità della risorsa  
  
```  
virtual BOOL IsValid() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la risorsa è valido. in caso contrario FALSE.  
  
##  <a name="m_ptextlayout"></a>CD2DTextLayout::m_pTextLayout  
 Un puntatore a un oggetto IDWriteTextLayout.  
  
```  
IDWriteTextLayout* m_pTextLayout;  
```  
  
##  <a name="operator_idwritetextlayout_star"></a>CD2DTextLayout::operator IDWriteTextLayout *  
 Restituisce l'interfaccia IDWriteTextLayout  
  
```  
operator IDWriteTextLayout*();
```   
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un'interfaccia IDWriteTextLayout o NULL se l'oggetto non è ancora inizializzato.  
  
##  <a name="recreate"></a>CD2DTextLayout::ReCreate  
 Consente di ricreare un CD2DTextLayout.  
  
```  
virtual HRESULT ReCreate(CRenderTarget* */);
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.  
  
##  <a name="setfontfamilyname"></a>CD2DTextLayout::SetFontFamilyName  
 Nome della famiglia di caratteri con terminazione null set per il testo all'interno di un intervallo di testo specificato  
  
```  
BOOL SetFontFamilyName(
    LPCWSTR pwzFontFamilyName,  
    DWRITE_TEXT_RANGE textRange);
```  
  
### <a name="parameters"></a>Parametri  
 `pwzFontFamilyName`  
 Il nome della famiglia che riguardano l'intera stringa di testo all'interno dell'intervallo specificato da textRange  
  
 `textRange`  
 Intervallo di testo a cui si applica questa modifica  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE  
  
##  <a name="setlocalename"></a>CD2DTextLayout::SetLocaleName  
 Imposta il nome delle impostazioni locali per il testo all'interno di un intervallo di testo specificato  
  
```  
BOOL SetLocaleName(
    LPCWSTR pwzLocaleName,  
    DWRITE_TEXT_RANGE textRange);
```  
  
### <a name="parameters"></a>Parametri  
 `pwzLocaleName`  
 Una stringa del nome delle impostazioni locali con terminazione null  
  
 `textRange`  
 Intervallo di testo a cui si applica questa modifica  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, restituisce TRUE. In caso contrario, restituisce FALSE  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

