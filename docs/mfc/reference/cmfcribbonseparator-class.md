---
title: Classe CMFCRibbonSeparator | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- GetThisClass
- CMFCRibbonSeparator::GetThisClass
- CMFCRibbonSeparator.CreateObject
- CMFCRibbonSeparator::CreateObject
- CMFCRibbonSeparator
- CreateObject
- CMFCRibbonSeparator.GetThisClass
dev_langs:
- C++
helpviewer_keywords:
- CMFCRibbonSeparator class
- GetThisClass method
- CreateObject method
ms.assetid: bedb1a53-cb07-4c3c-be12-698c5409e7cf
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
ms.openlocfilehash: 98a58d43b5e6299f26521d873caec06d4581f7b3
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcribbonseparator-class"></a>Classe CMFCRibbonSeparator
Implementa il separatore della barra multifunzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCRibbonSeparator : public CMFCRibbonBaseElement  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCRibbonSeparator::CMFCRibbonSeparator](#cmfcribbonseparator)|Costruisce un oggetto `CMFCRibbonSeparator`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCRibbonSeparator::AddToListBox](#addtolistbox)|Aggiunge un separatore per il **comandi** nell'elenco di **Personalizza** la finestra di dialogo. (Esegue l'override di [CMFCRibbonBaseElement::AddToListBox](../../mfc/reference/cmfcribbonbaseelement-class.md#addtolistbox).)|  
|`CMFCRibbonSeparator::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|  
|`CMFCRibbonSeparator::GetThisClass`|Utilizzato dal framework per ottenere un puntatore al [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCRibbonSeparator::CopyFrom](#copyfrom)|Un metodo di copia che imposta il membro di un separatore variabili da un altro oggetto.|  
|[CMFCRibbonSeparator::GetRegularSize](#getregularsize)|Restituisce la dimensione di un separatore.|  
|[CMFCRibbonSeparator::IsSeparator](#isseparator)|Indica se questo è un separatore.|  
|[CMFCRibbonSeparator::IsTabStop](#istabstop)|Indica se si tratta di una tabulazione.|  
|[CMFCRibbonSeparator::OnDraw](#ondraw)|Chiamato dal sistema per disegnare il separatore della barra multifunzione o barra di accesso rapido.|  
|[CMFCRibbonSeparator::OnDrawOnList](#ondrawonlist)|Chiamato dal sistema per disegnare il separatore nel **comandi** elenco.|  
  
## <a name="remarks"></a>Note  
 Un separatore della barra multifunzione è una riga orizzontale o verticale che logicamente separa sulla barra multifunzione elementi. Un separatore può essere disegnato il controllo della barra multifunzione, il menu principale dell'applicazione, la barra di stato della barra multifunzione e barra di accesso rapido.  
  
 Per utilizzare un separatore nell'applicazione, creare il nuovo oggetto e aggiungerlo al menu principale dell'applicazione, come illustrato di seguito:  
  
```  
CMFCRibbonMainPanel* pMainPanel = m_wndRibbonBar.AddMainCategory(_T("Main Menu"),
    IDB_FILESMALL,
    IDB_FILELARGE);

...  
pMainPanel->Add(new CMFCRibbonSeparator(TRUE));
```  
Chiamare [CMFCRibbonPanel::AddSeparator](../../mfc/reference/cmfcribbonpanel-class.md#addseparator) per aggiungere separatori ai pannelli della barra multifunzione. I separatori vengono allocati e aggiunti internamente dal `AddSeparator` metodo.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonSeparator](../../mfc/reference/cmfcribbonseparator-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxbaseribbonelement.h  
  
##  <a name="a-nameaddtolistboxa--cmfcribbonseparatoraddtolistbox"></a><a name="addtolistbox"></a>CMFCRibbonSeparator::AddToListBox  
 Aggiunge un separatore per il **comandi** nell'elenco di **Personalizza** la finestra di dialogo.  
  
```  
virtual int AddToListBox(
    CMFCRibbonCommandsListBox* pWndListBox,  
    BOOL bDeep);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndListBox`  
 Un puntatore per il **comandi** in cui viene aggiunto il separatore di elenco.  
  
 [in] `bDeep`  
 Ignorato.  
  
### <a name="return-value"></a>Valore restituito  
 Indice in base zero per la stringa nella casella di riepilogo specificata da `pWndListBox`.  
  
##  <a name="a-namecmfcribbonseparatora--cmfcribbonseparatorcmfcribbonseparator"></a><a name="cmfcribbonseparator"></a>CMFCRibbonSeparator::CMFCRibbonSeparator  
 Costruisce un oggetto `CMFCRibbonSeparator`.  
  
```  
CMFCRibbonSeparator(BOOL bIsHoriz = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bIsHoriz`  
 Se `TRUE`, il separatore è orizzontale; in caso `FALSE`, il separatore è verticale.  
  
### <a name="remarks"></a>Note  
 Nel menu dell'applicazione vengono usati separatori orizzontali. Vengono usati separatori verticali nelle barre degli strumenti.  
  
### <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come creare un oggetto della `CMFCRibbonSeparator` classe.  
  
 [!code-cpp[&#19; NVC_MFC_RibbonApp](../../mfc/reference/codesnippet/cpp/cmfcribbonseparator-class_1.cpp)]  
  
##  <a name="a-namecopyfroma--cmfcribbonseparatorcopyfrom"></a><a name="copyfrom"></a>CMFCRibbonSeparator::CopyFrom  
 Un metodo di copia che imposta il membro di un separatore variabili da un altro oggetto.  
  
```  
virtual void CopyFrom(const CMFCRibbonBaseElement& src);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `Src`  
 L'elemento della barra multifunzione origine da cui copiare.  
  
##  <a name="a-namegetregularsizea--cmfcribbonseparatorgetregularsize"></a><a name="getregularsize"></a>CMFCRibbonSeparator::GetRegularSize  
 Restituisce la dimensione di un separatore.  
  
```  
virtual CSize GetRegularSize(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Un puntatore a un contenuto di dispositivo.  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni del separatore nel contesto di dispositivo specificato.  
  
##  <a name="a-nameisseparatora--cmfcribbonseparatorisseparator"></a><a name="isseparator"></a>CMFCRibbonSeparator::IsSeparator  
 Indica se questo è un separatore.  
  
```  
virtual BOOL IsSeparator() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Sempre `TRUE` per questa classe.  
  
##  <a name="a-nameistabstopa--cmfcribbonseparatoristabstop"></a><a name="istabstop"></a>CMFCRibbonSeparator::IsTabStop  
 Indica se si tratta di una tabulazione.  
  
```  
virtual BOOL IsTabStop() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Sempre `FALSE` per questa classe.  
  
### <a name="remarks"></a>Note  
 Un separatore della barra multifunzione non è una tabulazione.  
  
##  <a name="a-nameondrawa--cmfcribbonseparatorondraw"></a><a name="ondraw"></a>CMFCRibbonSeparator::OnDraw  
 Chiamato dal sistema per disegnare il separatore della barra multifunzione o barra di accesso rapido.  
  
```  
virtual void OnDraw(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Puntatore a un contesto di dispositivo.  
  
##  <a name="a-nameondrawonlista--cmfcribbonseparatorondrawonlist"></a><a name="ondrawonlist"></a>CMFCRibbonSeparator::OnDrawOnList  
 Chiamato dal sistema per disegnare il separatore nel **comandi** elenco.  
  
```  
virtual void OnDrawOnList(
    CDC* pDC,  
    CString strText,  
    int nTextOffset,  
    CRect rect,  
    BOOL bIsSelected,  
    BOOL bHighlighted);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|[in] `pDC`|Puntatore a un contesto di dispositivo.|  
|[in] `strText`|Testo visualizzato nell'elenco.|  
|[in] `nTextOffset`|Spaziatura tra il testo e il lato sinistro del rettangolo di delimitazione.|  
|[in] `rect`|Specifica il rettangolo di delimitazione.|  
|[in] `bIsSelected`|Ignorato.|  
|[in] `bHighlighted`|Ignorato.|  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)

