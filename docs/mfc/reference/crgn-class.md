---
title: "CRgn (classe) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CRgn"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "HRGN"
  - "CRgn (classe)"
  - "aree, MFC"
ms.assetid: d904da84-76aa-481e-8780-b09485f49e64
caps.latest.revision: 23
caps.handback.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CRgn (classe)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Incapsula un'area GDI (Graphics Device Interface) di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CRgn : public CGdiObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRgn::CRgn](#crgn__crgn)|Costruisce un oggetto `CRgn`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRgn::CombineRgn](#crgn__combinergn)|Imposta un `CRgn` dell'oggetto in modo che è equivalente all'unione di due oggetti `CRgn` oggetti.|  
|[CRgn::CopyRgn](#crgn__copyrgn)|Imposta un `CRgn` dell'oggetto in modo che sia una copia di un oggetto specificato `CRgn` oggetto.|  
|[CRgn::CreateEllipticRgn](#crgn__createellipticrgn)|Inizializza un `CRgn` oggetto con un'area ellittica.|  
|[CRgn::CreateEllipticRgnIndirect](#crgn__createellipticrgnindirect)|Inizializza un `CRgn` oggetto con un'area ellittica definita da un [RECT](../../mfc/reference/rect-structure1.md) struttura.|  
|[CRgn::CreateFromData](#crgn__createfromdata)|Crea un'area dai dati di area e la trasformazione specificati.|  
|[CRgn::CreateFromPath](#crgn__createfrompath)|Crea un'area dal percorso selezionato nel contesto di dispositivo specificato.|  
|[CRgn::CreatePolygonRgn](#crgn__createpolygonrgn)|Inizializza un `CRgn` oggetto con un'area poligonale. Il sistema si chiude il poligono automaticamente, se necessario, tracciando una linea tra il vertice ultima alla prima.|  
|[CRgn::CreatePolyPolygonRgn](#crgn__createpolypolygonrgn)|Inizializza un `CRgn` oggetto con un'area composta da una serie di poligoni chiusi. I poligoni sia non contigui, o si sovrappongano.|  
|[CRgn::CreateRectRgn](#crgn__createrectrgn)|Inizializza un `CRgn` oggetto con un'area rettangolare.|  
|[CRgn::CreateRectRgnIndirect](#crgn__createrectrgnindirect)|Inizializza un `CRgn` oggetto con un'area rettangolare definita da un [RECT](../../mfc/reference/rect-structure1.md) struttura.|  
|[CRgn::CreateRoundRectRgn](#crgn__createroundrectrgn)|Inizializza un `CRgn` oggetto con un'area rettangolare con angoli arrotondati.|  
|[CRgn::EqualRgn](#crgn__equalrgn)|Controlla due `CRgn` oggetti per determinare se sono equivalenti.|  
|[CRgn::FromHandle](#crgn__fromhandle)|Restituisce un puntatore a un `CRgn` oggetto quando viene specificato un handle per un'area di Windows.|  
|[CRgn::GetRegionData](#crgn__getregiondata)|Inserisce nel buffer specificato con i dati che descrive l'area specificata.|  
|[CRgn::GetRgnBox](#crgn__getrgnbox)|Recupera le coordinate del rettangolo di delimitazione di un `CRgn` oggetto.|  
|[CRgn::OffsetRgn](#crgn__offsetrgn)|Sposta un `CRgn` oggetto da parte degli offset specificati.|  
|[CRgn::PtInRegion](#crgn__ptinregion)|Determina se un punto specificato è nell'area.|  
|[CRgn::RectInRegion](#crgn__rectinregion)|Determina se qualsiasi parte di un rettangolo specificato è entro i limiti dell'area.|  
|[CRgn::SetRectRgn](#crgn__setrectrgn)|Set di `CRgn` oggetto nell'area rettangolare specificata.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRgn::operator HRGN](#crgn__operator_hrgn)|Restituisce l'handle di Windows contenuto nel `CRgn` oggetto.|  
  
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
  
##  <a name="a-namecrgncombinergna-crgncombinergn"></a><a name="crgn__combinergn"></a>  CRgn::CombineRgn  
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
  
- **RGN_COPY** Crea una copia dell'area 1 (identificato da `pRgn1`).  
  
- **RGN_DIFF** Crea un'area composta le aree dell'area 1 (identificato da `pRgn1`) che non fanno parte della regione 2 (identificato da `pRgn2`).  
  
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
  
 Utilizzare [CopyRgn](#crgn__copyrgn) per copiare semplicemente un'area in un'altra area.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#144](../../mfc/codesnippet/CPP/crgn-class_1.cpp)]  
  
##  <a name="a-namecrgncopyrgna-crgncopyrgn"></a><a name="crgn__copyrgn"></a>  CRgn::CopyRgn  
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
 La nuova area sostituisce area precedentemente archiviato nel `CRgn` oggetto. Questa funzione è un caso speciale del [CombineRgn](#crgn__combinergn) funzione membro.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CRgn::CreateEllipticRgn](#crgn__createellipticrgn).  
  
##  <a name="a-namecrgncreateellipticrgna-crgncreateellipticrgn"></a><a name="crgn__createellipticrgn"></a>  CRgn::CreateEllipticRgn  
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
 [!code-cpp[NVC_MFCDocView#145](../../mfc/codesnippet/CPP/crgn-class_2.cpp)]  
  
##  <a name="a-namecrgncreateellipticrgnindirecta-crgncreateellipticrgnindirect"></a><a name="crgn__createellipticrgnindirect"></a>  CRgn::CreateEllipticRgnIndirect  
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
  Vedere l'esempio per [CRgn::CreateRectRgnIndirect](#crgn__createrectrgnindirect).  
  
##  <a name="a-namecrgncreatefromdataa-crgncreatefromdata"></a><a name="crgn__createfromdata"></a>  CRgn::CreateFromData  
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
  
##  <a name="a-namecrgncreatefrompatha-crgncreatefrompath"></a><a name="crgn__createfrompath"></a>  CRgn::CreateFromPath  
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
  
##  <a name="a-namecrgncreatepolygonrgna-crgncreatepolygonrgn"></a><a name="crgn__createpolygonrgn"></a>  CRgn::CreatePolygonRgn  
 Crea un'area poligonale.  
  
```  
BOOL CreatePolygonRgn(
    LPPOINT lpPoints,  
    int nCount,  
    int nMode);
```  
  
### <a name="parameters"></a>Parametri  
 `lpPoints`  
 Punta a una matrice di **PUNTO** strutture o una matrice di `CPoint` oggetti. Ogni struttura specifica le coordinate x e y di un vertice del poligono. Il **PUNTO** struttura ha il formato seguente:  
  
 `typedef struct tagPOINT {`  
  
 `int x;`  
  
 `int y;`  
  
 `} POINT;`  
  
 `nCount`  
 Specifica il numero di **PUNTO** strutture o `CPoint` oggetti nella matrice a cui puntava `lpPoints`.  
  
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
 [!code-cpp[NVC_MFCDocView#146](../../mfc/codesnippet/CPP/crgn-class_3.cpp)]  
  
##  <a name="a-namecrgncreatepolypolygonrgna-crgncreatepolypolygonrgn"></a><a name="crgn__createpolypolygonrgn"></a>  CRgn::CreatePolyPolygonRgn  
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
 Punta a una matrice di **PUNTO** strutture o una matrice di `CPoint` gli oggetti che definisce i vertici dei poligoni. Ogni poligono deve essere chiusa in modo esplicito perché il sistema non chiuderle automaticamente. I poligoni vengono specificati consecutivamente. Il **PUNTO** struttura ha il formato seguente:  
  
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
  
 Quando un'applicazione ha terminato di utilizzare un'area creata con il `CreatePolyPolygonRgn` funzione, è necessario selezionare l'area out del contesto di dispositivo e utilizzare il [CGDIObject::DeleteObject](../../mfc/reference/cgdiobject-class.md#cgdiobject__deleteobject) funzione membro per rimuoverlo.  
  
##  <a name="a-namecrgncreaterectrgna-crgncreaterectrgn"></a><a name="crgn__createrectrgn"></a>  CRgn::CreateRectRgn  
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
  
 Quando ha terminato di utilizzare un'area creata da `CreateRectRgn`, un'applicazione deve usare il [CGDIObject::DeleteObject](../../mfc/reference/cgdiobject-class.md#cgdiobject__deleteobject) funzione membro per rimuovere l'area.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#147](../../mfc/codesnippet/CPP/crgn-class_4.cpp)]  
  
 Per un altro esempio, vedere [CRgn::CombineRgn](#crgn__combinergn).  
  
##  <a name="a-namecrgncreaterectrgnindirecta-crgncreaterectrgnindirect"></a><a name="crgn__createrectrgnindirect"></a>  CRgn::CreateRectRgnIndirect  
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
  
 Quando ha terminato di utilizzare un'area creata da `CreateRectRgnIndirect`, un'applicazione deve usare il [CGDIObject::DeleteObject](../../mfc/reference/cgdiobject-class.md#cgdiobject__deleteobject) funzione membro per rimuovere l'area.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#148](../../mfc/codesnippet/CPP/crgn-class_5.cpp)]  
  
##  <a name="a-namecrgncreateroundrectrgna-crgncreateroundrectrgn"></a><a name="crgn__createroundrectrgn"></a>  CRgn::CreateRoundRectRgn  
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
  
 Quando un'applicazione ha terminato di utilizzare un'area creata con il `CreateRoundRectRgn` funzione, è necessario selezionare l'area out del contesto di dispositivo e utilizzare il [CGDIObject::DeleteObject](../../mfc/reference/cgdiobject-class.md#cgdiobject__deleteobject) funzione membro per rimuoverlo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#149](../../mfc/codesnippet/CPP/crgn-class_6.cpp)]  
  
##  <a name="a-namecrgncrgna-crgncrgn"></a><a name="crgn__crgn"></a>  CRgn::CRgn  
 Costruisce un oggetto `CRgn`.  
  
```  
CRgn();
```  
  
### <a name="remarks"></a>Note  
 Il `m_hObject` membro dati non contiene un'area GDI Windows valida fino a quando l'oggetto viene inizializzato con uno o più degli altri `CRgn` funzioni membro.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CRgn::CreateRoundRectRgn](#crgn__createroundrectrgn).  
  
##  <a name="a-namecrgnequalrgna-crgnequalrgn"></a><a name="crgn__equalrgn"></a>  CRgn::EqualRgn  
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
 [!code-cpp[NVC_MFCDocView#150](../../mfc/codesnippet/CPP/crgn-class_7.cpp)]  
  
##  <a name="a-namecrgnfromhandlea-crgnfromhandle"></a><a name="crgn__fromhandle"></a>  CRgn::FromHandle  
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
  
##  <a name="a-namecrgngetregiondataa-crgngetregiondata"></a><a name="crgn__getregiondata"></a>  CRgn::GetRegionData  
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
 Se la funzione ha esito positivo e `nCount` Specifica un numero sufficiente di byte, il valore restituito è sempre `nCount`. Se la funzione ha esito negativo o se `nCount` specifica minore rispetto a un numero sufficiente di byte, il valore restituito è 0 (errore).  
  
### <a name="remarks"></a>Note  
 Questi dati includono le dimensioni dei rettangoli che costituiscono l'area. Questa funzione viene utilizzata in combinazione con il `CRgn::CreateFromData` (funzione).  
  
##  <a name="a-namecrgngetrgnboxa-crgngetrgnbox"></a><a name="crgn__getrgnbox"></a>  CRgn::GetRgnBox  
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
  Vedere l'esempio per [CRgn::CreatePolygonRgn](#crgn__createpolygonrgn).  
  
##  <a name="a-namecrgnoffsetrgna-crgnoffsetrgn"></a><a name="crgn__offsetrgn"></a>  CRgn::OffsetRgn  
 Sposta l'area archiviato nel `CRgn` oggetto da parte degli offset specificati.  
  
```  
int OffsetRgn(
    int x,  
    int y);

 
int OffsetRgn(
    POINT point);
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica il numero di unità per spostare a sinistra o destra.  
  
 *y*  
 Specifica il numero di unità da spostare verso l'alto o verso il basso.  
  
 `point`  
 Coordinata x del `point` Specifica il numero di unità per spostare a sinistra o destra. Coordinata y del `point` Specifica il numero di unità da spostare verso l'alto o verso il basso. Il `point` parametro può essere un **PUNTO** struttura o un `CPoint` oggetto.  
  
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
  Vedere l'esempio per [CRgn::CreateEllipticRgn](#crgn__createellipticrgn).  
  
##  <a name="a-namecrgnoperatorhrgna-crgnoperator-hrgn"></a><a name="crgn__operator_hrgn"></a>  CRgn::operator HRGN  
 Utilizzare questo operatore per ottenere l'handle GDI Windows collegato di `CRgn` oggetto.  
  
' ' operatore HRGN() const.

 
```  
  
### Return Value  
 If successful, a handle to the Windows GDI object represented by the `CRgn` object; otherwise **NULL**.  
  
### Remarks  
 This operator is a casting operator, which supports direct use of an **HRGN** object.  
  
 For more information about using graphic objects, see the article [Graphic Objects](http://msdn.microsoft.com/library/windows/desktop/dd144962) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="crgn__ptinregion"></a>  CRgn::PtInRegion  
 Checks whether the point given by *x* and *y* is in the region stored in the `CRgn` object.  
  
```  
BOOL PtInRegion (int x,  
    int y) const.

 
 
BOOL PtInRegion (punto) const.

 
```  
  
### Parameters  
 *x*  
 Specifies the logical x-coordinate of the point to test.  
  
 *y*  
 Specifies the logical y-coordinate of the point to test.  
  
 `point`  
 The x- and y-coordinates of `point` specify the x- and y-coordinates of the point to test the value of. The `point` parameter can either be a **POINT** structure or a `CPoint` object.  
  
### Return Value  
 Nonzero if the point is in the region; otherwise 0.  
  
##  <a name="crgn__rectinregion"></a>  CRgn::RectInRegion  
 Determines whether any part of the rectangle specified by `lpRect` is within the boundaries of the region stored in the `CRgn` object.  
  
```  
BOOL RectInRegion(LPCRECT lpRect) const.

 
```  
  
### Parameters  
 `lpRect`  
 Points to a `RECT` structure or `CRect` object. The `RECT` structure has the following form:  
  
 `typedef struct tagRECT {`  
  
 `int left;`  
  
 `int top;`  
  
 `int right;`  
  
 `int bottom;`  
  
 `} RECT;`  
  
### Return Value  
 Nonzero if any part of the specified rectangle lies within the boundaries of the region; otherwise 0.  
  
##  <a name="crgn__setrectrgn"></a>  CRgn::SetRectRgn  
 Creates a rectangular region.  
  
```  
void SetRectRgn (int x1,  
    int y1,  
    int x2,  
    int y2);

 
void SetRectRgn (LPCRECT lpRect);
```  
  
### Parameters  
 `x1`  
 Specifies the x-coordinate of the upper-left corner of the rectangular region.  
  
 `y1`  
 Specifies the y-coordinate of the upper-left corner of the rectangular region.  
  
 `x2`  
 Specifies the x-coordinate of the lower-right corner of the rectangular region.  
  
 `y2`  
 Specifies the y-coordinate of the lower-right corner of the rectangular region.  
  
 `lpRect`  
 Specifies the rectangular region. Can be either a pointer to a `RECT` structure or a `CRect` object.  
  
### Remarks  
 Unlike [CreateRectRgn](#crgn__createrectrgn), however, it does not allocate any additional memory from the local Windows application heap. Instead, it uses the space allocated for the region stored in the `CRgn` object. This means that the `CRgn` object must already have been initialized with a valid Windows region before calling `SetRectRgn`. The points given by `x1`, `y1`, `x2`, and `y2` specify the minimum size of the allocated space.  
  
 Use this function instead of the `CreateRectRgn` member function to avoid calls to the local memory manager.  
  
## See Also  
 [CWnd Class](../../mfc/reference/cwnd-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)



