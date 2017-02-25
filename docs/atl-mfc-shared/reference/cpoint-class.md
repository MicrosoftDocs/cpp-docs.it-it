---
title: "Classe CPoint | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CPoint"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LPPOINT (struttura)"
  - "POINT (struttura)"
  - "Classe CPoint"
ms.assetid: a6d4db93-35cc-444d-9221-c3e160f6edaa
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# Classe CPoint
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Simile alla struttura `POINT` di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CPoint : public tagPOINT  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPoint::CPoint](#cpoint__cpoint)|Costruisce un oggetto `CPoint`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPoint::Offset](#cpoint__offset)|Aggiunge i valori per il **x** e **y** i membri di `CPoint`.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPoint::operator-](#cpoint__operator_-)|Restituisce la differenza tra un `CPoint` e una dimensione o la negazione di un punto o la differenza tra due punti o l'offset in base alle dimensioni negative.|  
|[CPoint::operator! =](#cpoint__operator__neq)|Verifica la disuguaglianza tra due punti.|  
|[CPoint::operator +](#cpoint__operator__add)|Restituisce la somma di un `CPoint` e una dimensione o un punto o un `CRect` offset in base alle dimensioni.|  
|[+ = CPoint::operator](#cpoint__operator__add_eq)|Offset `CPoint` mediante l'aggiunta di una dimensione o un punto.|  
|[CPoint::operator =](CPoint::operator%20-=.xml)|Offset `CPoint` sottraendo una dimensione o un punto.|  
|[CPoint::operator = =](#cpoint__operator__eq_eq)|Verifica l'uguaglianza tra due punti.|  
  
## <a name="remarks"></a>Note  
 Contiene inoltre funzioni membro per manipolare `CPoint` e [PUNTO](../../mfc/reference/point-structure1.md) strutture.  
  
 Oggetto `CPoint` oggetto può essere utilizzato ovunque un `POINT` struttura viene utilizzata. Gli operatori che interagiscono con una "dimensioni" di questa classe di accettare uno [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetti o [DIMENSIONI](http://msdn.microsoft.com/library/windows/desktop/dd145106) strutture, poiché i due sono intercambiabili.  
  
> [!NOTE]
>  Questa classe è derivata dal `tagPOINT` struttura. (Il nome `tagPOINT` è un nome meno utilizzato per il `POINT` struttura.) Ciò significa che i membri dei dati di `POINT` struttura, `x` e `y`, sono membri di dati accessibili di `CPoint`.  
  
> [!NOTE]
>  Per ulteriori informazioni su classi di utilità condivise (ad esempio `CPoint`), vedere [classi condivise](../../atl-mfc-shared/atl-mfc-shared-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `tagPOINT`  
  
 `CPoint`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atltypes. h  
  
##  <a name="a-namecpointcpointa-cpointcpoint"></a><a name="cpoint__cpoint"></a>  CPoint::CPoint  
 Costruisce un oggetto `CPoint`.  
  
```  
CPoint() throw();

CPoint(
    int initX,  
    int initY) throw();

CPoint(
    POINT initPt) throw();

CPoint(
    SIZE initSize) throw();

CPoint(
    LPARAM dwPoint) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `initX`  
 Specificare il valore del membro `x` di `CPoint`.  
  
 `initY`  
 Specificare il valore del membro `y` di `CPoint`.  
  
 `initPt`  
 [PUNTO](../../mfc/reference/point-structure1.md) struttura o `CPoint` che specifica i valori utilizzati per inizializzare `CPoint`.  
  
 `initSize`  
 [DIMENSIONI](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura o [CSize](../../atl-mfc-shared/reference/csize-class.md) che specifica i valori utilizzati per inizializzare `CPoint`.  
  
 `dwPoint`  
 Impostare il membro `x` sulla parola word meno significativa di `dwPoint` e il membro `y` sulla parola più significativa di `dwPoint`.  
  
### <a name="remarks"></a>Note  
 Se non viene fornito alcun argomento, i membri `x` e `y` vengono impostate su 0.  
  
### <a name="example"></a>Esempio  
  
```  
 
CPoint   ptTopLeft(0,
    0);

 
// works from a POINT,
    too  
 
POINT   ptHere;  
ptHere.x = 35;  
ptHere.y = 95;  
 
CPoint   ptMFCHere(ptHere);

 
// works from A SIZE  
 
SIZE   sHowBig;  
sHowBig.cx = 300;  
sHowBig.cy = 10;  
 
CPoint ptMFCBig(sHowBig);

 
// or from a DWORD  
 
DWORD   dwSize;  
dwSize = MAKELONG(35,
    95);

 
CPoint ptFromDouble(dwSize);

ASSERT(ptFromDouble == ptMFCHere);
```  
  
##  <a name="a-namecpointoffseta-cpointoffset"></a><a name="cpoint__offset"></a>  CPoint::Offset  
 Aggiunge i valori per il **x** e **y** i membri di `CPoint`.  
  
```  
void Offset(
    int xOffset,  
    int yOffset) throw();

 
    void Offset(
    POINT point) throw();

 
    void Offset(
    SIZE size) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *Sfalsamento x*  
 Specifica il valore di offset il **x** appartenente il `CPoint`.  
  
 *OffsetY*  
 Specifica il valore di offset il **y** appartenente il `CPoint`.  
  
 `point`  
 Specifica la quantità ( [PUNTO](../../mfc/reference/point-structure1.md) o `CPoint`) per compensare la `CPoint`.  
  
 `size`  
 Specifica la quantità ( [DIMENSIONI](http://msdn.microsoft.com/library/windows/desktop/dd145106) o [CSize](../../atl-mfc-shared/reference/csize-class.md)) per compensare la `CPoint`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#28](../../atl-mfc-shared/codesnippet/CPP/cpoint-class_1.cpp)]  
  
##  <a name="a-namecpointoperatoreqeqa-cpointoperator-"></a><a name="cpoint__operator__eq_eq"></a>  CPoint::operator = =  
 Verifica l'uguaglianza tra due punti.  
  
```  
BOOL operator==(POINT point) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `point`  
 Contiene un [PUNTO](../../mfc/reference/point-structure1.md) struttura o `CPoint` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se i punti sono uguali. in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#29](../../atl-mfc-shared/codesnippet/CPP/cpoint-class_2.cpp)]  
  
##  <a name="a-namecpointoperatorneqa-cpointoperator-"></a><a name="cpoint__operator__neq"></a>  CPoint::operator! =  
 Verifica la disuguaglianza tra due punti.  
  
```  
BOOL operator!=(POINT point) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `point`  
 Contiene un [PUNTO](../../mfc/reference/point-structure1.md) struttura o `CPoint` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se i punti non sono uguali. in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#30](../../atl-mfc-shared/codesnippet/CPP/cpoint-class_3.cpp)]  
  
##  <a name="a-namecpointoperatoraddeqa-cpointoperator-"></a><a name="cpoint__operator__add_eq"></a>  + = CPoint::operator  
 Il primo overload aggiunge una dimensione per il `CPoint`.  
  
```  
void operator+=(SIZE size) throw();

 
    void operator+=(POINT point) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `size`  
 Contiene un [DIMENSIONI](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura o [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto.  
  
 `point`  
 Contiene un [PUNTO](../../mfc/reference/point-structure1.md) struttura o [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Il secondo overload viene aggiunto un punto per il `CPoint`.  
  
 In entrambi i casi, inoltre viene eseguita aggiungendo il **x** (o **cx**) membro dell'operando destro per il **x** membro del `CPoint` e aggiungendo il **y** (o **cy**) membro dell'operando destro per il **y** membro del `CPoint`.  
  
 Ad esempio, aggiungere `CPoint(5, -7)` a una variabile che contiene `CPoint(30, 40)` Modifica la variabile `CPoint(35, 33)`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#31](../../atl-mfc-shared/codesnippet/CPP/cpoint-class_4.cpp)]  
  
##  <a name="a-namecpointoperator-eqa-cpointoperator--"></a><a name="cpoint__operator_-_eq"></a>  CPoint::operator =  
 Il primo overload sottrae da una dimensione di `CPoint`.  
  
```  
void operator-=(SIZE size) throw();

 
    void operator-=(POINT point) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `size`  
 Contiene un [DIMENSIONI](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura o [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto.  
  
 `point`  
 Contiene un [PUNTO](../../mfc/reference/point-structure1.md) struttura o [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Il secondo overload sottrae un punto di `CPoint`.  
  
 In entrambi i casi, la sottrazione viene eseguita sottraendo il **x** (o **cx**) membro dell'operando destro dal **x** membro del `CPoint` e sottraendo il **y** (o **cy**) membro dell'operando destro dalla **y** membro del `CPoint`.  
  
 Ad esempio, la sottrazione `CPoint(5, -7)` da una variabile che contiene `CPoint(30, 40)` Modifica la variabile `CPoint(25, 47)`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#32](../../atl-mfc-shared/codesnippet/CPP/cpoint-class_5.cpp)]  
  
##  <a name="a-namecpointoperatoradda-cpointoperator-"></a><a name="cpoint__operator__add"></a>  CPoint::operator +  
 Utilizzare questo operatore per eseguire l'offset `CPoint` da un `CPoint` o `CSize` oggetto, o compensare un `CRect` da un `CPoint`.  
  
```  
CPoint operator+(SIZE size) const throw();

 
    CPoint operator+(POINT point) const throw();

 
    CRect operator+(const RECT* lpRect) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `size`  
 Contiene un [DIMENSIONI](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura o [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto.  
  
 `point`  
 Contiene un [PUNTO](../../mfc/reference/point-structure1.md) struttura o [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto.  
  
 `lpRect`  
 Contiene un puntatore a un [RECT](../../mfc/reference/rect-structure1.md) struttura o [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CPoint` che offset in base a una dimensione, un **CPoint** che viene spostato da un punto o un **CRect** offset da un punto.  
  
### <a name="remarks"></a>Note  
 Ad esempio, utilizzando uno dei primi due overload per spostare il punto di `CPoint(25, -19)` da un punto di `CPoint(15, 5)` o dimensioni `CSize(15, 5)` restituisce il valore `CPoint(40, -14)`.  
  
 Aggiunta di un rettangolo a un punto restituisce il rettangolo dopo viene diminuito il **x** e **y** i valori specificati nel punto di. Ad esempio, utilizzando l'ultimo overload di offset di un rettangolo `CRect(125, 219, 325, 419)` da un punto di `CPoint(25, -19)` restituisce `CRect(150, 200, 350, 400)`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#33](../../atl-mfc-shared/codesnippet/CPP/cpoint-class_6.cpp)]  
  
##  <a name="a-namecpointoperator-a-cpointoperator--"></a><a name="cpoint__operator_-"></a>  CPoint::operator-  
 Utilizzare uno dei primi due overload per sottrarre un `CPoint` o `CSize` dell'oggetto da `CPoint`.  
  
```  
CSize operator-(POINT point) const throw();

 
    CPoint operator-(SIZE size) const throw();

 
    CRect operator-(const RECT* lpRect) const throw();

 
    CPoint operator-() const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `point`  
 Oggetto [PUNTO](../../mfc/reference/point-structure1.md) struttura o [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto.  
  
 `size`  
 Oggetto [DIMENSIONI](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura o [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto.  
  
 `lpRect`  
 Un puntatore a un [RECT](../../mfc/reference/rect-structure1.md) struttura o un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Un `CSize` che rappresenta la differenza tra due punti, un `CPoint` che è diminuito la negazione di una dimensione, un `CRect` che è diminuito la negazione di un punto o un `CPoint` vale a dire la negazione di un punto.  
  
### <a name="remarks"></a>Note  
 Il terzo overload offset un `CRect` per la negazione di `CPoint`. Infine, utilizzare l'operatore unario per negare `CPoint`.  
  
 Ad esempio, utilizzando il primo overload per calcolare la differenza tra due punti `CPoint(25, -19)` e `CPoint(15, 5)` restituisce `CSize(10, -24)`.  
  
 Sottrae un `CSize` da `CPoint` restituisce ma non lo stesso calcolo sopra un `CPoint` oggetto, non un `CSize` oggetto. Ad esempio, tramite il secondo overload per calcolare la differenza tra il punto `CPoint(25, -19)` e le dimensioni `CSize(15, 5)` restituisce `CPoint(10, -24)`.  
  
 Sottrazione di un rettangolo da un punto restituisce l'offset rettangolo da negativi del **x** e **y** i valori specificati nel punto di. Ad esempio, utilizzando l'ultimo overload per compensare il rettangolo `CRect(125, 200, 325, 400)` dal punto di `CPoint(25, -19)` restituisce `CRect(100, 219, 300, 419)`.  
  
 Utilizzare l'operatore unario per negare un punto. Ad esempio, utilizzando l'operatore unario con il punto `CPoint(25, -19)` restituisce `CPoint(-25, 19)`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#34](../../atl-mfc-shared/codesnippet/CPP/cpoint-class_7.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC MDI](../../top/visual-cpp-samples.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Struttura POINT](../../mfc/reference/point-structure1.md)   
 [CRect (classe)](../../atl-mfc-shared/reference/crect-class.md)   
 [Classe CSize](../../atl-mfc-shared/reference/csize-class.md)



