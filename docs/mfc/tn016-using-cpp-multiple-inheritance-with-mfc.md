---
title: "TN016: Utilizzo dell'ereditarietà multipla C++ con MFC | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.inheritance
dev_langs:
- C++
helpviewer_keywords:
- TN016
- MI (Multiple Inheritance)
- multiple inheritance, MFC support for
ms.assetid: 4ee27ae1-1410-43a5-b111-b6af9b84535d
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b276e316ffc8ce04577532ac3b15400ee28f9f33
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tn016-using-c-multiple-inheritance-with-mfc"></a>TN016: utilizzo dell'ereditarietà multipla C++ con MFC
Questa nota viene descritto come utilizzare l'ereditarietà multipla (MI) con Microsoft Foundation Classes. L'uso delle MI non è necessaria con MFC. MI non viene utilizzato in tutte le classi MFC e non è necessario scrivere una libreria di classi.  
  
 Le sezioni seguenti descrivono come MI influisce sull'utilizzo di comuni idiomi MFC e illustrando alcune delle restrizioni della MI. Alcune di queste restrizioni sono le restrizioni generali di C++. Gli altri vengono imposte dall'architettura di MFC.  
  
 Alla fine di questa nota tecnica sono disponibili un'applicazione MFC completa che utilizza MI.  
  
## <a name="cruntimeclass"></a>CRuntimeClass  
 La persistenza e i meccanismi di creazione oggetto dinamico di utilizzo MFC la [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) struttura dei dati per identificare le classi. MFC associa una delle strutture a ogni classe serializzabile e/o dinamico nell'applicazione. Queste strutture vengono inizializzate all'avvio dell'applicazione utilizzando un oggetto statico speciale di tipo `AFX_CLASSINIT`.  
  
 L'implementazione corrente di `CRuntimeClass` non supporta informazioni sul tipo di runtime MI. Ciò non significa che mi non è possibile utilizzare nell'applicazione MFC. Tuttavia, sarà necessario alcune responsabilità quando si lavora con gli oggetti che hanno più di una classe di base.  
  
 Il [CObject:: IsKindOf](../mfc/reference/cobject-class.md#iskindof) metodo non determinerà correttamente il tipo di un oggetto se dispone di più classi base. Pertanto, è possibile utilizzare [CObject](../mfc/reference/cobject-class.md) come una classe base virtuale e tutte le chiamate a `CObject` funzioni membro, ad esempio [CObject:: Serialize](../mfc/reference/cobject-class.md#serialize) e [nuovaCObject::operator](../mfc/reference/cobject-class.md#operator_new)deve avere qualificatori di ambito in modo che C++ può distinguere la chiamata di funzione appropriata. Quando un programma utilizza MI all'interno di MFC, la classe che contiene la `CObject` classe di base deve essere la classe di estrema sinistra nell'elenco delle classi base.  
  
 In alternativa è possibile utilizzare il `dynamic_cast` operatore. Cast di un oggetto con MI a una delle relative classi base forzerà al compilatore di utilizzare le funzioni nella classe di base fornita. Per ulteriori informazioni, vedere [operatore dynamic_cast](../cpp/dynamic-cast-operator.md).  
  
## <a name="cobject---the-root-of-all-classes"></a>CObject - la radice di tutte le classi  
 Tutte le classi significative derivano direttamente o indirettamente dalla classe `CObject`. `CObject`Does non sono disponibili dati membro, ma dispone di alcune funzionalità predefinite. Quando si usa MI, si sarà in genere eredita da due o più `CObject`-classi derivate. Nell'esempio seguente viene illustrato come una classe può ereditare da un [CFrameWnd](../mfc/reference/cframewnd-class.md) e [CObList](../mfc/reference/coblist-class.md):  
  
```  
class CListWnd : public CFrameWnd, public CObList  
{  
 ...  
};  
CListWnd myListWnd;  
```  
  
 In questo caso `CObject` viene incluso due volte. Ciò significa che è necessario un modo per distinguere i riferimenti a `CObject` metodi o gli operatori. Il `operator new` e [operatore delete](../mfc/reference/cobject-class.md#operator_delete) sono due operatori che è necessario eliminare le ambiguità. Ad esempio, il codice seguente causa un errore in fase di compilazione:  
  
```  
myListWnd.Dump(afxDump);
*// compile time error, CFrameWnd::Dump or CObList::Dump   
```  
  
## <a name="reimplementing-cobject-methods"></a>Metodi di CObject modificati  
 Quando si crea una nuova classe che dispone di due o più `CObject` base classi derivate, reimplementare la `CObject` metodi che si desidera che altri utenti da utilizzare. Operatori `new` e `delete` sono obbligatori e [Dump](../mfc/reference/cobject-class.md#dump) è consigliato. Reimplements l'esempio seguente il `new` e `delete` operatori e `Dump` metodo:  
  
```  
class CListWnd : public CFrameWnd, public CObList  
{  
public:  
    void* operator new(size_t nSize)  
 { return CFrameWnd:: operator new(nSize);

}  
    void operator delete(void* p)  
 { CFrameWnd:: operator delete(p);

}  
 
    void Dump(CDumpContent& dc)  
 { CFrameWnd::Dump(dc);

    CObList::Dump(dc);

} 
 ...  
};  
```  
  
## <a name="virtual-inheritance-of-cobject"></a>Ereditarietà virtuale di CObject  
 Potrebbe sembrare che eredita virtualmente `CObject` e risolvere il problema di ambiguità di funzione, ma non è questo il caso. Poiché non sono presenti dati membro in `CObject`, non è necessario l'ereditarietà virtuale per evitare che più copie di una classe di base dei dati dei membri. Nel primo esempio illustrato in precedenza, il `Dump` metodo virtuale è ancora ambiguo perché viene implementato in modo diverso in `CFrameWnd` e `CObList`. Il modo migliore per rimuovere l'ambiguità consiste nel seguire le indicazioni presentate nella sezione precedente.  
  
## <a name="cobjectiskindof-and-run-time-typing"></a>CObject:: IsKindOf e in fase di esecuzione digitando  
 Il meccanismo di digitazione in fase di esecuzione supportato da MFC in `CObject` utilizza le macro `DECLARE_DYNAMIC`, `IMPLEMENT_DYNAMIC`, `DECLARE_DYNCREATE`, `IMPLEMENT_DYNCREATE`, `DECLARE_SERIAL` e `IMPLEMENT_SERIAL`. Queste macro è possono eseguire un controllo del tipo in fase di esecuzione per garantire il downcast-safe.  
  
 Queste macro supportano solo una singola classe di base e funzionano in modo limitato per le classi ereditate multiply. La classe di base in cui si specifica `IMPLEMENT_DYNAMIC` o `IMPLEMENT_SERIAL` deve essere la classe di base prima (o a sinistra). Questa posizione consentono il controllo di tipo per solo la classe di base di più a sinistra. Il sistema di tipi in fase di esecuzione verrà conosce ulteriori classi di base. Nell'esempio seguente, i sistemi di runtime eseguirà il controllo su tipi `CFrameWnd`, ma non conosce `CObList`.  
  
```  
class CListWnd : public CFrameWnd,
    public CObList  
{  
    DECLARE_DYNAMIC(CListWnd) 
 ...  
};  
IMPLEMENT_DYNAMIC(CListWnd,
    CFrameWnd)  
```  
  
## <a name="cwnd-and-message-maps"></a>CWnd e mappe messaggi  
 Per il sistema della mappa messaggi MFC funzionino correttamente, esistono due requisiti aggiuntivi:  
  
-   Deve essere presente solo un `CWnd`-classe di base derivata.  
  
-   Il `CWnd`-classe di base derivata deve essere la classe di base prima (o a sinistra).  
  
 Di seguito sono riportati alcuni esempi che non funzionerà:  
  
```  
class CTwoWindows : public CFrameWnd,
    public CEdit  
 { ... }; *// error : two copies of CWnd  
 
class CListEdit : public CObList,
    public CEdit  
 { ... }; *// error : CEdit (derived from CWnd) must be first  
```  
  
## <a name="a-sample-program-using-mi"></a>Un programma di esempio tramite MI  
 L'esempio seguente è un'applicazione autonoma che è costituito da una classe derivata da `CFrameWnd` e [CWinApp](../mfc/reference/cwinapp-class.md). Non è consigliabile che si struttura di un'applicazione in questo modo, ma questo è un esempio dell'applicazione MFC più piccolo che dispone di una classe.  
  
```  
#include <afxwin.h>  
  
class CHelloAppAndFrame : public CFrameWnd, public CWinApp  
{   
public:  
    CHelloAppAndFrame()  
        { }  
  
    // Necessary because of MI disambiguity  
    void* operator new(size_t nSize)  
        { return CFrameWnd::operator new(nSize); }  
    void operator delete(void* p)  
        { CFrameWnd::operator delete(p); }  
  
    // Implementation  
    // CWinApp overrides  
    virtual BOOL InitInstance();  
    // CFrameWnd overrides  
    virtual void PostNcDestroy();  
    afx_msg void OnPaint();  
  
    DECLARE_MESSAGE_MAP()  
  
};  
  
BEGIN_MESSAGE_MAP(CHelloAppAndFrame, CFrameWnd)  
    ON_WM_PAINT()  
END_MESSAGE_MAP()  
  
// because the frame window is not allocated on the heap, we must  
// override PostNCDestroy not to delete the frame object  
void CHelloAppAndFrame::PostNcDestroy()  
{  
    // do nothing (do not call base class)  
}  
  
void CHelloAppAndFrame::OnPaint()  
{  
    CPaintDC dc(this);  
    CRect rect;  
    GetClientRect(rect);  
  
    CString s = "Hello, Windows!";  
    dc.SetTextAlign(TA_BASELINE | TA_CENTER);  
    dc.SetTextColor(::GetSysColor(COLOR_WINDOWTEXT));  
    dc.SetBkMode(TRANSPARENT);  
    dc.TextOut(rect.right / 2, rect.bottom / 2, s);  
}  
  
// Application initialization  
BOOL CHelloAppAndFrame::InitInstance()  
{  
    // first create the main frame  
    if (!CFrameWnd::Create(NULL, "Multiple Inheritance Sample",  
        WS_OVERLAPPEDWINDOW, rectDefault))  
        return FALSE;  
  
    // the application object is also a frame window  
    m_pMainWnd = this;            
    ShowWindow(m_nCmdShow);  
    return TRUE;  
}  
  
CHelloAppAndFrame theHelloAppAndFrame;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

