---
title: 'TN011: utilizzo di MFC come parte di una DLL'
ms.date: 11/04/2016
helpviewer_keywords:
- _USRDLL symbol
- USRDLLs, compiler switches
- TN011
- DLLs [MFC], linking
- MFC DLLs [MFC], linking regular MFC DLLs to MFC
ms.assetid: 76753e9c-59dc-40f6-b6a7-f6bb9a7c4190
ms.openlocfilehash: 0f4d4e2ed76a0fa5f8f775345fc672a1df055a39
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370430"
---
# <a name="tn011-using-mfc-as-part-of-a-dll"></a>TN011: utilizzo di MFC come parte di una DLL

In questa nota vengono descritte le DLL MFC regolari, che consentono di utilizzare la libreria MFC come parte di una libreria a collegamento dinamico (DLL) di Windows. Si presuppone che si ha familiarità con le DLL di Windows e come compilarli. Per informazioni sulle DLL di estensione MFC, con cui è possibile creare estensioni alla libreria MFC, vedere [Versione DLL di MFC](../mfc/tn033-dll-version-of-mfc.md).

## <a name="dll-interfaces"></a>Interfacce DLL

Le DLL MFC regolari presuppongono che le interfacce tra l'applicazione e la DLL siano specificate in funzioni di tipo C o in classi esportate in modo esplicito. Le interfacce di classe MFC non possono essere esportate.

Se sia una DLL che un'applicazione desidera utilizzare MFC, entrambi hanno la possibilità di utilizzare la versione condivisa delle librerie MFC o di collegare in modo statico a una copia delle librerie. L'applicazione e DLL possono entrambi utilizzare una delle versioni standard della libreria MFC.

LE DLL MFC regolari presentano diversi vantaggi:

- L'applicazione che utilizza la DLL non deve utilizzare MFC e non deve essere un'applicazione di Visual C.

- Con le DLL MFC regolari collegate in modo statico a MFC, la dimensione della DLL dipende solo dalle routine di runtime MFC e C utilizzate e collegate.

- Con le DLL MFC regolari collegate in modo dinamico a MFC, il risparmio in memoria dall'utilizzo della versione condivisa di MFC può essere significativo. Tuttavia, è necessario distribuire le DLL\<condivise,*la versione* mfc\<>.dll e Msvvcrt*versione*>.dll, con la DLL.

- La progettazione della DLL è indipendente dalla modalità di implementazione delle classi. Il progetto DLL esporta solo le API desiderate. Di conseguenza, se l'implementazione viene modificata, le DLL MFC regolari sono ancora valide.

- Con le DLL MFC regolari collegate in modo statico a MFC, se sia la DLL che l'applicazione utilizzano MFC, non si verificano problemi con l'applicazione che desidera una versione di MFC diversa da quella della DLL o viceversa. Poiché la libreria MFC è collegata in modo statico in ogni DLL o EXE, non vi è alcun dubbio sulla versione in uso.

## <a name="api-limitations"></a>Limitazioni API

Alcune funzionalità MFC non si applicano alla versione DLL, a causa di limitazioni tecniche o perché tali servizi vengono in genere forniti dall'applicazione. Con la versione corrente di MFC, l'unica funzione non applicabile è `CWinApp::SetDialogBkColor`.

## <a name="building-your-dll"></a>Compilazione della DLL

Quando si compilano DLL MFC regolari collegate in modo `_USRDLL` `_WINDLL` statico a MFC, i simboli e devono essere definiti. Il codice DLL deve essere compilato anche con le seguenti opzioni del compilatore:

- **/D_WINDLL** indica che la compilazione è per una DLL

- **/D_USRDLL** specifica che si sta compilando una DLL MFC regolare

È inoltre necessario definire questi simboli e utilizzare queste opzioni del compilatore quando si compilano DLL MFC regolari collegate a MFC in modo dinamico. Inoltre, il `_AFXDLL` simbolo deve essere definito e il codice DLL deve essere compilato con:

- **/D_AFXDLL** specifica che si sta compilando una DLL MFC regolare collegata a MFC

Le interfacce (API) tra l'applicazione e la DLL devono essere esportate in modo esplicito. Si consiglia di definire le interfacce come larghezza di banda ridotta e di utilizzare solo le interfacce C, se possibile. Le interfacce dirette di C sono più facili da gestire rispetto alle classi C .

Inserire le API in un'intestazione separata che può essere inclusa sia dai file C che da quello in C. Per un esempio, vedere l'intestazione ScreenCap.h nell'esempio di concetti avanzati MFC [DLLScreenCap.](../overview/visual-cpp-samples.md) Per esportare le funzioni, `EXPORTS` immetterle nella sezione del file di definizione del modulo (. DEF) o `__declspec(dllexport)` includere nelle definizioni di funzione. Utilizzare `__declspec(dllimport)` per importare queste funzioni nell'eseguibile client.

È necessario aggiungere la macro AFX_MANAGE_STATE all'inizio di tutte le funzioni esportate nelle DLL MFC regolari collegate a MFC in modo dinamico. Questa macro imposta lo stato del modulo corrente su quello per la DLL. Per utilizzare questa macro, aggiungere la seguente riga di codice all'inizio delle funzioni esportate dalla DLL:

`AFX_MANAGE_STATE(AfxGetStaticModuleState( ))`

## <a name="winmain---dllmain"></a>WinMain -> DllMain

La libreria MFC definisce il `DllMain` punto di ingresso Win32 standard che inizializza l'oggetto derivato [CWinApp](../mfc/reference/cwinapp-class.md) come in una tipica applicazione MFC. Inserire tutte le inizializzazioni specifiche della DLL nel metodo [InitInstance](../mfc/reference/cwinapp-class.md#initinstance) come in una tipica applicazione MFC.

Si noti che il meccanismo [CWinApp::Run](../mfc/reference/cwinapp-class.md#run) non si applica a una DLL, perché l'applicazione è proprietaria del message pump principale. Se la DLL visualizza finestre di dialogo non modali o dispone di una finestra cornice principale propria, il message pump principale dell'applicazione deve chiamare una routine esportata dalla DLL che chiama [CWinApp::PreTranslateMessage](../mfc/reference/cwinapp-class.md#pretranslatemessage).

Vedere l'esempio DLLScreenCap per l'utilizzo di questa funzione.

La `DllMain` funzione fornita da MFC chiamerà il metodo [CWinApp::ExitInstance](../mfc/reference/cwinapp-class.md#exitinstance) della classe derivata da `CWinApp` prima che la DLL venga scaricata.

## <a name="linking-your-dll"></a>Collegamento della DLL

Con le DLL MFC regolari collegate in modo statico a MFC, è necessario collegare la DLL a Nafxcwd.lib o Nafxcw.lib e alla versione dei runtime C denominata Libcmt.lib. Queste librerie sono predefinite e possono essere installate specificandole durante l'esecuzione del programma di installazione di Visual C.

## <a name="sample-code"></a>Codice di esempio

Vedere il programma di esempio MFC Advanced Concepts DLLScreenCap per un esempio completo. Diverse cose interessanti da notare in questo esempio sono le seguenti:

- I flag del compilatore della DLL e quelli dell'applicazione sono diversi.

- Le righe di collegamento e . I file DEF per la DLL e quelli per l'applicazione sono diversi.

- Non è necessario che l'applicazione che utilizza la DLL si comporti in C.

- L'interfaccia tra l'applicazione e la DLL è un'API utilizzabile da C o C, e viene esportata con DLLScreenCap.def.

Nell'esempio seguente viene illustrata un'API definita in una DLL MFC regolare collegata in modo statico a MFC. In questo esempio, la dichiarazione `extern "C" { }` è racchiusa in un blocco per gli utenti di C. Questo ha diversi vantaggi. In primo luogo, rende le API DLL utilizzabili da applicazioni client non C. In secondo luogo, riduce l'overhead delle DLL perché il nome di c'è mangling non verrà applicato al nome esportato. Infine, semplifica l'aggiunta esplicita a un file . DEF (per l'esportazione per ordinale) senza doversi preoccupare del nome mangling.

```cpp
#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */

struct TracerData
{
    BOOL bEnabled;
    UINT flags;
};

BOOL PromptTraceFlags(TracerData FAR* lpData);

#ifdef __cplusplus
}
#endif
```

Le strutture utilizzate dall'API non derivano dalle classi MFC e sono definite nell'intestazione dell'API. In questo modo si riduce la complessità dell'interfaccia tra la DLL e l'applicazione e la DLL è utilizzabile dai programmi C.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
