---
title: "Aggiunta di più visualizzazioni a un singolo documento | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- multiple views [MFC], SDI applications
- documents [MFC], multiple views
- single document interface (SDI), adding views
- views [MFC], SDI applications
ms.assetid: 86d0c134-01d5-429c-b672-36cfb956dc01
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 865b30ac7b4c8910e92d14274f1224c25e7f74d8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="adding-multiple-views-to-a-single-document"></a>Aggiunta di più visualizzazioni a un singolo documento
In un'applicazione di interfaccia a documento singolo (SDI) creata con la libreria Microsoft Foundation classe (MFC), ogni tipo di documento è associato a un solo tipo di visualizzazione. In alcuni casi, è opportuno avere la possibilità di passare dalla visualizzazione corrente di un documento con una nuova vista.  
  
> [!TIP]
>  Per ulteriori procedure sull'implementazione di più visualizzazioni per un singolo documento, vedere [CDocument:: AddView](../mfc/reference/cdocument-class.md#addview) e [raccogliere](../visual-cpp-samples.md) esempio MFC.  
  
 È possibile implementare questa funzionalità aggiungendo un nuovo `CView`-classe derivata e codice aggiuntivo per alternare le visualizzazioni in modo dinamico a un'applicazione MFC esistente.  
  
 I passaggi sono come segue:  
  
-   [Modificare la classe di applicazione esistente](#vcconmodifyexistingapplicationa1)  
  
-   [Creare e modificare la nuova classe di visualizzazione](#vcconnewviewclassa2)  
  
-   [Creare e associare la nuova vista](#vcconattachnewviewa3)  
  
-   [Implementare la funzione di commutazione](#vcconswitchingfunctiona4)  
  
-   [Aggiungere il supporto per il passaggio alla visualizzazione](#vcconswitchingtheviewa5)  
  
 Il resto di questo argomento si presuppone quanto segue:  
  
-   Il nome del `CWinApp`-oggetto derivato `CMyWinApp`, e `CMyWinApp` viene dichiarato e definito in MYWINAPP. H e MYWINAPP. CPP.  
  
-   `CNewView`è il nome del nuovo `CView`-derivato, e `CNewView` viene dichiarato e definito in NEWVIEW. H e NEWVIEW. CPP.  
  
##  <a name="vcconmodifyexistingapplicationa1"></a>Modificare la classe di applicazione esistente  
 Per l'applicazione passare dalla visualizzazione, è necessario modificare la classe dell'applicazione mediante l'aggiunta di variabili membro per archiviare le visualizzazioni e un metodo per modificarli.  
  
 Aggiungere il codice seguente alla dichiarazione di `CMyWinApp` in MYWINAPP. H:  
  
 [!code-cpp[NVC_MFCDocViewSDI#1](../mfc/codesnippet/cpp/adding-multiple-views-to-a-single-document_1.h)]  
  
 Nuove variabili membro, `m_pOldView` e `m_pNewView`, scegliere la visualizzazione corrente e quello appena creato. Il nuovo metodo (`SwitchView`) attiva le viste quando richiesto dall'utente. Il corpo del metodo è illustrato più avanti in questo argomento in [implementare la funzione di commutazione](#vcconswitchingfunctiona4).  
  
 Ultima modifica alla classe dell'applicazione richiede l'inclusione di un nuovo file di intestazione che definisce un messaggio di Windows (**WM_INITIALUPDATE**) che viene utilizzata nella funzione di alternanza.  
  
 Inserire la riga seguente nella sezione include di MYWINAPP. CPP:  
  
 [!code-cpp[NVC_MFCDocViewSDI#2](../mfc/codesnippet/cpp/adding-multiple-views-to-a-single-document_2.cpp)]  
  
 Salvare le modifiche e continuare al passaggio successivo.  
  
##  <a name="vcconnewviewclassa2"></a>Creare e modificare la nuova classe di visualizzazione  
 Creazione della nuova classe di visualizzazione è semplice tramite il **nuova classe** comando disponibile in visualizzazione classi. L'unico requisito per questa classe è che deriva da `CView`. Aggiungere la nuova classe all'applicazione. Per informazioni specifiche sull'aggiunta di una nuova classe al progetto, vedere [aggiunta di una classe](../ide/adding-a-class-visual-cpp.md).  
  
 Dopo aver aggiunto la classe al progetto, è necessario modificare l'accessibilità di alcuni membri di classe di visualizzazione.  
  
 Modificare NEWVIEW. H modificando l'identificatore di accesso da `protected` a **pubblica** per il costruttore e distruttore. In questo modo la classe per essere creata ed eliminata in modo dinamico e modificare l'aspetto della visualizzazione prima che sia visibile.  
  
 Salvare le modifiche e continuare al passaggio successivo.  
  
##  <a name="vcconattachnewviewa3"></a>Creare e associare la nuova vista  
 Per creare e collegare la nuova vista, è necessario modificare il `InitInstance` funzione della classe dell'applicazione. La modifica aggiunge di nuovo codice che crea un nuovo oggetto di visualizzazione e quindi inizializza entrambe `m_pOldView` e `m_pNewView` con i due oggetti di visualizzazione esistente.  
  
 Poiché la nuova vista viene creata all'interno di `InitInstance` (funzione), le viste nuove ed esistenti vengono mantenute per tutta la durata dell'applicazione. Tuttavia, l'applicazione può creare facilmente la nuova vista in modo dinamico.  
  
 Inserire il codice dopo la chiamata a `ProcessShellCommand`:  
  
 [!code-cpp[NVC_MFCDocViewSDI#3](../mfc/codesnippet/cpp/adding-multiple-views-to-a-single-document_3.cpp)]  
  
 Salvare le modifiche e continuare al passaggio successivo.  
  
##  <a name="vcconswitchingfunctiona4"></a>Implementare la funzione di commutazione  
 Nel passaggio precedente, è stato aggiunto codice creato e inizializzato un nuovo oggetto view. L'ultima operazione importante consiste nell'implementare il metodo di commutazione, `SwitchView`.  
  
 Alla fine del file di implementazione per la classe dell'applicazione (MYWINAPP. CPP), aggiungere la definizione di metodo seguenti:  
  
 [!code-cpp[NVC_MFCDocViewSDI#4](../mfc/codesnippet/cpp/adding-multiple-views-to-a-single-document_4.cpp)]  
  
 Salvare le modifiche e continuare al passaggio successivo.  
  
##  <a name="vcconswitchingtheviewa5"></a>Aggiungere il supporto per il passaggio alla visualizzazione  
 Il passaggio finale prevede l'aggiunta di codice che chiama il `SwitchView` metodo quando l'applicazione deve passare tra le visualizzazioni. Questa operazione può essere eseguita in diversi modi: mediante l'aggiunta di una nuova voce di menu per l'utente di scegliere o cambio internamente le viste quando vengono soddisfatte determinate condizioni.  
  
 Per ulteriori informazioni sull'aggiunta di nuove voci di menu e di funzioni, vedere [gestori per comandi e notifiche dei controlli](../mfc/handlers-for-commands-and-control-notifications.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Architettura documento/visualizzazione](../mfc/document-view-architecture.md)

