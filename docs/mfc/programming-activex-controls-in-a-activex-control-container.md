---
title: 'Contenitori di controlli ActiveX: Programmazione di controlli ActiveX in un contenitore di controlli ActiveX | Microsoft Docs'
ms.custom: ''
ms.date: 09/12/2018
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
ms.openlocfilehash: 2204df82263cdd39d7f78ff43cc2c02a7eafbac5
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46379801"
---
# <a name="activex-control-containers-programming-activex-controls-in-an-activex-control-container"></a>Contenitori di controlli ActiveX: programmazione di controlli ActiveX in un contenitore di controlli ActiveX

Questo articolo descrive il processo di accesso esposti [metodi](../mfc/mfc-activex-controls-methods.md) e [proprietà](../mfc/mfc-activex-controls-properties.md) dei controlli ActiveX incorporati.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per nuove attività di sviluppo. Per altre informazioni sulle tecnologie moderne che sostituisce ActiveX, vedere [controlli ActiveX](activex-controls.md).

In pratica, si verranno seguire questi passaggi:

1. [Inserire un controllo ActiveX nel progetto contenitore ActiveX](../mfc/inserting-a-control-into-a-control-container-application.md) tramite raccolta.

1. [Definire una variabile membro](../mfc/activex-control-containers-connecting-an-activex-control-to-a-member-variable.md) (o altro tipo di accesso) dello stesso tipo di ActiveX classe wrapper del controllo.

1. [Programmare il controllo ActiveX](#_core_programming_the_activex_control) usando funzioni di membro della classe wrapper predefinite.

Per questa discussione, presuppone che la creazione di un progetto basato su finestra di dialogo (un contenitore denominato) con supporto per il controllo ActiveX. Il controllo di esempio Circ, verrà aggiunto al progetto risulta.

Dopo avere il controllo Circ viene inserito nel progetto (passaggio 1), inserire un'istanza del controllo Circ nella finestra di dialogo principale dell'applicazione.

## <a name="procedures"></a>Procedure

#### <a name="to-add-the-circ-control-to-the-dialog-template"></a>Per aggiungere il controllo Circ al modello di finestra di dialogo

1. Caricare il progetto di contenitore di controlli ActiveX. Per questo esempio, usare il `Container` progetto.

1. Fare clic sulla scheda Visualizzazione risorse.

1. Aprire il **dialogo** cartella.

1. Fare doppio clic sul modello della finestra di dialogo principale. Per questo esempio, usare **IDD_CONTAINER_DIALOG**.

1. Fare clic sull'icona del controllo Circ della casella degli strumenti.

1. Fare clic su un punto nella finestra di dialogo per inserire il controllo Circ.

1. Dal **File** menu, scegliere **Salva tutto** per salvare tutte le modifiche al modello della finestra di dialogo.

## <a name="modifications-to-the-project"></a>Modifiche apportate al progetto

Per abilitare l'applicazione contenitore accedere al controllo Circ, Visual C++ aggiunge automaticamente la classe wrapper (`CCirc`) file di implementazione (. CPP) per il progetto del contenitore e l'intestazione della classe wrapper (. H) file per il file di intestazione della finestra di dialogo:

[!code-cpp[NVC_MFC_AxCont#1](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_1.h)]

##  <a name="_core_the_wrapper_class_header_28h29_file"></a> L'intestazione della classe Wrapper (. H) file

Per ottenere e impostare le proprietà (e richiamare metodi) per il controllo, Circ il `CCirc` classe wrapper fornisce una dichiarazione di proprietà e metodi esposti. Nell'esempio, queste dichiarazioni vengono trovate in Circ. H. L'esempio seguente è la parte della classe `CCirc` che definisce le interfacce esposte del controllo ActiveX:

[!code-cpp[NVC_MFC_AxCont#2](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_2.h)]
[!code-cpp[NVC_MFC_AxCont#3](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_3.h)]

Queste funzioni possono quindi essere chiamate da altre procedure dell'applicazione usando la normale sintassi di C++. Per altre informazioni sull'uso di questa funzione membro per accedere ai metodi e proprietà del controllo, vedere la sezione [programmazione di controlli ActiveX](#_core_programming_the_activex_control).

##  <a name="_core_member_variable_modifications_to_the_project"></a> Modifiche di variabile membro per il progetto

Una volta il controllo ActiveX è stato aggiunto al progetto e connessioni incorporato in un contenitore di finestra di dialogo, è possibile accedervi da altre parti del progetto. Il modo più semplice per il controllo di accesso consiste [creare una variabile membro](../mfc/activex-control-containers-connecting-an-activex-control-to-a-member-variable.md) della classe, finestra di dialogo `CContainerDlg` (passaggio 2), vale a dire dello stesso tipo della classe wrapper aggiunto al progetto da Visual C++. È quindi possibile usare la variabile membro per accedere al controllo incorporato in qualsiasi momento.

Quando la **Aggiunta guidata variabile membro** finestra di dialogo aggiunge i *m_circctl* membro variabile al progetto, aggiunge anche le righe seguenti al file di intestazione (. H) del `CContainerDlg` classe:

[!code-cpp[NVC_MFC_AxCont#4](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_4.h)]
[!code-cpp[NVC_MFC_AxCont#5](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_5.h)]

Inoltre, una chiamata a **DDX_Control** viene aggiunto automaticamente al `CContainerDlg`dell'implementazione di `DoDataExchange`:

[!code-cpp[NVC_MFC_AxCont#6](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_6.cpp)]

##  <a name="_core_programming_the_activex_control"></a> Programmazione di controlli ActiveX

A questo punto, si hanno inserito il controllo ActiveX nel modello di finestra di dialogo e creato una variabile membro per il componente. È ora possibile usare la comune sintassi C++ per accedere alle proprietà e metodi del controllo incorporato.

Come indicato (nel [l'intestazione della classe Wrapper (. File H)](#_core_the_wrapper_class_header_28h29_file)), il file di intestazione (. H) per il `CCirc` classe wrapper, in questo esempio CIRC di case. H, contiene un elenco delle funzioni membro che è possibile usare per ottenere e impostare qualsiasi valore di proprietà esposti. Sono disponibili anche le funzioni membro per i metodi esposti.

È una posizione frequente per modificare le proprietà del controllo nel `OnInitDialog` funzione membro della classe di finestra di dialogo principale. Questa funzione viene chiamata prima che la finestra di dialogo viene visualizzata e viene usata per inizializzare il suo contenuto, incluso uno qualsiasi dei relativi controlli.

Il codice seguente viene illustrato come utilizzare il *m_circctl* variabile membro per modificare le proprietà di didascalia e CircleShape del controllo Circ incorporato:

[!code-cpp[NVC_MFC_AxCont#7](../mfc/codesnippet/cpp/programming-activex-controls-in-a-activex-control-container_7.cpp)]

## <a name="see-also"></a>Vedere anche

[Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)

