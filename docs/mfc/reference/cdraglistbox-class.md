---
title: Classe CDragListBox | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDragListBox
- AFXCMN/CDragListBox
- AFXCMN/CDragListBox::CDragListBox
- AFXCMN/CDragListBox::BeginDrag
- AFXCMN/CDragListBox::CancelDrag
- AFXCMN/CDragListBox::Dragging
- AFXCMN/CDragListBox::DrawInsert
- AFXCMN/CDragListBox::Dropped
- AFXCMN/CDragListBox::ItemFromPt
dev_langs:
- C++
helpviewer_keywords:
- drag list box [C++]
- dragging list items
- CDragListBox class
- Windows [C++], list boxes
- list boxes
ms.assetid: fee20b42-60ae-4aa9-83f9-5a3d9b96e33b
caps.latest.revision: 24
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
ms.sourcegitcommit: 4fafe461008e3545243d693e0d9e34acd57163e0
ms.openlocfilehash: 3010fd9a363aa1ca1c946a6fe967a7ba415649d4
ms.lasthandoff: 02/24/2017

---
# <a name="cdraglistbox-class"></a>Classe CDragListBox
Oltre a fornire la funzionalità di una casella di riepilogo di Windows, la `CDragListBox` classe consente all'utente di spostare gli elementi di casella di riepilogo, ad esempio nomi di file, nella casella di riepilogo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CDragListBox : public CListBox  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDragListBox::CDragListBox](#cdraglistbox)|Costruisce un oggetto `CDragListBox`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDragListBox::BeginDrag](#begindrag)|Chiamato dal framework quando si avvia un'operazione di trascinamento.|  
|[CDragListBox::CancelDrag](#canceldrag)|Chiamato dal framework quando è stata annullata un'operazione di trascinamento.|  
|[CDragListBox::Dragging](#dragging)|Chiamato dal framework durante un'operazione di trascinamento.|  
|[CDragListBox::DrawInsert](#drawinsert)|Disegna la Guida di inserimento della casella di riepilogo di trascinamento.|  
|[CDragListBox::Dropped](#dropped)|Chiamato dal framework dopo l'elemento è stato eliminato.|  
|[CDragListBox::ItemFromPt](#itemfrompt)|Restituisce le coordinate dell'elemento da trascinare.|  
  
## <a name="remarks"></a>Note  
 Le caselle di riepilogo con questa funzionalità consentono agli utenti di ordinare gli elementi in un elenco in qualsiasi modo, è molto utile. Per impostazione predefinita, la casella di riepilogo sposterà l'elemento nella nuova posizione nell'elenco. Tuttavia, `CDragListBox` gli oggetti possono essere personalizzati per copiare gli elementi anziché spostarli.  
  
 Controllo casella di riepilogo è associato il `CDragListBox` classe non può disporre di **LBS_SORT** o **LBS_MULTIPLESELECT** stile. Per una descrizione di stili casella di riepilogo, vedere [casella di riepilogo stili](../../mfc/reference/list-box-styles.md).  
  
 Per utilizzare una casella di riepilogo trascinare in una finestra di dialogo esistente dell'applicazione, aggiungere un controllo casella di riepilogo al modello di finestra di dialogo utilizzando la finestra di dialogo e quindi assegnare una variabile membro (della categoria `Control` e il tipo di variabile `CDragListBox`) corrispondente al controllo casella di riepilogo nel modello di finestra di dialogo.  
  
 Per ulteriori informazioni sull'assegnazione controlli alle variabili membro, vedere [scelta rapida per la definizione di variabili membro per i controlli di finestra di dialogo](../../windows/defining-member-variables-for-dialog-controls.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CListBox](../../mfc/reference/clistbox-class.md)  
  
 `CDragListBox`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcmn.h  
  
##  <a name="begindrag"></a>CDragListBox::BeginDrag  
 Chiamato dal framework quando si verifica un evento che potrebbe iniziare un'operazione di trascinamento, ad esempio premendo il pulsante sinistro del mouse.  
  
```  
virtual BOOL BeginDrag(CPoint pt);
```  
  
### <a name="parameters"></a>Parametri  
 `pt`  
 Oggetto [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto che contiene le coordinate dell'elemento da trascinare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il trascinamento è consentito, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione se si vuole controllare cosa succede quando si avvia un'operazione di trascinamento. L'implementazione predefinita consente di acquisire il mouse e rimane in modalità di trascinamento fino a quando l'utente fa clic sul pulsante sinistro o destro del mouse o preme ESC, momento in cui viene annullata l'operazione di trascinamento.  
  
##  <a name="canceldrag"></a>CDragListBox::CancelDrag  
 Chiamato dal framework quando è stata annullata un'operazione di trascinamento.  
  
```  
virtual void CancelDrag(CPoint pt);
```  
  
### <a name="parameters"></a>Parametri  
 `pt`  
 Oggetto [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto che contiene le coordinate dell'elemento da trascinare.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override della funzione per gestire qualsiasi elaborazione speciale per il controllo casella di riepilogo.  
  
##  <a name="cdraglistbox"></a>CDragListBox::CDragListBox  
 Costruisce un oggetto `CDragListBox`.  
  
```  
CDragListBox();
```  
  
##  <a name="dragging"></a>CDragListBox::Dragging  
 Chiamato dal framework quando un elemento di casella di riepilogo viene trascinato all'interno di `CDragListBox` oggetto.  
  
```  
virtual UINT Dragging(CPoint pt);
```  
  
### <a name="parameters"></a>Parametri  
 `pt`  
 Oggetto [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto che contiene gli assi x e y del cursore coordinate dello schermo.  
  
### <a name="return-value"></a>Valore restituito  
 L'ID di risorsa del cursore da visualizzare. Sono possibili i seguenti valori:  
  
- `DL_COPYCURSOR`Indica che l'elemento verrà copiato.  
  
- `DL_MOVECURSOR`Indica che l'elemento verrà spostato.  
  
- `DL_STOPCURSOR`Indica che la destinazione di rilascio corrente non è accettabile.  
  
### <a name="remarks"></a>Note  
 Il comportamento predefinito restituisce `DL_MOVECURSOR`. Eseguire l'override di questa funzione se si desidera fornire funzionalità aggiuntive.  
  
##  <a name="drawinsert"></a>CDragListBox::DrawInsert  
 Chiamato dal framework per creare la Guida di inserimento prima dell'elemento con l'indice indicato.  
  
```  
virtual void DrawInsert(int nItem);
```  
  
### <a name="parameters"></a>Parametri  
 `nItem`  
 Indice in base zero del punto di inserimento.  
  
### <a name="remarks"></a>Note  
 Un valore di - 1 viene cancellata la Guida di inserimento. Eseguire l'override di questa funzione per modificare l'aspetto o il comportamento della Guida di inserimento.  
  
##  <a name="dropped"></a>CDragListBox::Dropped  
 Chiamato dal framework quando viene eliminato un elemento all'interno di un `CDragListBox` oggetto.  
  
```  
virtual void Dropped(
    int nSrcIndex,  
    CPoint pt);
```  
  
### <a name="parameters"></a>Parametri  
 *nSrcIndex*  
 Specifica l'indice in base zero della stringa di rilasciarlo.  
  
 `pt`  
 Oggetto [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto che contiene le coordinate del sito di destinazione.  
  
### <a name="remarks"></a>Note  
 Il comportamento predefinito consente di copiare l'elemento casella di riepilogo e i relativi dati nella nuova posizione e quindi Elimina l'elemento originale. Eseguire l'override di questa funzione per personalizzare il comportamento predefinito, ad esempio abilitando le copie degli elementi di casella di elenco da trascinare in altre posizioni all'interno dell'elenco.  
  
##  <a name="itemfrompt"></a>CDragListBox::ItemFromPt  
 Questa funzione per recuperare l'indice in base zero dell'elemento casella di elenco nella chiamata `pt`.  
  
```  
int ItemFromPt(
    CPoint pt,  
    BOOL bAutoScroll = TRUE) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pt`  
 Oggetto [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) che contiene le coordinate di un punto all'interno della casella di elenco.  
  
 *bAutoScroll*  
 Diverso da zero se è consentito lo scorrimento, in caso contrario 0.  
  
### <a name="return-value"></a>Valore restituito  
 Indice in base zero dell'elemento di casella di elenco di trascinamento.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio TSTCON](../../visual-cpp-samples.md)   
 [CListBox (classe)](../../mfc/reference/clistbox-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CListBox (classe)](../../mfc/reference/clistbox-class.md)

