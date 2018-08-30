---
title: Classe CRgn | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CRgn
- AFXWIN/CRgn
- AFXWIN/CRgn::CRgn
- AFXWIN/CRgn::CombineRgn
- AFXWIN/CRgn::CopyRgn
- AFXWIN/CRgn::CreateEllipticRgn
- AFXWIN/CRgn::CreateEllipticRgnIndirect
- AFXWIN/CRgn::CreateFromData
- AFXWIN/CRgn::CreateFromPath
- AFXWIN/CRgn::CreatePolygonRgn
- AFXWIN/CRgn::CreatePolyPolygonRgn
- AFXWIN/CRgn::CreateRectRgn
- AFXWIN/CRgn::CreateRectRgnIndirect
- AFXWIN/CRgn::CreateRoundRectRgn
- AFXWIN/CRgn::EqualRgn
- AFXWIN/CRgn::FromHandle
- AFXWIN/CRgn::GetRegionData
- AFXWIN/CRgn::GetRgnBox
- AFXWIN/CRgn::OffsetRgn
- AFXWIN/CRgn::PtInRegion
- AFXWIN/CRgn::RectInRegion
- AFXWIN/CRgn::SetRectRgn
dev_langs:
- C++
helpviewer_keywords:
- CRgn [MFC], CRgn
- CRgn [MFC], CombineRgn
- CRgn [MFC], CopyRgn
- CRgn [MFC], CreateEllipticRgn
- CRgn [MFC], CreateEllipticRgnIndirect
- CRgn [MFC], CreateFromData
- CRgn [MFC], CreateFromPath
- CRgn [MFC], CreatePolygonRgn
- CRgn [MFC], CreatePolyPolygonRgn
- CRgn [MFC], CreateRectRgn
- CRgn [MFC], CreateRectRgnIndirect
- CRgn [MFC], CreateRoundRectRgn
- CRgn [MFC], EqualRgn
- CRgn [MFC], FromHandle
- CRgn [MFC], GetRegionData
- CRgn [MFC], GetRgnBox
- CRgn [MFC], OffsetRgn
- CRgn [MFC], PtInRegion
- CRgn [MFC], RectInRegion
- CRgn [MFC], SetRectRgn
ms.assetid: d904da84-76aa-481e-8780-b09485f49e64
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d4ac334221f22dcd80434c1be2f59998709aae5e
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43204880"
---
# <a name="crgn-class"></a>CRgn (classe)
Incapsula un'area GDI (Graphics Device Interface) di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CRgn : public CGdiObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRgn::CRgn](#crgn)|Costruisce un oggetto `CRgn`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRgn::CombineRgn](#combinergn)|Imposta una `CRgn` dell'oggetto in modo che è equivalente all'unione di due determinati `CRgn` oggetti.|  
|[CRgn::CopyRgn](#copyrgn)|Imposta una `CRgn` dell'oggetto in modo che sia una copia di un elemento specificato `CRgn` oggetto.|  
|[CRgn::CreateEllipticRgn](#createellipticrgn)|Inizializza un `CRgn` oggetto con un'area ellittica.|  
|[CRgn::CreateEllipticRgnIndirect](#createellipticrgnindirect)|Inizializza una `CRgn` oggetto con un'area ellittica definita da un [RECT](../../mfc/reference/rect-structure1.md) struttura.|  
|[CRgn::CreateFromData](#createfromdata)|Crea un'area dai dati di area e la trasformazione specificati.|  
|[CRgn::CreateFromPath](#createfrompath)|Crea un'area dal percorso selezionato nel contesto di dispositivo specificato.|  
|[CRgn::CreatePolygonRgn](#createpolygonrgn)|Inizializza un `CRgn` oggetto con un'area poligonale. Il sistema si chiude il poligono automaticamente, se necessario, tracciando una linea tra l'ultimo vertice al primo.|  
|[CRgn::CreatePolyPolygonRgn](#createpolypolygonrgn)|Inizializza un `CRgn` oggetto con un'area composta da una serie di poligoni chiusi. I poligoni potrebbero essere non contigui, o si sovrappongano.|  
|[CRgn::CreateRectRgn](#createrectrgn)|Inizializza un `CRgn` oggetto con un'area rettangolare.|  
|[CRgn::CreateRectRgnIndirect](#createrectrgnindirect)|Inizializza una `CRgn` oggetto con un'area rettangolare definita da un [RECT](../../mfc/reference/rect-structure1.md) struttura.|  
|[CRgn::CreateRoundRectRgn](#createroundrectrgn)|Inizializza un `CRgn` oggetto con un'area rettangolare con angoli arrotondati.|  
|[CRgn::EqualRgn](#equalrgn)|Verifica due `CRgn` oggetti per determinare se sono equivalenti.|  
|[CRgn::FromHandle](#fromhandle)|Restituisce un puntatore a un `CRgn` quando viene specificato un handle di un'area di Windows.|  
|[CRgn::GetRegionData](#getregiondata)|Inserisce il buffer specificato con i dati che descrive l'area specificata.|  
|[CRgn::GetRgnBox](#getrgnbox)|Recupera le coordinate del rettangolo di delimitazione di un `CRgn` oggetto.|  
|[CRgn::OffsetRgn](#offsetrgn)|Sposta un `CRgn` oggetto dall'offset specificati.|  
|[CRgn::PtInRegion](#ptinregion)|Determina se un punto specificato si trova nell'area.|  
|[CRgn::RectInRegion](#rectinregion)|Determina se qualsiasi parte di un rettangolo specificato è entro i limiti dell'area.|  
|[CRgn::SetRectRgn](#setrectrgn)|Imposta il `CRgn` oggetto nell'area rettangolare specificata.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRgn::operator HRGN](#operator_hrgn)|Restituisce l'handle di Windows contenuto nel `CRgn` oggetto.|  
  
## <a name="remarks"></a>Note  
 Un'area è all'interno di una finestra di area ellittica o poligonale. Per usare le aree, si utilizzano le funzioni membro della classe `CRgn` con le funzioni di ritaglio definite come membri della classe `CDC`.  
  
 Le funzioni membro di `CRgn` create, alter e recuperare informazioni sull'oggetto area per cui vengono chiamati.  
  
 Per altre informazioni sull'uso `CRgn`, vedere [degli oggetti grafici](../../mfc/graphic-objects.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CGdiObject](../../mfc/reference/cgdiobject-class.md)  
  
 `CRgn`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="combinergn"></a>  CRgn::CombineRgn  
 Crea una nuova area GDI combinando due aree esistenti.  
  
```  
int CombineRgn(
    CRgn* pRgn1,  
    CRgn* pRgn2,  
    int nCombineMode);
```  
  
### <a name="parameters"></a>Parametri  
 *pRgn1*  
 Identifica un'area esistente.  
  
 *pRgn2*  
 Identifica un'area esistente.  
  
 *nCombineMode*  
 Specifica l'operazione da eseguire quando si combinano le aree di origine di due. Può essere uno dei valori seguenti:  
  
- RGN_AND Usa la sovrapposizione di aree di entrambe le aree (intersezione).  
  
- RGN_COPY crea una copia dell'area 1 (identificato da *pRgn1*).  
  
- RGN_DIFF crea un'area composta le aree dell'area 1 (identificato da *pRgn1*) che non fanno parte dell'area 2 (identificato dal *pRgn2*).  
  
- RGN_OR combina entrambe le aree nel loro complesso (unione).  
  
- RGN_XOR combina entrambe le aree, ma rimuove aree sovrapposte.  
  
### <a name="return-value"></a>Valore restituito  
 Specifica il tipo di area risulta. Può essere uno dei valori seguenti:  
  
- COMPLEXREGION nuova area con sovrapposizione dei bordi.  
  
- Errore non creata alcuna nuova area.  
  
- NULLREGION nuova area è vuoto.  
  
- Non sovrapposti bordi è presenti SIMPLEREGION nuova area.  
  
### <a name="remarks"></a>Note  
 Le aree vengono combinate come specificato da *nCombineMode*.  
  
 I due specificati vengono combinate le aree e l'handle dell'area risultante viene archiviato nel `CRgn` oggetto. Di conseguenza, qualsiasi area geografica verrà archiviato nel `CRgn` oggetto è stato sostituito dall'area combinato.  
  
 La dimensione di un'area è limitata a 32.767 da 32.767 unità logiche o a 64 KB di memoria, a seconda del valore minore.  
  
 Uso [CopyRgn](#copyrgn) copiare semplicemente un'area in un'altra area.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#144](../../mfc/codesnippet/cpp/crgn-class_1.cpp)]  
  
##  <a name="copyrgn"></a>  CRgn::CopyRgn  
 Copia area definita dalle *pRgnSrc* nel `CRgn` oggetto.  
  
```  
int CopyRgn(CRgn* pRgnSrc);
```  
  
### <a name="parameters"></a>Parametri  
 *pRgnSrc*  
 Identifica un'area esistente.  
  
### <a name="return-value"></a>Valore restituito  
 Specifica il tipo di area risulta. Può essere uno dei valori seguenti:  
  
- COMPLEXREGION nuova area con sovrapposizione dei bordi.  
  
- Errore non creata alcuna nuova area.  
  
- NULLREGION nuova area è vuoto.  
  
- Non sovrapposti bordi è presenti SIMPLEREGION nuova area.  
  
### <a name="remarks"></a>Note  
 La nuova area sostituisce l'area precedentemente archiviato nel `CRgn` oggetto. Questa funzione è un caso speciale del [CombineRgn](#combinergn) funzione membro.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CRgn::CreateEllipticRgn](#createellipticrgn).  
  
##  <a name="createellipticrgn"></a>  CRgn::CreateEllipticRgn  
 Crea un'area ellittica.  
  
```  
BOOL CreateEllipticRgn(
    int x1,  
    int y1,  
    int x2,  
    int y2);
```  
  
### <a name="parameters"></a>Parametri  
 *x1*  
 Specifica la logica coordinata x dell'angolo superiore sinistro del rettangolo di delimitazione dell'ellisse.  
  
 *y1*  
 Specifica la coordinata y logica dell'angolo superiore sinistro del rettangolo di delimitazione dell'ellisse.  
  
 *x2*  
 Specifica la logica coordinata x dell'angolo inferiore destro del rettangolo di delimitazione dell'ellisse.  
  
 *y2*  
 Specifica la coordinata y logica dell'angolo inferiore destro del rettangolo di delimitazione dell'ellisse.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'operazione riesce. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'area è definita dal rettangolo di delimitazione specificato da *x1*, *y1*, *x2*, e *y2*. L'area viene archiviato nel `CRgn` oggetto.  
  
 La dimensione di un'area è limitata a 32.767 da 32.767 unità logiche o a 64 KB di memoria, a seconda del valore minore.  
  
 Quando ha terminato di utilizzare un'area creata con il `CreateEllipticRgn` funzione, un'applicazione deve selezionare l'area out del contesto di dispositivo e usare il `DeleteObject` funzione per rimuoverlo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#145](../../mfc/codesnippet/cpp/crgn-class_2.cpp)]  
  
##  <a name="createellipticrgnindirect"></a>  CRgn::CreateEllipticRgnIndirect  
 Crea un'area ellittica.  
  
```  
BOOL CreateEllipticRgnIndirect(LPCRECT lpRect);
```  
  
### <a name="parameters"></a>Parametri  
 *lpRect*  
 Punta a un `RECT` struttura o un `CRect` oggetto che contiene le coordinate logiche degli angoli superiore sinistro e inferiore destro del rettangolo di delimitazione dell'ellisse.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'operazione riesce. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'area è definita dalla struttura o all'oggetto a cui punta *lpRect* e viene archiviato nel `CRgn` oggetto.  
  
 La dimensione di un'area è limitata a 32.767 da 32.767 unità logiche o a 64 KB di memoria, a seconda del valore minore.  
  
 Quando ha terminato di utilizzare un'area creata con il `CreateEllipticRgnIndirect` funzione, un'applicazione deve selezionare l'area out del contesto di dispositivo e usare il `DeleteObject` funzione per rimuoverlo.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CRgn::CreateRectRgnIndirect](#createrectrgnindirect).  
  
##  <a name="createfromdata"></a>  CRgn::CreateFromData  
 Crea un'area dai dati di area e la trasformazione specificati.  
  
```  
BOOL CreateFromData(
    const XFORM* lpXForm,  
    int nCount,  
    const RGNDATA* pRgnData);
```  
  
### <a name="parameters"></a>Parametri  
 *lpXForm*  
 Punta a un [XFORM](../../mfc/reference/xform-structure.md) struttura dei dati che definisce la trasformazione da eseguire nell'area. Se questo puntatore è NULL, viene utilizzata nella trasformazione di identità.  
  
 *nCount*  
 Specifica il numero di byte a cui punta *pRgnData*.  
  
 *pRgnData*  
 Punta a un [RGNDATA](../../mfc/reference/rgndata-structure.md) struttura dei dati che contiene i dati dell'area.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Un'applicazione può recuperare dati per un'area chiamando il `CRgn::GetRegionData` (funzione).  
  
##  <a name="createfrompath"></a>  CRgn::CreateFromPath  
 Crea un'area dal percorso selezionato nel contesto di dispositivo specificato.  
  
```  
BOOL CreateFromPath(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 *pDC*  
 Identifica un contesto di dispositivo che contiene un tracciato chiuso.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Il contesto di dispositivo identificato mediante il *pDC* parametro deve contenere un tracciato chiuso. Dopo aver `CreateFromPath` converte un percorso in un'area, Windows ignora il tracciato chiuso dal contesto di dispositivo.  
  
##  <a name="createpolygonrgn"></a>  CRgn::CreatePolygonRgn  
 Crea un'area poligonale.  
  
```  
BOOL CreatePolygonRgn(
    LPPOINT lpPoints,  
    int nCount,  
    int nMode);
```  
  
### <a name="parameters"></a>Parametri  
 *lpPoints*  
 Punta a una matrice di `POINT` strutture o una matrice di `CPoint` oggetti. Ogni struttura specifica la coordinata x e coordinata y di un vertice del poligono. Il `POINT` struttura ha il formato seguente:  
  
 `typedef struct tagPOINT {`  
  
 `int x;`  
  
 `int y;`  
  
 `} POINT;`  
  
 *nCount*  
 Specifica il numero di `POINT` strutture o `CPoint` oggetti nella matrice a cui punta *lpPoints*.  
  
 *nMode*  
 Specifica la modalità di riempimento per l'area. Questo parametro può essere ALTERNATIVO o SERPEGGIANTI.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'operazione riesce. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il sistema si chiude il poligono automaticamente, se necessario, tracciando una linea tra l'ultimo vertice al primo. L'area risulta viene archiviato nel `CRgn` oggetto.  
  
 La dimensione di un'area è limitata a 32.767 da 32.767 unità logiche o a 64 KB di memoria, a seconda del valore minore.  
  
 Quando la modalità di riempimento del poligono è ALTERNATIVO, il sistema riempie l'area compresa tra le parti pari e dispari poligono su ogni linea di digitalizzazione. Vale a dire, il sistema riempie l'area tra il lato primo e la secondo, tra il terzo e quarto lato e così via.  
  
 Quando la modalità di riempimento del poligono viene dei VERTICI, il sistema Usa la direzione in cui è stata disegnata una figura di seguito per determinare se un'area riempita. Ogni segmento di linea in un poligono viene disegnato in senso orario o antiorario. Ogni volta che una linea immaginaria disegnata da un'area all'esterno di una figura passa attraverso un segmento di linea in senso orario, un numero viene incrementato. Quando la riga passa attraverso un segmento di linea in senso antiorario, il conteggio viene ridotto. L'area viene riempita se il conteggio è diverso da zero quando la riga raggiunge all'esterno della figura.  
  
 Quando un'applicazione ha terminato di utilizzare un'area creata con il `CreatePolygonRgn` funzione, è necessario selezionare l'area out del contesto di dispositivo e usare il `DeleteObject` funzione per rimuoverlo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#146](../../mfc/codesnippet/cpp/crgn-class_3.cpp)]  
  
##  <a name="createpolypolygonrgn"></a>  CRgn::CreatePolyPolygonRgn  
 Crea un'area composta da una serie di poligoni chiusi.  
  
```  
BOOL CreatePolyPolygonRgn(
    LPPOINT lpPoints,  
    LPINT lpPolyCounts,  
    int nCount,  
    int nPolyFillMode);
```  
  
### <a name="parameters"></a>Parametri  
 *lpPoints*  
 Punta a una matrice di `POINT` strutture o una matrice di `CPoint` gli oggetti che definisce i vertici dei poligoni. Ogni poligono deve essere chiuso in modo esplicito perché il sistema non chiuderle automaticamente. I poligoni vengono specificati in modo consecutivo. Il `POINT` struttura ha il formato seguente:  
  
 `typedef struct tagPOINT {`  
  
 `int x;`  
  
 `int y;`  
  
 `} POINT;`  
  
 *lpPolyCounts*  
 Punta a una matrice di interi. Il primo numero intero specifica il numero di vertici del poligono in prima la *lpPoints* matrice, il secondo numero intero specifica il numero di vertici nel poligono secondo e così via.  
  
 *nCount*  
 Specifica il numero totale di valori interi il *lpPolyCounts* matrice.  
  
 *nPolyFillMode*  
 Specifica la modalità di riempimento del poligono. Questo valore può essere ALTERNATIVO o SERPEGGIANTI.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'operazione riesce. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'area risulta viene archiviato nel `CRgn` oggetto.  
  
 I poligoni potrebbero essere non contigui, o si sovrappongano.  
  
 La dimensione di un'area è limitata a 32.767 da 32.767 unità logiche o a 64 KB di memoria, a seconda del valore minore.  
  
 Quando la modalità di riempimento del poligono è ALTERNATIVO, il sistema riempie l'area compresa tra le parti pari e dispari poligono su ogni linea di digitalizzazione. Vale a dire, il sistema riempie l'area tra il lato primo e la secondo, tra il terzo e quarto lato e così via.  
  
 Quando la modalità di riempimento del poligono viene dei VERTICI, il sistema Usa la direzione in cui è stata disegnata una figura di seguito per determinare se un'area riempita. Ogni segmento di linea in un poligono viene disegnato in senso orario o antiorario. Ogni volta che una linea immaginaria disegnata da un'area all'esterno di una figura passa attraverso un segmento di linea in senso orario, un numero viene incrementato. Quando la riga passa attraverso un segmento di linea in senso antiorario, il conteggio viene ridotto. L'area viene riempita se il conteggio è diverso da zero quando la riga raggiunge all'esterno della figura.  
  
 Quando un'applicazione ha terminato di utilizzare un'area creata con il `CreatePolyPolygonRgn` funzione, è necessario selezionare l'area out del contesto di dispositivo e usare il [CGDIObject::DeleteObject](../../mfc/reference/cgdiobject-class.md#deleteobject) funzione membro per rimuoverlo.  
  
##  <a name="createrectrgn"></a>  CRgn::CreateRectRgn  
 Crea un'area rettangolare che viene archiviata nel `CRgn` oggetto.  
  
```  
BOOL CreateRectRgn(
    int x1,  
    int y1,  
    int x2,  
    int y2);
```  
  
### <a name="parameters"></a>Parametri  
 *x1*  
 Specifica la logica coordinata x dell'angolo superiore sinistro dell'area.  
  
 *y1*  
 Specifica la coordinata y logica dell'angolo superiore sinistro dell'area.  
  
 *x2*  
 Specifica la logica coordinata x dell'angolo inferiore destro dell'area.  
  
 *y2*  
 Specifica la coordinata y logica dell'angolo inferiore destro dell'area.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'operazione riesce. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La dimensione di un'area è limitata a 32.767 da 32.767 unità logiche o a 64 KB di memoria, a seconda del valore minore.  
  
 Quando ha terminato di utilizzare un'area creata dal `CreateRectRgn`, un'applicazione deve usare il [CGDIObject::DeleteObject](../../mfc/reference/cgdiobject-class.md#deleteobject) funzione membro per rimuovere l'area.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#147](../../mfc/codesnippet/cpp/crgn-class_4.cpp)]  
  
 Per un altro esempio, vedere [CRgn::CombineRgn](#combinergn).  
  
##  <a name="createrectrgnindirect"></a>  CRgn::CreateRectRgnIndirect  
 Crea un'area rettangolare che viene archiviata nel `CRgn` oggetto.  
  
```  
BOOL CreateRectRgnIndirect(LPCRECT lpRect);
```  
  
### <a name="parameters"></a>Parametri  
 *lpRect*  
 Punta a un `RECT` struttura o `CRect` oggetto che contiene le coordinate logiche degli angoli superiore sinistro e inferiore destro dell'area. Il `RECT` struttura ha il formato seguente:  
  
 `typedef struct tagRECT {`  
  
 `int left;`  
  
 `int top;`  
  
 `int right;`  
  
 `int bottom;`  
  
 `} RECT;`  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'operazione riesce. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La dimensione di un'area è limitata a 32.767 da 32.767 unità logiche o a 64 KB di memoria, a seconda del valore minore.  
  
 Quando ha terminato di utilizzare un'area creata dal `CreateRectRgnIndirect`, un'applicazione deve usare il [CGDIObject::DeleteObject](../../mfc/reference/cgdiobject-class.md#deleteobject) funzione membro per rimuovere l'area.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#148](../../mfc/codesnippet/cpp/crgn-class_5.cpp)]  
  
##  <a name="createroundrectrgn"></a>  CRgn::CreateRoundRectRgn  
 Crea un'area rettangolare con angoli arrotondati archiviato nel `CRgn` oggetto.  
  
```  
BOOL CreateRoundRectRgn(
    int x1,  
    int y1,  
    int x2,  
    int y2,  
    int x3,  
    int y3);
```  
  
### <a name="parameters"></a>Parametri  
 *x1*  
 Specifica la logica coordinata x dell'angolo superiore sinistro dell'area.  
  
 *y1*  
 Specifica la coordinata y logica dell'angolo superiore sinistro dell'area.  
  
 *x2*  
 Specifica la logica coordinata x dell'angolo inferiore destro dell'area.  
  
 *y2*  
 Specifica la coordinata y logica dell'angolo inferiore destro dell'area.  
  
 *x3*  
 Specifica lo spessore dell'ellisse usata per creare gli angoli arrotondati.  
  
 *Y3*  
 Specifica l'altezza dell'ellisse usata per creare gli angoli arrotondati.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'operazione riesce. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La dimensione di un'area è limitata a 32.767 da 32.767 unità logiche o a 64 KB di memoria, a seconda del valore minore.  
  
 Quando un'applicazione ha terminato di utilizzare un'area creata con il `CreateRoundRectRgn` funzione, è necessario selezionare l'area out del contesto di dispositivo e usare il [CGDIObject::DeleteObject](../../mfc/reference/cgdiobject-class.md#deleteobject) funzione membro per rimuoverlo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#149](../../mfc/codesnippet/cpp/crgn-class_6.cpp)]  
  
##  <a name="crgn"></a>  CRgn::CRgn  
 Costruisce un oggetto `CRgn`.  
  
```  
CRgn();
```  
  
### <a name="remarks"></a>Note  
 Il `m_hObject` membro dati non contiene un'area GDI di Windows valida fino a quando non viene inizializzato l'oggetto con una o più degli altri `CRgn` funzioni membro.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CRgn::CreateRoundRectRgn](#createroundrectrgn).  
  
##  <a name="equalrgn"></a>  CRgn::EqualRgn  
 Determina se l'area specificata è equivalente all'area di cui è archiviato nel `CRgn` oggetto.  
  
```  
BOOL EqualRgn(CRgn* pRgn) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *pRgn*  
 Identifica un'area.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se le due aree sono equivalenti. in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#150](../../mfc/codesnippet/cpp/crgn-class_7.cpp)]  
  
##  <a name="fromhandle"></a>  CRgn::FromHandle  
 Restituisce un puntatore a un `CRgn` quando viene specificato un handle di un'area di Windows.  
  
```  
static CRgn* PASCAL FromHandle(HRGN hRgn);
```  
  
### <a name="parameters"></a>Parametri  
 *hRgn*  
 Specifica un handle per un'area di Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CRgn` oggetto. Se la funzione non ha esito positivo, il valore restituito è NULL.  
  
### <a name="remarks"></a>Note  
 Se un `CRgn` oggetto non è ancora connesso per l'handle, una variabile temporanea `CRgn` oggetto viene creato e collegato. Questo temporaneo `CRgn` oggetto è valido solo fino a quando non la volta successiva che l'applicazione ha il tempo di inattività nel relativo ciclo di eventi, a cui ora l'immagine di tutti i temporanei vengono eliminati gli oggetti. In altre parole, ciò è che l'oggetto temporaneo è valido solo durante l'elaborazione di una finestra di messaggio.  
  
##  <a name="getregiondata"></a>  CRgn::GetRegionData  
 Inserisce il buffer specificato che descrive l'area dati.  
  
```  
int GetRegionData(
    LPRGNDATA lpRgnData,  
    int nCount) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *lpRgnData*  
 Punta a un [RGNDATA](../../mfc/reference/rgndata-structure.md) struttura dei dati che riceve le informazioni. Se questo parametro è NULL, il valore restituito contiene il numero di byte necessari per i dati di area.  
  
 *nCount*  
 Specifica la dimensione, espressa in byte, del *lpRgnData* buffer.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo e *nCount* specifica un numero sufficiente di byte, il valore restituito è sempre *nCount*. Se la funzione ha esito negativo o se *nCount* specifica minore numero adeguato di byte, il valore restituito è 0 (errore).  
  
### <a name="remarks"></a>Note  
 Questi dati includono le dimensioni dei rettangoli che formano l'area. Questa funzione viene utilizzata in combinazione con la `CRgn::CreateFromData` (funzione).  
  
##  <a name="getrgnbox"></a>  CRgn::GetRgnBox  
 Recupera le coordinate del rettangolo di delimitazione del `CRgn` oggetto.  
  
```  
int GetRgnBox(LPRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *lpRect*  
 Punta a un `RECT` struttura o `CRect` oggetto che riceverà le coordinate del rettangolo di delimitazione. Il `RECT` struttura ha il formato seguente:  
  
 `typedef struct tagRECT {`  
  
 `int left;`  
  
 `int top;`  
  
 `int right;`  
  
 `int bottom;`  
  
 `} RECT;`  
  
### <a name="return-value"></a>Valore restituito  
 Specifica il tipo della regione. Può essere uno dei valori seguenti:  
  
- Area COMPLEXREGION dispone di sovrapposizione dei bordi.  
  
- Area NULLREGION è vuoto.  
  
- ERRORE `CRgn` oggetto non corrisponde a un'area valida.  
  
- Area SIMPLEREGION non ha bordi sovrapposti.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CRgn::CreatePolygonRgn](#createpolygonrgn).  
  
##  <a name="offsetrgn"></a>  CRgn::OffsetRgn  
 Sposta l'area archiviato nel `CRgn` oggetto dall'offset specificati.  
  
```  
int OffsetRgn(
    int x,  
    int y);  
  
int OffsetRgn(POINT point);
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica il numero di unità di spostamento a sinistra o destra.  
  
 *y*  
 Specifica il numero di unità da spostare verso l'alto o verso il basso.  
  
 *punto*  
 La coordinata x del *puntare* specifica il numero di unità di spostamento a sinistra o destra. La coordinata y del *puntare* specifica il numero di unità da spostare verso l'alto o verso il basso. Il *puntare* parametro può essere una `POINT` struttura o un `CPoint` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Tipo della nuova area. Può essere uno dei valori seguenti:  
  
- Area COMPLEXREGION dispone di sovrapposizione dei bordi.  
  
- Handle dell'area di errore non è valido.  
  
- Area NULLREGION è vuoto.  
  
- Area SIMPLEREGION non ha bordi sovrapposti.  
  
### <a name="remarks"></a>Note  
 La funzione consente di spostare l'area *x* unità lungo l'asse x e *y* unità lungo l'asse y.  
  
 I valori delle coordinate di un'area devono essere minore o uguale a maggiore o uguale a tra-32.768 e 32.767. Il *x* e *y* parametri devono essere scelti attentamente per evitare le coordinate di area non è valido.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CRgn::CreateEllipticRgn](#createellipticrgn).  
  
##  <a name="operator_hrgn"></a>  CRgn::operator HRGN  
 Utilizzare questo operatore per ottenere l'handle GDI di Windows associata del `CRgn` oggetto.  
  
```  
operator HRGN() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, un handle all'oggetto GDI di Windows rappresentato dal `CRgn` oggetto; in caso contrario, NULL.  
  
### <a name="remarks"></a>Note  
 Questo operatore è un operatore di cast, che supporta l'uso diretto di un oggetto di tipo HRGN.  
  
 Per altre informazioni sull'utilizzo di oggetti grafici, vedere l'articolo [gli oggetti di grafica](/windows/desktop/gdi/graphic-objects) nel SDK di Windows.  
  
##  <a name="ptinregion"></a>  CRgn::PtInRegion  
 Controlla se il punto specificato da *x* e *y* nell'area archiviato nel `CRgn` oggetto.  
  
```  
BOOL PtInRegion(
    int x,  
    int y) const;  
  
BOOL PtInRegion(POINT point) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica la coordinata x logica del punto da testare.  
  
 *y*  
 Specifica la coordinata y logica del punto da testare.  
  
 *punto*  
 Le coordinate x e y del *puntare* specificare le coordinate x e y del punto da verificare il valore di. Il *puntare* parametro può essere una `POINT` struttura o un `CPoint` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il punto nell'area; in caso contrario 0.  
  
##  <a name="rectinregion"></a>  CRgn::RectInRegion  
 Determina se qualsiasi parte del rettangolo specificato da *lpRect* trova entro i limiti dell'area archiviati nel `CRgn` oggetto.  
  
```  
BOOL RectInRegion(LPCRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *lpRect*  
 Punta a un `RECT` struttura o `CRect` oggetto. Il `RECT` struttura ha il formato seguente:  
  
 `typedef struct tagRECT {`  
  
 `int left;`  
  
 `int top;`  
  
 `int right;`  
  
 `int bottom;`  
  
 `} RECT;`  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se qualsiasi parte del rettangolo specificato si trova entro i limiti dell'area; in caso contrario 0.  
  
##  <a name="setrectrgn"></a>  CRgn::SetRectRgn  
 Crea un'area rettangolare.  
  
```  
void SetRectRgn(
    int x1,  
    int y1,  
    int x2,  
    int y2);  
  
void SetRectRgn(LPCRECT lpRect);
```  
  
### <a name="parameters"></a>Parametri  
 *x1*  
 Specifica la coordinata x dell'angolo superiore sinistro dell'area rettangolare.  
  
 *y1*  
 Specifica la coordinata y dell'angolo superiore sinistro dell'area rettangolare.  
  
 *x2*  
 Specifica la coordinata x dell'angolo inferiore destro dell'area rettangolare.  
  
 *y2*  
 Specifica la coordinata y dell'angolo inferiore destro dell'area rettangolare.  
  
 *lpRect*  
 Specifica l'area rettangolare. Può essere un puntatore a un `RECT` struttura o un `CRect` oggetto.  
  
### <a name="remarks"></a>Note  
 A differenza [CreateRectRgn](#createrectrgn), tuttavia, non allocare memoria aggiuntiva dall'heap dell'applicazione Windows locale. Usa invece lo spazio allocato per l'area archiviate nel `CRgn` oggetto. Ciò significa che il `CRgn` oggetto deve già essere stato inizializzato con un'area di Windows valida prima di chiamare `SetRectRgn`. I punti di base *x1*, *y1*, *x2*, e *y2* specificare le dimensioni minime dello spazio allocato.  
  
 Utilizzare questa funzione anziché il `CreateRectRgn` funzione membro per evitare chiamate al gestore della memoria locale.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)



