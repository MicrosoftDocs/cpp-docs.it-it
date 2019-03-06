---
title: DLL MFC regolari collegate in modo statico a MFC
ms.date: 11/04/2016
helpviewer_keywords:
- regular MFC DLLs [C++]
- DLLs [C++], regular
- USRDLLs
- USRDLLs, statically linked to MFC
- statically linked DLLs [C++]
- regular MFC DLLs [C++], statically linked to MFC
ms.assetid: 2eed531c-726a-4b8a-b936-f721dc00a7fa
ms.openlocfilehash: 074cd6c9fca08261cf2333a968dce3cc83c0c860
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57415984"
---
# <a name="regular-mfc-dlls-statically-linked-to-mfc"></a>DLL MFC regolari collegate in modo statico a MFC

Una normale che DLL MFC staticamente collegate a MFC è una DLL che utilizza internamente MFC e le funzioni esportate della DLL possono essere chiamate dagli eseguibili MFC e non MFC. Come descritto, il nome di questo tipo di DLL viene compilato utilizzando la versione della libreria di collegamento statico di MFC. In genere vengono esportate da una normale DLL MFC usando l'interfaccia di C standard. Per un esempio di come scrivere, compilare e utilizzare una DLL regolare MFC, vedere l'esempio [DLLScreenCap](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/advanced/DllScreenCap).

Si noti che il termine USRDLL non sono non è più utilizzato nella documentazione di Visual C++. Una DLL MFC regolare collegata in modo statico a MFC ha le stesse caratteristiche di USRDLL.

Una DLL regolare MFC, staticamente collegate a MFC, presenta le funzionalità seguenti:

- L'eseguibile del client possono essere scritti in qualsiasi linguaggio che supporta l'uso di DLL (C, C++, la convenzione Pascal, Visual Basic e così via); non dovrà essere un'applicazione MFC.

- La DLL è possibile collegare a librerie a collegamento statico MFC stesse usate dalle applicazioni. Non è più una versione delle librerie a collegamento statico per le DLL separata.

- Prima della versione 4.0 di MFC, denominate USRDLL fornito lo stesso tipo di funzionalità come DLL MFC regolari collegate in modo statico a MFC. A partire da Visual C++ versione 4.0, il termine USRDLL è obsoleta.

Una DLL regolare MFC, staticamente collegate a MFC, presenta i requisiti seguenti:

- Questo tipo di DLL deve creare un'istanza di una classe derivata da `CWinApp`.

- Questo tipo di DLL utilizza il `DllMain` fornita da MFC. Inserire tutti i codice di inizializzazione di DLL specifiche nel `InitInstance` codice membro di funzione e la terminazione in `ExitInstance` come una normale applicazione MFC.

- Anche se il termine USRDLL è obsoleto, è comunque necessario definire "**USRDLL**" nella riga di comando del compilatore. Questa definizione determina quali dichiarazioni vengano recuperate dai file di intestazione MFC.

DLL MFC regolari devono avere un `CWinApp`-classe derivata e un singolo oggetto della classe di applicazioni, come le applicazioni MFC. Tuttavia, il `CWinApp` oggetto della DLL è privo di un message pump principale, come avviene il `CWinApp` oggetto di un'applicazione.

Si noti che il `CWinApp::Run` meccanismo non è applicabile a una DLL, poiché l'applicazione proprietaria principale message pump. Se la DLL consente di aprire le finestre di dialogo non modale o dispone di un proprio una finestra cornice principale, dell'applicazione principale message pump deve chiamare una routine esportata dalla DLL che a sua volta chiama il `CWinApp::PreTranslateMessage` funzione membro dell'oggetto di applicazione della DLL.

Per un esempio di questa funzione, vedere l'esempio DLLScreenCap.

I simboli vengono esportati in genere da una normale DLL MFC usando l'interfaccia di C standard. La dichiarazione di una funzione esportata da una DLL MFC regolari sarebbe simile al seguente:

```
extern "C" __declspec(dllexport) MyExportedFunction( );
```

Tutte le allocazioni di memoria all'interno di una DLL MFC regolari devono rimanere all'interno della DLL; la DLL non deve passare al o ricevere dal file eseguibile chiama gli elementi seguenti:

- puntatori a oggetti MFC

- puntatori alla memoria allocata da MFC

Se è necessario effettuare una delle precedenti o passare oggetti derivati da MFC tra il file eseguibile chiamante e la DLL, è necessario compilare una DLL di estensione MFC.

È possibile passare i puntatori alla memoria allocati mediante le librerie di runtime C tra un'applicazione e una DLL solo se si effettua una copia dei dati. Non è necessario eliminare o ridimensionare questi puntatori o usarli senza creare una copia della memoria.

Una DLL collegata in modo statico a MFC non è possibile collegare anche in modo dinamico alle DLL MFC condivisa. Una DLL collegata in modo statico a MFC in modo dinamico è associata a un'applicazione esattamente come qualsiasi altra DLL. le applicazioni collegano esattamente come qualsiasi altra DLL.

Le librerie a collegamento statico MFC standard sono denominate secondo la convenzione descritto nella [convenzioni di denominazione per le DLL MFC](../mfc/mfc-library-versions.md#mfc-static-library-naming-conventions). Tuttavia, con MFC versione 3.0 e versioni successive, non è più necessario specificare manualmente il linker la versione della libreria MFC che si desidera essere collegati. Al contrario, i file di intestazione MFC determinano automaticamente definisce la versione corretta della libreria MFC per collegare in base alle definizioni del preprocessore, ad esempio  **\_DEBUG** oppure **Unicode**. File di intestazione MFC aggiungono direttive /DEFAULTLIB nel linker per collegare in una versione specifica della libreria MFC.

## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.

- [Inizializzazione di DLL MFC regolari](../build/run-time-library-behavior.md#initializing-regular-dlls)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Utilizzo di MFC come parte di una DLL](../mfc/tn011-using-mfc-as-part-of-a-dll.md)

- [Uso di DLL MFC di estensione per database, OLE e Sockets nelle DLL MFC regolari](../build/using-database-ole-and-sockets-extension-dlls-in-regular-dlls.md)

- [Creazione di una DLL MFC](../mfc/reference/mfc-dll-wizard.md)

- [DLL MFC regolari collegate a MFC in modo dinamico](../build/regular-dlls-dynamically-linked-to-mfc.md)

- [MFC (DLL di estensione)](../build/extension-dlls-overview.md)

## <a name="see-also"></a>Vedere anche

[Tipi di DLL](../build/kinds-of-dlls.md)
