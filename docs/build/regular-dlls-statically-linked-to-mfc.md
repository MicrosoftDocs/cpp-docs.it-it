---
title: DLL regolari collegate in modo statico a MFC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- regular MFC DLLs [C++]
- DLLs [C++], regular
- USRDLLs
- USRDLLs, statically linked to MFC
- statically linked DLLs [C++]
- regular MFC DLLs [C++], statically linked to MFC
ms.assetid: 2eed531c-726a-4b8a-b936-f721dc00a7fa
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0fd5eee67b48fd4895cc73adfb72d34f0bd24d2c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="regular-mfc-dlls-statically-linked-to-mfc"></a>DLL regolari collegate in modo statico a MFC
Una normale che DLL MFC collegato in modo statico a MFC è una DLL che utilizza MFC internamente e le funzioni esportate nella DLL possono essere chiamate da file eseguibili MFC o non MFC. Come viene descritto il nome, questo tipo di DLL viene creato utilizzando la versione della libreria di collegamento statico di MFC. In genere vengono esportate da una DLL MFC mediante l'interfaccia standard di C normale. Per un esempio di come scrivere, compilare e utilizzare una DLL regolare MFC, vedere l'esempio [DLLScreenCap](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/advanced/DllScreenCap).  
  
 Si noti che il termine USRDLL non sono più utilizzato nella documentazione di Visual C++. Una DLL MFC regolare collegata in modo statico a MFC ha le stesse caratteristiche di USRDLL.  
  
 Una DLL regolare MFC, collegamento statico a MFC, con le funzionalità seguenti:  
  
-   L'eseguibile del client può essere scritto in qualsiasi linguaggio che supporta l'utilizzo di DLL (C, C++, Pascal, Visual Basic e così via); non deve essere un'applicazione MFC.  
  
-   La DLL è possibile collegare a librerie a collegamento statico MFC stesso utilizzate dalle applicazioni. Non è più una versione delle librerie a collegamento statico per una DLL separata.  
  
-   Prima versione 4.0 di MFC, USRDLL fornito lo stesso tipo di funzionalità come normali DLL di MFC, collegamento statico a MFC. A partire da Visual C++ versione 4.0, il termine USRDLL è obsoleta.  
  
 Una DLL regolare MFC, collegamento statico a MFC, presenta i requisiti seguenti:  
  
-   Questo tipo di DLL deve creare un'istanza di una classe derivata da `CWinApp`.  
  
-   Questo tipo di DLL utilizza il `DllMain` fornita da MFC. Inserire codice di inizializzazione di DLL specifiche tutti nel `InitInstance` codice membro di funzione e di chiusura in `ExitInstance` come una normale applicazione MFC.  
  
-   Anche se il termine USRDLL è obsoleto, è ancora necessario definire "**USRDLL**" nella riga di comando del compilatore. Questa definizione determina quali dichiarazioni vengano recuperate dai file di intestazione MFC.  
  
 le DLL regolare MFC devono avere un `CWinApp`-classe derivata e un singolo oggetto della classe di applicazione, come le applicazioni MFC. Tuttavia, il `CWinApp` oggetto della DLL non esiste un message pump principale, come avviene il `CWinApp` oggetto di un'applicazione.  
  
 Si noti che il `CWinApp::Run` meccanismo non viene applicata a una DLL, perché l'applicazione possiede il message pump principale. Se la DLL apre finestre di dialogo non modali o dispone di un proprio una finestra cornice principale, message pump principale dell'applicazione deve chiamare una routine esportata dalla DLL che a sua volta chiama il `CWinApp::PreTranslateMessage` funzione membro dell'oggetto di applicazione della DLL.  
  
 Per un esempio di questa funzione, vedere l'esempio DLLScreenCap.  
  
 I simboli sono generalmente esportati da una DLL MFC mediante l'interfaccia standard di C normale. La dichiarazione di una funzione esportata dalla DLL regolare MFC avrà un aspetto simile al seguente:  
  
```  
extern "C" __declspec(dllexport) MyExportedFunction( );  
```  
  
 Tutte le allocazioni di memoria all'interno di una DLL MFC regolare devono rimanere all'interno della DLL; la DLL non deve passare a o ricevere dal file eseguibile chiamante uno dei seguenti:  
  
-   puntatori a oggetti MFC  
  
-   puntatori alla memoria allocata da MFC  
  
 Se è necessario effettuare una delle precedenti o passare oggetti derivati da MFC tra l'eseguibile chiamante e il file DLL, è necessario compilare una DLL di estensione MFC.  
  
 È possibile passare puntatori alla memoria allocati per le librerie di runtime C tra un'applicazione e una DLL solo se si effettua una copia dei dati. Non è necessario eliminare o ridimensionare questi puntatori o utilizzarli senza creare una copia della memoria.  
  
 Una DLL collegata in modo statico a MFC non è possibile collegare anche in modo dinamico alle DLL MFC condivisa. Una DLL collegata in modo statico a MFC in modo dinamico è associata a un'applicazione, esattamente come qualsiasi altra DLL. applicazioni collegano ad esso, esattamente come qualsiasi altra DLL.  
  
 Le librerie a collegamento statico MFC standard vengono denominate in base alla convenzione descritta [convenzioni di denominazione per le DLL MFC](../build/naming-conventions-for-mfc-dlls.md). Tuttavia, con MFC versione 3.0 e versioni successive, non è più necessario specificare manualmente il linker la versione della libreria MFC da collegare. Al contrario, i file di intestazione MFC determinano automaticamente definisce la versione corretta della libreria MFC da collegare in base alle definizioni del preprocessore, ad esempio  **\_DEBUG** o **Unicode**. File di intestazione MFC aggiungono direttive /DEFAULTLIB in al linker di collegare una versione specifica della libreria MFC.  
  
## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.  
  
-   [Inizializzare le DLL regolari MFC](../build/run-time-library-behavior.md#initializing-regular-dlls)  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Utilizzo di MFC come parte di una DLL](../mfc/tn011-using-mfc-as-part-of-a-dll.md)  
  
-   [Uso di DLL MFC di estensione per database, OLE e Sockets nelle DLL MFC regolari](../build/using-database-ole-and-sockets-extension-dlls-in-regular-dlls.md)  
  
-   [Creazione di una DLL MFC](../mfc/reference/mfc-dll-wizard.md)  
  
-   [DLL MFC regolari collegate a MFC in modo dinamico](../build/regular-dlls-dynamically-linked-to-mfc.md)  
  
-   [MFC (DLL di estensione)](../build/extension-dlls-overview.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi di DLL](../build/kinds-of-dlls.md)