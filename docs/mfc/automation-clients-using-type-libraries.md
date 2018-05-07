---
title: 'Client di automazione: Utilizzo delle librerie dei tipi | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- MkTypLib
dev_langs:
- C++
helpviewer_keywords:
- clients, Automation
- dispatch class [MFC]
- Automation clients, type libraries
- type libraries, Automation clients
- ODL (Object Description Language)
- ODL files
- classes [MFC], dispatch
- MkTypLib tool
- .odl files
ms.assetid: d405bc47-118d-4786-b371-920d035b2047
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 67fa0f5d164ae325caff576fb41695fc8689fda0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="automation-clients-using-type-libraries"></a>Client di automazione: utilizzo delle librerie dei tipi
I client di automazione devono disporre di informazioni sulle proprietà e metodi degli oggetti del server se i client sono di gestire gli oggetti dei server. Le proprietà dispongono di tipi di dati. metodi spesso restituiscono valori e accettano parametri. Il client richiede informazioni sui tipi di dati di tutti questi per associare in modo statico per il tipo di oggetto server.  
  
 Questo tipo di informazioni può essere resa nota in diversi modi. Il metodo consigliato consiste nel creare una libreria dei tipi.  
  
 Per informazioni su [MkTypLib](http://msdn.microsoft.com/library/windows/desktop/aa366797), vedi il Windows SDK.  
  
 Visual C++ può leggere un file di libreria dei tipi e creare una classe di invio derivata da [COleDispatchDriver](../mfc/reference/coledispatchdriver-class.md). Un oggetto di tale classe include proprietà e le operazioni di duplicazione di quelle dell'oggetto server. L'applicazione chiama operazioni e le proprietà di questo oggetto e funzionalità ereditate da `COleDispatchDriver` instrada queste chiamate al sistema OLE, che a sua volta li invia all'oggetto server.  
  
 Se si è scelto di includere l'automazione quando è stato creato il progetto, Visual C++ gestisce automaticamente questo file della libreria dei tipi per l'utente. Come parte della compilazione, verrà generato il file con estensione tlb con MkTypLib.  
  
### <a name="to-create-a-dispatch-class-from-a-type-library-tlb-file"></a>Per creare una classe di invio da un file di libreria dei tipi (tlb)  
  
1.  In visualizzazione classi o Esplora soluzioni, fare clic sul progetto e fare clic su **Aggiungi** e quindi fare clic su **Aggiungi classe** nel menu di scelta rapida.  
  
2.  Nel **Aggiungi classe** la finestra di dialogo, seleziona il **Visual c++ c++ MFC** cartella nel riquadro a sinistra. Selezionare il **MFC classe da libreria dei tipi** icona dal riquadro destro, quindi fare clic su **aprire**.  
  
3.  Nel **Aggiunta guidata classe da libreria dei tipi** finestra di dialogo, selezionare una libreria dei tipi dal **librerie dei tipi disponibili** elenco a discesa. Il **interfacce** le interfacce disponibili per la libreria selezionata viene visualizzata.  
  
    > [!NOTE]
    >  È possibile selezionare le interfacce da più di una libreria dei tipi.  
  
     Per selezionare le interfacce, fare doppio clic o fare clic su di **Aggiungi** pulsante. Quando si esegue questa operazione, i nomi per le classi di recapito verranno visualizzati nel **classi generate** casella. È possibile modificare i nomi delle classi nel `Class` casella.  
  
     Il **File** casella viene visualizzato il file in cui viene dichiarata la classe. (è possibile modificare anche il nome del file). È inoltre possibile utilizzare il pulsante Sfoglia per selezionare altri file, se si preferisce che le informazioni di intestazione e di implementazione scritte in un file esistente o in una directory diversa dalla directory del progetto.  
  
    > [!NOTE]
    >  Tutte le classi di recapito per le interfacce selezionate verranno inserite nel file specificato qui. Se si desidera essere dichiarato in intestazioni separate le interfacce, è necessario eseguire questa procedura guidata per ogni file di intestazione da creare.  
  
    > [!NOTE]
    >  Alcune informazioni sul tipo di libreria possono essere archiviati in file con. DLL. OCX, o. Estensioni di file OLB.  
  
4.  Scegliere **Fine**.  
  
     La procedura guidata verrà quindi scrivere il codice delle classi di invio utilizzando i nomi di file e la classe specificata.  
  
## <a name="see-also"></a>Vedere anche  
 [Automation Clients](../mfc/automation-clients.md)

