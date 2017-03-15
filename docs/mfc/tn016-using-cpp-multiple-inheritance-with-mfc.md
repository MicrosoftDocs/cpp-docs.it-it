---
title: "TN016: utilizzo dell&#39;ereditariet&#224; multipla C++ con MFC | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.inheritance"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ereditarietà multipla"
  - "ereditarietà multipla, supporto MFC per"
  - "TN016"
ms.assetid: 4ee27ae1-1410-43a5-b111-b6af9b84535d
caps.latest.revision: 22
caps.handback.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# TN016: utilizzo dell&#39;ereditariet&#224; multipla C++ con MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questa nota viene descritto come utilizzare l'ereditarietà multipla \(MI\) con MFC.  L'utilizzo di eseguire non è necessario con MFC.  Il chiaveme non è utilizzato in alcune classi MFC e non è necessario scrivere una libreria di classi.  
  
 I seguenti sottotemi descrivono come eseguire riguarda l'utilizzo di idiomi comuni MFC nonché analizzano alcune delle limitazioni di eseguire.  Alcune di queste limitazioni sono le restrizioni generali di C\+\+.  Altri sono impostare dall'architettura di MFC.  
  
 Alla fine di questa nota tecnica è disponibile un'applicazione MFC completa che utilizza il chiaveme.  
  
## CRuntimeClass  
 La persistenza e i meccanismi dinamici della creazione di un oggetto di MFC utilizzano la struttura dei dati di [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) per identificare in modo univoco le classi.  MFC consente di associare una di queste strutture con ogni classe dinamica e\/o serializzabile nell'applicazione.  Queste strutture vengono inizializzate all'avvio mediante un oggetto statico speciale di tipo `AFX_CLASSINIT`.  
  
 L'implementazione corrente di `CRuntimeClass` non supporta le informazioni sul tipo di runtime di eseguire.  Ciò non significa che non è possibile utilizzare il memorizza nell'applicazione MFC.  Tuttavia, sarà necessario determinare quando si utilizzano oggetti con più di uno classe base.  
  
 Il metodo di [CObject::IsKindOf](../Topic/CObject::IsKindOf.md) correttamente non determinerà il tipo di oggetto che dispone più classi base.  Di conseguenza, non è possibile utilizzare [CObject](../mfc/reference/cobject-class.md) come classe base virtuale e tutte le chiamate alle funzioni membro di `CObject` come [CObject::Serialize](../Topic/CObject::Serialize.md) e a [CObject::operator new](../Topic/CObject::operator%20new.md) devono avere qualificatori di ambito in modo che sia possibile rendere chiaro C\+\+ la chiamata di funzione appropriata.  Quando un programma utilizza il eseguire all'interno di MFC, la classe che contiene la classe base di `CObject` deve essere una classe più a sinistra nell'elenco di classi base.  
  
 In alternativa è possibile utilizzare l'operatore di `dynamic_cast`.  Eseguendo il cast di un oggetto con il eseguire una delle relative classi base impone il compilatore per utilizzare le funzioni della classe base fornita.  Per ulteriori informazioni, vedere [Operatore dynamic\_cast](../cpp/dynamic-cast-operator.md).  
  
## CObject \- la radice di tutte le classi  
 Tutte le classi significative derivano direttamente o indirettamente da una `CObject`.  `CObject` non include i dati dei membri, ma sono disponibili determinate funzionalità predefinite.  Quando si memorizza, in genere erediteranno da due o più `CObject`\- classi derivate.  Nell'esempio seguente viene illustrata una classe può ereditare da [CFrameWnd](../mfc/reference/cframewnd-class.md) e da [CObList](../mfc/reference/coblist-class.md):  
  
```  
class CListWnd : public CFrameWnd, public CObList  
{  
 ...  
};  
CListWnd myListWnd;  
```  
  
 In questo caso `CObject` sono incluse due volte.  Ciò significa che è necessario un modo per rendere chiaro qualsiasi riferimento ai metodi o agli operatori di `CObject`.  `operator new` e [operatore delete](../Topic/CObject::operator%20delete.md) disponibili due operatori che devono essere resi semplici.  Ad esempio, il codice seguente genera un errore in fase di compilazione:  
  
```  
myListWnd.Dump(afxDump);  
    // compile time error, CFrameWnd::Dump or CObList::Dump ?  
```  
  
## Metodi di Reimplementing CObject  
 Quando si crea una nuova classe che dispone di due o più classi base `CObject` derivate, reimplementare i metodi di `CObject` da altri utenti da utilizzare.  Gli operatori `new` e `delete` sono obbligatori e [Dump](../Topic/CObject::Dump.md) è consigliato.  I seguenti di esempio implementa gli operatori di `delete` e di `new` e il metodo di `Dump` :  
  
```  
class CListWnd : public CFrameWnd, public CObList  
{  
public:  
    void* operator new(size_t nSize)  
        { return CFrameWnd::operator new(nSize); }  
    void operator delete(void* p)  
        { CFrameWnd::operator delete(p); }  
  
    void Dump(CDumpContent& dc)  
        { CFrameWnd::Dump(dc);  
          CObList::Dump(dc); }  
     ...  
};  
```  
  
## L'ereditarietà virtuale di CObject  
 Potrebbe sembrare che virtualmente ereditare `CObject` risolvesse il problema di ambiguità di funzione, ma non è questo il caso.  Poiché non sono presenti dati dei membri in `CObject`, non è necessario utilizzare l'ereditarietà virtuale di impedire più copie dei dati dei membri della classe base.  Nel primo esempio che è stato indicato in precedenza, il metodo virtuale di `Dump` è ancora ambigua poiché viene implementata in modo diverso in `CFrameWnd` e in `CObList`.  Il modo migliore per rimuovere l'ambiguità consiste nel seguire i requisiti definiti nella sezione precedente.  
  
## CObject::IsKindOf e nel runtime  
 Il meccanismo di runtime la digitazione di supporto da MFC in `CObject` utilizza le macro `DECLARE_DYNAMIC`, `IMPLEMENT_DYNAMIC`, `DECLARE_DYNCREATE`, `IMPLEMENT_DYNCREATE`, `DECLARE_SERIAL` e `IMPLEMENT_SERIAL`.  Queste macro possono eseguire un controllo del tipo di runtime per garantire il downcast sicuri.  
  
 Queste macro supportano una sola classe base e funzioneranno in modo limitato per moltiplicano le classi derivate.  La classe base specificato in `IMPLEMENT_DYNAMIC` o `IMPLEMENT_SERIAL` deve essere la prima \(o\) classe base più a sinistra.  Questo percorso consentirà di eseguire il controllo dei tipi per la classe di base solo all'estrema sinistra.  Il sistema dei tipi di runtime non conoscerà nothing sulle classi di base aggiuntive.  Nell'esempio seguente, i sistemi di runtime del controllo di tipo rispetto a `CFrameWnd`, ma non conosceranno su nothing `CObList`.  
  
```  
class CListWnd : public CFrameWnd, public CObList  
{  
    DECLARE_DYNAMIC(CListWnd)  
    ...  
};  
IMPLEMENT_DYNAMIC(CListWnd, CFrameWnd)  
```  
  
## CWnd e mappe messaggi  
 Affinché il sistema della mappa messaggi MFC funzionino correttamente, esistono due requisiti aggiuntivi:  
  
-   Deve essere presente un solo `CWnd`\- classe base derivata.  
  
-   `CWnd`\- la classe base derivata sia la prima \(o\) classe base più a sinistra.  
  
 Di seguito sono riportati alcuni esempi che non funzionano:  
  
```  
class CTwoWindows : public CFrameWnd, public CEdit  
    { ... };  
        // error : two copies of CWnd  
  
class CListEdit : public CObList, public CEdit  
    { ... };  
        // error : CEdit (derived from CWnd) must be first  
```  
  
## Un esempio di programma utilizzando chiaveme  
 L'esempio seguente è un'applicazione autonoma costituita da una classe derivata da `CFrameWnd` e da [CWinApp](../mfc/reference/cwinapp-class.md).  Non è consigliabile strutturate un'applicazione in questo modo, ma questo è un esempio di più piccola applicazione MFC che disponga di una classe.  
  
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
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)