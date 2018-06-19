---
title: 'Contenitori di controlli ActiveX: Programmazione di controlli ActiveX in un contenitore di controlli ActiveX | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- ActiveX control containers [MFC], accessing ActiveX controls
- Confirm Classes dialog box
- wrapper classes [MFC], ActiveX controls
- ActiveX control containers [MFC], wrapper classes
- ActiveX controls [MFC], accessing
- MFC ActiveX controls [MFC], accessing in containers
- header files [MFC], for ActiveX control wrapper class
- wrapper classes [MFC], using
- ActiveX controls [MFC], wrapper classes
ms.assetid: ef9b2480-92d6-4191-b16e-8055c4fd7b73
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bae926cfc7e83edeef9ee68c7ce7118c55009a08
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33355041"
---
# <a name="activex-control-containers-programming-activex-controls-in-an-activex-control-container"></a>Contenitori di controlli ActiveX: programmazione di controlli ActiveX in un contenitore di controlli ActiveX
In questo articolo viene descritto il processo di accesso esposti [metodi](../mfc/mfc-activex-controls-methods.md) e [proprietà](../mfc/mfc-activex-controls-properties.md) dei controlli ActiveX incorporati. In pratica, eseguire questi passaggi:  
  
1.  [Inserire un controllo ActiveX nel progetto ActiveX contenitore](../mfc/inserting-a-control-into-a-control-container-application.md) tramite raccolta.  
  
2.  [Definire una variabile membro](../mfc/activex-control-containers-connecting-an-activex-control-to-a-member-variable.md) (o altro formato di accesso) dello stesso tipo ActiveX classe wrapper del controllo.  
  
3.  [Programmare il controllo ActiveX](#_core_programming_the_activex_control) utilizzando funzioni di membro della classe wrapper predefinite.  
  
 Per questa discussione, si supponga che è stato creato un progetto basato su finestra di dialogo (denominato contenitore) con supporto per il controllo ActiveX. Il controllo di esempio Circ, viene per il progetto risultante.  
  
 Dopo avere inserito il controllo Circ nel progetto (passaggio 1), inserire un'istanza del controllo Circ nella finestra di dialogo principale dell'applicazione.  
  
## <a name="procedures"></a>Procedure  
  
#### <a name="to-add-the-circ-control-to-the-dialog-template"></a>Per aggiungere il controllo Circ al modello di finestra di dialogo  
  
1.  Caricare il progetto di contenitore di controlli ActiveX. Per questo esempio, utilizzare il `Container` progetto.  
  
2.  Fare clic sulla scheda Visualizzazione risorse.  
  
3.  Aprire il **finestra di dialogo** cartella.  
  
4.  Fare doppio clic sul modello di finestra di dialogo principale. Per questo esempio, utilizzare **IDD_CONTAINER_DIALOG**.  
  
5.  Fare clic sull'icona del controllo Circ nella casella degli strumenti.  
  
6.  Fare clic su un punto nella finestra di dialogo per inserire il controllo Circ.  
  
7.  Dal **File** menu, scegliere **Salva tutto** per salvare tutte le modifiche al modello di finestra di dialogo.  
  
## <a name="modifications-to-the-project"></a>Modifiche apportate al progetto  
 Per abilitare l'applicazione contenitore di accedere al controllo Circ, Visual C++ aggiunge automaticamente la classe wrapper (`CCirc`) file di implementazione (. CPP) per il progetto del contenitore e l'intestazione della classe wrapper (. H) file per il file di intestazione della finestra di dialogo:  
  
 [!code-cpp[NVC_MFC_AxCont#1](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_1.h)]  
  
##  <a name="_core_the_wrapper_class_header_28h29_file"></a> L'intestazione della classe Wrapper (. H) file  
 Per ottenere e impostare le proprietà (e richiamare metodi) per il controllo Circ, la `CCirc` classe wrapper fornisce una dichiarazione di proprietà e metodi tutti esposti. Nell'esempio queste dichiarazioni si trovano in Circ. H. L'esempio seguente è la parte della classe `CCirc` che definisce le interfacce esposte del controllo ActiveX:  
  
 [!code-cpp[NVC_MFC_AxCont#2](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_2.h)]  
[!code-cpp[NVC_MFC_AxCont#3](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_3.h)]  
  
 Queste funzioni possono quindi essere chiamate da altre procedure dell'applicazione utilizzando la sintassi C++ normale. Per ulteriori informazioni sull'utilizzo di questa funzione membro per accedere ai metodi e proprietà del controllo, vedere la sezione [programmazione del controllo ActiveX](#_core_programming_the_activex_control).  
  
##  <a name="_core_member_variable_modifications_to_the_project"></a> Modifiche di variabili membro per il progetto  
 Dopo il controllo ActiveX è stato aggiunto al progetto e incorporato in un contenitore di finestra di dialogo, è possibile accedervi dalle altre parti del progetto. Il modo più semplice per accedere al controllo è [creare una variabile membro](../mfc/activex-control-containers-connecting-an-activex-control-to-a-member-variable.md) della classe di finestra di dialogo, `CContainerDlg` (passaggio 2), che è dello stesso tipo della classe wrapper aggiunto al progetto da Visual C++. È quindi possibile utilizzare la variabile membro per accedere al controllo incorporato in qualsiasi momento.  
  
 Quando il **Aggiunta guidata variabile membro** la finestra di dialogo aggiunge il `m_circctl` membro variabile al progetto, aggiunge anche le righe seguenti al file di intestazione (. H) del `CContainerDlg` classe:  
  
 [!code-cpp[NVC_MFC_AxCont#4](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_4.h)]  
[!code-cpp[NVC_MFC_AxCont#5](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_5.h)]  
  
 Inoltre, una chiamata a **DDX_Control** viene aggiunto automaticamente al `CContainerDlg`dell'implementazione di `DoDataExchange`:  
  
 [!code-cpp[NVC_MFC_AxCont#6](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_6.cpp)]  
  
##  <a name="_core_programming_the_activex_control"></a> Programmazione di controlli ActiveX  
 A questo punto, aver inserito il controllo ActiveX nel modello di finestra di dialogo e creato una variabile membro per tale. È ora possibile utilizzare la comune sintassi C++ per accedere alle proprietà e metodi del controllo incorporato.  
  
 Come indicato (nel [l'intestazione della classe Wrapper (. File H)](#_core_the_wrapper_class_header_28h29_file)), il file di intestazione (. H) per la `CCirc` classe wrapper, in questo esempio CIRC case. H, contiene un elenco di funzioni membro che è possibile utilizzare per ottenere e impostare qualsiasi valore di proprietà esposti. Sono disponibili anche le funzioni membro per i metodi esposti.  
  
 Per modificare le proprietà del controllo viene nel `OnInitDialog` funzione membro della classe di finestra di dialogo principale. Questa funzione viene chiamata prima che la finestra di dialogo viene visualizzata e viene utilizzata per inizializzare il contenuto, incluso uno qualsiasi dei relativi controlli.  
  
 Nell'esempio di codice viene illustrato come utilizzare il `m_circctl` variabile membro per modificare le proprietà Caption e CircleShape del controllo Circ incorporato:  
  
 [!code-cpp[NVC_MFC_AxCont#7](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_7.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)

