---
title: Class CSize | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CSize
- ATLTYPES/ATL::CSize
- ATLTYPES/ATL::CSize::CSize
dev_langs:
- C++
helpviewer_keywords:
- SIZE
- dimensions, MFC
- dimensions
- CSize class
ms.assetid: fb2cf85a-0bc1-46f8-892b-309c108b52ae
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 18c48ccf2d1d7f424ca9b95f9dcbf7a2953a52aa
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32362957"
---
# <a name="csize-class"></a>Class CSize
Simile alla struttura [SIZE](http://msdn.microsoft.com/library/windows/desktop/dd145106) di Windows, che implementa una coordinata o una posizione relativa.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CSize : public tagSIZE 
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSize::CSize](#csize)|Costruisce un oggetto `CSize`.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSize::operator-](#operator_-)|Sottrae due dimensioni.|  
|[CSize::operator! =](#operator_neq)|Verifica la disuguaglianza tra `CSize` e una dimensione.|  
|[CSize::operator +](#operator_add)|Aggiunge due dimensioni.|  
|[+ = CSize::operator](#operator_add_eq)|Aggiunge una dimensione per `CSize`.|  
|[CSize::operator =](#operator_-_eq)|Sottrae una dimensione dal `CSize`.|  
|[CSize::operator = =](#operator_eq_eq)|Verifica l'uguaglianza tra `CSize` e una dimensione.|  
  
## <a name="remarks"></a>Note  
 Questa classe è derivata dal **dimensioni** struttura. Ciò significa che è possibile passare un `CSize` in un parametro che richiede un **dimensioni** e che i membri dei dati di **dimensioni** struttura sono membri di dati accessibili di `CSize`.  
  
 Il **cx** e **cy** i membri di **dimensioni** (e `CSize`) sono pubblici. Inoltre, `CSize` implementa delle funzioni membro per modificare il **dimensioni** struttura.  
  
> [!NOTE]
>  Per ulteriori informazioni su shared classi di utilità (ad esempio `CSize`), vedere [classi condivise](../../atl-mfc-shared/atl-mfc-shared-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `tagSIZE`  
  
 `CSize`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atltypes. h  
  
##  <a name="csize"></a>  CSize::CSize  
 Costruisce un oggetto `CSize`.  
  
```  
CSize() throw();
CSize( int initCX, int initCY) throw();
CSize( SIZE initSize) throw();
CSize( POINT initPt) throw();
CSize( DWORD dwSize) throw(); 
```  
  
### <a name="parameters"></a>Parametri  
 *initCX*  
 Imposta il **cx** membro per il `CSize`.  
  
 *initCY*  
 Imposta il **cy** membro per il `CSize`.  
  
 `initSize`  
 [DIMENSIONI](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura oppure `CSize` oggetto utilizzato per inizializzare `CSize`.  
  
 `initPt`  
 [PUNTO](../../mfc/reference/point-structure1.md) struttura oppure `CPoint` oggetto utilizzato per inizializzare `CSize`.  
  
 `dwSize`  
 `DWORD` Consente di inizializzare `CSize`. La parola meno significativa è la **cx** membro e la parola più significativa è la **cy** membro.  
  
### <a name="remarks"></a>Note  
 Se viene fornito alcun argomento, **cx** e **cy** vengono inizializzate su zero.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#97](../../atl-mfc-shared/codesnippet/cpp/csize-class_1.cpp)]  
  
##  <a name="operator_eq_eq"></a>  CSize::operator = =  
 Verifica l'uguaglianza tra due dimensioni.  
  
```   
BOOL operator==(SIZE size) const throw(); 
```  
  
### <a name="remarks"></a>Note  
 Restituisce diverso da zero se le dimensioni sono uguali, otherwize 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#98](../../atl-mfc-shared/codesnippet/cpp/csize-class_2.cpp)]  
  
##  <a name="operator_neq"></a>  CSize::operator! =  
 Verifica la disuguaglianza tra due dimensioni.  
  
```   
BOOL operator!=(SIZE size) const throw(); 
```  
  
### <a name="remarks"></a>Note  
 Restituisce zero se le dimensioni non sono uguali; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#99](../../atl-mfc-shared/codesnippet/cpp/csize-class_3.cpp)]  
  
##  <a name="operator_add_eq"></a>  + = CSize::operator  
 Aggiunge una dimensione a questo oggetto `CSize`.  
  
```   
void operator+=(SIZE size) throw(); 
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#100](../../atl-mfc-shared/codesnippet/cpp/csize-class_4.cpp)]  
  
##  <a name="operator_-_eq"></a>  CSize::operator =  
 Sottrae una dimensione da questo `CSize`.  
  
```   
void operator-=(SIZE size) throw(); 
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#101](../../atl-mfc-shared/codesnippet/cpp/csize-class_5.cpp)]  
  
##  <a name="operator_add"></a>  CSize::operator +  
 Questi operatori aggiungere questo `CSize` valore per il valore del parametro.  
  
```   
CSize operator+(SIZE size) const throw();
CPoint operator+(POINT point) const throw();
CRect operator+(const RECT* lpRect) const throw(); 
```  
  
### <a name="remarks"></a>Note  
 Vedere le seguenti descrizioni dei singoli operatori:  
  
- **operatore + (** `size` **)** questa operazione aggiunge due `CSize` valori.  
  
- **operatore + (** `point` **)** questa operazione viene eseguito l'offset (sposta) un [punto](http://msdn.microsoft.com/library/windows/desktop/dd162805) (o [CPoint](../../atl-mfc-shared/reference/cpoint-class.md)) da questo valore `CSize` valore. Il **cx** e **cy** i membri di questo `CSize` valore vengono aggiunti per il **x** e **y** membri dati del **punto**  valore. È analoga a quella di [CPoint::operator +](../../atl-mfc-shared/reference/cpoint-class.md#operator_add) che accetta un [dimensioni](http://msdn.microsoft.com/library/windows/desktop/dd145106) parametro.  
  
- **operatore + (** `lpRect` **)** questa operazione viene eseguito l'offset (sposta) un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) (o [CRect](../../atl-mfc-shared/reference/crect-class.md)) da questo valore `CSize` valore. Il **cx** e **cy** i membri di questo `CSize` valore vengono aggiunti per il **sinistro**, **superiore**, **destra**, e **inferiore** membri dati di `RECT` valore. È analoga a quella di [CRect::operator +](../../atl-mfc-shared/reference/crect-class.md#operator_add) che accetta un [dimensioni](http://msdn.microsoft.com/library/windows/desktop/dd145106) parametro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#102](../../atl-mfc-shared/codesnippet/cpp/csize-class_6.cpp)]  
  
##  <a name="operator_-"></a>  CSize::operator-  
 Le prime tre di questi operatori sottrarre questo `CSize` valore per il valore del parametro.  
  
```   
CSize operator-(SIZE size) const throw();
CPoint operator-(POINT point) const throw();
CRect operator-(const RECT* lpRect) const throw();
CSize operator-() const throw(); 
```  
  
### <a name="remarks"></a>Note  
 L'operatore quarto, il meno unario, cambia il segno del `CSize` valore. Vedere le seguenti descrizioni dei singoli operatori:  
  
- **operatore-(** `size` **)** operazione sottrae due `CSize` valori.  
  
- **operatore-(** `point` **)** questa operazione viene eseguito l'offset (sposta) un [punto](http://msdn.microsoft.com/library/windows/desktop/dd162805) oppure [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) valore per l'inverso additivo di questo `CSize` valore. Il **cx** e **cy** di questo `CSize` valore vengono sottratti il **x** e **y** membri dati di **punto**  valore. È analoga a quella di [CPoint::operator -](../../atl-mfc-shared/reference/cpoint-class.md#operator_-) che accetta un [dimensioni](http://msdn.microsoft.com/library/windows/desktop/dd145106) parametro.  
  
- **operatore-(** `lpRect` **)** questa operazione viene eseguito l'offset (sposta) un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) oppure [CRect](../../atl-mfc-shared/reference/crect-class.md) valore per l'inverso additivo di questo `CSize` valore. Il **cx** e **cy** i membri di questo `CSize` valore vengono sottratti il **sinistro**, **top**, **destra**, e **inferiore** membri dati di `RECT` valore. È analoga a quella di [CRect::operator -](../../atl-mfc-shared/reference/crect-class.md#operator_-) che accetta un [dimensioni](http://msdn.microsoft.com/library/windows/desktop/dd145106) parametro.  
  
- **operatore-()** questa operazione restituisce l'inverso additivo di questo `CSize` valore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities#103](../../atl-mfc-shared/codesnippet/cpp/csize-class_7.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC MDI](../../visual-cpp-samples.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CRect](../../atl-mfc-shared/reference/crect-class.md)   
 [Classe CPoint](../../atl-mfc-shared/reference/cpoint-class.md)

