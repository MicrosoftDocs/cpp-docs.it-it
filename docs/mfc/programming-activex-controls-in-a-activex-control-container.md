---
description: 'Altre informazioni su: contenitori di controlli ActiveX: programmazione di controlli ActiveX in un contenitore di controlli ActiveX'
title: 'Contenitori di controlli ActiveX: programmazione di controlli ActiveX in un contenitore di controlli ActiveX'
ms.date: 09/12/2018
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
ms.openlocfilehash: 34a5a2aaa1d7ec940ea31ae2fbe8c89ba3d84818
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97251011"
---
# <a name="activex-control-containers-programming-activex-controls-in-an-activex-control-container"></a>Contenitori di controlli ActiveX: programmazione di controlli ActiveX in un contenitore di controlli ActiveX

Questo articolo descrive il processo di accesso ai [Metodi](../mfc/mfc-activex-controls-methods.md) e alle [Proprietà](../mfc/mfc-activex-controls-properties.md) esposte di controlli ActiveX incorporati.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere usata per nuove attività di sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](activex-controls.md).

In pratica, attenersi alla procedura seguente:

1. [Inserire un controllo ActiveX nel progetto contenitore ActiveX tramite la](../mfc/inserting-a-control-into-a-control-container-application.md) raccolta.

1. [Definire una variabile membro](../mfc/activex-control-containers-connecting-an-activex-control-to-a-member-variable.md) (o un'altra forma di accesso) dello stesso tipo della classe wrapper del controllo ActiveX.

1. [Programmare il controllo ActiveX](#_core_programming_the_activex_control) usando funzioni membro predefinite della classe wrapper.

Per questa discussione, si supponga di aver creato un progetto basato su finestra di dialogo (contenitore denominato) con il supporto del controllo ActiveX. Il controllo di esempio CIRC, Circ, verrà aggiunto al progetto risultante.

Una volta inserito il controllo Circ nel progetto (passaggio 1), inserire un'istanza del controllo Circ nella finestra di dialogo principale dell'applicazione.

## <a name="procedures"></a>Procedure

#### <a name="to-add-the-circ-control-to-the-dialog-template"></a>Per aggiungere il controllo Circ al modello di finestra di dialogo

1. Caricare il progetto del contenitore di controlli ActiveX. Per questo esempio, usare il `Container` progetto.

1. Fare clic sulla scheda Visualizzazione risorse.

1. Aprire la cartella della **finestra di dialogo** .

1. Fare doppio clic sul modello della finestra di dialogo principale. Per questo esempio, usare **IDD_CONTAINER_DIALOG**.

1. Fare clic sull'icona del controllo Circ nella casella degli strumenti.

1. Fare clic su una posizione all'interno della finestra di dialogo per inserire il controllo Circ.

1. Scegliere **Salva tutto** dal menu **file** per salvare tutte le modifiche apportate al modello della finestra di dialogo.

## <a name="modifications-to-the-project"></a>Modifiche al progetto

Per consentire all'applicazione contenitore di accedere al controllo Circ, Visual C++ aggiunge automaticamente il file di implementazione della classe wrapper ( `CCirc` ). CPP) per il progetto contenitore e l'intestazione della classe wrapper (. H) nel file di intestazione della finestra di dialogo:

[!code-cpp[NVC_MFC_AxCont#1](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_1.h)]

## <a name="the-wrapper-class-header-h-file"></a><a name="_core_the_wrapper_class_header_28h29_file"></a> Intestazione della classe wrapper (. File H)

Per ottenere e impostare le proprietà (e richiamare metodi) per il controllo Circ, la `CCirc` classe wrapper fornisce una dichiarazione di tutti i metodi e le proprietà esposti. Nell'esempio, queste dichiarazioni si trovano in CIRC. H. Nell'esempio seguente viene illustrata la parte della classe `CCirc` che definisce le interfacce esposte del controllo ActiveX:

[!code-cpp[NVC_MFC_AxCont#2](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_2.h)]
[!code-cpp[NVC_MFC_AxCont#3](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_3.h)]

Queste funzioni possono quindi essere chiamate da altre procedure dell'applicazione usando la normale sintassi di C++. Per ulteriori informazioni sull'utilizzo di questa funzione membro impostata per accedere ai metodi e alle proprietà del controllo, vedere la sezione [programmazione del controllo ActiveX](#_core_programming_the_activex_control).

## <a name="member-variable-modifications-to-the-project"></a><a name="_core_member_variable_modifications_to_the_project"></a> Modifiche variabili membro al progetto

Una volta che il controllo ActiveX è stato aggiunto al progetto e incorporato in un contenitore della finestra di dialogo, è possibile accedervi da altre parti del progetto. Il modo più semplice per accedere al controllo consiste nel [creare una variabile membro](../mfc/activex-control-containers-connecting-an-activex-control-to-a-member-variable.md) della classe della finestra di dialogo `CContainerDlg` (passaggio 2), che è dello stesso tipo della classe wrapper aggiunta al progetto da Visual C++. È quindi possibile usare la variabile membro per accedere al controllo incorporato in qualsiasi momento.

Quando la finestra di dialogo **Aggiungi variabile membro** aggiunge la variabile membro *m_circctl* al progetto, aggiunge anche le righe seguenti al file di intestazione (. H) della `CContainerDlg` classe:

[!code-cpp[NVC_MFC_AxCont#4](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_4.h)]
[!code-cpp[NVC_MFC_AxCont#5](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_5.h)]

Inoltre, una chiamata a **DDX_Control** viene aggiunta automaticamente all' `CContainerDlg` implementazione di di `DoDataExchange` :

[!code-cpp[NVC_MFC_AxCont#6](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_6.cpp)]

## <a name="programming-the-activex-control"></a><a name="_core_programming_the_activex_control"></a> Programmazione del controllo ActiveX

A questo punto, il controllo ActiveX è stato inserito nel modello di finestra di dialogo e ne è stata creata una variabile membro. È ora possibile usare la sintassi C++ comune per accedere alle proprietà e ai metodi del controllo incorporato.

Come indicato nell' [intestazione della classe wrapper (. H)](#_core_the_wrapper_class_header_28h29_file), il file di intestazione (. H) per la `CCirc` classe wrapper, in questo caso circ. H, contiene un elenco di funzioni membro che è possibile utilizzare per ottenere e impostare qualsiasi valore di proprietà esposto. Sono disponibili anche funzioni membro per i metodi esposti.

Una posizione comune per modificare le proprietà del controllo è la `OnInitDialog` funzione membro della classe principale della finestra di dialogo. Questa funzione viene chiamata immediatamente prima che venga visualizzata la finestra di dialogo e viene usata per inizializzarne il contenuto, inclusi i controlli.

Nell'esempio di codice seguente viene usata la variabile membro *m_circctl* per modificare le proprietà Caption e CircleShape del controllo Circ incorporato:

[!code-cpp[NVC_MFC_AxCont#7](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_7.cpp)]

## <a name="see-also"></a>Vedi anche

[Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)
