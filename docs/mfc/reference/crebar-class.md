---
title: CReBar (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
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
- CReBar [MFC], AddBar
- CReBar [MFC], Create
- CReBar [MFC], GetReBarCtrl
ms.assetid: c1ad2720-1d33-4106-8e4e-80aa84f93559
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2cd32c4df0465426d99ca6246648520d160f382e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
|[CReBar::Create](#create)|Crea il controllo rebar e lo collega al `CReBar` oggetto.|  
|[CReBar:: GetReBarCtrl](#getrebarctrl)|Consente l'accesso diretto al controllo sottostante comune.|  
  
## <a name="remarks"></a>Note  
 Un oggetto rebar può contenere diverse finestre figlio, in genere altri controlli, incluse le caselle di modifica, le barre degli strumenti e le caselle di riepilogo. Un oggetto rebar può visualizzare le finestre figlio proprie su una bitmap specificata. L'applicazione può ridimensionare automaticamente il controllo rebar, o l'utente può ridimensionare manualmente il controllo rebar facendo clic o trascinando la barra verticale di ridimensionamento.  
  
 ![Esempio di RebarMenu](../../mfc/reference/media/vc4sc61.gif "vc4sc61")  
  
## <a name="rebar-control"></a>Controllo Rebar  
 Un oggetto rebar si comporta in modo analogo a un oggetto barra degli strumenti. Un controllo rebar utilizza il meccanismo di fare clic e trascinare per ridimensionare proprie bande. Un controllo Rebar può contenere una o più bande, con ciascuna banda che contiene una combinazione qualsiasi di una barra verticale di ridimensionamento, una bitmap, un'etichetta di testo e una finestra figlio. Tuttavia, le bande non possono contenere più di una finestra figlio.  
  
 **CReBar** utilizza il [CReBarCtrl](../../mfc/reference/crebarctrl-class.md) classe per fornire la relativa implementazione. È possibile accedere al controllo rebar mediante [GetReBarCtrl](#getrebarctrl) per sfruttare le opzioni di personalizzazione del controllo. Per ulteriori informazioni sui controlli rebar, vedere `CReBarCtrl`. Per ulteriori informazioni sull'utilizzo dei controlli rebar, vedere [CReBarCtrl utilizzando](../../mfc/using-crebarctrl.md).  
  
> [!CAUTION]
>  Rebar e oggetti del controllo rebar non supportano il controllo MFC barra di ancoraggio. Se **CRebar::EnableDocking** viene chiamato, l'applicazione verrà verificata.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CControlBar](../../mfc/reference/ccontrolbar-class.md)  
  
 `CReBar`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** AFXEXT. h  
  
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
 Un puntatore a una stringa contenente il testo da visualizzare nel controllo rebar. **NULL** per impostazione predefinita. Il testo contenuto `lpszText` non fa parte della finestra figlio; si trova in se stesso, il controllo rebar.  
  
 `pbmp`  
 Un puntatore a un `CBitmap` oggetto da visualizzare sullo sfondo del controllo rebar. **NULL** per impostazione predefinita.  
  
 `dwStyle`  
 Oggetto `DWORD` contenente lo stile da applicare al controllo rebar. Vedere il **fStyle** descrizione della struttura Win32 della funzione [REBARBANDINFO](http://msdn.microsoft.com/library/windows/desktop/bb774393) per un elenco completo degli stili di banda.  
  
 *clrFore*  
 Oggetto **COLORREF** valore che rappresenta il colore di primo piano del controllo rebar.  
  
 *clrBack*  
 Oggetto **COLORREF** valore che rappresenta il colore di sfondo del controllo rebar.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CReBarCtrl#1](../../mfc/reference/codesnippet/cpp/crebar-class_1.cpp)]  
  
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
 Puntatore al `CWnd` oggetto la cui finestra di Windows è l'elemento padre della barra di stato. In genere la finestra cornice.  
  
 `dwCtrlStyle`  
 Lo stile del controllo rebar. Per impostazione predefinita, **RBS_BANDBORDERS**, che consente di visualizzare limitare le righe per separare le bande adiacenti all'interno del controllo rebar. Vedere [stili del controllo Rebar](http://msdn.microsoft.com/library/windows/desktop/bb774377) in Windows SDK per un elenco di stili.  
  
 `dwStyle`  
 Gli stili di finestra del controllo rebar.  
  
 `nID`  
 ID di finestra figlio. del controllo rebar  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CReBar::AddBar](#addbar).  
  
##  <a name="getrebarctrl"></a>CReBar:: GetReBarCtrl  
 Questa funzione membro consente l'accesso diretto al controllo sottostante comune.  
  
```  
CReBarCtrl& GetReBarCtrl() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a un [CReBarCtrl](../../mfc/reference/crebarctrl-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione membro per sfruttare i vantaggi delle funzionalità del controllo comune rebar di Windows nella personalizzazione del controllo rebar. Quando si chiama `GetReBarCtrl`, restituisce un oggetto di riferimento per il `CReBarCtrl` è possibile utilizzare uno dei due set di funzioni membro dell'oggetto.  
  
 Per ulteriori informazioni sull'utilizzo `CReBarCtrl` per personalizzare il controllo rebar, vedere [CReBarCtrl utilizzando](../../mfc/using-crebarctrl.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_CReBarCtrl#2](../../mfc/reference/codesnippet/cpp/crebar-class_2.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFCIE di MFC](../../visual-cpp-samples.md)   
 [CControlBar (classe)](../../mfc/reference/ccontrolbar-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)



