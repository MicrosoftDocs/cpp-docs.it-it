---
title: "CRect (classe) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CRect"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LPCRECT (tipo di dati)"
  - "CRect (classe)"
  - "Operatore LPRECT"
  - "RECT (struttura)"
ms.assetid: dee4e752-15d6-4db4-b68f-1ad65b2ed6ca
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# CRect (classe)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Simile a un Windows [RECT](../../mfc/reference/rect-structure1.md) struttura.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CRect : public tagRECT  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRect::CRect](#crect__crect)|Costruisce un oggetto `CRect`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRect::BottomRight](#crect__bottomright)|Restituisce il punto in basso a destra di `CRect`.|  
|[CRect::CenterPoint](#crect__centerpoint)|Restituisce il punto centrale di `CRect`.|  
|[CRect::CopyRect](#crect__copyrect)|Copia le dimensioni di un rettangolo di origine per `CRect`.|  
|[CRect::DeflateRect](#crect__deflaterect)|Consente di ridurre la larghezza e altezza di `CRect`.|  
|[CRect::EqualRect](#crect__equalrect)|Determina se `CRect` è uguale al rettangolo specificato.|  
|[CRect::Height](#crect__height)|Calcola l'altezza di `CRect`.|  
|[CRect::InflateRect](#crect__inflaterect)|Aumenta la larghezza e altezza di `CRect`.|  
|[CRect::IntersectRect](#crect__intersectrect)|Set `CRect` uguale all'intersezione di due rettangoli.|  
|[CRect::IsRectEmpty](#crect__isrectempty)|Determina se `CRect` è vuoto. `CRect` Se la larghezza e/o altezza è pari a 0 è vuota.|  
|[CRect::IsRectNull](#crect__isrectnull)|Determina se il **inizio**, **inferiore**, **sinistro**, e **destra** variabili membro sono tutti uguali a 0.|  
|[CRect::MoveToX](#crect__movetox)|Sposta `CRect` alla coordinata x specificata.|  
|[CRect::MoveToXY](#crect__movetoxy)|Sposta `CRect` alle coordinate x e y specificate.|  
|[CRect::MoveToY](#crect__movetoy)|Sposta `CRect` alla coordinata y specificata.|  
|[CRect:: NormalizeRect](#crect__normalizerect)|Consente di standardizzare l'altezza e larghezza di `CRect`.|  
|[CRect::OffsetRect](#crect__offsetrect)|Sposta `CRect` degli offset specificati.|  
|[CRect::PtInRect](#crect__ptinrect)|Determina se il punto specificato si trova all'interno di `CRect`.|  
|[CRect::SetRect](#crect__setrect)|Imposta le dimensioni di `CRect`.|  
|[CRect::SetRectEmpty](#crect__setrectempty)|Set `CRect` a un rettangolo vuoto (tutte le coordinate pari a 0).|  
|[CRect::Size](#crect__size)|Calcola le dimensioni di `CRect`.|  
|[CRect::SubtractRect](#crect__subtractrect)|Sottrae un rettangolo da un altro.|  
|[CRect::TopLeft](#crect__topleft)|Restituisce il punto superiore sinistro di `CRect`.|  
|[CRect::UnionRect](#crect__unionrect)|Set `CRect` uguale all'unione di due rettangoli.|  
|[CRect::Width](#crect__width)|Calcola la larghezza di `CRect`.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRect::operator-](#crect__operator_-)|Sottrae gli offset specificati da `CRect` o decompressi `CRect` e restituisce l'oggetto risultante `CRect`.|  
|[CRect::operator LPCRECT](#crect__operator_lpcrect)|Converte un `CRect` a un **LPCRECT**.|  
|[CRect::operator LPRECT](#crect__operator_lprect)|Converte un `CRect` a un `LPRECT`.|  
|[CRect::operator! =](#crect__operator__neq)|Determina se `CRect` non è uguale a un rettangolo.|  
|[CRect::operator &amp;](#crect__operator__amp_)|Crea punto di intersezione tra `CRect` e un rettangolo e restituisce l'oggetto risultante `CRect`.|  
|[CRect::operator &amp;=](#crect__operator__amp__eq)|Set `CRect` uguale all'intersezione tra `CRect` e un rettangolo.|  
|[CRect::operator |](#crect__operator__or)|Crea l'unione di `CRect` e un rettangolo e restituisce l'oggetto risultante `CRect`.|  
|[CRect::operator |=](#crect__operator__or_eq)|Set `CRect` uguale all'unione di `CRect` e un rettangolo.|  
|[CRect::operator +](#crect__operator__add)|Aggiunge gli offset specificati a `CRect` o ingrandisce `CRect` e restituisce l'oggetto risultante `CRect`.|  
|[+ = CRect::operator](#crect__operator__add_eq)|Aggiunge l'offset specificati a `CRect` o ingrandisce `CRect`.|  
|[CRect::operator =](#crect__operator__eq)|Copia le dimensioni del rettangolo da `CRect`.|  
|[CRect::operator =](#crect__operator_-_eq)|Sottrae degli offset specificati da `CRect` o decompressi `CRect`.|  
|[CRect::operator = =](#crect__operator__eq_eq)|Determina se `CRect` è uguale a un rettangolo.|  
  
## <a name="remarks"></a>Note  
 `CRect` include anche le funzioni membro per manipolare `CRect` oggetti e Windows `RECT` strutture.  
  
 Oggetto `CRect` oggetto può essere passato come parametro di funzione ovunque un `RECT` struttura, **LPCRECT**, o `LPRECT` può essere passato.  
  
> [!NOTE]
>  Questa classe è derivata dal **tagRECT** struttura. (Il nome **tagRECT** è un nome meno comunemente utilizzati per il `RECT` struttura.) Ciò significa che i membri dati ( **sinistro**, **inizio**, **destra**, e **inferiore**) del `RECT` struttura sono membri di dati accessibili di `CRect`.  
  
 Oggetto `CRect` contiene le variabili membro che definiscono i punti in alto a sinistra e in basso a destra di un rettangolo.  
  
 Quando si specifica un `CRect`, è necessario prestare attenzione creare l'oggetto in modo che è normalizzato, in altre parole, in modo che il valore della coordinata sinistra è minore di destra e la parte superiore è minore di nella parte inferiore. Ad esempio, una parte superiore sinistra del (10,10) e basso a destra (20,20) definisce un rettangolo normalizzato, ma una parte superiore sinistra del (20,20) e basso a destra (10,10) definisce un rettangolo non normalizzato. Se il rettangolo non è normalizzato, molti `CRect` funzioni membro possono restituire risultati non corretti. (Vedere [CRect:: NormalizeRect](#crect__normalizerect) per un elenco di queste funzioni.) Prima di chiamare una funzione che richiede i rettangoli normalizzati, è possibile normalizzare i rettangoli non normalizzato chiamando il `NormalizeRect` (funzione).  
  
 Prestare attenzione quando si modifica un `CRect` con [CDC::DPtoLP] (... /Topic/CDC%20Class.MD#cdc__dptolp e [CDC::LPtoDP] (... Funzioni membro /topic/CDC%20Class.MD#cdc__lptodp. Se la modalità di mapping di un contesto di visualizzazione è tale che l'extent di y è negativo, come in `MM_LOENGLISH`, quindi `CDC::DPtoLP` trasformerà il `CRect` in modo che il top è maggiore di quello inferiore. Le funzioni come **Altezza** e **dimensioni** restituirà quindi i valori negativi per l'altezza di trasformato `CRect`, e il rettangolo non normalizzato.  
  
 Quando tramite overload `CRect` operatori, il primo operando deve essere un `CRect`; il secondo può essere un [RECT](../../mfc/reference/rect-structure1.md) struttura o un `CRect` oggetto.  
  
> [!NOTE]
>  Per ulteriori informazioni su classi di utilità condivise (ad esempio `CRect`), vedere [classi condivise](../../atl-mfc-shared/atl-mfc-shared-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `tagRECT`  
  
 `CRect`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atltypes. h  
  
##  <a name="a-namecrectbottomrighta-crectbottomright"></a><a name="crect__bottomright"></a>  CRect::BottomRight  
 Le coordinate vengono restituite come un riferimento a un [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto contenuto in `CRect`.  
  
```  
 
CPoint& BottomRight() throw();

const CPoint& BottomRight() const throw();

 
```  
  
### <a name="return-value"></a>Valore restituito  
 Le coordinate dell'angolo inferiore destro del rettangolo.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare questa funzione per ottenere o impostare l'angolo inferiore destro del rettangolo. Impostare l'angolo mediante questa funzione sul lato sinistro dell'operatore di assegnazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#35](../../atl-mfc-shared/codesnippet/CPP/crect-class_1.cpp)]  
  
##  <a name="a-namecrectcenterpointa-crectcenterpoint"></a><a name="crect__centerpoint"></a>  CRect::CenterPoint  
 Calcola il punto centrale di `CRect` aggiungendo i valori sinistro e destro e dividendo per due e aggiungere i valori superiore e inferiore e diviso per due.  
  
```  
CPoint CenterPoint() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CPoint` oggetto che è il punto centrale di `CRect`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#36](../../atl-mfc-shared/codesnippet/CPP/crect-class_2.cpp)]  
  
##  <a name="a-namecrectcopyrecta-crectcopyrect"></a><a name="crect__copyrect"></a>  CRect::CopyRect  
 Copie di `lpSrcRect` rettangolo in `CRect`.  
  
```  
 
void CopyRect(
LPCRECT   
lpSrcRect) throw();

 
```  
  
### <a name="parameters"></a>Parametri  
 `lpSrcRect`  
 Punta al [RECT](../../mfc/reference/rect-structure1.md) struttura o `CRect` che deve essere copiati.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#37](../../atl-mfc-shared/codesnippet/CPP/crect-class_3.cpp)]  
  
##  <a name="a-namecrectcrecta-crectcrect"></a><a name="crect__crect"></a>  CRect::CRect  
 Costruisce un oggetto `CRect`.  
  
```  
 
    CRect() throw();
CRect(
 int    
    l ,  
    int 
    t ,  
    int 
    r ,  
    int 
    b) throw();
CRect(
 const RECT& 
    srcRect) throw();
CRect(
 LPCRECT    
    lpSrcRect) throw();
CRect(
 POINT    
    point ,  
    SIZE 
    size) throw();
CRect(
 POINT    
    topLeft ,  
    POINT 
    bottomRight) throw();

 
```  
  
### <a name="parameters"></a>Parametri  
 *l*  
 Specifica la posizione a sinistra di `CRect`.  
  
 *t*  
 Specifica le proprietà di `CRect`.  
  
 *r*  
 Specifica la posizione corretta di `CRect`.  
  
 *b*  
 Specifica la parte inferiore della `CRect`.  
  
 *srcRect*  
 Si intende il [RECT](../../mfc/reference/rect-structure1.md) struttura con le coordinate per `CRect`.  
  
 `lpSrcRect`  
 Indichi il `RECT` struttura con le coordinate per `CRect`.  
  
 `point`  
 Specifica il punto di origine per il rettangolo deve essere costruita. Corrisponde all'angolo superiore sinistro.  
  
 `size`  
 Specifica lo spostamento dall'angolo superiore sinistro all'angolo inferiore destro del rettangolo deve essere costruita.  
  
 *topLeft*  
 Specifica la posizione superiore sinistro di `CRect`.  
  
 *bottomRight*  
 Specifica la posizione in basso a destra di `CRect`.  
  
### <a name="remarks"></a>Note  
 Se viene fornito alcun argomento, **sinistro**, **inizio**, **destra**, e **inferiore** membri non vengono inizializzati.  
  
 Il `CRect`( **RECT const &**) e `CRect`( **LPCRECT**) costruttori eseguono un [CopyRect](#crect__copyrect). Gli altri costruttori inizializzano le variabili membro dell'oggetto direttamente.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#38](../../atl-mfc-shared/codesnippet/CPP/crect-class_4.cpp)]  
  
##  <a name="a-namecrectdeflaterecta-crectdeflaterect"></a><a name="crect__deflaterect"></a>  CRect::DeflateRect  
 `DeflateRect` decompressi `CRect` spostando i lati verso il centro.  
  
```  
 
    void DeflateRect(
    int 
    x ,  
    int 
    y) throw();
void DeflateRect(
    SIZE 
    size) throw();
void DeflateRect(
    LPCRECT 
    lpRect) throw();
void DeflateRect(
    int 
    l ,  
    int 
    t ,  
    int 
    r ,  
    int 
    b) throw();

 
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica il numero di unità da deflate sinistra e destra del `CRect`.  
  
 *y*  
 Specifica il numero di unità da deflate nella parte superiore e inferiore di `CRect`.  
  
 `size`  
 Oggetto [DIMENSIONI](http://msdn.microsoft.com/library/windows/desktop/dd145106) o [CSize](../../atl-mfc-shared/reference/csize-class.md) che specifica il numero di unità da deflate `CRect`. Il `cx` valore specifica il numero di unità da deflate i lati sinistro e destro e `cy` valore specifica il numero di unità da deflate superiore e inferiore.  
  
 `lpRect`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura o `CRect` che specifica il numero di unità da deflate ogni lato.  
  
 *l*  
 Specifica il numero di unità da deflate lato sinistro della `CRect`.  
  
 *t*  
 Specifica il numero di unità da deflate cima `CRect`.  
  
 *r*  
 Specifica il numero di unità da deflate lato destro della `CRect`.  
  
 *b*  
 Specifica il numero di unità da deflate fondo `CRect`.  
  
### <a name="remarks"></a>Note  
 A tale scopo, `DeflateRect` aggiunge unità a sinistra e superiore e sottrae unità da destra e sotto. I parametri di `DeflateRect` sono firmati valori; i valori positivi deflate `CRect` e i valori negativi ingrandimento.  
  
 I primi due overload deflate entrambe le coppie di lati opposti del `CRect` in modo che la larghezza totale viene diminuita di due volte *x* (o `cx`) e l'altezza totale viene diminuito di due volte *y* (o `cy`). I due overload deflate ogni lato della `CRect` indipendentemente dagli altri.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#39](../../atl-mfc-shared/codesnippet/CPP/crect-class_5.cpp)]  
  
##  <a name="a-namecrectequalrecta-crectequalrect"></a><a name="crect__equalrect"></a>  CRect::EqualRect  
 Determina se `CRect` è uguale al rettangolo specificato.  
  
```  
 
BOOL EqualRect(
LPCRECT   
lpRect) const throw();

 
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura o `CRect` oggetto che contiene le coordinate dell'angolo superiore sinistro e in basso a destra di un rettangolo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se i due rettangoli hanno la stessa top, left, inferiore e i valori corretti; in caso contrario 0.  
  
> [!NOTE]
>  I rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#crect__normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#40](../../atl-mfc-shared/codesnippet/CPP/crect-class_6.cpp)]  
  
##  <a name="a-namecrectheighta-crectheight"></a><a name="crect__height"></a>  CRect::Height  
 Calcola l'altezza di `CRect` sottraendo il valore superiore rispetto a quello inferiore.  
  
```  
int Height() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'altezza di `CRect`.  
  
### <a name="remarks"></a>Note  
 Il valore risulta può essere negativo.  
  
> [!NOTE]
>  Il rettangolo deve essere normalizzato o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#crect__normalizerect) normalizzare il rettangolo prima di chiamare questa funzione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#41](../../atl-mfc-shared/codesnippet/CPP/crect-class_7.cpp)]  
  
##  <a name="a-namecrectinflaterecta-crectinflaterect"></a><a name="crect__inflaterect"></a>  CRect::InflateRect  
 `InflateRect` Ingrandisce `CRect` spostando i lati dal centro.  
  
```  
 
    void InflateRect(
    int 
    x ,  
    int 
    y) throw();
void InflateRect(
    SIZE 
    size) throw();
void InflateRect(
    LPCRECT 
    lpRect) throw();
void InflateRect(
    int 
    l ,  
    int 
    t ,  
    int 
    r ,  
    int 
    b) throw();

 
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica il numero di unità ingrandimento sinistra e a destra di `CRect`.  
  
 *y*  
 Specifica il numero di unità di ingrandimento nella parte superiore e inferiore di `CRect`.  
  
 `size`  
 Oggetto [DIMENSIONI](http://msdn.microsoft.com/library/windows/desktop/dd145106) o [CSize](../../atl-mfc-shared/reference/csize-class.md) che specifica il numero di unità ingrandimento `CRect`. Il `cx` valore specifica il numero di unità di ingrandimento il lato sinistro e destro e `cy` valore specifica il numero di unità di ingrandimento nella parte superiore e inferiore.  
  
 `lpRect`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura o `CRect` che specifica il numero di unità di ingrandimento ogni lato.  
  
 *l*  
 Specifica il numero di unità ingrandimento lato sinistro della `CRect`.  
  
 *t*  
 Specifica il numero di unità ingrandimento cima `CRect`.  
  
 *r*  
 Specifica il numero di unità di ingrandimento a destra della `CRect`.  
  
 *b*  
 Specifica il numero di unità ingrandimento fondo `CRect`.  
  
### <a name="remarks"></a>Note  
 A tale scopo, `InflateRect` sottrae unità dalla parte superiore sinistra e aggiunge l'unità a destra e sotto. I parametri di `InflateRect` sono firmati i valori positivi ingrandimento valori `CRect` e i valori negativi deflate.  
  
 I primi due overload ingrandimento entrambe le coppie di lati opposti del `CRect` in modo che la larghezza totale è aumentata di due volte *x* (o `cx`) e l'altezza totale è aumentato di due volte *y* (o `cy`). I due overload ingrandimento ogni lato della `CRect` indipendentemente dagli altri.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#42](../../atl-mfc-shared/codesnippet/CPP/crect-class_8.cpp)]  
  
##  <a name="a-namecrectintersectrecta-crectintersectrect"></a><a name="crect__intersectrect"></a>  CRect::IntersectRect  
 Rende un `CRect` uguale all'intersezione di due rettangoli esistenti.  
  
```  
 
    BOOL IntersectRect(
    LPCRECT 
    lpRect1 ,  
    LPCRECT 
    lpRect2) throw();

 
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect1`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura o `CRect` oggetto che contiene un rettangolo di origine.  
  
 `lpRect2`  
 Punta a un `RECT` struttura o `CRect` oggetto che contiene un rettangolo di origine.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'intersezione non è vuoto. 0 se l'intersezione è vuota.  
  
### <a name="remarks"></a>Note  
 L'intersezione è il rettangolo più grande contenuto in entrambi i rettangoli esistenti.  
  
> [!NOTE]
>  I rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#crect__normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#43](../../atl-mfc-shared/codesnippet/CPP/crect-class_9.cpp)]  
  
##  <a name="a-namecrectisrectemptya-crectisrectempty"></a><a name="crect__isrectempty"></a>  CRect::IsRectEmpty  
 Determina se `CRect` è vuoto.  
  
```  
BOOL IsRectEmpty() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se `CRect` è vuoto; 0 se `CRect` non è vuoto.  
  
### <a name="remarks"></a>Note  
 Un rettangolo è vuoto se la larghezza e/o altezza è pari a 0 o negativo. È diverso da `IsRectNull`, che determina se tutte le coordinate del rettangolo sono pari a zero.  
  
> [!NOTE]
>  Il rettangolo deve essere normalizzato o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#crect__normalizerect) normalizzare il rettangolo prima di chiamare questa funzione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#44](../../atl-mfc-shared/codesnippet/CPP/crect-class_10.cpp)]  
  
##  <a name="a-namecrectisrectnulla-crectisrectnull"></a><a name="crect__isrectnull"></a>  CRect::IsRectNull  
 Determina se sinistra, in basso a destra i valori di `CRect` sono tutti uguali a 0.  
  
```  
BOOL IsRectNull() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se `CRect`di sinistra in basso e valori corretti sono tutti pari a 0; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 È diverso da `IsRectEmpty`, che determina se il rettangolo è vuoto.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#45](../../atl-mfc-shared/codesnippet/CPP/crect-class_11.cpp)]  
  
##  <a name="a-namecrectmovetoxa-crectmovetox"></a><a name="crect__movetox"></a>  CRect::MoveToX  
 Chiamare questa funzione per spostare il rettangolo alla coordinata x assoluta specificata da *x*.  
  
```  
 
void MoveToX(
int   
x) throw();

 
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Coordinata x assoluta per l'angolo superiore sinistro del rettangolo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#46](../../atl-mfc-shared/codesnippet/CPP/crect-class_12.cpp)]  
  
##  <a name="a-namecrectmovetoxya-crectmovetoxy"></a><a name="crect__movetoxy"></a>  CRect::MoveToXY  
 Chiamare questa funzione per spostare il rettangolo per l'assoluto coordinate x e y-specificata.  
  
```  
 
    void MoveToXY(
    int 
    x ,  
    int 
    y) throw();
void MoveToXY(
    POINT 
    point) throw();

 
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Coordinata x assoluta per l'angolo superiore sinistro del rettangolo.  
  
 *y*  
 Coordinata y assoluta per l'angolo superiore sinistro del rettangolo.  
  
 `point`  
 Oggetto **PUNTO** struttura specificando l'assoluto angolo superiore sinistro del rettangolo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#47](../../atl-mfc-shared/codesnippet/CPP/crect-class_13.cpp)]  
  
##  <a name="a-namecrectmovetoya-crectmovetoy"></a><a name="crect__movetoy"></a>  CRect::MoveToY  
 Chiamare questa funzione per spostare il rettangolo alla coordinata y assoluta specificata da *y*.  
  
```  
 
void MoveToY(
int   
y) throw();

 
```  
  
### <a name="parameters"></a>Parametri  
 *y*  
 Coordinata y assoluta per l'angolo superiore sinistro del rettangolo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#48](../../atl-mfc-shared/codesnippet/CPP/crect-class_14.cpp)]  
  
##  <a name="a-namecrectnormalizerecta-crectnormalizerect"></a><a name="crect__normalizerect"></a>  CRect:: NormalizeRect  
 Normalizza `CRect` in modo che sia l'altezza e larghezza sono positivi.  
  
```  
void NormalizeRect() throw();
```  
  
### <a name="remarks"></a>Note  
 Il rettangolo è normalizzato per il quarto quadrante posizionamento, Windows utilizza in genere per le coordinate. `NormalizeRect` Confronta i valori superiore e inferiore che vengono inseriti se inizio è maggiore di fondo. Analogamente, inverte i valori sinistro e destro se sinistra è maggiore di destra. Questa funzione è utile quando si utilizzano le modalità di mapping diverso e invertito rettangoli.  
  
> [!NOTE]
>  Le operazioni seguenti `CRect` funzioni membro richiedono rettangoli normalizzati per il corretto funzionamento: [Altezza](#crect__height), [larghezza](#crect__width), [dimensioni](#crect__size), [IsRectEmpty](#crect__isrectempty), [PtInRect](#crect__ptinrect), [EqualRect](#crect__equalrect), [UnionRect](#crect__unionrect), [IntersectRect](#crect__intersectrect), [SubtractRect](#crect__subtractrect), [operatore = =](#crect__operator__eq_eq), [operatore! =](#crect__operator__neq), [operator &#124;](#crect__operator__or), [operator &#124; =](#crect__operator__or_eq), [operatore &](#crect__operator__amp_), e [operatore & =](#crect__operator__amp__eq).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#49](../../atl-mfc-shared/codesnippet/CPP/crect-class_15.cpp)]  
  
##  <a name="a-namecrectoffsetrecta-crectoffsetrect"></a><a name="crect__offsetrect"></a>  CRect::OffsetRect  
 Sposta `CRect` degli offset specificati.  
  
```  
 
    void OffsetRect(
    int 
    x ,  
    int 
    y) throw();
void OffsetRect(
    POINT 
    point) throw();
void OffsetRect(
    SIZE 
    size) throw();

 
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica la quantità per spostare a sinistra o destra. Deve essere negativo per spostare a sinistra.  
  
 *y*  
 Specifica la quantità per spostare verso l'alto o verso il basso. Deve essere negativo per spostare verso l'alto.  
  
 `point`  
 Contiene un [PUNTO](../../mfc/reference/point-structure1.md) struttura o [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) specificando entrambe le dimensioni da cui si desidera spostare.  
  
 `size`  
 Contiene un [DIMENSIONI](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura o [CSize](../../atl-mfc-shared/reference/csize-class.md) specificando entrambe le dimensioni da cui si desidera spostare.  
  
### <a name="remarks"></a>Note  
 Sposta `CRect`*x* unità lungo l'asse x e *y* unità lungo l'asse y. Il *x* e *y* i parametri sono pertanto valori con segno, `CRect` può essere spostato a sinistra o destra e verso l'alto o verso il basso.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#50](../../atl-mfc-shared/codesnippet/CPP/crect-class_16.cpp)]  
  
##  <a name="a-namecrectoperatorlpcrecta-crectoperator-lpcrect"></a><a name="crect__operator_lpcrect"></a>  CRect::operator LPCRECT  
 Converte un `CRect` a un [LPCRECT](../../mfc/reference/data-types-mfc.md).  
  
' ' operatore LPCRECT() const throw ();
```  
  
### Remarks  
 When you use this function, you don't need the address-of ( **&**) operator. This operator will be automatically used when you pass a `CRect` object to a function that expects an **LPCRECT**.  
  
### Example  
 [!code-cpp[NVC_ATLMFC_Utilities#58](../../atl-mfc-shared/codesnippet/CPP/crect-class_17.cpp)]  
  
##  <a name="crect__operator_lprect"></a>  CRect::operator LPRECT  
 Converts a `CRect` to an [LPRECT](../../mfc/reference/data-types-mfc.md).  
  
```  operator LPRECT() throw();
```  
  
### <a name="remarks"></a>Note  
 Quando si utilizza questa funzione, non è necessario address-of ( **&**) (operatore). Questo operatore viene utilizzato automaticamente quando si passa un `CRect` oggetto a una funzione che prevede un `LPRECT`.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CRect::operator LPCRECT](#crect__operator_lpcrect).  
  
##  <a name="a-namecrectoperatoreqa-crectoperator-"></a><a name="crect__operator__eq"></a>  CRect::operator =  
 Assegna *srcRect* a `CRect`.  
  
```  
 
void operator=(
const RECT& 
srcRect) throw();

 
```  
  
### <a name="parameters"></a>Parametri  
 *srcRect*  
 Fa riferimento a un rettangolo di origine. Può essere un [RECT](../../mfc/reference/rect-structure1.md) o `CRect`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#59](../../atl-mfc-shared/codesnippet/CPP/crect-class_18.cpp)]  
  
##  <a name="a-namecrectoperatoreqeqa-crectoperator-"></a><a name="crect__operator__eq_eq"></a>  CRect::operator = =  
 Determina se `rect` è uguale a `CRect` confrontando le coordinate di angoli in alto a sinistra e in basso a destra.  
  
```  
 
BOOL operator==(
const RECT& 
rect) const throw();

 
```  
  
### <a name="parameters"></a>Parametri  
 `rect`  
 Fa riferimento a un rettangolo di origine. Può essere un [RECT](../../mfc/reference/rect-structure1.md) o `CRect`.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è uguale; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  I rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#crect__normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#60](../../atl-mfc-shared/codesnippet/CPP/crect-class_19.cpp)]  
  
##  <a name="a-namecrectoperatorneqa-crectoperator-"></a><a name="crect__operator__neq"></a>  CRect::operator! =  
 Determina se `rect` non è uguale a `CRect` confrontando le coordinate di angoli in alto a sinistra e in basso a destra.  
  
```  
 
BOOL operator!=(
const RECT& 
rect) const throw();

 
```  
  
### <a name="parameters"></a>Parametri  
 `rect`  
 Fa riferimento a un rettangolo di origine. Può essere un [RECT](../../mfc/reference/rect-structure1.md) o `CRect`.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se non è uguale; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  I rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#crect__normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#61](../../atl-mfc-shared/codesnippet/CPP/crect-class_20.cpp)]  
  
##  <a name="a-namecrectoperatoraddeqa-crectoperator-"></a><a name="crect__operator__add_eq"></a>  + = CRect::operator  
 Spostare i primi due overload `CRect` degli offset specificati.  
  
```  
 
void operator+=(
POINT   
point) throw();

void operator+=(
SIZE   
size) throw();

void operator+=(
LPCRECT   
lpRect) throw();

 
```  
  
### <a name="parameters"></a>Parametri  
 `point`  
 Oggetto [PUNTO](../../mfc/reference/point-structure1.md) struttura o [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto che specifica il numero di unità da spostare il rettangolo.  
  
 `size`  
 Oggetto [DIMENSIONI](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura o [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto che specifica il numero di unità da spostare il rettangolo.  
  
 `lpRect`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura o `CRect` oggetto che contiene il numero di unità per ogni lato di ingrandimento `CRect`.  
  
### <a name="remarks"></a>Note  
 Il parametro *x* e *y* (o `cx` e `cy`) vengono aggiunti valori a `CRect`.  
  
 Il terzo overload ingrandisce `CRect` dal numero di unità specificato in ogni membro del parametro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#62](../../atl-mfc-shared/codesnippet/CPP/crect-class_21.cpp)]  
  
##  <a name="a-namecrectoperator-eqa-crectoperator--"></a><a name="crect__operator_-_eq"></a>  CRect::operator =  
 Spostare i primi due overload `CRect` degli offset specificati.  
  
```  
 
void operator-=(
POINT   
point) throw();

void operator-=(
SIZE   
size) throw();

void operator-=(
LPCRECT   
lpRect) throw();

 
```  
  
### <a name="parameters"></a>Parametri  
 `point`  
 Oggetto [PUNTO](../../mfc/reference/point-structure1.md) struttura o [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto che specifica il numero di unità da spostare il rettangolo.  
  
 `size`  
 Oggetto [DIMENSIONI](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura o [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto che specifica il numero di unità da spostare il rettangolo.  
  
 `lpRect`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura o `CRect` oggetto che contiene il numero di unità per ogni lato di deflate `CRect`.  
  
### <a name="remarks"></a>Note  
 Il parametro *x* e *y* (o `cx` e `cy`) i valori vengono sottratti `CRect`.  
  
 Il terzo overload decompressi `CRect` dal numero di unità specificato in ogni membro del parametro. Si noti che questo overload di funzioni come [DeflateRect](#crect__deflaterect).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#63](../../atl-mfc-shared/codesnippet/CPP/crect-class_22.cpp)]  
  
##  <a name="a-namecrectoperatorampeqa-crectoperator-amp"></a><a name="crect__operator__amp__eq"></a>  CRect::operator &amp;=  
 Set `CRect` uguale all'intersezione tra `CRect` e `rect`.  
  
```  
 
void operator&=(
const RECT& 
rect) throw();

 
```  
  
### <a name="parameters"></a>Parametri  
 `rect`  
 Contiene un [RECT](../../mfc/reference/rect-structure1.md) o `CRect`.  
  
### <a name="remarks"></a>Note  
 L'intersezione è il rettangolo più grande che è contenuto in entrambi i rettangoli.  
  
> [!NOTE]
>  I rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#crect__normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CRect::IntersectRect](#crect__intersectrect).  
  
##  <a name="a-namecrectoperatororeqa-crectoperator-124"></a><a name="crect__operator__or_eq"></a>  CRect::operator &#124; =  
 Set `CRect` uguale all'unione di `CRect` e `rect`.  
  
```  
 
void operator|=(
const RECT& 
rect) throw();

 
```  
  
### <a name="parameters"></a>Parametri  
 `rect`  
 Contiene un `CRect` o [RECT](../../mfc/reference/rect-structure1.md).  
  
### <a name="remarks"></a>Note  
 L'unione è il più piccolo rettangolo contenente entrambi i rettangoli di origine.  
  
> [!NOTE]
>  I rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#crect__normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#64](../../atl-mfc-shared/codesnippet/CPP/crect-class_23.cpp)]  
  
##  <a name="a-namecrectoperatoradda-crectoperator-"></a><a name="crect__operator__add"></a>  CRect::operator +  
 I primi due overload restituiscono un `CRect` oggetto che è uguale a `CRect` spostato da degli offset specificati.  
  
```  
 
CRect operator+(
POINT   
point) const throw();

CRect operator+(
LPCRECT   
lpRect) const throw();

CRect operator+(
SIZE   
size) const throw();

 
```  
  
### <a name="parameters"></a>Parametri  
 `point`  
 Oggetto [PUNTO](../../mfc/reference/point-structure1.md) struttura o [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto che specifica il numero di unità da spostare il valore restituito.  
  
 `size`  
 Oggetto [DIMENSIONI](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura o [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto che specifica il numero di unità da spostare il valore restituito.  
  
 `lpRect`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura o `CRect` oggetto che contiene il numero di unità di ingrandimento ogni lato del valore restituito.  
  
### <a name="return-value"></a>Valore restituito  
 Il `CRect` derivante da spostare o eccessi nella misurazione `CRect` dal numero di unità specificata nel parametro.  
  
### <a name="remarks"></a>Note  
 Il parametro *x* e *y* (o `cx` e `cy`) i parametri vengono aggiunti a `CRect`posizione.  
  
 Il terzo overload restituisce un nuovo `CRect` che è uguale a `CRect` ampliato per il numero di unità specificato in ogni membro del parametro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#65](../../atl-mfc-shared/codesnippet/CPP/crect-class_24.cpp)]  
  
##  <a name="a-namecrectoperator-a-crectoperator--"></a><a name="crect__operator_-"></a>  CRect::operator-  
 I primi due overload restituiscono un `CRect` oggetto che è uguale a `CRect` spostato da degli offset specificati.  
  
```  
 
CRect operator-(
POINT   
point) const throw();

CRect operator-(
SIZE   
size) const throw();

CRect operator-(
LPCRECT   
lpRect) const throw();

 
```  
  
### <a name="parameters"></a>Parametri  
 `point`  
 Oggetto [PUNTO](../../mfc/reference/point-structure1.md) struttura o `CPoint` oggetto che specifica il numero di unità da spostare il valore restituito.  
  
 `size`  
 Oggetto [DIMENSIONI](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura o `CSize` oggetto che specifica il numero di unità da spostare il valore restituito.  
  
 `lpRect`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura o `CRect` oggetto che contiene il numero di unità da deflate ogni lato del valore restituito.  
  
### <a name="return-value"></a>Valore restituito  
 Il `CRect` derivante da spostare o deflazionando `CRect` dal numero di unità specificata nel parametro.  
  
### <a name="remarks"></a>Note  
 Il parametro *x* e *y* (o `cx` e `cy`) i parametri vengono sottratti `CRect`posizione.  
  
 Il terzo overload restituisce un nuovo `CRect` che è uguale a `CRect` ridotta per il numero di unità specificato in ogni membro del parametro. Si noti che questo overload di funzioni come [DeflateRect](#crect__deflaterect), non [SubtractRect](#crect__subtractrect).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#66](../../atl-mfc-shared/codesnippet/CPP/crect-class_25.cpp)]  
  
##  <a name="a-namecrectoperatorampa-crectoperator-amp"></a><a name="crect__operator__amp_"></a>  CRect::operator &amp;  
 Restituisce un `CRect` che rappresenta l'intersezione di `CRect` e *rect2*.  
  
```  
 
CRect operator&(
const RECT& 
rect2) const throw();

 
```  
  
### <a name="parameters"></a>Parametri  
 *rect2*  
 Contiene un [RECT](../../mfc/reference/rect-structure1.md) o `CRect`.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CRect` che rappresenta l'intersezione di `CRect` e *rect2*.  
  
### <a name="remarks"></a>Note  
 L'intersezione è il rettangolo più grande che è contenuto in entrambi i rettangoli.  
  
> [!NOTE]
>  I rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#crect__normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#67](../../atl-mfc-shared/codesnippet/CPP/crect-class_26.cpp)]  
  
##  <a name="a-namecrectoperatorora-crectoperator-124"></a><a name="crect__operator__or"></a>  CRect::operator &#124;  
 Restituisce un `CRect` che rappresenta l'unione di `CRect` e *rect2*.  
  
```  
 
CRect operator|(
const RECT& 
rect2) const throw();

 
```  
  
### <a name="parameters"></a>Parametri  
 *rect2*  
 Contiene un [RECT](../../mfc/reference/rect-structure1.md) o `CRect`.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CRect` che rappresenta l'unione di `CRect` e *rect2*.  
  
### <a name="remarks"></a>Note  
 L'unione è il più piccolo rettangolo contenente entrambi i rettangoli.  
  
> [!NOTE]
>  I rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#crect__normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#68](../../atl-mfc-shared/codesnippet/CPP/crect-class_27.cpp)]  
  
##  <a name="a-namecrectptinrecta-crectptinrect"></a><a name="crect__ptinrect"></a>  CRect::PtInRect  
 Determina se il punto specificato si trova all'interno di `CRect`.  
  
```  
 
BOOL PtInRect(
POINT   
point) const throw();

 
```  
  
### <a name="parameters"></a>Parametri  
 `point`  
 Contiene un [PUNTO](../../mfc/reference/point-structure1.md) struttura o [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il punto si trova all'interno di `CRect`; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 È un punto all'interno di `CRect` Se si trova sul lato sinistro o superiore o si trova all'interno di tutti e quattro i lati. Un punto sul lato destro o inferiore si trova fuori `CRect`.  
  
> [!NOTE]
>  Il rettangolo deve essere normalizzato o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#crect__normalizerect) normalizzare il rettangolo prima di chiamare questa funzione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#51](../../atl-mfc-shared/codesnippet/CPP/crect-class_28.cpp)]  
  
##  <a name="a-namecrectsetrecta-crectsetrect"></a><a name="crect__setrect"></a>  CRect::SetRect  
 Imposta le dimensioni di `CRect` delle coordinate specificate.  
  
```  
 
    void SetRect(
    int 
    x1 ,  
    int 
    y1 ,  
    int 
    x2 ,  
    int 
    y2) throw();

 
```  
  
### <a name="parameters"></a>Parametri  
 `x1`  
 Specifica la coordinata x dell'angolo superiore sinistro.  
  
 `y1`  
 Specifica la coordinata y dell'angolo superiore sinistro.  
  
 `x2`  
 Specifica la coordinata x dell'angolo inferiore destro.  
  
 `y2`  
 Specifica la coordinata y dell'angolo inferiore destro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#52](../../atl-mfc-shared/codesnippet/CPP/crect-class_29.cpp)]  
  
##  <a name="a-namecrectsetrectemptya-crectsetrectempty"></a><a name="crect__setrectempty"></a>  CRect::SetRectEmpty  
 Rende `CRect` un rettangolo null impostando tutte le coordinate a zero.  
  
```  
void SetRectEmpty() throw();
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#53](../../atl-mfc-shared/codesnippet/CPP/crect-class_30.cpp)]  
  
##  <a name="a-namecrectsizea-crectsize"></a><a name="crect__size"></a>  CRect::Size  
 Il `cx` e `cy` i membri del valore restituito contengono l'altezza e larghezza di `CRect`.  
  
```  
CSize Size() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto che contiene la dimensione di `CRect`.  
  
### <a name="remarks"></a>Note  
 L'altezza o larghezza può essere negativa.  
  
> [!NOTE]
>  Il rettangolo deve essere normalizzato o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#crect__normalizerect) normalizzare il rettangolo prima di chiamare questa funzione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#54](../../atl-mfc-shared/codesnippet/CPP/crect-class_31.cpp)]  
  
##  <a name="a-namecrectsubtractrecta-crectsubtractrect"></a><a name="crect__subtractrect"></a>  CRect::SubtractRect  
 Rende le dimensioni del **CRect** uguale alla sottrazione di `lpRectSrc2` da `lpRectSrc1`.  
  
```  
 
    BOOL SubtractRect(
    LPCRECT 
    lpRectSrc1 ,  
    LPCRECT 
    lpRectSrc2) throw();

 
```  
  
### <a name="parameters"></a>Parametri  
 `lpRectSrc1`  
 Indichi il [RECT](../../mfc/reference/rect-structure1.md) struttura o `CRect` oggetto da cui deve essere sottratto un rettangolo.  
  
 `lpRectSrc2`  
 Punta al `RECT` struttura o `CRect` che deve essere sottratto dal rettangolo a cui punta il `lpRectSrc1` parametro.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 La sottrazione è il più piccolo rettangolo che contiene tutti i punti in `lpRectScr1` che non sono l'intersezione di `lpRectScr1` e *lpRectScr2*.  
  
 Il rettangolo specificato da `lpRectSrc1` sarà invariato se il rettangolo specificato da `lpRectSrc2` sovrapporsi completamente il rettangolo specificato da *lpRectSrc1* in almeno di direzioni x o y.  
  
 Ad esempio, se `lpRectSrc1` sono stati (10,10, 100,100) e `lpRectSrc2` sono stati (50,50, 150,150), il rettangolo a cui puntava `lpRectSrc1` sarebbe invariato quando la funzione ha restituito. Se `lpRectSrc1` erano (10,10, 100,100) e `lpRectSrc2` sono stati (50,10, 150,150), tuttavia, il rettangolo a cui puntava `lpRectSrc1` contiene le coordinate (10,10, 50,100) quando la funzione ha restituito.  
  
 `SubtractRect` non è identico [operatore -](#crect__operator_-) né [operatore-=](#crect__operator_-_eq). Nessuno di questi operatori mai chiama `SubtractRect`.  
  
> [!NOTE]
>  I rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#crect__normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#55](../../atl-mfc-shared/codesnippet/CPP/crect-class_32.cpp)]  
  
##  <a name="a-namecrecttoplefta-crecttopleft"></a><a name="crect__topleft"></a>  CRect::TopLeft  
 Le coordinate vengono restituite come un riferimento a un [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto contenuto in `CRect`.  
  
```  
 
CPoint& TopLeft() throw();

const CPoint& TopLeft() const throw();

 
```  
  
### <a name="return-value"></a>Valore restituito  
 Coordinate dell'angolo superiore sinistro del rettangolo.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare questa funzione per ottenere o impostare l'angolo superiore sinistro del rettangolo. Impostare l'angolo mediante questa funzione sul lato sinistro dell'operatore di assegnazione.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CRect::CenterPoint](#crect__centerpoint).  
  
##  <a name="a-namecrectunionrecta-crectunionrect"></a><a name="crect__unionrect"></a>  CRect::UnionRect  
 Rende le dimensioni del `CRect` uguale all'unione dei rettangoli due di origine.  
  
```  
 
    BOOL UnionRect(
    LPCRECT 
    lpRect1 ,  
    LPCRECT 
    lpRect2) throw();

 
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect1`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) o `CRect` che contiene un rettangolo di origine.  
  
 `lpRect2`  
 Punta a un `RECT` o `CRect` che contiene un rettangolo di origine.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'unione non è vuoto. 0 se l'unione è vuoto.  
  
### <a name="remarks"></a>Note  
 L'unione è il più piccolo rettangolo contenente entrambi i rettangoli di origine.  
  
 Windows ignora le dimensioni di un rettangolo vuoto; vale a dire un rettangolo che non presenta nessuna altezza o di nessuna larghezza.  
  
> [!NOTE]
>  I rettangoli devono essere normalizzati o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#crect__normalizerect) per normalizzare i rettangoli prima di chiamare questa funzione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#56](../../atl-mfc-shared/codesnippet/CPP/crect-class_33.cpp)]  
  
##  <a name="a-namecrectwidtha-crectwidth"></a><a name="crect__width"></a>  CRect::Width  
 Calcola la larghezza di `CRect` sottraendo il valore a sinistra rispetto a quello destro.  
  
```  
int Width() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 La larghezza di `CRect`.  
  
### <a name="remarks"></a>Note  
 La larghezza può essere negativa.  
  
> [!NOTE]
>  Il rettangolo deve essere normalizzato o questa funzione potrebbe non riuscire. È possibile chiamare [NormalizeRect](#crect__normalizerect) normalizzare il rettangolo prima di chiamare questa funzione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#57](../../atl-mfc-shared/codesnippet/CPP/crect-class_34.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CPoint](../../atl-mfc-shared/reference/cpoint-class.md)   
 [Classe CSize](../../atl-mfc-shared/reference/csize-class.md)   
 [RECT](../../mfc/reference/rect-structure1.md)

