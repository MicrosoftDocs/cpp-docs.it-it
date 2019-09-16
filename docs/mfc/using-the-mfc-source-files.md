---
title: Uso di file di origine MFC
ms.date: 08/19/2019
helpviewer_keywords:
- public members
- source files
- MFC, source files
- MFC source files
- comments, MFC
- private member access
- protected member access
- source files, MFC
ms.assetid: 3230e8fb-3b69-4ddf-9538-365ac7ea5e72
ms.openlocfilehash: ca5799da7a6ada42db20e3551b3fb7262e8990a0
ms.sourcegitcommit: 9d4ffb8e6e0d70520a1e1a77805785878d445b8a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/20/2019
ms.locfileid: "69631677"
---
# <a name="using-the-mfc-source-files"></a>Uso di file di origine MFC

La libreria Microsoft Foundation Class (MFC) fornisce il codice sorgente completo. I file di intestazione (. h) si trovano nella directory *\atlmfc\include* I file di implementazione (. cpp) si trovano nella directory *\atlmfc\src\mfc.*

In questo articolo vengono illustrate le convenzioni utilizzate da MFC per commentare le varie parti di ogni classe, il significato di questi commenti e ciò che si prevede di trovare in ogni sezione. Nelle procedure guidate di Visual Studio vengono usate convenzioni simili per le classi create per l'utente e probabilmente si troveranno tali convenzioni utili per il proprio codice.

È possibile avere familiarità con le parole chiave **public**, **protected**e **private** C++ . Nei file di intestazione MFC si noterà che ogni classe può avere più di ognuna di esse. Ad esempio, le variabili e le funzioni del membro pubblico potrebbero trovarsi in più di una parola chiave **public** . Poiché MFC separa le variabili membro e le funzioni in base all'utilizzo, non al tipo di accesso consentito. MFC utilizza **private** in modo sporadico. Anche gli elementi considerati dettagli di implementazione sono spesso **protetti**e molte volte sono **pubbliche**. Sebbene l'accesso ai dettagli di implementazione sia sconsigliato, MFC affida la decisione allo sviluppatore.

Sia nei file di origine MFC che nei file di intestazione creati dalla creazione guidata applicazione MFC, saranno disponibili commenti come questi all'interno delle dichiarazioni di classe, in genere in questo ordine:

`// Constructors`

`// Attributes`

`// Operations`

`// Overridables`

`// Implementation`

## <a name="an-example-of-the-comments"></a>Esempio dei commenti

Il seguente elenco parziale della classe `CStdioFile` utilizza la maggior parte dei commenti standard che MFC impiega nelle classi per dividere i membri della classe in base alle modalità di utilizzo:

```cpp
/*============================================================================*/
// STDIO file implementation

class CStdioFile : public CFile
{
    DECLARE_DYNAMIC(CStdioFile)

public:
// Constructors
    CStdioFile();

    // . . .

// Attributes
    FILE* m_pStream;    // stdio FILE
                        // m_hFile from base class is _fileno(m_pStream)

// Operations
    // reading and writing strings
    virtual void WriteString(LPCTSTR lpsz);
    virtual LPTSTR ReadString(_Out_writes_z_(nMax) LPTSTR lpsz, _In_ UINT nMax);
    virtual BOOL ReadString(CString& rString);

// Implementation
public:
    virtual ~CStdioFile();
#ifdef _DEBUG
    void Dump(CDumpContext& dc) const;
#endif
    virtual ULONGLONG GetPosition() const;
    virtual ULONGLONG GetLength() const;
    virtual BOOL Open(LPCTSTR lpszFileName, UINT nOpenFlags, CFileException* pError = NULL);

    // . . .

protected:
    void CommonBaseInit(FILE* pOpenStream, CAtlTransactionManager* pTM);
    void CommonInit(LPCTSTR lpszFileName, UINT nOpenFlags, CAtlTransactionManager* pTM);
};
```

Questi commenti contrassegnano in modo coerente le sezioni della dichiarazione di classe che contengono tipi simili di membri di classe. Tenere presente che si tratta di convenzioni MFC, non di regole impostate.

## <a name="-constructors-comment"></a>Commento sui costruttori

La `// Constructors` sezione di una dichiarazione di classe MFC dichiara i costruttori (nel C++ senso) e tutte le funzioni di inizializzazione necessarie per usare effettivamente l'oggetto. Ad esempio, `CWnd::Create` si trova nella sezione costruttori perché prima di usare l' `CWnd` oggetto deve essere "costruito completamente" chiamando prima il C++ costruttore e quindi chiamando la `Create` funzione. In genere, questi membri sono pubblici.

Ad esempio, la `CStdioFile` classe ha cinque costruttori, uno dei quali viene mostrato nell'elenco in [un esempio dei commenti](#an-example-of-the-comments).

## <a name="-attributes-comment"></a>Commento attributi

La `// Attributes` sezione di una dichiarazione di classe MFC contiene gli attributi o le proprietà pubbliche dell'oggetto. In genere gli attributi sono variabili membro o funzioni get/set. Le funzioni "Get" e "set" possono o meno essere virtuali. Le funzioni "Get" sono spesso **const**, perché nella maggior parte dei casi non hanno effetti collaterali. Questi membri sono in genere pubblici. Gli attributi protected e private si trovano in genere nella sezione di implementazione.

Nell'elenco di esempi della classe `CStdioFile`, in [un esempio dei commenti](#an-example-of-the-comments), l'elenco include una variabile membro, *m_pStream*. Classe `CDC` elenca circa 20 membri sotto questo commento.

> [!NOTE]
> Le classi di grandi dimensioni `CDC` , `CWnd`ad esempio e, possono avere un numero così elevato di membri che elencano semplicemente tutti gli attributi in un gruppo non aggiungono molto per chiarezza. In questi casi, la libreria di classi utilizza altri commenti come intestazioni per delineare ulteriormente i membri. Ad esempio, `CDC` USA `// Device-Context Functions`, `// Drawing Tool Functions` ,ealtro.`// Drawing Attribute Functions` I gruppi che rappresentano gli attributi seguiranno la sintassi consueta descritta sopra. Molte classi OLE hanno una sezione di implementazione `// Interface Maps`denominata.

## <a name="-operations-comment"></a>Commento sulle operazioni

La `// Operations` sezione di una dichiarazione di classe MFC contiene funzioni membro che è possibile chiamare sull'oggetto per eseguire operazioni o eseguire azioni (eseguire operazioni). Queste funzioni non sono in genere**const** perché hanno in genere effetti collaterali. Possono essere virtuali o non virtuali, a seconda delle esigenze della classe. In genere, questi membri sono pubblici.

Nell'elenco di esempi della classe `CStdioFile`, in [un esempio dei commenti](#an-example-of-the-comments), l'elenco include tre funzioni membro sotto questo commento: `WriteString` e due overload di. `ReadString`

Come per gli attributi, le operazioni possono essere ulteriormente suddivise.

## <a name="-overridables-comment"></a>Commento sottoponibile a override

La `// Overridables` sezione di una dichiarazione di classe MFC contiene funzioni virtuali di cui è possibile eseguire l'override in una classe derivata quando è necessario modificare il comportamento della classe di base. Vengono in genere denominati iniziando con "on", anche se non è strettamente necessario. Qui le funzioni sono progettate per essere sottoposte a override e spesso implementano o forniscono una sorta di "callback" o "hook". In genere, questi membri sono protetti.

In MFC, le funzioni virtuali pure sono sempre inserite in questa sezione. Una funzione virtuale pura in C++ assume il formato seguente:

`virtual void OnDraw( ) = 0;`

Nell'elenco di esempi della classe `CStdioFile`, in [un esempio dei commenti](#an-example-of-the-comments), l'elenco non include alcuna sezione sottoponibile a override. La `CDocument`classe, d'altra parte, elenca circa 10 funzioni membro sottoponibili a override.

In alcune classi, è anche possibile visualizzare il commento `// Advanced Overridables`. Queste funzioni sono quelle che solo i programmatori avanzati devono tentare di eseguire l'override. Probabilmente non sarà mai necessario eseguirne l'override.

> [!NOTE]
> Le convenzioni descritte in questo articolo funzionano anche bene, in generale, per i metodi e le proprietà di automazione (precedentemente noti come automazione OLE). I metodi di automazione sono simili alle operazioni MFC. Le proprietà di automazione sono simili agli attributi MFC. Gli eventi di automazione, supportati per i controlli ActiveX, precedentemente noti come controlli OLE, sono simili alle funzioni membro di MFC sottoponibili a override.

## <a name="-implementation-comment"></a>Commento all'implementazione

La `// Implementation` sezione è la parte più importante di qualsiasi dichiarazione di classe MFC.

Questa sezione contiene tutti i dettagli di implementazione. In questa sezione è possibile visualizzare le variabili membro e le funzioni membro. Tutto il contenuto di questa riga potrebbe cambiare in una versione futura di MFC. A meno che non sia possibile evitarlo, non è necessario utilizzare i `// Implementation` dettagli sotto la riga. Inoltre, i membri dichiarati al di sotto della riga di implementazione non sono documentati, sebbene alcune implementazioni siano descritte in note tecniche. Gli override delle funzioni virtuali nella classe base risiedono in questa sezione, indipendentemente dalla sezione in cui è definita la funzione della classe base. Quando una funzione esegue l'override dell'implementazione della classe base, viene considerato un dettaglio di implementazione. In genere, questi membri sono protetti, ma non sempre.

Nell'elenco `CStdioFile` in un [esempio dei commenti](#an-example-of-the-comments), i membri dichiarati sotto il commento `// Implementation` possono essere dichiarati come **public**, **protected** o **private**. Usare questi membri solo con cautela, perché possono cambiare in futuro. La dichiarazione di un gruppo di membri come **public** potrebbe essere necessaria per il corretto funzionamento dell'implementazione della libreria di classi. Tuttavia, non significa che è possibile usare in modo sicuro i membri così dichiarati.

> [!NOTE]
> È possibile trovare commenti dei tipi rimanenti al di sopra o al `// Implementation` di sotto del commento. In entrambi i casi, descrivono i tipi di membri dichiarati sotto di essi. Se si verificano sotto `// Implementation` il commento, è necessario presupporre che i membri possano cambiare nelle versioni future di MFC.

## <a name="see-also"></a>Vedere anche

[Argomenti MFC generali](../mfc/general-mfc-topics.md)
