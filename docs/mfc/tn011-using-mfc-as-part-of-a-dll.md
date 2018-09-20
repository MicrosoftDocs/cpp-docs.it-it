---
title: 'TN011: Utilizzo di MFC come parte di una DLL | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.mfc.dll
dev_langs:
- C++
helpviewer_keywords:
- _USRDLL symbol
- USRDLLs, compiler switches
- TN011
- DLLs [MFC], linking
- MFC DLLs [MFC], linking regular MFC DLLs to MFC
ms.assetid: 76753e9c-59dc-40f6-b6a7-f6bb9a7c4190
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bc30248fda9c179b22769230d5e09bf1da474d3b
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46435610"
---
# <a name="tn011-using-mfc-as-part-of-a-dll"></a>TN011: utilizzo di MFC come parte di una DLL

In questa nota descrive le DLL MFC regolari, che consentono di usare la libreria MFC come parte di una libreria di collegamento dinamico (DLL) di Windows. Si presuppone che abbia familiarità con le DLL di Windows e come crearle. Per informazioni sulle DLL estensione MFC, con cui è possibile creare estensioni per la libreria MFC, di visualizzare [versione DLL di MFC](../mfc/tn033-dll-version-of-mfc.md).

## <a name="dll-interfaces"></a>Interfacce DLL

DLL MFC regolari presuppongono interfacce tra l'applicazione e le DLL vengono specificate in funzioni di tipo C o classi esportate in modo esplicito. Le interfacce delle classi MFC non possono essere esportate.

Se una DLL sia un'applicazione da usare MFC, sia possibile scegliere in modo che utilizzi la versione delle librerie MFC condivisa o per il collegamento statico a una copia delle librerie. L'applicazione e DLL possono entrambi utilizzano una delle versioni della libreria MFC standard.

DLL MFC regolari offrono numerosi vantaggi:

- L'applicazione che usa la DLL non è necessario utilizzare MFC e non deve essere un'applicazione Visual C++.

- Con le DLL MFC regolari collegate in modo statico a MFC, le dimensioni della DLL dipendono dal solo le routine di runtime C e MFC che vengono usate e collegate.

- Con le DLL MFC regolari collegate a MFC in modo dinamico, il risparmio di memoria da usare la versione condivisa di MFC può essere significativo. Tuttavia, è necessario distribuire le DLL condivise, Mfc*\<versione >* con estensione dll ed Msvvcrt*\<versione >*. dll, con la DLL.

- La progettazione DLL è indipendente dal modo in cui vengono implementate le classi. La progettazione della DLL esporta solo le API desiderate. Di conseguenza, se viene modificata l'implementazione, le DLL MFC regolari sono ancora valide.

- Con DLL MFC regolari collegate in modo statico a MFC, se sia DLL e applicazione che utilizza MFC, non siano presenti problemi con l'applicazione che deve essere una versione diversa di MFC più DLL o viceversa. Poiché la libreria MFC è collegata staticamente in ogni file DLL o EXE, non è presente alcuna ambiguità sulla versione cui si dispone.

## <a name="api-limitations"></a>Limitazioni dell'API

Alcune funzionalità MFC non è applicabile per la versione della DLL a causa di limitazioni tecniche o perché tali servizi sono in genere forniti dall'applicazione. Con la versione corrente di MFC, è l'unica funzione che non è applicabile `CWinApp::SetDialogBkColor`.

## <a name="building-your-dll"></a>Compilazione della DLL

Quando si compila una DLL MFC regolari collegate in modo statico a MFC, i simboli `_USRDLL` e `_WINDLL` deve essere definito. Il codice della DLL deve essere compilato anche con le opzioni del compilatore seguenti:

- **/ D_WINDLL** indica la compilazione è per una DLL

- **/ D_USRDLL** specifica si compila una DLL MFC regolari

È anche necessario definire questi simboli e usare queste opzioni del compilatore quando si compila una DLL MFC regolari collegate a MFC in modo dinamico. Inoltre, il simbolo `_AFXDLL` devono essere definiti e il codice della DLL deve essere compilato con:

- **/ /D_AFXDLL** specifica che si compila una DLL MFC regolare collegata a MFC in modo dinamico

Le interfacce (API) tra l'applicazione e la DLL devono essere esportate in modo esplicito. È consigliabile definire le interfacce per larghezza di banda ridotta e usare solo le interfacce C, se possibile. Le interfacce C dirette sono più semplici da gestire rispetto alle classi C++ più complesse.

Posizionare le tue API in un'intestazione separata che può essere incluso dal file C e C++. Vedere l'intestazione ScreenCap.h nell'esempio di concetti avanzati MFC [DLLScreenCap](../visual-cpp-samples.md) per un esempio. Per esportare le funzioni, immetterli nel `EXPORTS` sezione del file di definizione del modulo (. DEF) o includere `__declspec(dllexport)` sulle definizioni di funzione. Usare `__declspec(dllimport)` per importare il file eseguibile del client di queste funzioni.

È necessario aggiungere la macro AFX_MANAGE_STATE all'inizio di tutte le funzioni esportate nelle DLL MFC regolari collegate a MFC in modo dinamico. Questa macro imposta lo stato del modulo corrente a quello per la DLL. Per usare questa macro, aggiungere la riga di codice seguente all'inizio delle funzioni esportate dalla DLL:

`AFX_MANAGE_STATE(AfxGetStaticModuleState( ))`

## <a name="winmain---dllmain"></a>WinMain -> funzione DllMain

La libreria MFC definisce Win32 standard `DllMain` punto di ingresso che inizializza il [CWinApp](../mfc/reference/cwinapp-class.md) derivato l'oggetto come avviene in una tipica applicazione MFC. Inserire codice di inizializzazione di DLL specifiche tutte nel [InitInstance](../mfc/reference/cwinapp-class.md#initinstance) metodo come in una tipica applicazione MFC.

Si noti che il [CWinApp:: Run](../mfc/reference/cwinapp-class.md#run) meccanismo non è applicabile a una DLL, poiché l'applicazione proprietaria principale message pump. Se la DLL vengono visualizzate le finestre di dialogo non modale o dispone di un proprio una finestra cornice principale, dell'applicazione principale message pump deve chiamare una routine esportata DLL che chiama [CWinApp:: PreTranslateMessage](../mfc/reference/cwinapp-class.md#pretranslatemessage).

Vedere l'esempio DLLScreenCap per l'uso di questa funzione.

Il `DllMain` funzione che MFC fornisce chiamerà il [CWinApp:: ExitInstance](../mfc/reference/cwinapp-class.md#exitinstance) metodo della classe che deriva da `CWinApp` prima dello scaricamento di DLL.

## <a name="linking-your-dll"></a>Il collegamento della DLL

Con le DLL MFC regolari collegate in modo statico a MFC, è necessario collegare la DLL con. lib o NAFXCWD. lib e con la versione di runtime C denominati LIBCMT. lib. Queste librerie sono predefinite e possono essere installate specificandoli quando si esegue il programma di installazione di Visual C++.

## <a name="sample-code"></a>Codice di esempio

Vedere l'esempio di concetti avanzati MFC DLLScreenCap di programma per un esempio completo. Come indicato di seguito sono riportati i diversi aspetti interessanti da notare in questo esempio:

- I flag del compilatore della DLL e quelli dell'applicazione sono diversi.

- Le linee di collegamento e. I file DEF della DLL e quelli per l'applicazione sono diversi.

- L'applicazione che usa la DLL non dovrà essere in C++.

- L'interfaccia tra l'applicazione e la DLL è un'API che può essere usata da C o C++ e viene esportata con DLLScreenCap.def.

L'esempio seguente illustra un'API che è definita in una normale DLL MFC con collegamento statico MFC. In questo esempio, la dichiarazione è racchiuso tra parentesi un `extern "C" { }` blocco per gli utenti di C++. Questo presenta diversi vantaggi. In primo luogo, in questo modo le tue API DLL utilizzabile dalle applicazioni client non C++. In secondo luogo, riduce il sovraccarico DLL perché alterazione dei nomi C++ non verranno applicate al nome esportato. Infine, rende più semplice aggiungere in modo esplicito a una. Senza doversi preoccupare di alterazione del nome del file DEF (per l'esportazione di base all'ordinale).

```
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

Le strutture utilizzate dall'API non sono derivate da classi MFC e vengono definite nell'intestazione dell'API. Ciò riduce la complessità dell'interfaccia tra la DLL e l'applicazione e la DLL utilizzabile da parte di programmi C.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)

