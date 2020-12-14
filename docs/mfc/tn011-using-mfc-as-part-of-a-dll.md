---
description: 'Altre informazioni su: TN011: utilizzo di MFC come parte di una DLL'
title: 'TN011: utilizzo di MFC come parte di una DLL'
ms.date: 11/04/2016
helpviewer_keywords:
- _USRDLL symbol
- USRDLLs, compiler switches
- TN011
- DLLs [MFC], linking
- MFC DLLs [MFC], linking regular MFC DLLs to MFC
ms.assetid: 76753e9c-59dc-40f6-b6a7-f6bb9a7c4190
ms.openlocfilehash: 11b50ce361fc9e41c48931daa6bffd30a8c9673e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97216028"
---
# <a name="tn011-using-mfc-as-part-of-a-dll"></a>TN011: utilizzo di MFC come parte di una DLL

Questa nota descrive le normali DLL MFC che consentono di usare la libreria MFC come parte di una libreria di collegamento dinamico (DLL) di Windows. Si presuppone che l'utente abbia familiarità con le DLL di Windows e come crearle. Per informazioni sulle DLL di estensione MFC, con cui è possibile creare estensioni per la libreria MFC, vedere la pagina relativa alla [versione DLL di MFC](../mfc/tn033-dll-version-of-mfc.md).

## <a name="dll-interfaces"></a>Interfacce DLL

le DLL MFC regolari presuppongono che le interfacce tra l'applicazione e la DLL siano specificate nelle funzioni di tipo C o nelle classi esportate in modo esplicito. Non è possibile esportare le interfacce della classe MFC.

Se sia una DLL che un'applicazione desiderano utilizzare MFC, è possibile scegliere di utilizzare la versione condivisa delle librerie MFC o di collegarsi in modo statico a una copia delle librerie. È possibile che l'applicazione e la DLL usino entrambe una delle versioni standard della libreria MFC.

le normali DLL MFC presentano diversi vantaggi:

- L'applicazione che usa la DLL non deve usare MFC e non deve essere un'applicazione Visual C++.

- Con le normali DLL MFC collegate in modo statico a MFC, le dimensioni della DLL dipendono solo dalle routine di runtime di C e MFC utilizzate e collegate.

- Con le DLL MFC regolari che si collegano dinamicamente a MFC, i risparmi in memoria dall'uso della versione condivisa di MFC possono essere significativi. Tuttavia, è necessario distribuire le DLL condivise, MFC \<*version*> . dll e Msvvcrt \<*version*> . dll, con la dll.

- La progettazione della DLL è indipendente dalla modalità di implementazione delle classi. La progettazione della DLL viene esportata solo nelle API desiderate. Di conseguenza, se l'implementazione viene modificata, le normali DLL MFC sono comunque valide.

- Con le DLL MFC regolari che si collegano in modo statico a MFC, se sia la DLL che l'applicazione utilizzano MFC, non si verificano problemi con l'applicazione che desidera una versione diversa di MFC rispetto alla DLL o viceversa. Poiché la libreria MFC è collegata in modo statico a ogni DLL o EXE, non vi sono domande sulla versione disponibile.

## <a name="api-limitations"></a>Limitazioni API

Alcune funzionalità di MFC non si applicano alla versione della DLL, a causa di limitazioni tecniche o perché tali servizi vengono in genere forniti dall'applicazione. Con la versione corrente di MFC, l'unica funzione non applicabile è `CWinApp::SetDialogBkColor` .

## <a name="building-your-dll"></a>Creazione della DLL

Quando si compilano DLL MFC regolari che si collegano in modo statico a MFC, `_USRDLL` `_WINDLL` è necessario definire i simboli e. Il codice DLL deve essere compilato anche con le seguenti opzioni del compilatore:

- **/D_WINDLL** indica che la compilazione è relativa a una dll

- **/D_USRDLL** specifica che si sta compilando una normale DLL MFC

È inoltre necessario definire questi simboli e utilizzare queste opzioni del compilatore quando si compilano DLL MFC regolari che si collegano dinamicamente a MFC. Inoltre, `_AFXDLL` è necessario definire il simbolo e il codice dll deve essere compilato con:

- **/D_AFXDLL** specifica che si sta compilando una normale DLL MFC collegata a MFC in modo dinamico

Le interfacce (API) tra l'applicazione e la DLL devono essere esportate in modo esplicito. È consigliabile definire le interfacce con una larghezza di banda ridotta e utilizzare solo le interfacce C, se possibile. Le interfacce C dirette sono più facili da gestire rispetto alle classi C++ più complesse.

Posizionare le API in un'intestazione separata che può essere inclusa dai file C e C++. Per un esempio, vedere l'intestazione ScreenCap. h in MFC Advanced Concepts Sample [DLLScreenCap](../overview/visual-cpp-samples.md) . Per esportare le funzioni, immetterle nella `EXPORTS` sezione del file di definizione del modulo (. DEF) o Includi `__declspec(dllexport)` nelle definizioni di funzione. Usare `__declspec(dllimport)` per importare queste funzioni nell'eseguibile del client.

È necessario aggiungere la macro AFX_MANAGE_STATE all'inizio di tutte le funzioni esportate in DLL MFC regolari che si collegano dinamicamente a MFC. Questa macro imposta lo stato corrente del modulo su quello per la DLL. Per usare questa macro, aggiungere la riga di codice seguente all'inizio delle funzioni esportate dalla DLL:

`AFX_MANAGE_STATE(AfxGetStaticModuleState( ))`

## <a name="winmain---dllmain"></a>WinMain-> DllMain

La libreria MFC definisce il punto di `DllMain` ingresso Win32 standard che Inizializza l'oggetto derivato [CWinApp](../mfc/reference/cwinapp-class.md) come in una tipica applicazione MFC. Inserire tutte le inizializzazioni specifiche della DLL nel metodo [InitInstance](../mfc/reference/cwinapp-class.md#initinstance) come in una tipica applicazione MFC.

Si noti che il meccanismo [CWinApp:: Run](../mfc/reference/cwinapp-class.md#run) non si applica a una dll, perché l'applicazione è proprietaria del pump principale del messaggio. Se la DLL Visualizza finestre di dialogo non modali o ha una finestra cornice principale, il message pump principale dell'applicazione deve chiamare una routine esportata da DLL che chiama [CWinApp::P retranslatemessage](../mfc/reference/cwinapp-class.md#pretranslatemessage).

Per l'uso di questa funzione, vedere l'esempio DLLScreenCap.

La `DllMain` funzione fornita da MFC chiamerà il metodo [CWinApp:: ExitInstance](../mfc/reference/cwinapp-class.md#exitinstance) della classe derivata da `CWinApp` prima che la dll venga scaricata.

## <a name="linking-your-dll"></a>Collegamento della DLL

Con le normali DLL MFC collegate in modo statico a MFC, è necessario collegare la DLL con NAFXCWD. lib o NAFXCW. lib e con la versione dei runtime C denominata LIBCMT. lib. Queste librerie sono predefinite e possono essere installate specificando quando si esegue Visual C++ installazione.

## <a name="sample-code"></a>Codice di esempio

Per un esempio completo, vedere il programma di esempio relativo ai concetti avanzati di MFC DLLScreenCap. Di seguito sono riportati alcuni aspetti interessanti da considerare in questo esempio:

- I flag del compilatore della DLL e quelli dell'applicazione sono diversi.

- Le linee di collegamento e. I file DEF per la DLL e quelli per l'applicazione sono diversi.

- L'applicazione che usa la DLL non deve essere in C++.

- L'interfaccia tra l'applicazione e la DLL è un'API utilizzabile da C o C++ e viene esportata con DLLScreenCap. def.

Nell'esempio seguente viene illustrata un'API definita in una normale DLL MFC collegata a MFC in modo statico. In questo esempio, la dichiarazione è racchiusa in un `extern "C" { }` blocco per gli utenti di C++. Questa operazione presenta diversi vantaggi. In primo luogo, rende le API DLL utilizzabili da applicazioni client non C + +. In secondo luogo, riduce il sovraccarico della DLL perché l'alterazione del nome C++ non verrà applicata al nome esportato. Infine, rende più semplice aggiungere in modo esplicito a un. File DEF (per l'esportazione in base al numero ordinale) senza doversi preoccupare delle alterazioni dei nomi.

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

Le strutture usate dall'API non sono derivate dalle classi MFC e sono definite nell'intestazione dell'API. In questo modo si riduce la complessità dell'interfaccia tra la DLL e l'applicazione e si rende la DLL utilizzabile dai programmi C.

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
