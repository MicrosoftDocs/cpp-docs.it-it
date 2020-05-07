---
title: DLL MFC regolari collegate a MFC in modo dinamico
ms.date: 11/04/2016
helpviewer_keywords:
- regular MFC DLLs [C++], dynamically linked to MFC
- AFX_MANAGE_STATE macro
- DLLs [C++], regular
- shared DLL versions [C++]
- dynamically linked DLLs [C++]
ms.assetid: b4f7ab92-8723-42a5-890e-214f4e29dcd0
ms.openlocfilehash: 3bfed5f75dab4c501708950fdb99f53c40ec142c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62315001"
---
# <a name="regular-mfc-dlls-dynamically-linked-to-mfc"></a>DLL MFC regolari collegate a MFC in modo dinamico

Una normale DLL MFC collegata a MFC in modo dinamico è una DLL che Usa MFC internamente e le funzioni esportate nella DLL possono essere chiamate da file eseguibili MFC o non MFC. Come descritto nel nome, questo tipo di DLL viene compilato utilizzando la versione della libreria a collegamento dinamico di MFC, nota anche come versione condivisa di MFC. Le funzioni vengono in genere esportate da una normale DLL MFC usando l'interfaccia C standard.

È necessario aggiungere la `AFX_MANAGE_STATE` macro all'inizio di tutte le funzioni esportate in DLL MFC regolari che si collegano dinamicamente a MFC per impostare lo stato del modulo corrente su quello per la dll. Questa operazione viene eseguita aggiungendo la seguente riga di codice all'inizio delle funzioni esportate dalla DLL:

```
AFX_MANAGE_STATE(AfxGetStaticModuleState( ))
```

Una normale DLL MFC, collegata dinamicamente a MFC, presenta le funzionalità seguenti:

- Si tratta di un nuovo tipo di DLL introdotto da Visual C++ 4,0.

- Il file eseguibile del client può essere scritto in qualsiasi linguaggio che supporti l'uso di dll (C, C++, Pascal, Visual Basic e così via); non è necessario che sia un'applicazione MFC.

- A differenza della DLL MFC regolare collegata in modo statico, questo tipo di DLL viene collegato dinamicamente alla DLL MFC, nota anche come DLL MFC condivisa.

- La libreria di importazione MFC collegata a questo tipo di DLL è la stessa usata per le DLL di estensione MFC o per le applicazioni che usano la DLL MFC: MFCxx (D). lib.

Una normale DLL MFC collegata a MFC in modo dinamico presenta i requisiti seguenti:

- Queste dll vengono compilate con **_AFXDLL** definito, proprio come un file eseguibile collegato in modo dinamico alla DLL MFC. Viene tuttavia definito anche **_USRDLL** , analogamente a una normale DLL MFC collegata in modo statico a MFC.

- Questo tipo di DLL deve creare un'istanza `CWinApp`di una classe derivata da.

- Questo tipo di DLL usa la `DllMain` fornita da MFC. Inserire tutto il codice di inizializzazione specifico della `InitInstance` dll nella funzione membro e il codice `ExitInstance` di terminazione in come in una normale applicazione MFC.

Poiché questo tipo di DLL utilizza la versione della libreria a collegamento dinamico di MFC, è necessario impostare in modo esplicito lo stato del modulo corrente su quello per la DLL. A tale scopo, usare la macro [AFX_MANAGE_STATE](../mfc/reference/extension-dll-macros.md#afx_manage_state) all'inizio di ogni funzione esportata dalla dll.

le normali DLL MFC devono avere `CWinApp`una classe derivata da e un singolo oggetto della classe dell'applicazione, così come un'applicazione MFC. Tuttavia, l' `CWinApp` oggetto della dll non dispone di un message pump principale, così come l' `CWinApp` oggetto di un'applicazione.

Si noti che `CWinApp::Run` il meccanismo non è applicabile a una dll, perché l'applicazione è proprietaria del pump principale del messaggio. Se la DLL Visualizza finestre di dialogo non modali o ha una finestra cornice principale, il pump del messaggio principale dell'applicazione deve chiamare una routine esportata da DLL che chiama `CWinApp::PreTranslateMessage`.

Inserire tutte le inizializzazioni specifiche della DLL `CWinApp::InitInstance` nella funzione membro come in una normale applicazione MFC. La `CWinApp::ExitInstance` funzione membro della classe `CWinApp` derivata viene chiamata dalla funzione MFC fornita `DllMain` prima che la dll venga scaricata.

È necessario distribuire le DLL condivise MFCx0. dll e Msvcr * 0. dll (o file simili) con l'applicazione.

Una DLL collegata in modo dinamico a MFC non può inoltre collegarsi in modo statico a MFC. Le applicazioni si collegano a DLL MFC regolari collegate a MFC in modo dinamico, esattamente come qualsiasi altra DLL.

I simboli vengono in genere esportati da una normale DLL MFC usando l'interfaccia C standard. La dichiarazione di una funzione esportata da una DLL MFC normale ha un aspetto simile al seguente:

```
extern "C" __declspec(dllexport) MyExportedFunction( );
```

Tutte le allocazioni di memoria all'interno di una DLL MFC normale devono rimanere all'interno della DLL. la DLL non deve passare o ricevere dall'eseguibile chiamante uno dei seguenti:

- puntatori a oggetti MFC

- puntatori alla memoria allocata da MFC

Se è necessario eseguire una delle operazioni descritte in precedenza o se è necessario passare oggetti derivati da MFC tra l'eseguibile chiamante e la DLL, è necessario compilare una DLL di estensione MFC.

È possibile passare i puntatori alla memoria allocata dalle librerie di runtime C tra un'applicazione e una DLL solo se si esegue una copia dei dati. Non è necessario eliminare o ridimensionare questi puntatori o utilizzarli senza eseguire una copia della memoria.

Quando si compila una DLL MFC normale che si collega dinamicamente a MFC, è necessario usare la macro [AFX_MANAGE_STATE](../mfc/reference/extension-dll-macros.md#afx_manage_state) per cambiare correttamente lo stato del modulo MFC. Questa operazione viene eseguita aggiungendo la seguente riga di codice all'inizio delle funzioni esportate dalla DLL:

```
AFX_MANAGE_STATE(AfxGetStaticModuleState( ))
```

La macro **AFX_MANAGE_STATE** non deve essere utilizzata in DLL MFC normali che si collegano in modo statico a MFC o in dll di estensione MFC. Per ulteriori informazioni, vedere [gestione dei dati sullo stato dei moduli MFC](../mfc/managing-the-state-data-of-mfc-modules.md).

Per un esempio di come scrivere, compilare e usare una normale DLL MFC, vedere l'esempio [DLLScreenCap](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/advanced/DllScreenCap). Per ulteriori informazioni sulle DLL MFC regolari che si collegano dinamicamente a MFC, vedere la sezione intitolata "conversione di DLLScreenCap in collegamento dinamico con la DLL MFC" nell'abstract per l'esempio.

## <a name="what-do-you-want-to-do"></a>Per saperne di più

- [Inizializzazione di DLL MFC regolari](run-time-library-behavior.md#initializing-regular-dlls)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Stato del modulo di una DLL MFC normale collegata a MFC in modo dinamico](module-states-of-a-regular-dll-dynamically-linked-to-mfc.md)

- [Gestione dei dati sullo stato dei moduli MFC](../mfc/managing-the-state-data-of-mfc-modules.md)

- [Utilizzo di dll di estensione MFC per database, OLE e Sockets nelle normali DLL MFC](using-database-ole-and-sockets-extension-dlls-in-regular-dlls.md)

- [Utilizzo di MFC come parte di una DLL](../mfc/tn011-using-mfc-as-part-of-a-dll.md)

## <a name="see-also"></a>Vedere anche

[Tipi di DLL](kinds-of-dlls.md)
