---
description: "Altre informazioni su: TN016: utilizzo dell'ereditarietà multipla C++ con MFC"
title: "TN016: utilizzo dell'ereditarietà multipla C++ con MFC"
ms.date: 06/28/2018
f1_keywords:
- vc.inheritance
helpviewer_keywords:
- TN016
- MI (Multiple Inheritance)
- multiple inheritance, MFC support for
ms.assetid: 4ee27ae1-1410-43a5-b111-b6af9b84535d
ms.openlocfilehash: ac4b082a5dc33e93098453714acd25fbd0c18438
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97215950"
---
# <a name="tn016-using-c-multiple-inheritance-with-mfc"></a>TN016: utilizzo dell'ereditarietà multipla C++ con MFC

Questa nota descrive come usare l'ereditarietà multipla (MI) con la Microsoft Foundation Classes. L'utilizzo di MI non è obbligatorio con MFC. MI non viene utilizzato in alcuna classe MFC e non è necessario scrivere una libreria di classi.

Negli argomenti secondari seguenti viene descritto il modo in cui MI influiscono sull'utilizzo degli idiomi MFC comuni, oltre a coprire alcune delle restrizioni di MI. Alcune di queste restrizioni sono restrizioni generali di C++. Altre sono imposte dall'architettura MFC.

Alla fine di questa nota tecnica è presente un'applicazione MFC completa che usa MI.

## <a name="cruntimeclass"></a>CRuntimeClass

I meccanismi di persistenza e creazione di oggetti dinamici di MFC utilizzano la struttura dei dati [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) per identificare in modo univoco le classi. MFC associa una di queste strutture a ogni classe dinamica e/o serializzabile nell'applicazione. Queste strutture vengono inizializzate quando l'applicazione viene avviata usando un oggetto statico speciale di tipo `AFX_CLASSINIT` .

L'implementazione corrente di `CRuntimeClass` non supporta le informazioni sul tipo di runtime mi. Questo non significa che non è possibile usare MI nell'applicazione MFC. Tuttavia, si avranno determinate responsabilità quando si utilizzano oggetti con più di una classe di base.

Il metodo [CObject:: IsKindOf](../mfc/reference/cobject-class.md#iskindof) non determina correttamente il tipo di un oggetto se dispone di più classi base. Pertanto, non è possibile utilizzare [CObject](../mfc/reference/cobject-class.md) come classe base virtuale e tutte le chiamate a `CObject` funzioni membro quali [CObject:: Serialize](../mfc/reference/cobject-class.md#serialize) e [CObject:: operator new](../mfc/reference/cobject-class.md#operator_new) devono avere qualificatori di ambito, in modo che C++ possa distinguere la chiamata di funzione appropriata. Quando un programma usa MI all'interno di MFC, la classe che contiene la `CObject` classe di base deve essere la classe più a sinistra nell'elenco di classi di base.

In alternativa, è possibile usare l' **`dynamic_cast`** operatore. Il cast di un oggetto con MI a una delle relative classi base forza il compilatore a usare le funzioni nella classe di base fornita. Per ulteriori informazioni, vedere [operatore dynamic_cast](../cpp/dynamic-cast-operator.md).

## <a name="cobject---the-root-of-all-classes"></a>CObject-radice di tutte le classi

Tutte le classi significative derivano direttamente o indirettamente dalla classe `CObject` . `CObject` non contiene dati membro, ma dispone di alcune funzionalità predefinite. Quando si usa MI, in genere si eredita da due o più `CObject` classi derivate da. Nell'esempio seguente viene illustrato il modo in cui una classe può ereditare da un oggetto [CFrameWnd](../mfc/reference/cframewnd-class.md) e da un [CObList](../mfc/reference/coblist-class.md):

```cpp
class CListWnd : public CFrameWnd, public CObList
{
    // ...
};
CListWnd myListWnd;
```

In questo caso `CObject` è incluso due volte. Ciò significa che è necessario un modo per distinguere tutti i riferimenti a `CObject` metodi o operatori. **Operator new** e [operator delete](../mfc/reference/cobject-class.md#operator_delete) sono due operatori che devono essere ambiguità. Come altro esempio, il codice seguente genera un errore in fase di compilazione:

```cpp
myListWnd.Dump(afxDump); // compile time error, CFrameWnd::Dump or CObList::Dump
```

## <a name="reimplementing-cobject-methods"></a>Reimplementazione di metodi CObject

Quando si crea una nuova classe che dispone di due o più `CObject` classi base derivate, è necessario implementare nuovamente i `CObject` metodi che si desidera vengano usati da altri utenti. Gli operatori **`new`** e **`delete`** sono obbligatori e il [dump](../mfc/reference/cobject-class.md#dump) è consigliato. Nell'esempio seguente vengono reimplementati **`new`** gli **`delete`** operatori e e il `Dump` Metodo:

```cpp
class CListWnd : public CFrameWnd, public CObList
{
public:
    void* operator new(size_t nSize)
    {
        return CFrameWnd:: operator new(nSize);
    }
    void operator delete(void* p)
    {
        CFrameWnd:: operator delete(p);
    }
    void Dump(CDumpContent& dc)
    {
        CFrameWnd::Dump(dc);
        CObList::Dump(dc);
    }
    // ...
};
```

## <a name="virtual-inheritance-of-cobject"></a>Ereditarietà virtuale di CObject

Potrebbe sembrare che l'ereditarietà virtuale `CObject` possa risolvere il problema dell'ambiguità della funzione, ma ciò non è vero. Poiché non sono presenti dati membro in `CObject` , non è necessaria l'ereditarietà virtuale per impedire più copie di dati dei membri di una classe base. Nel primo esempio illustrato in precedenza, il `Dump` metodo virtuale è ancora ambiguo perché viene implementato in modo diverso in `CFrameWnd` e `CObList` . Il modo migliore per rimuovere l'ambiguità consiste nel seguire i consigli presentati nella sezione precedente.

## <a name="cobjectiskindof-and-run-time-typing"></a>CObject:: IsKindOf e digitazione Run-Time

Il meccanismo di tipizzazione della fase di esecuzione supportato da MFC in `CObject` Usa le macro DECLARE_DYNAMIC, IMPLEMENT_DYNAMIC, DECLARE_DYNCREATE, IMPLEMENT_DYNCREATE, DECLARE_SERIAL e IMPLEMENT_SERIAL. Queste macro possono eseguire un controllo dei tipi in fase di esecuzione per garantire downcast sicure.

Queste macro supportano solo una singola classe di base e funzioneranno in modo limitato per la moltiplicazione delle classi ereditate. La classe base specificata nella IMPLEMENT_DYNAMIC o IMPLEMENT_SERIAL deve essere la prima o la classe base più a sinistra. Questa selezione host consente di eseguire il controllo dei tipi solo per la classe di base più a sinistra. Il sistema dei tipi in fase di esecuzione non saprà nulla sulle classi base aggiuntive. Nell'esempio seguente, i sistemi di runtime eseguiranno il controllo dei tipi rispetto a `CFrameWnd` , ma non sapranno niente `CObList` .

```cpp
class CListWnd : public CFrameWnd, public CObList
{
    DECLARE_DYNAMIC(CListWnd)
    // ...
};
IMPLEMENT_DYNAMIC(CListWnd, CFrameWnd)
```

## <a name="cwnd-and-message-maps"></a>CWnd e mappe messaggi

Per il corretto funzionamento del sistema di mapping dei messaggi MFC, è necessario disporre di due requisiti aggiuntivi:

- Deve essere presente una sola `CWnd` classe base derivata da.

- La `CWnd` classe base derivata da deve essere la prima o la classe di base più a sinistra.

Di seguito sono riportati alcuni esempi che non funzioneranno:

```cpp
class CTwoWindows : public CFrameWnd, public CEdit
{ /* ... */ }; // error : two copies of CWnd

class CListEdit : public CObList, public CEdit
{ /* ... */ }; // error : CEdit (derived from CWnd) must be first
```

## <a name="a-sample-program-using-mi"></a>Programma di esempio che usa MI

L'esempio seguente è un'applicazione autonoma costituita da una classe derivata da `CFrameWnd` e da [CWinApp](../mfc/reference/cwinapp-class.md). Si sconsiglia di strutturare un'applicazione in questo modo, ma si tratta di un esempio della più piccola applicazione MFC con una classe.

```cpp
#include <afxwin.h>

class CHelloAppAndFrame : public CFrameWnd, public CWinApp
{
public:
    CHelloAppAndFrame() {}

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

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
