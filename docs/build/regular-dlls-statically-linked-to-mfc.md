---
title: DLL MFC regolari collegate a MFC in modo statico
ms.date: 11/04/2016
helpviewer_keywords:
- regular MFC DLLs [C++]
- DLLs [C++], regular
- USRDLLs
- USRDLLs, statically linked to MFC
- statically linked DLLs [C++]
- regular MFC DLLs [C++], statically linked to MFC
ms.assetid: 2eed531c-726a-4b8a-b936-f721dc00a7fa
ms.openlocfilehash: 1f05b5e3c268935cf3161fb7184e04b3e3ea1446
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62314780"
---
# <a name="regular-mfc-dlls-statically-linked-to-mfc"></a>DLL MFC regolari collegate a MFC in modo statico

Una DLL MFC normale collegata a MFC in modo statico è una DLL che Usa MFC internamente e le funzioni esportate nella DLL possono essere chiamate da file eseguibili MFC o non MFC. Come descritto nel nome, questo tipo di DLL viene compilato utilizzando la versione della libreria a collegamento statico di MFC. Le funzioni vengono in genere esportate da una normale DLL MFC usando l'interfaccia C standard. Per un esempio di come scrivere, compilare e usare una normale DLL MFC, vedere l'esempio [DLLScreenCap](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/advanced/DllScreenCap).

Si noti che il termine USRDLL non viene più usato nella documentazione di Visual C++. Una normale DLL MFC collegata in modo statico a MFC presenta le stesse caratteristiche del primo USRDLL.

Una normale DLL MFC, collegata in modo statico a MFC, presenta le funzionalità seguenti:

- Il file eseguibile del client può essere scritto in qualsiasi linguaggio che supporti l'uso di dll (C, C++, Pascal, Visual Basic e così via); non è necessario che sia un'applicazione MFC.

- La DLL può essere collegata alle stesse librerie di collegamento statico MFC utilizzate dalle applicazioni. Non è più disponibile una versione separata delle librerie di collegamento statico per le dll.

- Prima della versione 4,0 di MFC, USRDLLs forniva lo stesso tipo di funzionalità delle normali DLL MFC collegate in modo statico a MFC. A partire da Visual C++ versione 4,0, il termine USRDLL è obsoleto.

Una normale DLL MFC, collegata in modo statico a MFC, presenta i requisiti seguenti:

- Questo tipo di DLL deve creare un'istanza di una classe `CWinApp`derivata da.

- Questo tipo di DLL usa la `DllMain` fornita da MFC. Inserire tutto il codice di inizializzazione specifico della `InitInstance` dll nella funzione membro e il codice `ExitInstance` di terminazione in come in una normale applicazione MFC.

- Anche se il termine USRDLL è obsoleto, è comunque necessario definire "**_USRDLL**" nella riga di comando del compilatore. Questa definizione determina quali dichiarazioni vengono estratte dai file di intestazione MFC.

le normali DLL MFC devono avere `CWinApp`una classe derivata da e un singolo oggetto della classe dell'applicazione, così come un'applicazione MFC. Tuttavia, l' `CWinApp` oggetto della dll non dispone di un message pump principale, così come l' `CWinApp` oggetto di un'applicazione.

Si noti che `CWinApp::Run` il meccanismo non è applicabile a una dll, perché l'applicazione è proprietaria del pump principale del messaggio. Se la DLL apre finestre di dialogo non modali o ha una finestra cornice principale, il pump del messaggio principale dell'applicazione deve chiamare una routine esportata dalla DLL che a sua volta chiama `CWinApp::PreTranslateMessage` la funzione membro dell'oggetto applicazione della dll.

Per un esempio di questa funzione, vedere l'esempio DLLScreenCap.

I simboli vengono in genere esportati da una normale DLL MFC usando l'interfaccia C standard. La dichiarazione di una funzione esportata da una DLL MFC normale avrà un aspetto simile al seguente:

```
extern "C" __declspec(dllexport) MyExportedFunction( );
```

Tutte le allocazioni di memoria all'interno di una DLL MFC normale devono rimanere all'interno della DLL. la DLL non deve passare o ricevere dall'eseguibile chiamante uno dei seguenti:

- Puntatori a oggetti MFC

- Puntatori alla memoria allocata da MFC

Se è necessario eseguire una delle operazioni precedenti o se è necessario passare oggetti derivati da MFC tra l'eseguibile chiamante e la DLL, è necessario compilare una DLL di estensione MFC.

È possibile passare i puntatori alla memoria allocata dalle librerie di runtime C tra un'applicazione e una DLL solo se si esegue una copia dei dati. Non è necessario eliminare o ridimensionare questi puntatori o utilizzarli senza eseguire una copia della memoria.

Una DLL collegata in modo statico a MFC non può inoltre collegarsi in modo dinamico alle DLL MFC condivise. Una DLL collegata in modo statico a MFC viene associata dinamicamente a un'applicazione come qualsiasi altra DLL. le applicazioni vi si collegano esattamente come qualsiasi altra DLL.

Le librerie di collegamento statico MFC standard vengono denominate in base alla convenzione descritta in [convenzioni di denominazione per le DLL MFC](../mfc/mfc-library-versions.md#mfc-static-library-naming-conventions). Tuttavia, con MFC versione 3,0 e successive, non è più necessario specificare manualmente al linker la versione della libreria MFC che si desidera collegare. Al contrario, i file di intestazione MFC determinano automaticamente la versione corretta della libreria MFC da collegare in base alle definizioni del preprocessore, ad esempio ** \_debug** o **_UNICODE**. I file di intestazione MFC aggiungono direttive/DEFAULTLIB che indicano al linker di collegarsi a una versione specifica della libreria MFC.

## <a name="what-do-you-want-to-do"></a>Per saperne di più

- [Inizializzazione di DLL MFC regolari](run-time-library-behavior.md#initializing-regular-dlls)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Utilizzo di MFC come parte di una DLL](../mfc/tn011-using-mfc-as-part-of-a-dll.md)

- [Utilizzo di dll di estensione MFC per database, OLE e Sockets nelle normali DLL MFC](using-database-ole-and-sockets-extension-dlls-in-regular-dlls.md)

- [Creazione di una DLL MFC](../mfc/reference/mfc-dll-wizard.md)

- [DLL MFC regolari collegate a MFC in modo dinamico](regular-dlls-dynamically-linked-to-mfc.md)

- [MFC (DLL di estensione)](extension-dlls-overview.md)

## <a name="see-also"></a>Vedere anche

[Tipi di DLL](kinds-of-dlls.md)
