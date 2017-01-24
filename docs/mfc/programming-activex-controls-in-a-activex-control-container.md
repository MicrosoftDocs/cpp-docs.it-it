---
title: "Contenitori di controlli ActiveX: programmazione di controlli ActiveX in un contenitore di controlli ActiveX | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "contenitori dei controlli ActiveX [C++], accesso a controlli ActiveX"
  - "contenitori dei controlli ActiveX [C++], classi wrapper"
  - "ActiveX (controlli) [C++], accesso"
  - "ActiveX (controlli) [C++], classi wrapper"
  - "Conferma classi (finestra di dialogo)"
  - "file di intestazione [C++], per classe wrapper di controlli ActiveX"
  - "controlli ActiveX MFC [C++], accesso ai contenitori"
  - "classi wrapper [C++], controlli ActiveX"
  - "classi wrapper [C++], utilizzo"
ms.assetid: ef9b2480-92d6-4191-b16e-8055c4fd7b73
caps.latest.revision: 8
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Contenitori di controlli ActiveX: programmazione di controlli ActiveX in un contenitore di controlli ActiveX
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene descritto il processo per accedere a [metodi](../mfc/mfc-activex-controls-methods.md) ed esporre [proprietà](../mfc/mfc-activex-controls-properties.md) dei controlli ActiveX incorporati.  Fondamentalmente, verranno effettuate le seguenti operazioni:  
  
1.  [Inserire un controllo ActiveX nel progetto contenitore ActiveX](../mfc/inserting-a-control-into-a-control-container-application.md) utilizzando la raccolta.  
  
2.  [Definire una variabile membro](../mfc/activex-control-containers-connecting-an-activex-control-to-a-member-variable.md) \(o un altro form di accesso\) dello stesso tipo della classe wrapper ActiveX control.  
  
3.  [Pianificare il controllo ActiveX](#_core_programming_the_activex_control) mediante le funzioni membro predefinite della classe wrapper.  
  
 Per questa discussione, si hanno creato un progetto a windows \(Container denominato\) con supporto del controllo ActiveX.  Il controllo dell'esempio di Circ, Circ, verrà aggiunto al progetto risultante.  
  
 Una volta che il controllo di Circ viene inserito nel progetto \(passaggio 1\), inserire un'istanza del controllo di Circ nella finestra di dialogo principale dell'applicazione.  
  
## Procedure  
  
#### Per aggiungere il controllo di Circ al modello di finestra di dialogo  
  
1.  Caricare il progetto del contenitore di controlli ActiveX.  Per questo esempio, utilizzare il progetto `Container`.  
  
2.  Scegliere la scheda Visualizzazione risorse.  
  
3.  Aprire la cartella di **Finestra di dialogo**.  
  
4.  Fare doppio clic sul modello di finestra di dialogo principale.  Per questo esempio, utilizzare **IDD\_CONTAINER\_DIALOG**.  
  
5.  Fare clic sull'icona del controllo di Circ nella casella degli strumenti.  
  
6.  Fare clic su un punto all'interno della finestra di dialogo per inserire il controllo di Circ.  
  
7.  Dal menu di **File**, scegliere **Salva tutto** per salvare le modifiche al modello di finestra di dialogo.  
  
## Modifiche al progetto  
 Per attivare l'applicazione contenitore accedere al controllo di Circ, Visual C\+\+ aggiunge automaticamente il file di implementazione della classe wrapper \(`CCirc`\) \(.CPP\) al progetto del contenitore e all'intestazione della classe wrapper \(. H\) il file di intestazione della finestra di dialogo:  
  
 [!code-cpp[NVC_MFC_AxCont#1](../mfc/codesnippet/CPP/programming-activex-controls-in-a-activex-control-container_1.h)]  
  
##  <a name="_core_the_wrapper_class_header_28h29_file"></a> L'intestazione della classe wrapper \(. File h\)  
 Per ottenere e impostare le proprietà \(e richiamare i metodi\) per il controllo di Circ, la classe wrapper di `CCirc` fornisce una dichiarazione di tutti i metodi e le proprietà esposti.  Nell'esempio, queste dichiarazioni sono presenti in CIRC.H.  L'esempio seguente è la parte di `CCirc` classe che definisce le interfacce esposte del controllo ActiveX:  
  
 [!code-cpp[NVC_MFC_AxCont#2](../mfc/codesnippet/CPP/programming-activex-controls-in-a-activex-control-container_2.h)]  
[!code-cpp[NVC_MFC_AxCont#3](../mfc/codesnippet/CPP/programming-activex-controls-in-a-activex-control-container_3.h)]  
  
 Tali funzioni possono essere chiamate da altre routine dell'applicazione utilizzando la sintassi C\+\+ normale.  Per ulteriori informazioni sull'utilizzo della funzione membro impostata per accedere ai metodi e le proprietà del controllo, vedere la sezione [Programmazione del controllo ActiveX](#_core_programming_the_activex_control).  
  
##  <a name="_core_member_variable_modifications_to_the_project"></a> Modifiche variabile membro al progetto  
 Una volta che il controllo ActiveX è stato aggiunto al progetto ed era incorporato in un contenitore della finestra di dialogo, è possibile accedervi da altre parti del progetto.  Il modo più semplice per accedere al controllo è a [creare una variabile membro](../mfc/activex-control-containers-connecting-an-activex-control-to-a-member-variable.md) la classe della finestra di dialogo, `CContainerDlg` \(passaggio 2\), che è dello stesso tipo della classe wrapper aggiunta al progetto da Visual C\+\+.  È quindi possibile utilizzare la variabile membro per accedere al controllo incorporato in qualsiasi momento.  
  
 Verrà visualizzata la finestra di dialogo **Aggiungi variabile membro** aggiungi variabile membro di `m_circctl` al progetto, anche aggiungere le righe seguenti al file di intestazione precompilata. H\) della classe di `CContainerDlg` :  
  
 [!code-cpp[NVC_MFC_AxCont#4](../mfc/codesnippet/CPP/programming-activex-controls-in-a-activex-control-container_4.h)]  
[!code-cpp[NVC_MFC_AxCont#5](../mfc/codesnippet/CPP/programming-activex-controls-in-a-activex-control-container_5.h)]  
  
 Inoltre, una chiamata a **DDX\_Control** viene aggiunto automaticamente all'implementazione di `CContainerDlg` di `DoDataExchange`:  
  
 [!code-cpp[NVC_MFC_AxCont#6](../mfc/codesnippet/CPP/programming-activex-controls-in-a-activex-control-container_6.cpp)]  
  
##  <a name="_core_programming_the_activex_control"></a> Programmazione del controllo ActiveX  
 In questa fase, incollato il controllo ActiveX nel modello di finestra di dialogo e creato una variabile membro per.  È ora possibile utilizzare la sintassi comune di C\+\+ per accedere a proprietà e metodi di controllo incorporato.  
  
 Come celebre \(in [L'intestazione della classe wrapper \(. File h\)](#_core_the_wrapper_class_header_28h29_file)\), il file di intestazione precompilata. H\) per la classe wrapper di `CCirc`, in questo caso CIRC.H, contiene un elenco di funzioni membro che è possibile utilizzare per ottenere e impostare il valore della proprietà esposta.  Le funzioni membro per i metodi esposti sono inoltre disponibili.  
  
 Una posizione comune per modificare le proprietà del controllo è la funzione membro di `OnInitDialog` della classe principale della finestra di dialogo.  Questa funzione viene chiamata prima di visualizzata la finestra di dialogo viene utilizzata per inizializzare il relativo contenuto, inclusi i suoi controlli.  
  
 Nell'esempio di codice seguente viene utilizzata la variabile membro di `m_circctl` per modificare le proprietà di CircleShape e la didascalia del controllo incorporato di Circ:  
  
 [!code-cpp[NVC_MFC_AxCont#7](../mfc/codesnippet/CPP/programming-activex-controls-in-a-activex-control-container_7.cpp)]  
  
## Vedere anche  
 [Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)