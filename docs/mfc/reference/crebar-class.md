---
title: CReBar (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CReBar
- AFXEXT/CReBar
- AFXEXT/CReBar::AddBar
- AFXEXT/CReBar::Create
- AFXEXT/CReBar::GetReBarCtrl
dev_langs:
- C++
helpviewer_keywords:
- rebar controls, control bar
- CReBar class
- Internet Explorer 4.0 common controls
ms.assetid: c1ad2720-1d33-4106-8e4e-80aa84f93559
caps.latest.revision: 22
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
ms.openlocfilehash: 38ac4611503bec70ea9f809a4d4f9d4b5133e30e
ms.lasthandoff: 02/24/2017

---
# <a name="crebar-class"></a>CReBar (classe)
Barra di controllo che fornisce le informazioni su layout, persistenza e stato per i controlli Rebar.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CReBar : public CControlBar  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CReBar::AddBar](#addbar)|Aggiunge una banda di un controllo rebar.|  
|[CReBar::Create](#create)|Crea il controllo rebar e lo collega a di `CReBar` oggetto.|  
|[CReBar:: GetReBarCtrl](#getrebarctrl)|Consente l'accesso diretto al controllo sottostante comune.|  
  
## <a name="remarks"></a>Note  
 Un oggetto rebar può contenere diverse finestre figlio, in genere altri controlli, incluse le caselle di modifica, le barre degli strumenti e le caselle di riepilogo. Un oggetto rebar può visualizzare le finestre figlio proprie su una bitmap specificata. L'applicazione può ridimensionare automaticamente il controllo rebar, o l'utente può ridimensionare manualmente il controllo rebar facendo clic o trascinando la relativa barra gripper.  
  
 ![Esempio di RebarMenu](../../mfc/reference/media/vc4sc61.gif "vc4sc61")  
  
## <a name="rebar-control"></a>Controllo Rebar  
 Un oggetto rebar presenta un comportamento simile a un oggetto barra degli strumenti. Un controllo rebar utilizza il meccanismo di clic e trascinare per ridimensionare le bande. Un controllo Rebar può contenere una o più bande, con ciascuna banda che contiene una combinazione qualsiasi di una barra verticale di ridimensionamento, una bitmap, un'etichetta di testo e una finestra figlio. Tuttavia, le bande non possono contenere più di una finestra figlio.  
  
 **CReBar** utilizza il [CReBarCtrl](../../mfc/reference/crebarctrl-class.md) classe per fornire la relativa implementazione. È possibile accedere al controllo rebar mediante [GetReBarCtrl](#getrebarctrl) per sfruttare le opzioni di personalizzazione del controllo. Per ulteriori informazioni sui controlli rebar, vedere `CReBarCtrl`. Per ulteriori informazioni sull'utilizzo dei controlli rebar, vedere [CReBarCtrl utilizzando](../../mfc/using-crebarctrl.md).  
  
> [!CAUTION]
>  Barra di ancoraggio di controllo MFC non supportano Rebar e gli oggetti controllo rebar. Se **CRebar::EnableDocking** viene chiamato, l'applicazione viene eseguita un'asserzione.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CControlBar](../../mfc/reference/ccontrolbar-class.md)  
  
 `CReBar`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXEXT  
  
##  <a name="addbar"></a>CReBar::AddBar  
 Chiamare questa funzione membro per aggiungere una banda per il controllo rebar.  
  
```  
BOOL AddBar(
    CWnd* pBar,  
    LPCTSTR pszText = NULL,  
    CBitmap* pbmp = NULL,  
    DWORD dwStyle = RBBS_GRIPPERALWAYS | RBBS_FIXEDBMP);

 
BOOL AddBar(
    CWnd* pBar,  
    COLORREF clrFore,  
    COLORREF clrBack,  
    LPCTSTR pszText = NULL,  
    DWORD dwStyle = RBBS_GRIPPERALWAYS);
```  
  
### <a name="parameters"></a>Parametri  
 `pBar`  
 Un puntatore a un `CWnd` oggetto che è la finestra figlio da inserire nel controllo rebar. L'oggetto cui viene fatto riferimento deve avere un **WS_CHILD**.  
  
 `lpszText`  
 Un puntatore a una stringa contenente il testo da visualizzare nel controllo rebar. **NULL** per impostazione predefinita. Il testo contenuto `lpszText` non fa parte della finestra figlio; si trova il controllo rebar stesso.  
  
 `pbmp`  
 Un puntatore a un `CBitmap` oggetto da visualizzare sullo sfondo del controllo rebar. **NULL** per impostazione predefinita.  
  
 `dwStyle`  
 Oggetto `DWORD` contenente lo stile da applicare al controllo rebar. Vedere il **fStyle** descrizione della struttura Win32 della funzione [REBARBANDINFO](http://msdn.microsoft.com/library/windows/desktop/bb774393) per un elenco completo degli stili di banda.  
  
 *clrFore*  
 Oggetto **COLORREF** che rappresenta il colore di primo piano del controllo rebar.  
  
 *clrBack*  
 Oggetto **COLORREF** valore che rappresenta il colore di sfondo del controllo rebar.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CReBarCtrl n.&1;](../../mfc/reference/codesnippet/cpp/crebar-class_1.cpp)]  
  
##  <a name="create"></a>CReBar::Create  
 Chiamare questa funzione membro per creare un controllo rebar.  
  
```  
virtual BOOL Create(
    CWnd* pParentWnd,  
    DWORD dwCtrlStyle = RBS_BANDBORDERS,  
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN | CBRS_TOP,  
    UINT nID = AFX_IDW_REBAR);
```  
  
### <a name="parameters"></a>Parametri  
 `pParentWnd`  
 Puntatore a di `CWnd` oggetto la cui finestra di Windows è il padre della barra di stato. In genere la finestra cornice.  
  
 `dwCtrlStyle`  
 Lo stile del controllo rebar. Per impostazione predefinita, **RBS_BANDBORDERS**, che consente di visualizzare limitare le righe per separare le bande adiacenti all'interno del controllo rebar. Vedere [degli stili del controllo Rebar](http://msdn.microsoft.com/library/windows/desktop/bb774377) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per un elenco di stili.  
  
 `dwStyle`  
 Gli stili della finestra del controllo rebar.  
  
 `nID`  
 ID di finestra figlio. del controllo rebar  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CReBar::AddBar](#addbar).  
  
##  <a name="getrebarctrl"></a>CReBar:: GetReBarCtrl  
 Questa funzione membro consente l'accesso diretto al controllo sottostante comune.  
  
```  
CReBarCtrl& GetReBarCtrl() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a un [CReBarCtrl](../../mfc/reference/crebarctrl-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione membro per sfruttare le funzionalità del controllo comune rebar di Windows nella personalizzazione del controllo rebar. Quando si chiama `GetReBarCtrl`, restituisce un oggetto di riferimento per il `CReBarCtrl` è possibile utilizzare dei set di funzioni membro dell'oggetto.  
  
 Per ulteriori informazioni sull'utilizzo di `CReBarCtrl` per personalizzare il controllo rebar, vedere [CReBarCtrl utilizzando](../../mfc/using-crebarctrl.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CReBarCtrl n.&2;](../../mfc/reference/codesnippet/cpp/crebar-class_2.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio di MFCIE MFC](../../visual-cpp-samples.md)   
 [CControlBar (classe)](../../mfc/reference/ccontrolbar-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)




