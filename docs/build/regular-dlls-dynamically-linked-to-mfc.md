---
title: DLL MFC regolari collegate in modo dinamico a MFC | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- regular MFC DLLs [C++], dynamically linked to MFC
- AFX_MANAGE_STATE macro
- DLLs [C++], regular
- shared DLL versions [C++]
- dynamically linked DLLs [C++]
ms.assetid: b4f7ab92-8723-42a5-890e-214f4e29dcd0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 24352e0b28e03cbbecd89b827b65c7f5cae61b7d
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45711373"
---
# <a name="regular-mfc-dlls-dynamically-linked-to-mfc"></a>DLL MFC regolari collegate in modo dinamico a MFC

Una normale che DLL MFC collegate in modo dinamico a MFC è una DLL che utilizza internamente MFC e le funzioni esportate della DLL possono essere chiamate dagli eseguibili MFC e non MFC. Come descritto, il nome di questo tipo di DLL viene compilato utilizzando la versione di libreria a collegamento dinamico di MFC (noto anche come la versione di MFC condivisa). In genere vengono esportate da una normale DLL MFC usando l'interfaccia di C standard.

È necessario aggiungere il `AFX_MANAGE_STATE` macro all'inizio di tutte le funzioni esportate nelle DLL MFC regolari collegate in modo dinamico a MFC per impostare lo stato del modulo corrente a quello per la DLL. Questa operazione viene eseguita aggiungendo la riga di codice seguente all'inizio delle funzioni esportate dalla DLL:

```
AFX_MANAGE_STATE(AfxGetStaticModuleState( ))
```

Una normale DLL MFC, collegata in modo dinamico a MFC presenta le funzionalità seguenti:

- Si tratta di un nuovo tipo di DLL introdotte da Visual C++ 4.0.

- L'eseguibile del client possono essere scritti in qualsiasi linguaggio che supporta l'uso di DLL (C, C++, la convenzione Pascal, Visual Basic e così via); non dovrà essere un'applicazione MFC.

- A differenza delle DLL MFC regolari collegate in modo statico, questo tipo di DLL in modo dinamico è collegato a una DLL MFC (noto anche come DLL MFC condivisa).

- La libreria di importazione MFC collegata a questo tipo di DLL è uguale a quella usata per le DLL estensione MFC o applicazioni che utilizzano la DLL MFC: lib MFCxx (D).

Una normale DLL MFC, collegata in modo dinamico a MFC prevede i requisiti seguenti:

- Queste DLL sono compilate con **AFXDLL** definito, esattamente come un file eseguibile che viene collegato in modo dinamico alla DLL MFC. Ma **USRDLL** è definita come una DLL MFC regolare collegata in modo statico a MFC.

- È necessario creare un'istanza di questo tipo di DLL un `CWinApp`-classe derivata.

- Questo tipo di DLL utilizza il `DllMain` fornita da MFC. Inserire tutti i codice di inizializzazione di DLL specifiche nel `InitInstance` codice membro di funzione e la terminazione in `ExitInstance` come una normale applicazione MFC.

Poiché questo tipo di DLL Usa la versione di libreria a collegamento dinamico di MFC, è necessario impostare in modo esplicito lo stato del modulo corrente a quello per la DLL. A questo scopo, usare il [AFX_MANAGE_STATE](../mfc/reference/extension-dll-macros.md#afx_manage_state) macro all'inizio di tutte le funzioni esportate dalla DLL.

DLL MFC regolari devono avere un `CWinApp`-classe derivata e un singolo oggetto della classe di applicazioni, come le applicazioni MFC. Tuttavia, il `CWinApp` oggetto della DLL è privo di un message pump principale, come avviene il `CWinApp` oggetto di un'applicazione.

Si noti che il `CWinApp::Run` meccanismo non è applicabile a una DLL, poiché l'applicazione proprietaria principale message pump. Se la DLL consente di visualizzare le finestre di dialogo non modale o dispone di un proprio una finestra cornice principale, dell'applicazione principale message pump deve chiamare una routine esportata DLL che chiama `CWinApp::PreTranslateMessage`.

Inserire codice di inizializzazione di DLL specifiche tutte nel `CWinApp::InitInstance` funzione membro come una normale applicazione MFC. Il `CWinApp::ExitInstance` funzione membro delle `CWinApp` classe derivata viene chiamata fornita da MFC `DllMain` funzionare prima che la DLL viene scaricata.

È necessario distribuire le DLL condivise MFCx0.dll e Msvcr*0.dll (o file simili) con l'applicazione.

Una DLL collegata in modo dinamico a MFC non è possibile anche staticamente collegate a MFC. Collegamento di applicazioni per le DLL MFC regolari collegamento dinamico a MFC, esattamente come qualsiasi altra DLL.

I simboli vengono esportati in genere da una normale DLL MFC usando l'interfaccia di C standard. La dichiarazione di una funzione esportata da una DLL MFC regolare simile al seguente:

```
extern "C" __declspec(dllexport) MyExportedFunction( );
```

Tutte le allocazioni di memoria all'interno di una DLL MFC regolari devono rimanere all'interno della DLL; la DLL non deve passare al o ricevere dal file eseguibile chiama gli elementi seguenti:

- puntatori a oggetti MFC

- puntatori alla memoria allocata da MFC

Se è necessario eseguire alcuna operazione di quello precedente o se è necessario passare oggetti derivati da MFC tra il file eseguibile chiamante e la DLL, è necessario compilare una DLL di estensione MFC.

È possibile passare i puntatori alla memoria allocati mediante le librerie di runtime C tra un'applicazione e una DLL solo se si effettua una copia dei dati. Non è necessario eliminare o ridimensionare questi puntatori o usarli senza creare una copia della memoria.

Quando si genera una DLL MFC regolari che dinamicamente collegata a MFC, è necessario usare la macro [AFX_MANAGE_STATE](../mfc/reference/extension-dll-macros.md#afx_manage_state) per passare lo stato del modulo MFC in modo corretto. Questa operazione viene eseguita aggiungendo la riga di codice seguente all'inizio delle funzioni esportate dalla DLL:

```
AFX_MANAGE_STATE(AfxGetStaticModuleState( ))
```

Il **AFX_MANAGE_STATE** (macro) non deve essere utilizzata nelle DLL MFC regolari collegate a MFC in modo statico o nella DLL estensione MFC. Per altre informazioni, vedere [la gestione dei dati dello stato dei moduli MFC](../mfc/managing-the-state-data-of-mfc-modules.md).

Per un esempio di come scrivere, compilare e utilizzare una DLL regolare MFC, vedere l'esempio [DLLScreenCap](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/advanced/DllScreenCap). Per altre informazioni sulle DLL MFC regolari collegate a MFC in modo dinamico, vedere la sezione intitolata "Conversione DLLScreenCap a collegamento dinamico con la DLL MFC" in teoria dell'esempio.

## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.

- [Inizializzazione di DLL MFC regolari](../build/run-time-library-behavior.md#initializing-regular-dlls)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Stato dei moduli di una DLL MFC regolari collegate in modo dinamico a MFC](../build/module-states-of-a-regular-dll-dynamically-linked-to-mfc.md)

- [Gestione dei dati dello stato dei moduli MFC](../mfc/managing-the-state-data-of-mfc-modules.md)

- [Uso di DLL MFC di estensione per database, OLE e Sockets nelle DLL MFC regolari](../build/using-database-ole-and-sockets-extension-dlls-in-regular-dlls.md)

- [Utilizzo di MFC come parte di una DLL](../mfc/tn011-using-mfc-as-part-of-a-dll.md)

## <a name="see-also"></a>Vedere anche

[Tipi di DLL](../build/kinds-of-dlls.md)