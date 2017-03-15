---
title: CRgn (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CRgn
dev_langs:
- C++
helpviewer_keywords:
- HRGN
- CRgn class
- regions, MFC
ms.assetid: d904da84-76aa-481e-8780-b09485f49e64
caps.latest.revision: 23
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
ms.openlocfilehash: 9ec2634a2495d301e09b483d60db8838be0b14ab
ms.lasthandoff: 02/24/2017

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
|[CRgn::CombineRgn](#combinergn)|Imposta un `CRgn` oggetto in modo che è equivalente all'unione di due oggetti `CRgn` oggetti.|  
|[CRgn::CopyRgn](#copyrgn)|Imposta un `CRgn` dell'oggetto in modo che sia una copia di un oggetto specificato `CRgn` oggetto.|  
|[CRgn::CreateEllipticRgn](#createellipticrgn)|Inizializza un `CRgn` oggetto con un'area ellittica.|  
|[CRgn::CreateEllipticRgnIndirect](#createellipticrgnindirect)|Inizializza un `CRgn` oggetto con un'area ellittica definita da un [RECT](../../mfc/reference/rect-structure1.md) struttura.|  
|[CRgn::CreateFromData](#createfromdata)|Crea un'area dai dati di area e la trasformazione specificati.|  
|[CRgn::CreateFromPath](#createfrompath)|Crea un'area dal percorso selezionato nel contesto di dispositivo specificato.|  
|[CRgn::CreatePolygonRgn](#createpolygonrgn)|Inizializza un `CRgn` oggetto con un'area poligonale. Il sistema si chiude il poligono automaticamente, se necessario, tracciando una linea tra il vertice ultima alla prima.|  
|[CRgn::CreatePolyPolygonRgn](#createpolypolygonrgn)|Inizializza un `CRgn` oggetto con un'area composta da una serie di poligoni chiusi. I poligoni sia non contigui, o si sovrappongano.|  
|[CRgn::CreateRectRgn](#createrectrgn)|Inizializza un `CRgn` oggetto con un'area rettangolare.|  
|[CRgn::CreateRectRgnIndirect](#createrectrgnindirect)|Inizializza un `CRgn` oggetto con un'area rettangolare definita da un [RECT](../../mfc/reference/rect-structure1.md) struttura.|  
|[CRgn::CreateRoundRectRgn](#createroundrectrgn)|Inizializza un `CRgn` oggetto con un'area rettangolare con angoli arrotondati.|  
|[CRgn::EqualRgn](#equalrgn)|Controlla due `CRgn` oggetti per determinare se sono equivalenti.|  
|[CRgn::FromHandle](#fromhandle)|Restituisce un puntatore a un `CRgn` oggetto quando viene specificato un handle per un'area di Windows.|  
|[CRgn::GetRegionData](#getregiondata)|Inserisce nel buffer specificato con i dati che descrive l'area specificata.|  
|[CRgn::GetRgnBox](#getrgnbox)|Recupera le coordinate del rettangolo di delimitazione di un `CRgn` oggetto.|  
|[CRgn::OffsetRgn](#offsetrgn)|Sposta un `CRgn` oggetto da parte degli offset specificati.|  
|[CRgn::PtInRegion](#ptinregion)|Determina se un punto specificato è nell'area.|  
|[CRgn::RectInRegion](#rectinregion)|Determina se qualsiasi parte di un rettangolo specificato è entro i limiti dell'area.|  
|[CRgn::SetRectRgn](#setrectrgn)|Set di `CRgn` oggetto nell'area rettangolare specificata.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRgn::operator HRGN](#operator_hrgn)|Restituisce l'handle di Windows contenuto nel `CRgn` oggetto.|  
  
## <a name="remarks"></a>Note  
 Un'area è un'area ellittica o poligonale all'interno di una finestra. Per utilizzare le aree, utilizzare le funzioni membro della classe `CRgn` con le funzioni di visualizzazione definite come membri della classe `CDC`.  
  
 Le funzioni membro di `CRgn` creare, modificare e recuperare informazioni sull'oggetto area per cui vengono chiamati.  
  
 Per ulteriori informazioni sull'utilizzo di `CRgn`, vedere [oggetti grafici](../../mfc/graphic-objects.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CGdiObject](../../mfc/reference/cgdiobject-class.md)  
  
 `CRgn`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="a-namecombinergna--crgncombinergn"></a><a name="combinergn"></a>CRgn::CombineRgn  
 Crea una nuova area GDI combinando due regioni esistenti.  
  
```  
int CombineRgn(
    CRgn* pRgn1,  
    CRgn* pRgn2,  
    int nCombineMode);
```  
  
### <a name="parameters"></a>Parametri  
 `pRgn1`  
 Identifica un'area esistente.  
  
 `pRgn2`  
 Identifica un'area esistente.  
  
 `nCombineMode`  
 Specifica l'operazione da eseguire quando si combinano le aree di origine di due. Può essere uno dei valori seguenti:  
  
- **RGN_AND** le aree sovrapposte di entrambe le aree (intersezione).  
  
- **RGN_COPY** crea una copia dell'area 1 (identificato da `pRgn1`).  
  
- **RGN_DIFF** crea un'area composta le aree dell'area 1 (identificato da `pRgn1`) che non fanno parte della regione 2 (identificato da `pRgn2`).  
  
- **RGN_OR** combina entrambe le aree nella loro interezza (unione).  
  
- **RGN_XOR** combina entrambe le aree, ma rimuove aree sovrapposte.  
  
### <a name="return-value"></a>Valore restituito  
 Specifica il tipo di area risulta. Può essere uno dei valori seguenti:  
  
- **COMPLEXREGION** nuova area è sovrapposti i bordi.  
  
- **ERRORE** alcuna nuova area creata.  
  
- **NULLREGION** nuova area è vuota.  
  
- **SIMPLEREGION** nuova area non dispone di alcun bordi sovrapposti.  
  
### <a name="remarks"></a>Note  
 Le aree vengono combinate come specificato da `nCombineMode`.  
  
 I due specificati vengono combinate le aree e l'handle dell'area risultante viene archiviato nel `CRgn` oggetto. Pertanto, qualsiasi area viene archiviato nel `CRgn` oggetto è stato sostituito dall'area combinato.  
  
 Le dimensioni di un'area sono limitata a 32.767 da 32.767 unità logiche o 64 KB di memoria, a seconda del valore minore.  
  
 Utilizzare [CopyRgn](#copyrgn) per copiare semplicemente un'area in un'altra area.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#144;](../../mfc/codesnippet/cpp/crgn-class_1.cpp)]  
  
##  <a name="a-namecopyrgna--crgncopyrgn"></a><a name="copyrgn"></a>CRgn::CopyRgn  
 Copia dell'area definita da `pRgnSrc` nel `CRgn` oggetto.  
  
```  
int CopyRgn(CRgn* pRgnSrc);
```  
  
### <a name="parameters"></a>Parametri  
 `pRgnSrc`  
 Identifica un'area esistente.  
  
### <a name="return-value"></a>Valore restituito  
 Specifica il tipo di area risulta. Può essere uno dei valori seguenti:  
  
- **COMPLEXREGION** nuova area è sovrapposti i bordi.  
  
- **ERRORE** alcuna nuova area creata.  
  
- **NULLREGION** nuova area è vuota.  
  
- **SIMPLEREGION** nuova area non dispone di alcun bordi sovrapposti.  
  
### <a name="remarks"></a>Note  
 La nuova area sostituisce area precedentemente archiviato nel `CRgn` oggetto. Questa funzione è un caso speciale del [CombineRgn](#combinergn) funzione membro.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CRgn::CreateEllipticRgn](#createellipticrgn).  
  
##  <a name="a-namecreateellipticrgna--crgncreateellipticrgn"></a><a name="createellipticrgn"></a>CRgn::CreateEllipticRgn  
 Crea un'area ellittica.  
  
```  
BOOL CreateEllipticRgn(
    int x1,  
    int y1,  
    int x2,  
    int y2);
```  
  
### <a name="parameters"></a>Parametri  
 `x1`  
 Specifica la coordinata x logica dell'angolo superiore sinistro del rettangolo di delimitazione dell'ellisse.  
  
 `y1`  
 Specifica la coordinata y logica dell'angolo superiore sinistro del rettangolo di delimitazione dell'ellisse.  
  
 `x2`  
 Specifica la coordinata x logica dell'angolo inferiore destro del rettangolo di delimitazione dell'ellisse.  
  
 `y2`  
 Specifica la coordinata y logica dell'angolo inferiore destro del rettangolo di delimitazione dell'ellisse.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'operazione ha esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'area è definita dal rettangolo di delimitazione specificato da `x1`, `y1`, `x2`, e `y2`. L'area viene archiviato nel `CRgn` oggetto.  
  
 Le dimensioni di un'area sono limitata a 32.767 da 32.767 unità logiche o 64 KB di memoria, a seconda del valore minore.  
  
 Quando ha terminato di utilizzare un'area creata con il `CreateEllipticRgn` funzione, un'applicazione deve selezionare l'area orizzontale del contesto di dispositivo e utilizzare il `DeleteObject` funzione per rimuoverlo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#145; NVC_MFCDocView](../../mfc/codesnippet/cpp/crgn-class_2.cpp)]  
  
##  <a name="a-namecreateellipticrgnindirecta--crgncreateellipticrgnindirect"></a><a name="createellipticrgnindirect"></a>CRgn::CreateEllipticRgnIndirect  
 Crea un'area ellittica.  
  
```  
BOOL CreateEllipticRgnIndirect(LPCRECT lpRect);
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect`  
 Punta a un `RECT` struttura o un `CRect` oggetto che contiene le coordinate logiche degli angoli in alto a sinistra e in basso a destra del rettangolo di delimitazione dell'ellisse.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'operazione ha esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'area è definita per la struttura o l'oggetto a cui puntata `lpRect` e viene archiviato nel `CRgn` oggetto.  
  
 Le dimensioni di un'area sono limitata a 32.767 da 32.767 unità logiche o 64 KB di memoria, a seconda del valore minore.  
  
 Quando ha terminato di utilizzare un'area creata con il `CreateEllipticRgnIndirect` funzione, un'applicazione deve selezionare l'area orizzontale del contesto di dispositivo e utilizzare il `DeleteObject` funzione per rimuoverlo.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CRgn::CreateRectRgnIndirect](#createrectrgnindirect).  
  
##  <a name="a-namecreatefromdataa--crgncreatefromdata"></a><a name="createfromdata"></a>CRgn::CreateFromData  
 Crea un'area dai dati di area e la trasformazione specificati.  
  
```  
BOOL CreateFromData(
    const XFORM* lpXForm,  
    int nCount,  
    const RGNDATA* pRgnData);
```  
  
### <a name="parameters"></a>Parametri  
 *lpXForm*  
 Punta a un [XFORM](../../mfc/reference/xform-structure.md) struttura di dati che definisce la trasformazione da eseguire sull'area. Se questo puntatore è **NULL**, viene utilizzata la trasformazione di identità.  
  
 `nCount`  
 Specifica il numero di byte a cui puntata `pRgnData`.  
  
 `pRgnData`  
 Punta a un [RGNDATA](../../mfc/reference/rgndata-structure.md) struttura di dati che contiene i dati dell'area.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Un'applicazione può recuperare dati per un'area chiamando il `CRgn::GetRegionData` (funzione).  
  
##  <a name="a-namecreatefrompatha--crgncreatefrompath"></a><a name="createfrompath"></a>CRgn::CreateFromPath  
 Crea un'area dal percorso selezionato nel contesto di dispositivo specificato.  
  
```  
BOOL CreateFromPath(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Identifica un contesto di dispositivo che contiene un tracciato chiuso.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Il contesto di dispositivo identificato mediante il `pDC` parametro deve contenere un tracciato chiuso. Dopo aver `CreateFromPath` converte il percorso in un'area, Windows ignora il tracciato chiuso dal contesto del dispositivo.  
  
##  <a name="a-namecreatepolygonrgna--crgncreatepolygonrgn"></a><a name="createpolygonrgn"></a>CRgn::CreatePolygonRgn  
 Crea un'area poligonale.  
  
```  
BOOL CreatePolygonRgn(
    LPPOINT lpPoints,  
    int nCount,  
    int nMode);
```  
  
### <a name="parameters"></a>Parametri  
 `lpPoints`  
 Punta a una matrice di **punto** strutture o una matrice di `CPoint` oggetti. Ogni struttura specifica le coordinate x e y di un vertice del poligono. Il **punto** struttura ha il formato seguente:  
  
 `typedef struct tagPOINT {`  
  
 `int x;`  
  
 `int y;`  
  
 `} POINT;`  
  
 `nCount`  
 Specifica il numero di **punto** strutture o `CPoint` oggetti nella matrice a cui puntava `lpPoints`.  
  
 `nMode`  
 Specifica la modalità di riempimento per l'area. Questo parametro può essere **ALTERNATIVO** o **VERTICI**.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'operazione ha esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il sistema si chiude il poligono automaticamente, se necessario, tracciando una linea tra il vertice ultima alla prima. L'area risulta viene archiviato nel `CRgn` oggetto.  
  
 Le dimensioni di un'area sono limitata a 32.767 da 32.767 unità logiche o 64 KB di memoria, a seconda del valore minore.  
  
 Quando la modalità di riempimento del poligono è **ALTERNATIVO**, il sistema riempie l'area tra i lati di pari e dispari poligono su ogni linea di analisi. Ovvero, il sistema riempie l'area tra il primo e secondo lato, tra il lato terzo e quarto e così via.  
  
 Quando la modalità di riempimento del poligono è **VERTICI**, il sistema utilizza la direzione in cui è stata disegnata una figura per determinare se riempire un'area. Ogni segmento di linea in un poligono viene disegnato in senso orario o antiorario. Ogni volta che una linea immaginaria tracciata da un'area all'esterno di una figura passa attraverso un segmento di linea in senso orario, un numero viene incrementato. Quando la riga passa attraverso un segmento di linea in senso antiorario, il conteggio viene decrementato. L'area viene inserito se il conteggio è diverso da zero quando la riga raggiunge all'esterno della figura.  
  
 Quando un'applicazione ha terminato di utilizzare un'area creata con il `CreatePolygonRgn` funzione, è necessario selezionare l'area out del contesto di dispositivo e utilizzare il `DeleteObject` funzione per rimuoverlo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#146; NVC_MFCDocView](../../mfc/codesnippet/cpp/crgn-class_3.cpp)]  
  
##  <a name="a-namecreatepolypolygonrgna--crgncreatepolypolygonrgn"></a><a name="createpolypolygonrgn"></a>CRgn::CreatePolyPolygonRgn  
 Crea un'area composta da una serie di poligoni chiusi.  
  
```  
BOOL CreatePolyPolygonRgn(
    LPPOINT lpPoints,  
    LPINT lpPolyCounts,  
    int nCount,  
    int nPolyFillMode);
```  
  
### <a name="parameters"></a>Parametri  
 `lpPoints`  
 Punta a una matrice di **punto** strutture o una matrice di `CPoint` gli oggetti che definisce i vertici dei poligoni. Ogni poligono deve essere chiusa in modo esplicito perché il sistema non chiuderle automaticamente. I poligoni vengono specificati consecutivamente. Il **punto** struttura ha il formato seguente:  
  
 `typedef struct tagPOINT {`  
  
 `int x;`  
  
 `int y;`  
  
 `} POINT;`  
  
 `lpPolyCounts`  
 Punta a una matrice di interi. Il primo intero specifica il numero di vertici del poligono in prima di `lpPoints` matrice, il secondo valore integer specifica il numero di vertici in poligono secondo e così via.  
  
 `nCount`  
 Specifica il numero totale di valori integer di `lpPolyCounts` matrice.  
  
 `nPolyFillMode`  
 Specifica la modalità di riempimento del poligono. Questo valore può essere **ALTERNATIVO** o **VERTICI**.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'operazione ha esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'area risulta viene archiviato nel `CRgn` oggetto.  
  
 I poligoni sia non contigui, o si sovrappongano.  
  
 Le dimensioni di un'area sono limitata a 32.767 da 32.767 unità logiche o 64 KB di memoria, a seconda del valore minore.  
  
 Quando la modalità di riempimento del poligono è **ALTERNATIVO**, il sistema riempie l'area tra i lati di pari e dispari poligono su ogni linea di analisi. Ovvero, il sistema riempie l'area tra il primo e secondo lato, tra il lato terzo e quarto e così via.  
  
 Quando la modalità di riempimento del poligono è **VERTICI**, il sistema utilizza la direzione in cui è stata disegnata una figura per determinare se riempire un'area. Ogni segmento di linea in un poligono viene disegnato in senso orario o antiorario. Ogni volta che una linea immaginaria tracciata da un'area all'esterno di una figura passa attraverso un segmento di linea in senso orario, un numero viene incrementato. Quando la riga passa attraverso un segmento di linea in senso antiorario, il conteggio viene decrementato. L'area viene inserito se il conteggio è diverso da zero quando la riga raggiunge all'esterno della figura.  
  
 Quando un'applicazione ha terminato di utilizzare un'area creata con il `CreatePolyPolygonRgn` funzione, è necessario selezionare l'area out del contesto di dispositivo e utilizzare il [CGDIObject::DeleteObject](../../mfc/reference/cgdiobject-class.md#deleteobject) funzione membro per rimuoverlo.  
  
##  <a name="a-namecreaterectrgna--crgncreaterectrgn"></a><a name="createrectrgn"></a>CRgn::CreateRectRgn  
 Crea un'area rettangolare che viene archiviata nel `CRgn` oggetto.  
  
```  
BOOL CreateRectRgn(
    int x1,  
    int y1,  
    int x2,  
    int y2);
```  
  
### <a name="parameters"></a>Parametri  
 `x1`  
 Specifica la coordinata x logica dell'angolo superiore sinistro dell'area.  
  
 `y1`  
 Specifica la coordinata y logica dell'angolo superiore sinistro dell'area.  
  
 `x2`  
 Specifica la coordinata x logica dell'angolo inferiore destro dell'area.  
  
 `y2`  
 Specifica la coordinata y logica dell'angolo inferiore destro dell'area.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'operazione ha esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Le dimensioni di un'area sono limitata a 32.767 da 32.767 unità logiche o 64 KB di memoria, a seconda del valore minore.  
  
 Quando ha terminato di utilizzare un'area creata da `CreateRectRgn`, un'applicazione deve usare il [CGDIObject::DeleteObject](../../mfc/reference/cgdiobject-class.md#deleteobject) funzione membro per rimuovere l'area.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[Specificare&#147; NVC_MFCDocView](../../mfc/codesnippet/cpp/crgn-class_4.cpp)]  
  
 Per un altro esempio, vedere [CRgn::CombineRgn](#combinergn).  
  
##  <a name="a-namecreaterectrgnindirecta--crgncreaterectrgnindirect"></a><a name="createrectrgnindirect"></a>CRgn::CreateRectRgnIndirect  
 Crea un'area rettangolare che viene archiviata nel `CRgn` oggetto.  
  
```  
BOOL CreateRectRgnIndirect(LPCRECT lpRect);
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect`  
 Punta a un `RECT` struttura o `CRect` oggetto che contiene le coordinate logiche degli angoli in alto a sinistra e in basso a destra dell'area. Il `RECT` struttura ha il formato seguente:  
  
 `typedef struct tagRECT {`  
  
 `int left;`  
  
 `int top;`  
  
 `int right;`  
  
 `int bottom;`  
  
 `} RECT;`  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'operazione ha esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Le dimensioni di un'area sono limitata a 32.767 da 32.767 unità logiche o 64 KB di memoria, a seconda del valore minore.  
  
 Quando ha terminato di utilizzare un'area creata da `CreateRectRgnIndirect`, un'applicazione deve usare il [CGDIObject::DeleteObject](../../mfc/reference/cgdiobject-class.md#deleteobject) funzione membro per rimuovere l'area.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#148;](../../mfc/codesnippet/cpp/crgn-class_5.cpp)]  
  
##  <a name="a-namecreateroundrectrgna--crgncreateroundrectrgn"></a><a name="createroundrectrgn"></a>CRgn::CreateRoundRectRgn  
 Crea un'area rettangolare con angoli arrotondati che viene archiviato nel `CRgn` oggetto.  
  
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
 `x1`  
 Specifica la coordinata x logica dell'angolo superiore sinistro dell'area.  
  
 `y1`  
 Specifica la coordinata y logica dell'angolo superiore sinistro dell'area.  
  
 `x2`  
 Specifica la coordinata x logica dell'angolo inferiore destro dell'area.  
  
 `y2`  
 Specifica la coordinata y logica dell'angolo inferiore destro dell'area.  
  
 *x3*  
 Specifica la larghezza dell'ellisse utilizzata per creare gli angoli arrotondati.  
  
 `y3`  
 Specifica l'altezza dell'ellisse utilizzata per creare gli angoli arrotondati.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'operazione ha esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Le dimensioni di un'area sono limitata a 32.767 da 32.767 unità logiche o 64 KB di memoria, a seconda del valore minore.  
  
 Quando un'applicazione ha terminato di utilizzare un'area creata con il `CreateRoundRectRgn` funzione, è necessario selezionare l'area out del contesto di dispositivo e utilizzare il [CGDIObject::DeleteObject](../../mfc/reference/cgdiobject-class.md#deleteobject) funzione membro per rimuoverlo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#149;](../../mfc/codesnippet/cpp/crgn-class_6.cpp)]  
  
##  <a name="a-namecrgna--crgncrgn"></a><a name="crgn"></a>CRgn::CRgn  
 Costruisce un oggetto `CRgn`.  
  
```  
CRgn();
```  
  
### <a name="remarks"></a>Note  
 Il `m_hObject` membro dati non contiene un'area GDI Windows valida fino a quando l'oggetto viene inizializzato con uno o più degli altri `CRgn` funzioni membro.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CRgn::CreateRoundRectRgn](#createroundrectrgn).  
  
##  <a name="a-nameequalrgna--crgnequalrgn"></a><a name="equalrgn"></a>CRgn::EqualRgn  
 Determina se l'area specificato è equivalente all'area archiviato nel `CRgn` oggetto.  
  
```  
BOOL EqualRgn(CRgn* pRgn) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pRgn`  
 Identifica un'area.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se le due aree sono equivalenti. in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#150;](../../mfc/codesnippet/cpp/crgn-class_7.cpp)]  
  
##  <a name="a-namefromhandlea--crgnfromhandle"></a><a name="fromhandle"></a>CRgn::FromHandle  
 Restituisce un puntatore a un `CRgn` oggetto quando viene specificato un handle per un'area di Windows.  
  
```  
static CRgn* PASCAL FromHandle(HRGN hRgn);
```  
  
### <a name="parameters"></a>Parametri  
 `hRgn`  
 Specifica un handle per un'area di Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CRgn` oggetto. Se la funzione non ha esito positivo, il valore restituito è **NULL**.  
  
### <a name="remarks"></a>Note  
 Se un `CRgn` oggetto non è già connesso all'handle temporaneo `CRgn` oggetto viene creato e collegato. Questo temporaneo `CRgn` oggetto è valido solo fino a quando la volta successiva che l'applicazione ha il tempo di inattività nel relativo ciclo di eventi, che ora immagine temporanea tutti gli oggetti vengono eliminati. In altre parole, questo è che l'oggetto temporaneo è valido solo durante l'elaborazione di una finestra di messaggio.  
  
##  <a name="a-namegetregiondataa--crgngetregiondata"></a><a name="getregiondata"></a>CRgn::GetRegionData  
 Inserisce nel buffer specificato con i dati che descrive l'area.  
  
```  
int GetRegionData(
    LPRGNDATA lpRgnData,  
    int nCount) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpRgnData`  
 Punta a un [RGNDATA](../../mfc/reference/rgndata-structure.md) struttura di dati che riceve le informazioni. Se questo parametro è **NULL**, il valore restituito contiene il numero di byte necessari per i dati dell'area.  
  
 `nCount`  
 Specifica la dimensione, in byte, del `lpRgnData` buffer.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo e `nCount` specifica un numero sufficiente di byte, il valore restituito è sempre `nCount`. Se la funzione ha esito negativo o se `nCount` specifica minore rispetto a un numero sufficiente di byte, il valore restituito è 0 (errore).  
  
### <a name="remarks"></a>Note  
 Questi dati includono le dimensioni dei rettangoli che costituiscono l'area. Questa funzione viene utilizzata in combinazione con il `CRgn::CreateFromData` (funzione).  
  
##  <a name="a-namegetrgnboxa--crgngetrgnbox"></a><a name="getrgnbox"></a>CRgn::GetRgnBox  
 Recupera le coordinate del rettangolo di delimitazione di `CRgn` oggetto.  
  
```  
int GetRgnBox(LPRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect`  
 Punta a un `RECT` struttura o `CRect` oggetto per ricevere le coordinate del rettangolo di delimitazione. Il `RECT` struttura ha il formato seguente:  
  
 `typedef struct tagRECT {`  
  
 `int left;`  
  
 `int top;`  
  
 `int right;`  
  
 `int bottom;`  
  
 `} RECT;`  
  
### <a name="return-value"></a>Valore restituito  
 Specifica il tipo della regione. Può essere uno dei valori seguenti:  
  
- **COMPLEXREGION** area è sovrapposti i bordi.  
  
- **NULLREGION** area è vuota.  
  
- **ERRORE** `CRgn` l'oggetto non specifica un'area valida.  
  
- **SIMPLEREGION** area non dispone di alcun bordi sovrapposti.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CRgn::CreatePolygonRgn](#createpolygonrgn).  
  
##  <a name="a-nameoffsetrgna--crgnoffsetrgn"></a><a name="offsetrgn"></a>CRgn::OffsetRgn  
 Sposta l'area archiviato nel `CRgn` oggetto da parte degli offset specificati.  
  
```  
int OffsetRgn(
    int x,  
    int y);  
  
int OffsetRgn(POINT point);
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica il numero di unità per spostare a sinistra o destra.  
  
 *y*  
 Specifica il numero di unità da spostare verso l'alto o verso il basso.  
  
 `point`  
 Coordinata x del `point` specifica il numero di unità per spostare a sinistra o destra. Coordinata y del `point` specifica il numero di unità da spostare verso l'alto o verso il basso. Il `point` parametro può essere un **punto** struttura o un `CPoint` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Tipo della nuova area. Può essere uno dei valori seguenti:  
  
- **COMPLEXREGION** area è sovrapposti i bordi.  
  
- **ERRORE** handle dell'area non è valido.  
  
- **NULLREGION** area è vuota.  
  
- **SIMPLEREGION** area non dispone di alcun bordi sovrapposti.  
  
### <a name="remarks"></a>Note  
 La funzione consente di spostare l'area *x* unità lungo l'asse x e *y* unità lungo l'asse y.  
  
 I valori delle coordinate di un'area devono essere minore o uguale a 32.767 e maggiore o uguale a -32.768. Il *x* e *y* parametri devono essere scelti attentamente per evitare che le coordinate di regione non valido.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CRgn::CreateEllipticRgn](#createellipticrgn).  
  
##  <a name="a-nameoperatorhrgna--crgnoperator-hrgn"></a><a name="operator_hrgn"></a>CRgn::operator HRGN  
 Utilizzare questo operatore per ottenere l'handle GDI Windows collegato di `CRgn` oggetto.  
  
```  
operator HRGN() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, un handle per l'oggetto GDI Windows rappresentato dal `CRgn` oggetto; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Questo è un operatore di cast, che supporta l'utilizzo diretto di un **HRGN** oggetto.  
  
 Per ulteriori informazioni sull'utilizzo di oggetti grafici, vedere l'articolo [oggetti grafico](http://msdn.microsoft.com/library/windows/desktop/dd144962) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameptinregiona--crgnptinregion"></a><a name="ptinregion"></a>CRgn::PtInRegion  
 Controlla se il punto specificato da *x* e *y* nell'area archiviato nel `CRgn` oggetto.  
  
```  
BOOL PtInRegion(
    int x,  
    int y) const;  
  
BOOL PtInRegion(POINT point) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica la coordinata x logica del punto da verificare.  
  
 *y*  
 Specifica la coordinata y logica del punto da verificare.  
  
 `point`  
 Le coordinate x e y di `point` specificare le coordinate x e y del punto da verificare il valore di. Il `point` parametro può essere un **punto** struttura o un `CPoint` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il punto nell'area; in caso contrario 0.  
  
##  <a name="a-namerectinregiona--crgnrectinregion"></a><a name="rectinregion"></a>CRgn::RectInRegion  
 Determina se qualsiasi parte del rettangolo specificato da `lpRect` trova entro i limiti dell'area archiviato nel `CRgn` oggetto.  
  
```  
BOOL RectInRegion(LPCRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect`  
 Punta a un `RECT` struttura o `CRect` oggetto. Il `RECT` struttura ha il formato seguente:  
  
 `typedef struct tagRECT {`  
  
 `int left;`  
  
 `int top;`  
  
 `int right;`  
  
 `int bottom;`  
  
 `} RECT;`  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se qualsiasi parte del rettangolo specificato si trova entro i limiti dell'area di lavoro; in caso contrario 0.  
  
##  <a name="a-namesetrectrgna--crgnsetrectrgn"></a><a name="setrectrgn"></a>CRgn::SetRectRgn  
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
 `x1`  
 Specifica la coordinata x dell'angolo superiore sinistro dell'area rettangolare.  
  
 `y1`  
 Specifica la coordinata y dell'angolo superiore sinistro dell'area rettangolare.  
  
 `x2`  
 Specifica la coordinata x dell'angolo inferiore destro dell'area rettangolare.  
  
 `y2`  
 Specifica la coordinata y dell'angolo inferiore destro dell'area rettangolare.  
  
 `lpRect`  
 Specifica l'area rettangolare. Può essere un puntatore a un `RECT` struttura o un `CRect` oggetto.  
  
### <a name="remarks"></a>Note  
 A differenza di [CreateRectRgn](#createrectrgn), tuttavia, non allocare qualsiasi ulteriore memoria dall'heap dell'applicazione Windows locale. Al contrario, viene utilizzato lo spazio allocato per l'area archiviate nel `CRgn` oggetto. Ciò significa che il `CRgn` oggetto deve già essere stato inizializzato con un'area di Windows valida prima di chiamare `SetRectRgn`. I punti specificati da `x1`, `y1`, `x2`, e `y2` specificare la dimensione minima dello spazio allocato.  
  
 Utilizzare questa funzione anziché il `CreateRectRgn` funzione membro per evitare chiamate al gestore della memoria locale.  
  
## <a name="see-also"></a>Vedere anche  
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)




