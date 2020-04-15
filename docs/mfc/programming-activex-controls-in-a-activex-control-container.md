---
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
ms.openlocfilehash: 9620f4d47197147db4972c9f2024f6018a705902
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371192"
---
# <a name="activex-control-containers-programming-activex-controls-in-an-activex-control-container"></a>Contenitori di controlli ActiveX: programmazione di controlli ActiveX in un contenitore di controlli ActiveX

In questo articolo viene descritto il processo di accesso ai [metodi](../mfc/mfc-activex-controls-methods.md) esposti e [alle proprietà](../mfc/mfc-activex-controls-properties.md) dei controlli ActiveX incorporati.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per il nuovo sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [Controlli ActiveX](activex-controls.md).

Fondamentalmente, si seguirà questi passaggi:

1. [Inserire un controllo ActiveX nel progetto contenitore ActiveX](../mfc/inserting-a-control-into-a-control-container-application.md) utilizzando Raccolta.

1. [Definire una variabile membro](../mfc/activex-control-containers-connecting-an-activex-control-to-a-member-variable.md) (o altra forma di accesso) dello stesso tipo della classe wrapper del controllo ActiveX.

1. [Programmare il controllo ActiveX](#_core_programming_the_activex_control) utilizzando funzioni membro predefinite della classe wrapper.

Per questa discussione, si supponga di aver creato un progetto basato su finestra di dialogo (denominato contenitore) con supporto dei controlli ActiveX.For this discussion, assume you've created a dialog-based project (named Container) with ActiveX control support. Il controllo campione Circ, Circ, verrà aggiunto al progetto risultante.

Una volta inserito il controllo Circ nel progetto (passaggio 1), inserire un'istanza del controllo Circ nella finestra di dialogo principale dell'applicazione.

## <a name="procedures"></a>Procedure

#### <a name="to-add-the-circ-control-to-the-dialog-template"></a>Per aggiungere il controllo Circ al modello di finestra di dialogo

1. Caricare il progetto contenitore di controlli ActiveX. Per questo esempio, `Container` utilizzare il progetto.

1. Fare clic sulla scheda Visualizzazione risorse.

1. Aprire la cartella **Dialog.**

1. Fare doppio clic sul modello della finestra di dialogo principale. Per questo esempio, utilizzare **IDD_CONTAINER_DIALOG**.

1. Fare clic sull'icona del controllo Circ nella Casella degli strumenti.

1. Fare clic su un punto all'interno della finestra di dialogo per inserire il controllo Circ.

1. Scegliere **Salva tutto** dal menu **File** per salvare tutte le modifiche apportate al modello di finestra di dialogo.

## <a name="modifications-to-the-project"></a>Modifiche al progetto

Per consentire all'applicazione Container di accedere al controllo Circ,`CCirc`il file di implementazione della classe wrapper ( ) viene aggiunto automaticamente (. CPP) al progetto Container e all'intestazione della classe wrapper (. H) nel file di intestazione della finestra di dialogo:

[!code-cpp[NVC_MFC_AxCont#1](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_1.h)]

## <a name="the-wrapper-class-header-h-file"></a><a name="_core_the_wrapper_class_header_28h29_file"></a>L'intestazione della classe wrapper (. H) File

Per ottenere e impostare le proprietà (e richiamare i metodi) per il controllo Circ, la `CCirc` classe wrapper fornisce una dichiarazione di tutti i metodi e le proprietà esposti. Nell'esempio, queste dichiarazioni si trovano in CIRC. H. L'esempio seguente è `CCirc` la parte della classe che definisce le interfacce esposte del controllo ActiveX:

[!code-cpp[NVC_MFC_AxCont#2](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_2.h)]
[!code-cpp[NVC_MFC_AxCont#3](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_3.h)]

Queste funzioni possono quindi essere chiamate da altre procedure dell'applicazione utilizzando la normale sintassi di C. Per ulteriori informazioni sull'utilizzo di questo set di funzioni membro per accedere ai metodi e alle proprietà del controllo, vedere la sezione [Programmazione del controllo ActiveX](#_core_programming_the_activex_control).

## <a name="member-variable-modifications-to-the-project"></a><a name="_core_member_variable_modifications_to_the_project"></a>Modifiche alle variabili membro al progetto

Una volta che il controllo ActiveX è stato aggiunto al progetto e incorporato in un contenitore di finestre di dialogo, è possibile accedervi da altre parti del progetto. Il modo più semplice per accedere al controllo consiste nel `CContainerDlg` creare una variabile [membro](../mfc/activex-control-containers-connecting-an-activex-control-to-a-member-variable.md) della classe della finestra di dialogo, (passaggio 2), che è dello stesso tipo della classe wrapper aggiunta al progetto da Visual C. È quindi possibile utilizzare la variabile membro per accedere al controllo incorporato in qualsiasi momento.

Quando la finestra di dialogo **Aggiungi variabile membro** aggiunge la variabile membro *m_circctl* al progetto, aggiunge anche le righe seguenti al file di intestazione (. H) della `CContainerDlg` classe:

[!code-cpp[NVC_MFC_AxCont#4](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_4.h)]
[!code-cpp[NVC_MFC_AxCont#5](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_5.h)]

Inoltre, una chiamata a **DDX_Control** viene `CContainerDlg`automaticamente aggiunta `DoDataExchange`all'implementazione di:

[!code-cpp[NVC_MFC_AxCont#6](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_6.cpp)]

## <a name="programming-the-activex-control"></a><a name="_core_programming_the_activex_control"></a>Programmazione del controllo ActiveX

A questo punto, è stato inserito il controllo ActiveX nel modello di finestra di dialogo e creato una variabile membro per esso. È ora possibile utilizzare la sintassi comune di C , per accedere alle proprietà e ai metodi del controllo incorporato.

Come indicato [(nell'intestazione della classe wrapper (. H) File](#_core_the_wrapper_class_header_28h29_file)), il file di intestazione (. H) per `CCirc` la classe wrapper, in questo caso CIRC. H, contiene un elenco di funzioni membro che è possibile utilizzare per ottenere e impostare qualsiasi valore della proprietà esposta. Sono inoltre disponibili funzioni membro per i metodi esposti.

Una posizione comune per modificare le proprietà `OnInitDialog` del controllo è nella funzione membro della classe di finestre di dialogo main. Questa funzione viene chiamata appena prima che venga visualizzata la finestra di dialogo e viene utilizzata per inizializzare il contenuto, inclusi i relativi controlli.

Nell'esempio di codice riportato di seguito viene utilizzata la variabile membro *m_circctl* per modificare le proprietà Caption e CircleShape del controllo Circ incorporato:

[!code-cpp[NVC_MFC_AxCont#7](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_7.cpp)]

## <a name="see-also"></a>Vedere anche

[Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)
