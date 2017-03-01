---
title: Classe CGdiObject | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CGdiObject
dev_langs:
- C++
helpviewer_keywords:
- brushes, base class for
- fonts, base class for
- regions, base class for
- pens, base class for
- palettes, base class for
- CGdiObject class
- GDI objects, base class for
ms.assetid: 1cba3ba5-3d49-4e43-8293-209299f2f6f4
caps.latest.revision: 21
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
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 7fb0cd49c6a20263a5cae305b7f08f2733033ff2
ms.lasthandoff: 02/24/2017

---
# <a name="cgdiobject-class"></a>Classe CGdiObject
Fornisce una classe di base per diversi generi di oggetti GDI (Graphics Device Interface) di Windows, quali bitmap, aree, pennelli, penne, tavolozze e tipi di carattere.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CGdiObject : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CGdiObject::CGdiObject](#cgdiobject)|Costruisce un oggetto `CGdiObject`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CGdiObject::Attach](#attach)|Collega un oggetto GDI di Windows a un `CGdiObject` oggetto.|  
|[CGdiObject::CreateStockObject](#createstockobject)|Recupera un handle per una delle penne di azioni predefinite di Windows, pennelli, tipi di carattere.|  
|[CGdiObject::DeleteObject](#deleteobject)|Elimina l'oggetto GDI di Windows associato al `CGdiObject` oggetto dalla memoria, liberando tutti gli archivi di sistema associato all'oggetto.|  
|[CGdiObject::DeleteTempMap](#deletetempmap)|Consente di eliminare qualsiasi temporaneo `CGdiObject` gli oggetti creati da `FromHandle`.|  
|[CGdiObject::Detach](#detach)|Rimuove un oggetto GDI di Windows da un `CGdiObject` dell'oggetto e restituisce un handle all'oggetto GDI di Windows.|  
|[CGdiObject::FromHandle](#fromhandle)|Restituisce un puntatore a un `CGdiObject` oggetto dato un handle a un oggetto GDI di Windows.|  
|[CGdiObject::GetObject](#getobject)|Compila un buffer con dati che descrive l'oggetto Windows GDI collegata la `CGdiObject` oggetto.|  
|[CGdiObject::GetObjectType](#getobjecttype)|Recupera il tipo dell'oggetto GDI.|  
|[CGdiObject::GetSafeHandle](#getsafehandle)|Restituisce `m_hObject` a meno che non `this` è `NULL`, nel qual caso `NULL` viene restituito.|  
|[CGdiObject:: UnrealizeObject](#unrealizeobject)|Reimposta l'origine di un pennello o reimposta una tavolozza logica.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CGdiObject::operator! =](#operator_neq)|Determina se due oggetti GDI logicamente non sono uguali.|  
|[CGdiObject::operator = =](#operator_eq_eq)|Determina se due oggetti GDI sono uguali.|  
|[CGdiObject::operator HGDIOBJ](#operator_hgdiobj)|Recupera un `HANDLE` all'oggetto GDI di Windows.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CGdiObject::m_hObject](#m_hobject)|Oggetto `HANDLE` contenente il `HBITMAP`, `HPALETTE`, `HRGN`, `HBRUSH`, `HPEN`, o `HFONT` collegato a questo oggetto.|  
  
## <a name="remarks"></a>Note  
 Non creare mai un `CGdiObject` direttamente. Piuttosto, si crea un oggetto da una delle relative classi derivate, ad esempio `CPen` o `CBrush`.  
  
 Per ulteriori informazioni su `CGdiObject`, vedere [oggetti grafici](../../mfc/graphic-objects.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CGdiObject`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="a-nameattacha--cgdiobjectattach"></a><a name="attach"></a>CGdiObject::Attach  
 Collega un oggetto GDI di Windows a un `CGdiObject` oggetto.  
  
```  
BOOL Attach(HGDIOBJ hObject);
```  
  
### <a name="parameters"></a>Parametri  
 `hObject`  
 Oggetto `HANDLE` a un oggetto GDI di Windows (ad esempio, `HPEN` o `HBRUSH`).  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; allegato in caso contrario 0.  
  
##  <a name="a-namecgdiobjecta--cgdiobjectcgdiobject"></a><a name="cgdiobject"></a>CGdiObject::CGdiObject  
 Costruisce un oggetto `CGdiObject`.  
  
```  
CGdiObject();
```  
  
### <a name="remarks"></a>Note  
 Non creare mai un `CGdiObject` direttamente. Piuttosto, si crea un oggetto da una delle relative classi derivate, ad esempio `CPen` o **Cbrush**.  
  
##  <a name="a-namecreatestockobjecta--cgdiobjectcreatestockobject"></a><a name="createstockobject"></a>CGdiObject::CreateStockObject  
 Recupera un handle per una delle predefiniti penne GDI di Windows predefinite, pennelli, tipi di carattere e associa l'oggetto GDI per la `CGdiObject` oggetto.  
  
```  
BOOL CreateStockObject(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Costante che specifica il tipo di oggetto predefinito desiderato. Vedere il parametro *fnObject* per [GetStockObject](http://msdn.microsoft.com/library/windows/desktop/dd144925) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per una descrizione dei valori appropriati.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Chiamata questa funzione con un derivato di classi che corrisponde al tipo di oggetti GDI di Windows, ad esempio `CPen` per una penna.  
  
##  <a name="a-namedeleteobjecta--cgdiobjectdeleteobject"></a><a name="deleteobject"></a>CGdiObject::DeleteObject  
 Elimina l'oggetto GDI Windows collegato dalla memoria liberando tutti gli archivi di sistema associato all'oggetto GDI di Windows.  
  
```  
BOOL DeleteObject();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'oggetto GDI è stato eliminato. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'archiviazione associati di `CGdiObject` oggetto non è interessato da questa chiamata. Un'applicazione non deve chiamare `DeleteObject` su un `CGdiObject` oggetto attualmente selezionato in un contesto di dispositivo.  
  
 Quando viene eliminato un pennello pattern, la bitmap associata il pennello non viene eliminata. La mappa di bit deve essere eliminato in modo indipendente.  
  
##  <a name="a-namedeletetempmapa--cgdiobjectdeletetempmap"></a><a name="deletetempmap"></a>CGdiObject::DeleteTempMap  
 Chiamato automaticamente dal `CWinApp` gestore tempo di inattività, `DeleteTempMap` elimina qualsiasi temporaneo `CGdiObject` gli oggetti creati da `FromHandle`.  
  
```  
static void PASCAL DeleteTempMap();
```  
  
### <a name="remarks"></a>Note  
 `DeleteTempMap`Disconnette l'oggetto GDI Windows collegato a una variabile temporanea `CGdiObject` oggetto prima di eliminare il `CGdiObject` oggetto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#175; NVC_MFCDocView](../../mfc/codesnippet/cpp/cgdiobject-class_1.cpp)]  
  
##  <a name="a-namedetacha--cgdiobjectdetach"></a><a name="detach"></a>CGdiObject::Detach  
 Rimuove un oggetto GDI di Windows da un `CGdiObject` dell'oggetto e restituisce un handle all'oggetto GDI di Windows.  
  
```  
HGDIOBJ Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `HANDLE` per GDI di Windows all'oggetto disconnesso; in caso contrario **NULL** se non è collegato alcun oggetto GDI.  
  
##  <a name="a-namefromhandlea--cgdiobjectfromhandle"></a><a name="fromhandle"></a>CGdiObject::FromHandle  
 Restituisce un puntatore a un `CGdiObject` oggetto dato un handle a un oggetto GDI di Windows.  
  
```  
static CGdiObject* PASCAL FromHandle(HGDIOBJ hObject);
```  
  
### <a name="parameters"></a>Parametri  
 `hObject`  
 Oggetto `HANDLE` a un oggetto GDI di Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CGdiObject` che potrebbe essere temporaneo o permanente.  
  
### <a name="remarks"></a>Note  
 Se un `CGdiObject` oggetto non è già connesso all'oggetto GDI di Windows, un temporaneo `CGdiObject` oggetto viene creato e collegato.  
  
 Questo temporaneo `CGdiObject` oggetto è valido solo fino alla successiva esecuzione dell'applicazione è il tempo di inattività nel relativo ciclo di eventi, momento in cui vengono eliminati tutti gli oggetti grafici temporanei. In altre parole, questo è che l'oggetto temporaneo è valido solo durante l'elaborazione di una finestra di messaggio.  
  
##  <a name="a-namegetobjecta--cgdiobjectgetobject"></a><a name="getobject"></a>CGdiObject::GetObject  
 Inserisce un buffer dei dati che definisce un oggetto specificato.  
  
```  
int GetObject(
    int nCount,  
    LPVOID lpObject) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nCount`  
 Specifica il numero di byte da copiare nel `lpObject` buffer.  
  
 `lpObject`  
 Punta a un buffer fornito dall'utente che riceverà le informazioni.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di byte recuperati; in caso contrario 0 se un errore si verifica.  
  
### <a name="remarks"></a>Note  
 La funzione recupera una struttura di dati il cui tipo dipende dal tipo di oggetto grafico, come illustrato nell'elenco seguente:  
  
|Oggetto|Tipo di buffer|  
|------------|-----------------|  
|`CPen`|[LOGPEN](../../mfc/reference/logpen-structure.md)|  
|`CBrush`|[LOGBRUSH](../../mfc/reference/logbrush-structure.md)|  
|`CFont`|[LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037)|  
|`CBitmap`|[BITMAP](../../mfc/reference/bitmap-structure.md)|  
|`CPalette`|**WORD**|  
|`CRgn`|Non supportato|  
  
 Se l'oggetto è un `CBitmap` oggetto `GetObject` restituisce solo la larghezza, altezza e le informazioni sul formato di colore della bitmap. I bit effettivi possono essere recuperati tramite [CBitmap::GetBitmapBits](../../mfc/reference/cbitmap-class.md#getbitmapbits).  
  
 Se l'oggetto è un `CPalette` oggetto `GetObject` recupera un **WORD** che specifica il numero di voci della tavolozza. La funzione non viene recuperata la [LOGPALETTE](http://msdn.microsoft.com/library/windows/desktop/dd145040) struttura che definisce la tavolozza. Un'applicazione può ottenere informazioni sulle voci della tavolozza chiamando [CPalette::GetPaletteEntries](../../mfc/reference/cpalette-class.md#getpaletteentries).  
  
##  <a name="a-namegetobjecttypea--cgdiobjectgetobjecttype"></a><a name="getobjecttype"></a>CGdiObject::GetObjectType  
 Recupera il tipo dell'oggetto GDI.  
  
```  
UINT GetObjectType() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il tipo di oggetto, se ha esito positivo. in caso contrario 0. Il valore può essere uno dei seguenti:  
  
- **OBJ_BITMAP** Bitmap  
  
- **OBJ_BRUSH** pennello  
  
- **OBJ_FONT** tipo di carattere  
  
- **OBJ_PAL** tavolozza  
  
- **OBJ_PEN** penna  
  
- **OBJ_EXTPEN** penna estesa  
  
- **OBJ_REGION** area  
  
- **OBJ_DC** contesto di dispositivo  
  
- **OBJ_MEMDC** contesto di dispositivo di memoria  
  
- **OBJ_METAFILE** Metafile  
  
- **OBJ_METADC** contesto di dispositivo Metafile  
  
- **OBJ_ENHMETAFILE** Enhanced metafile  
  
- **OBJ_ENHMETADC** contesto di dispositivo Enhanced metafile  
  
##  <a name="a-namegetsafehandlea--cgdiobjectgetsafehandle"></a><a name="getsafehandle"></a>CGdiObject::GetSafeHandle  
 Restituisce `m_hObject` a meno che non **questo** è **NULL**, nel qual caso **NULL** viene restituito.  
  
```  
HGDIOBJ GetSafeHandle() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `HANDLE` all'oggetto GDI di Windows; in caso contrario **NULL** se non è collegato alcun oggetto.  
  
### <a name="remarks"></a>Note  
 Questo fa parte del paradigma interfaccia handle generale ed è utile quando **NULL** è un valore valido o speciale per un handle.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CWnd::IsWindowEnabled](../../mfc/reference/cwnd-class.md#iswindowenabled).  
  
##  <a name="a-namemhobjecta--cgdiobjectmhobject"></a><a name="m_hobject"></a>CGdiObject::m_hObject  
 Oggetto `HANDLE` contenente il `HBITMAP`, **HRGN**, `HBRUSH`, `HPEN`, `HPALETTE`, o **HFONT** collegato a questo oggetto.  
  
```  
HGDIOBJ m_hObject;  
```  
  
##  <a name="a-nameoperatorneqa--cgdiobjectoperator-"></a><a name="operator_neq"></a>CGdiObject::operator! =  
 Determina se due oggetti GDI logicamente non sono uguali.  
  
```  
BOOL operator!=(const CGdiObject& obj) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `obj`  
 Un puntatore a un oggetto esistente `CGdiObject`.  
  
### <a name="remarks"></a>Note  
 Determina se un oggetto GDI sul lato sinistro non è uguale a un oggetto GDI sul lato destro.  
  
##  <a name="a-nameoperatoreqeqa--cgdiobjectoperator-"></a><a name="operator_eq_eq"></a>CGdiObject::operator = =  
 Determina se due oggetti GDI sono uguali.  
  
```  
BOOL operator==(const CGdiObject& obj) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `obj`  
 Un riferimento a un oggetto esistente `CGdiObject`.  
  
### <a name="remarks"></a>Note  
 Determina se un oggetto GDI sul lato sinistro è uguale a un oggetto GDI sul lato destro.  
  
##  <a name="a-nameoperatorhgdiobja--cgdiobjectoperator-hgdiobj"></a><a name="operator_hgdiobj"></a>CGdiObject::operator HGDIOBJ  
 Recupera un `HANDLE` all'oggetto GDI di Windows; in caso contrario **NULL** se non è collegato alcun oggetto.  
  
```  
operator HGDIOBJ() const;  
```  
  
##  <a name="a-nameunrealizeobjecta--cgdiobjectunrealizeobject"></a><a name="unrealizeobject"></a>CGdiObject:: UnrealizeObject  
 Reimposta l'origine di un pennello o reimposta una tavolozza logica.  
  
```  
BOOL UnrealizeObject();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Mentre `UnrealizeObject` è una funzione membro di `CGdiObject` (classe), deve essere richiamato solo in `CBrush` o `CPalette` oggetti.  
  
 Per `CBrush` oggetti, `UnrealizeObject` indica al sistema per reimpostare l'origine del pennello specificato al successivo è selezionata in un contesto di dispositivo. Se l'oggetto è un `CPalette` oggetto `UnrealizeObject` indica al sistema per realizzare la tavolozza come se non fosse già stata realizzata. Alla successiva l'applicazione chiama il [CDC::RealizePalette](../../mfc/reference/cdc-class.md#realizepalette) funzione per la tavolozza specificata, il sistema ridefinisce il mapping completamente la tavolozza logica per la tavolozza di sistema.  
  
 Il `UnrealizeObject` funzione non deve essere utilizzata con gli oggetti predefiniti. Il `UnrealizeObject` funzione deve essere chiamata ogni volta che viene impostata una nuova origine pennello (tramite il [CDC::SetBrushOrg](../../mfc/reference/cdc-class.md#setbrushorg) funzione). Il `UnrealizeObject` funzione non deve essere chiamata per il pennello attualmente selezionato o tavolozza selezionata di qualsiasi contesto di visualizzazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CBitmap (classe)](../../mfc/reference/cbitmap-class.md)   
 [CBrush (classe)](../../mfc/reference/cbrush-class.md)   
 [CFont (Class)](../../mfc/reference/cfont-class.md)   
 [CPalette (classe)](../../mfc/reference/cpalette-class.md)   
 [CPen (classe)](../../mfc/reference/cpen-class.md)   
 [CRgn (classe)](../../mfc/reference/crgn-class.md)

