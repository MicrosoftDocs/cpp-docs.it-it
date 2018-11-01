---
title: "TN016: utilizzo dell'ereditarietà multipla C++ con MFC"
ms.date: 06/28/2018
f1_keywords:
- vc.inheritance
helpviewer_keywords:
- TN016
- MI (Multiple Inheritance)
- multiple inheritance, MFC support for
ms.assetid: 4ee27ae1-1410-43a5-b111-b6af9b84535d
ms.openlocfilehash: 76dc2e856ca7db783ee542aa2dbb498fd4c1a769
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50668871"
---
# <a name="tn016-using-c-multiple-inheritance-with-mfc"></a>TN016: utilizzo dell'ereditarietà multipla C++ con MFC

In questa nota viene descritto come utilizzare l'ereditarietà multipla (MI) con Microsoft Foundation Classes. L'utilizzo di istanza Gestita non è necessario con MFC. Istanza Gestita non viene usato in tutte le classi MFC e non è necessario scrivere una libreria di classi.

Gli argomenti correlati seguenti descrivono come MI interessa l'uso di common idiomi MFC come pure illustrando alcune delle limitazioni dell'istanza Gestita. Alcune di queste restrizioni sono restrizioni generali riportate C++. Gli altri vengono imposte dall'architettura di MFC.

Alla fine di questa nota tecnica sono disponibili un'applicazione MFC completa che usa l'istanza Gestita.

## <a name="cruntimeclass"></a>CRuntimeClass

La persistenza e meccanismi di creazione oggetto dinamico di utilizzo MFC il [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) struttura dei dati per identificare le classi. MFC associa una delle strutture a ogni classe serializzabile e/o dinamico nell'applicazione. Queste strutture vengono inizializzate all'avvio dell'applicazione usando un oggetto statico speciale di tipo `AFX_CLASSINIT`.

L'implementazione corrente delle `CRuntimeClass` non supporta le informazioni sul tipo di runtime di istanza Gestita. Ciò non significa che non è possibile usare istanza Gestita nell'applicazione MFC. Tuttavia, sarà necessario determinate responsabilità quando si lavora con gli oggetti che hanno più di una classe di base.

Il [CObject:: IsKindOf](../mfc/reference/cobject-class.md#iskindof) metodo non determinerà correttamente il tipo di un oggetto se dispone di più classi base. Pertanto, è possibile utilizzare [CObject](../mfc/reference/cobject-class.md) come una classe base virtuale e tutte le chiamate a `CObject` funzioni membro, ad esempio [CObject:: Serialize](../mfc/reference/cobject-class.md#serialize) e [CObject::operator nuovo](../mfc/reference/cobject-class.md#operator_new)devono contenere qualificatori di ambito in modo che C++ in grado di distinguere la chiamata di funzione appropriata. Quando un programma utilizza istanza Gestita all'interno di MFC, la classe che contiene il `CObject` classe di base deve essere la classe più a sinistra nell'elenco delle classi base.

Un'alternativa consiste nell'usare il `dynamic_cast` operatore. Cast di un oggetto con istanza Gestita a una delle relative classi base forzerà al compilatore di usare le funzioni nella classe di base fornita. Per altre informazioni, vedere [dynamic_cast Operator](../cpp/dynamic-cast-operator.md).

## <a name="cobject---the-root-of-all-classes"></a>CObject - la radice di tutte le classi

Tutte le classi significative derivano direttamente o indirettamente dalla classe `CObject`. `CObject` viene non sono presenti dati membro, ma presenta alcune funzionalità predefinite. Quando si usa l'istanza Gestita, in genere erediteranno da due o più `CObject`-le classi derivate. Nell'esempio seguente viene illustrato come una classe può ereditare da un [CFrameWnd](../mfc/reference/cframewnd-class.md) e una [CObList](../mfc/reference/coblist-class.md):

```cpp
class CListWnd : public CFrameWnd, public CObList
{
    // ...
};
CListWnd myListWnd;
```

In questo caso `CObject` è incluso due volte. Ciò significa che è necessario un modo per evitare ambiguità tra tutti i riferimenti al `CObject` metodi o gli operatori. Il **operatore new** e [operatore delete](../mfc/reference/cobject-class.md#operator_delete) sono due operatori che è necessario eliminare le ambiguità. Come ulteriore esempio, il codice seguente causa un errore in fase di compilazione:

```cpp
myListWnd.Dump(afxDump); // compile time error, CFrameWnd::Dump or CObList::Dump
```

## <a name="reimplementing-cobject-methods"></a>Modificati i metodi di CObject

Quando si crea una nuova classe che contiene due o più `CObject` derivate le classi base, reimplementare la `CObject` metodi che si desidera che altri utenti da usare. Gli operatori **nuove** e **eliminare** sono obbligatori e [Dump](../mfc/reference/cobject-class.md#dump) è consigliato. Reimplements l'esempio seguente il **nuove** e **eliminare** operatori e il `Dump` metodo:

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

Potrebbe sembrare che eredita virtualmente `CObject` potrebbe risolvere il problema di ambiguità di funzione, ma non è questo il caso. Perché non sono presenti dati membro nel `CObject`, non è necessario ereditarietà virtuale per evitare che più copie dei dati dei membri classe di base. Nel primo esempio descritto in precedenza, il `Dump` metodo virtuale è ancora ambiguo perché viene implementata in modo diverso in `CFrameWnd` e `CObList`. Il modo migliore per rimuovere l'ambiguità consiste nel seguire i consigli illustrati nella sezione precedente.

## <a name="cobjectiskindof-and-run-time-typing"></a>CObject:: IsKindOf e in fase di esecuzione digitando

Il meccanismo di tipizzazione in fase di esecuzione supportato da MFC in `CObject` Usa le macro DECLARE_DYNAMIC, IMPLEMENT_DYNAMIC, DECLARE_DYNCREATE, IMPLEMENT_DYNCREATE, DECLARE_SERIAL e IMPLEMENT_SERIAL. Queste macro è possono eseguire un controllo del tipo in fase di esecuzione per garantire il downcast-safe.

Queste macro supportano solo una singola classe di base e funzioneranno in modo limitato per le classi ereditate multiply. La classe di base specificati in IMPLEMENT_DYNAMIC o IMPLEMENT_SERIAL deve essere la classe di base prima (o più a sinistra). Questo posizionamento consentirà il controllo del tipo per solo la classe di base di più a sinistra. Il sistema di tipi in fase di esecuzione eseguirà alcuna operazione sulle classi di base aggiuntive. Nell'esempio seguente, i sistemi in fase di esecuzione eseguirà digitare il controllo a fronte `CFrameWnd`, ma non conosce `CObList`.

```cpp
class CListWnd : public CFrameWnd, public CObList
{
    DECLARE_DYNAMIC(CListWnd)
    // ...
};
IMPLEMENT_DYNAMIC(CListWnd, CFrameWnd)
```

## <a name="cwnd-and-message-maps"></a>CWnd e mappe messaggi

Per il sistema di mappe messaggi MFC funzionino correttamente, esistono due requisiti aggiuntivi:

- Deve essere presente solo un `CWnd`-classe di base derivata.

- Il `CWnd`-classe di base derivata deve essere la classe di base prima (o più a sinistra).

Di seguito sono riportati alcuni esempi che non funzionerà:

```cpp
class CTwoWindows : public CFrameWnd, public CEdit
{ /* ... */ }; // error : two copies of CWnd

class CListEdit : public CObList, public CEdit
{ /* ... */ }; // error : CEdit (derived from CWnd) must be first
```

## <a name="a-sample-program-using-mi"></a>Un programma di esempio con istanza Gestita

L'esempio seguente è un'applicazione autonoma che è costituito da una classe derivata da `CFrameWnd` e [CWinApp](../mfc/reference/cwinapp-class.md). Non è consigliabile che è strutturare un'applicazione in questo modo, ma questo è un esempio dell'applicazione MFC più piccolo che dispone di una classe.

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

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
