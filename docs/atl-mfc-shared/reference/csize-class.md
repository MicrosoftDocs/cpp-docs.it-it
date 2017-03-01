---
title: Classe CSize | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSize
dev_langs:
- C++
helpviewer_keywords:
- SIZE
- dimensions, MFC
- dimensions
- CSize class
ms.assetid: fb2cf85a-0bc1-46f8-892b-309c108b52ae
caps.latest.revision: 20
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
ms.openlocfilehash: 96905d916dfde8f8a7bf8131a280ae7ccfe511d8
ms.lasthandoff: 02/24/2017

---
# <a name="csize-class"></a>Classe CSize
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
|[CSize::operator =](#operator_-_eq)|Sottrae una dimensione da `CSize`.|  
|[CSize::operator = =](#operator_eq_eq)|Verifica l'uguaglianza tra `CSize` e una dimensione.|  
  
## <a name="remarks"></a>Note  
 Questa classe è derivata dal **dimensioni** struttura. Ciò significa che è possibile passare un `CSize` in un parametro che richiede un **dimensioni** e che i membri dei dati di **dimensioni** struttura sono membri di dati accessibili di `CSize`.  
  
 Il **cx** e **cy** i membri di **dimensioni** (e `CSize`) sono pubblici. Inoltre, `CSize` implementa le funzioni membro per modificare il **dimensioni** struttura.  
  
> [!NOTE]
>  Per ulteriori informazioni su classi di utilità condivise (ad esempio `CSize`), vedere [classi condivise](../../atl-mfc-shared/atl-mfc-shared-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `tagSIZE`  
  
 `CSize`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atltypes. h  
  
##  <a name="a-namecsizea--csizecsize"></a><a name="csize"></a>CSize::CSize  
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
 Set di **cx** membro per il `CSize`.  
  
 *initCY*  
 Set di **cy** membro per il `CSize`.  
  
 `initSize`  
 [DIMENSIONI](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura o `CSize` oggetto utilizzato per inizializzare `CSize`.  
  
 `initPt`  
 [PUNTO](../../mfc/reference/point-structure1.md) struttura o `CPoint` oggetto utilizzato per inizializzare `CSize`.  
  
 `dwSize`  
 `DWORD`utilizzato per inizializzare `CSize`. La parola meno significativa è il **cx** membro e la parola più significativa è il **cy** membro.  
  
### <a name="remarks"></a>Note  
 Se viene fornito alcun argomento, **cx** e **cy** vengono inizializzati a zero.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities&#97;](../../atl-mfc-shared/codesnippet/cpp/csize-class_1.cpp)]  
  
##  <a name="a-nameoperatoreqeqa--csizeoperator-"></a><a name="operator_eq_eq"></a>CSize::operator = =  
 Verifica l'uguaglianza tra due dimensioni.  
  
```   
BOOL operator==(SIZE size) const throw(); 
```  
  
### <a name="remarks"></a>Note  
 Restituisce zero se le dimensioni sono uguali, otherwize 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#98; NVC_ATLMFC_Utilities](../../atl-mfc-shared/codesnippet/cpp/csize-class_2.cpp)]  
  
##  <a name="a-nameoperatorneqa--csizeoperator-"></a><a name="operator_neq"></a>CSize::operator! =  
 Verifica la disuguaglianza tra due dimensioni.  
  
```   
BOOL operator!=(SIZE size) const throw(); 
```  
  
### <a name="remarks"></a>Note  
 Restituisce zero se le dimensioni non sono uguali, in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities&#99;](../../atl-mfc-shared/codesnippet/cpp/csize-class_3.cpp)]  
  
##  <a name="a-nameoperatoraddeqa--csizeoperator-"></a><a name="operator_add_eq"></a>+ = CSize::operator  
 Aggiunge una dimensione a `CSize`.  
  
```   
void operator+=(SIZE size) throw(); 
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities&#100;](../../atl-mfc-shared/codesnippet/cpp/csize-class_4.cpp)]  
  
##  <a name="a-nameoperator-eqa--csizeoperator--"></a><a name="operator_-_eq"></a>CSize::operator =  
 Sottrae una dimensione da questo `CSize`.  
  
```   
void operator-=(SIZE size) throw(); 
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities&#101;](../../atl-mfc-shared/codesnippet/cpp/csize-class_5.cpp)]  
  
##  <a name="a-nameoperatoradda--csizeoperator-"></a><a name="operator_add"></a>CSize::operator +  
 Aggiungere questi operatori `CSize` al valore del parametro.  
  
```   
CSize operator+(SIZE size) const throw();
CPoint operator+(POINT point) const throw();
CRect operator+(const RECT* lpRect) const throw(); 
```  
  
### <a name="remarks"></a>Note  
 Vedere le seguenti descrizioni dei singoli operatori:  
  
- **operatore + (** `size` **)**questa operazione aggiunge due `CSize` valori.  
  
- **operatore + (** `point` **)**questa operazione viene eseguito l'offset (spostamento) un [punto](http://msdn.microsoft.com/library/windows/desktop/dd162805) (o [CPoint](../../atl-mfc-shared/reference/cpoint-class.md)) da questo valore `CSize` valore. Il **cx** e **cy** i membri di questo `CSize` valore vengono aggiunti per il **x** e **y** i membri dati del **punto** valore. È analogo alla versione di [CPoint::operator +](../../atl-mfc-shared/reference/cpoint-class.md#operator_add) che accetta un [dimensioni](http://msdn.microsoft.com/library/windows/desktop/dd145106) parametro.  
  
- **operatore + (** `lpRect` **)**questa operazione viene eseguito l'offset (spostamento) un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) (o [CRect](../../atl-mfc-shared/reference/crect-class.md)) da questo valore `CSize` valore. Il **cx** e **cy** i membri di questo `CSize` valore vengono aggiunti il **sinistro**, **superiore**, **destra**, e **inferiore** membri dati del `RECT` valore. È analogo alla versione di [CRect::operator +](../../atl-mfc-shared/reference/crect-class.md#operator_add) che accetta un [dimensioni](http://msdn.microsoft.com/library/windows/desktop/dd145106) parametro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#102; NVC_ATLMFC_Utilities](../../atl-mfc-shared/codesnippet/cpp/csize-class_6.cpp)]  
  
##  <a name="a-nameoperator-a--csizeoperator--"></a><a name="operator_-"></a>CSize::operator-  
 I primi tre di questi operatori sottrarre questo `CSize` al valore del parametro.  
  
```   
CSize operator-(SIZE size) const throw();
CPoint operator-(POINT point) const throw();
CRect operator-(const RECT* lpRect) const throw();
CSize operator-() const throw(); 
```  
  
### <a name="remarks"></a>Note  
 L'operatore quarto, il meno unario, cambia il segno del `CSize` valore. Vedere le seguenti descrizioni dei singoli operatori:  
  
- **operatore-(** `size` **)**operazione sottrae due `CSize` valori.  
  
- **operatore-(** `point` **)**questa operazione viene eseguito l'offset (spostamento) un [punto](http://msdn.microsoft.com/library/windows/desktop/dd162805) o [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) l'inverso additivo di questo valore `CSize` valore. Il **cx** e **cy** di questo `CSize` valore vengono sottratti il **x** e **y** membri dati di **punto** valore. È analogo alla versione di [CPoint::operator -](../../atl-mfc-shared/reference/cpoint-class.md#operator_-) che accetta un [dimensioni](http://msdn.microsoft.com/library/windows/desktop/dd145106) parametro.  
  
- **operatore-(** `lpRect` **)**questa operazione viene eseguito l'offset (spostamento) un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) o [CRect](../../atl-mfc-shared/reference/crect-class.md) l'inverso additivo di questo valore `CSize` valore. Il **cx** e **cy** i membri di questo `CSize` valore vengono sottratti il **sinistro**, **inizio**, **destra**, e **inferiore** membri dati del `RECT` valore. È analogo alla versione di [CRect::operator -](../../atl-mfc-shared/reference/crect-class.md#operator_-) che accetta un [dimensioni](http://msdn.microsoft.com/library/windows/desktop/dd145106) parametro.  
  
- **operatore-()**questa operazione restituisce l'inverso additivo di questo `CSize` valore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATLMFC_Utilities&#103;](../../atl-mfc-shared/codesnippet/cpp/csize-class_7.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC MDI](../../visual-cpp-samples.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CRect (classe)](../../atl-mfc-shared/reference/crect-class.md)   
 [Classe CPoint](../../atl-mfc-shared/reference/cpoint-class.md)


