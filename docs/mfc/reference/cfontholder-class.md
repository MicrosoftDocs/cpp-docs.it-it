---
title: Classe CFontHolder | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CFontHolder
- AFXCTL/CFontHolder
- AFXCTL/CFontHolder::CFontHolder
- AFXCTL/CFontHolder::GetDisplayString
- AFXCTL/CFontHolder::GetFontDispatch
- AFXCTL/CFontHolder::GetFontHandle
- AFXCTL/CFontHolder::InitializeFont
- AFXCTL/CFontHolder::QueryTextMetrics
- AFXCTL/CFontHolder::ReleaseFont
- AFXCTL/CFontHolder::Select
- AFXCTL/CFontHolder::SetFont
- AFXCTL/CFontHolder::m_pFont
dev_langs:
- C++
helpviewer_keywords:
- CFontHolder [MFC], CFontHolder
- CFontHolder [MFC], GetDisplayString
- CFontHolder [MFC], GetFontDispatch
- CFontHolder [MFC], GetFontHandle
- CFontHolder [MFC], InitializeFont
- CFontHolder [MFC], QueryTextMetrics
- CFontHolder [MFC], ReleaseFont
- CFontHolder [MFC], Select
- CFontHolder [MFC], SetFont
- CFontHolder [MFC], m_pFont
ms.assetid: 728ab472-0c97-440d-889f-1324c6e1b6b8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d5cb28b738822b3e35aa840c731eb11bc2c2b83d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cfontholder-class"></a>Classe CFontHolder
Implementa la proprietà predefinita e incapsula la funzionalità di un oggetto tipo di carattere di Windows e l'interfaccia `IFont` .  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CFontHolder  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFontHolder::CFontHolder](#cfontholder)|Costruisce un oggetto `CFontHolder`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFontHolder::GetDisplayString](#getdisplaystring)|Recupera la stringa visualizzata nel browser delle proprietà di un contenitore.|  
|[CFontHolder::GetFontDispatch](#getfontdispatch)|Restituisce il tipo di carattere `IDispatch` interfaccia.|  
|[CFontHolder::GetFontHandle](#getfonthandle)|Restituisce un handle per un tipo di carattere Windows.|  
|[CFontHolder::InitializeFont](#initializefont)|Inizializza un `CFontHolder` oggetto.|  
|[CFontHolder::QueryTextMetrics](#querytextmetrics)|Recupera le informazioni per il tipo di carattere correlato.|  
|[CFontHolder::ReleaseFont](#releasefont)|Disconnette il `CFontHolder` dall'oggetto di `IFont` e `IFontNotification` interfacce.|  
|[CFontHolder::Select](#select)|Consente di selezionare una risorsa di tipo di carattere in un contesto di dispositivo.|  
|[CFontHolder::SetFont](#setfont)|Si connette il `CFontHolder` l'oggetto in un `IFont` interfaccia.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFontHolder::m_pFont](#m_pfont)|Un puntatore al `CFontHolder` dell'oggetto `IFont` interfaccia.|  
  
## <a name="remarks"></a>Note  
 `CFontHolder` non dispone di una classe basa.  
  
 Utilizzare questa classe per implementare le proprietà di tipo di carattere personalizzato per il controllo. Per informazioni sulla creazione di tali proprietà, vedere l'articolo [controlli ActiveX: utilizzo dei tipi di carattere](../../mfc/mfc-activex-controls-using-fonts.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CFontHolder`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxctl. h  
  
##  <a name="cfontholder"></a>  CFontHolder::CFontHolder  
 Costruisce un oggetto `CFontHolder`.  
  
```  
explicit CFontHolder(LPPROPERTYNOTIFYSINK pNotify);
```  
  
### <a name="parameters"></a>Parametri  
 *pNotify*  
 Puntatore a un tipo di carattere `IPropertyNotifySink` interfaccia.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare `InitializeFont` per inizializzare l'oggetto risulta prima di utilizzarlo.  
  
##  <a name="getdisplaystring"></a>  CFontHolder::GetDisplayString  
 Recupera una stringa che può essere visualizzata nel Visualizzatore di proprietà di un contenitore.  
  
```  
BOOL GetDisplayString(CString& strValue);
```  
  
### <a name="parameters"></a>Parametri  
 `strValue`  
 Riferimento al [CString](../../atl-mfc-shared/reference/cstringt-class.md) che è per contenere la stringa di visualizzazione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la stringa viene recuperata correttamente. in caso contrario 0.  
  
##  <a name="getfontdispatch"></a>  CFontHolder::GetFontDispatch  
 Chiamare questa funzione per recuperare un puntatore a interfaccia dispatch del tipo di carattere.  
  
```  
LPFONTDISP GetFontDispatch();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al `CFontHolder` dell'oggetto **IFontDisp** interfaccia. Si noti che la funzione che chiama `GetFontDispatch` deve chiamare `IUnknown::Release` su questo puntatore a interfaccia dopo utilizzato.  
  
### <a name="remarks"></a>Note  
 Chiamare `InitializeFont` prima di chiamare `GetFontDispatch`.  
  
##  <a name="getfonthandle"></a>  CFontHolder::GetFontHandle  
 Chiamare questa funzione per ottenere un handle per un tipo di carattere Windows.  
  
```  
HFONT GetFontHandle();

 
HFONT GetFontHandle(
    long cyLogical,  
    long cyHimetric);
```  
  
### <a name="parameters"></a>Parametri  
 `cyLogical`  
 Altezza, in unità logiche, del rettangolo in cui viene disegnato il controllo.  
  
 `cyHimetric`  
 Altezza, in `MM_HIMETRIC` unità, del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Un handle all'oggetto di tipo di carattere. in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Il rapporto tra `cyLogical` e `cyHimetric` viene usato per calcolare le dimensioni di visualizzazione corretta, in unità logiche, per il punto di dimensione espressa in `MM_HIMETRIC` unità:  
  
 Dimensioni di visualizzazione = ( `cyLogical`  /  `cyHimetric`) X dimensione carattere  
  
 La versione senza parametri restituisce un handle a un carattere di dimensioni corrette per la schermata.  
  
##  <a name="initializefont"></a>  CFontHolder::InitializeFont  
 Inizializza un `CFontHolder` oggetto.  
  
```  
void InitializeFont(
    const FONTDESC* pFontDesc = NULL,  
    LPDISPATCH pFontDispAmbient = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pFontDesc`  
 Puntatore a una struttura di descrizione del tipo di carattere ( [FONTDESC](http://msdn.microsoft.com/library/windows/desktop/ms692782)) che specifica le caratteristiche del tipo di carattere.  
  
 `pFontDispAmbient`  
 Puntatore a una proprietà di tipo di carattere ambiente del contenitore.  
  
### <a name="remarks"></a>Note  
 Se `pFontDispAmbient` non **NULL**, il `CFontHolder` un clone dell'oggetto è connesso il `IFont` interfaccia utilizzata da proprietà di tipo di carattere ambiente del contenitore.  
  
 Se `pFontDispAmbient` è **NULL**, viene creato un nuovo oggetto Font uno dalla descrizione del tipo di carattere a cui puntata `pFontDesc` oppure, se `pFontDesc` è **NULL**, da una descrizione predefinita.  
  
 Chiamare questa funzione dopo la costruzione di un `CFontHolder` oggetto.  
  
##  <a name="m_pfont"></a>  CFontHolder::m_pFont  
 Un puntatore al `CFontHolder` dell'oggetto `IFont` interfaccia.  
  
```  
LPFONT m_pFont;  
```  
  
##  <a name="querytextmetrics"></a>  CFontHolder::QueryTextMetrics  
 Recupera le informazioni sul tipo di carattere fisica rappresentata dal `CFontHolder` oggetto.  
  
```  
void QueryTextMetrics(LPTEXTMETRIC lptm);
```  
  
### <a name="parameters"></a>Parametri  
 `lptm`  
 Un puntatore a un [TEXTMETRIC](http://msdn.microsoft.com/library/windows/desktop/dd145132) struttura che riceverà le informazioni.  
  
##  <a name="releasefont"></a>  CFontHolder::ReleaseFont  
 Questa funzione consente di disconnettere il `CFontHolder` oggetto dal relativo `IFont` interfaccia.  
  
```  
void ReleaseFont();
```  
  
##  <a name="select"></a>  CFontHolder::Select  
 Chiamare questa funzione per selezionare i tipi di carattere del controllo nel contesto di dispositivo specificato.  
  
```  
CFont* Select(
    CDC* pDC,  
    long cyLogical,  
    long cyHimetric);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Contesto di dispositivo in cui è stato selezionato il tipo di carattere.  
  
 `cyLogical`  
 Altezza, in unità logiche, del rettangolo in cui viene disegnato il controllo.  
  
 `cyHimetric`  
 Altezza, in `MM_HIMETRIC` unità, del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al tipo di carattere da sostituire.  
  
### <a name="remarks"></a>Note  
 Vedere [GetFontHandle](#getfonthandle) per una discussione sul `cyLogical` e `cyHimetric` parametri.  
  
##  <a name="setfont"></a>  CFontHolder::SetFont  
 Rilascia qualsiasi tipo di carattere esistente e si connette il `CFontHolder` l'oggetto in un `IFont` interfaccia.  
  
```  
void SetFont(LPFONT pNewFont);
```  
  
### <a name="parameters"></a>Parametri  
 *pNewFont*  
 Puntatore al nuovo `IFont` interfaccia.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CPropExchange](../../mfc/reference/cpropexchange-class.md)
