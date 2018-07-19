---
title: Classe CPictureHolder | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CPictureHolder
- AFXCTL/CPictureHolder
- AFXCTL/CPictureHolder::CPictureHolder
- AFXCTL/CPictureHolder::CreateEmpty
- AFXCTL/CPictureHolder::CreateFromBitmap
- AFXCTL/CPictureHolder::CreateFromIcon
- AFXCTL/CPictureHolder::CreateFromMetafile
- AFXCTL/CPictureHolder::GetDisplayString
- AFXCTL/CPictureHolder::GetPictureDispatch
- AFXCTL/CPictureHolder::GetType
- AFXCTL/CPictureHolder::Render
- AFXCTL/CPictureHolder::SetPictureDispatch
- AFXCTL/CPictureHolder::m_pPict
dev_langs:
- C++
helpviewer_keywords:
- CPictureHolder [MFC], CPictureHolder
- CPictureHolder [MFC], CreateEmpty
- CPictureHolder [MFC], CreateFromBitmap
- CPictureHolder [MFC], CreateFromIcon
- CPictureHolder [MFC], CreateFromMetafile
- CPictureHolder [MFC], GetDisplayString
- CPictureHolder [MFC], GetPictureDispatch
- CPictureHolder [MFC], GetType
- CPictureHolder [MFC], Render
- CPictureHolder [MFC], SetPictureDispatch
- CPictureHolder [MFC], m_pPict
ms.assetid: a4f59775-704a-41dd-b5bd-2e531c95127a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e00a1da7aeffd07e19b58437bda2c8631af9158a
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/05/2018
ms.locfileid: "37852861"
---
# <a name="cpictureholder-class"></a>Classe CPictureHolder
Implementa una proprietà immagine, che consente all'utente di visualizzare un'immagine nel controllo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CPictureHolder  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPictureHolder::CPictureHolder](#cpictureholder)|Costruisce un oggetto `CPictureHolder`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPictureHolder::CreateEmpty](#createempty)|Crea un oggetto `CPictureHolder` vuoto.|  
|[CPictureHolder::CreateFromBitmap](#createfrombitmap)|Crea un `CPictureHolder` oggetto da una bitmap.|  
|[CPictureHolder::CreateFromIcon](#createfromicon)|Crea un `CPictureHolder` oggetti da un'icona.|  
|[CPictureHolder::CreateFromMetafile](#createfrommetafile)|Crea un `CPictureHolder` oggetto da un metafile.|  
|[CPictureHolder::GetDisplayString](#getdisplaystring)|Recupera la stringa visualizzata nel Visualizzatore di proprietà di un controllo contenitore.|  
|[CPictureHolder::GetPictureDispatch](#getpicturedispatch)|Restituisce il `CPictureHolder` dell'oggetto `IDispatch` interfaccia.|  
|[CPictureHolder::GetType](#gettype)|Indica se il `CPictureHolder` oggetto è una bitmap, metafile o icona.|  
|[CPictureHolder:: Render](#render)|Esegue il rendering dell'immagine.|  
|[CPictureHolder::SetPictureDispatch](#setpicturedispatch)|Imposta il `CPictureHolder` dell'oggetto `IDispatch` interfaccia.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPictureHolder::m_pPict](#m_ppict)|Puntatore a un oggetto immagine.|  
  
## <a name="remarks"></a>Note  
 `CPictureHolder` non è una classe di base.  
  
 Con la proprietà immagine predefinita, lo sviluppatore può specificare una bitmap, icona o metafile per la visualizzazione.  
  
 Per informazioni sulla creazione di proprietà immagine personalizzate, vedere l'articolo [controlli ActiveX MFC: utilizzo di immagini in un controllo ActiveX](../../mfc/mfc-activex-controls-using-pictures-in-an-activex-control.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CPictureHolder`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxctl. h  
  
##  <a name="cpictureholder"></a>  CPictureHolder::CPictureHolder  
 Costruisce un oggetto `CPictureHolder`.  
  
```  
CPictureHolder();
```  
  
##  <a name="createempty"></a>  CPictureHolder::CreateEmpty  
 Crea un oggetto vuoto `CPictureHolder` dell'oggetto e lo connette a un `IPicture` interfaccia.  
  
```  
BOOL CreateEmpty();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'oggetto è stato creato; in caso contrario 0.  
  
##  <a name="createfrombitmap"></a>  CPictureHolder::CreateFromBitmap  
 Usa un'immagine bitmap per inizializzare l'oggetto immagine in un `CPictureHolder`.  
  
```  
BOOL CreateFromBitmap(
    UINT idResource);

 
BOOL CreateFromBitmap(
    CBitmap* pBitmap,  
    CPalette* pPal = NULL,  
    BOOL bTransferOwnership = TRUE);

 
BOOL CreateFromBitmap(
    HBITMAP hbm,  
    HPALETTE hpal = NULL,  
    BOOL bTransferOwnership = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 *idResource*  
 ID risorsa della risorsa bitmap.  
  
 *pBitmap*  
 Puntatore a un [CBitmap](../../mfc/reference/cbitmap-class.md) oggetto.  
  
 *pPal*  
 Puntatore a un [CPalette](../../mfc/reference/cpalette-class.md) oggetto.  
  
 *bTransferOwnership*  
 Indica se l'oggetto immagine assumerà la proprietà degli oggetti bitmap e tavolozza.  
  
 *hbm*  
 Handle per la bitmap dal quale il `CPictureHolder` oggetto viene creato.  
  
 *hpal*  
 Handle per la tavolozza utilizzata per il rendering della bitmap.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'oggetto è stato creato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se *bTransferOwnership* è TRUE, il chiamante non deve utilizzare la mappa di bit o oggetto tavolozza in alcun modo dopo questa chiamata restituisce. Se *bTransferOwnership* è FALSE, il chiamante è responsabile di garantire che gli oggetti bitmap e tavolozza rimangano validi per la durata dell'oggetto immagine.  
  
##  <a name="createfromicon"></a>  CPictureHolder::CreateFromIcon  
 Utilizza un'icona per inizializzare l'oggetto immagine in un `CPictureHolder`.  
  
```  
BOOL CreateFromIcon(
    UINT idResource);

 
BOOL CreateFromIcon(
    HICON hIcon,  
    BOOL bTransferOwnership = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 *idResource*  
 ID risorsa della risorsa bitmap.  
  
 *hIcon*  
 Handle per l'icona da cui il `CPictureHolder` oggetto viene creato.  
  
 *bTransferOwnership*  
 Indica se l'oggetto immagine assumerà la proprietà dell'oggetto icona.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'oggetto è stato creato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se *bTransferOwnership* è TRUE, il chiamante non deve utilizzare l'oggetto dell'icona in alcun modo dopo questa chiamata restituisce. Se *bTransferOwnership* è FALSE, il chiamante è responsabile di garantire che l'oggetto icon rimanga valido per la durata dell'oggetto immagine.  
  
##  <a name="createfrommetafile"></a>  CPictureHolder::CreateFromMetafile  
 Usa un metafile per inizializzare l'oggetto immagine in un `CPictureHolder`.  
  
```  
BOOL CreateFromMetafile(
    HMETAFILE hmf,  
    int xExt,  
    int yExt,  
    BOOL bTransferOwnership = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 *hmf*  
 Handle per il metafile utilizzato per creare il `CPictureHolder` oggetto.  
  
 *xExt*  
 X extent dell'immagine.  
  
 *yExt*  
 Misura Y dell'immagine.  
  
 *bTransferOwnership*  
 Indica se l'oggetto immagine assumerà la proprietà dell'oggetto metafile.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'oggetto è stato creato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se *bTransferOwnership* è TRUE, il chiamante non deve utilizzare l'oggetto metafile in alcun modo dopo questa chiamata restituisce. Se *bTransferOwnership* è FALSE, il chiamante è responsabile di garantire che l'oggetto metafile rimanga valido per la durata dell'oggetto immagine.  
  
##  <a name="getdisplaystring"></a>  CPictureHolder::GetDisplayString  
 Recupera la stringa che viene visualizzata nel Visualizzatore di proprietà del contenitore.  
  
```  
BOOL GetDisplayString(CString& strValue);
```  
  
### <a name="parameters"></a>Parametri  
 *strValue*  
 Riferimento per la [CString](../../atl-mfc-shared/reference/cstringt-class.md) che deve contenere la stringa da visualizzare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la stringa viene recuperata correttamente. in caso contrario 0.  
  
##  <a name="getpicturedispatch"></a>  CPictureHolder::GetPictureDispatch  
 Questa funzione restituisce un puntatore per il `CPictureHolder` dell'oggetto `IPictureDisp` interfaccia.  
  
```  
LPPICTUREDISP GetPictureDispatch();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il `CPictureHolder` dell'oggetto `IPictureDisp` interfaccia.  
  
### <a name="remarks"></a>Note  
 Il chiamante deve chiamare `Release` su questo puntatore quando il processo è completato.  
  
##  <a name="gettype"></a>  CPictureHolder::GetType  
 Indica se l'immagine è una bitmap, metafile o icona.  
  
```  
short GetType();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che indica il tipo di immagine. I valori possibili e i relativi significati sono i seguenti:  
  
|Valore|Significato|  
|-----------|-------------|  
|PICTYPE_UNINITIALIZED|`CPictureHolder` oggetto è unititialized.|  
|PICTYPE_NONE|`CPictureHolder` l'oggetto è vuoto.|  
|PICTYPE_BITMAP|Immagine è una bitmap.|  
|PICTYPE_METAFILE|L'immagine è un metafile.|  
|PICTYPE_ICON|Immagine è presente un'icona.|  
  
##  <a name="m_ppict"></a>  CPictureHolder::m_pPict  
 Un puntatore per il `CPictureHolder` dell'oggetto `IPicture` interfaccia.  
  
```  
LPPICTURE m_pPict;  
```  
  
##  <a name="render"></a>  CPictureHolder:: Render  
 Esegue il rendering dell'immagine nel rettangolo di cui fa riferimento *rcRender*.  
  
```  
void Render(
    CDC* pDC,  
    const CRect& rcRender,  
    const CRect& rcWBounds);
```  
  
### <a name="parameters"></a>Parametri  
 *pDC*  
 Puntatore al contesto di visualizzazione in cui è l'immagine da sottoporre a rendering.  
  
 *rcRender*  
 Rettangolo in cui è l'immagine da sottoporre a rendering.  
  
 *rcWBounds*  
 Un rettangolo che rappresenta il rettangolo di delimitazione dell'oggetto per il rendering dell'immagine. Per un controllo, questo rettangolo è il *rcBounds* passato a un override del parametro [COleControl:: OnDraw](../../mfc/reference/colecontrol-class.md#ondraw).  
  
##  <a name="setpicturedispatch"></a>  CPictureHolder::SetPictureDispatch  
 Si connette il `CPictureHolder` dell'oggetto a un `IPictureDisp` interfaccia.  
  
```  
void SetPictureDispatch(LPPICTUREDISP pDisp);
```  
  
### <a name="parameters"></a>Parametri  
 *pDisp*  
 Puntatore al nuovo `IPictureDisp` interfaccia.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CFontHolder](../../mfc/reference/cfontholder-class.md)
