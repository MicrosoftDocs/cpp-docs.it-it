---
description: 'Altre informazioni su: client di automazione: utilizzo delle librerie dei tipi'
title: 'Client di automazione: utilizzo delle librerie dei tipi'
ms.date: 11/04/2016
f1_keywords:
- MkTypLib
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
ms.openlocfilehash: c50425da1327f97fe410723df1e21136f1bd6f98
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97274008"
---
# <a name="automation-clients-using-type-libraries"></a>Client di automazione: utilizzo delle librerie dei tipi

I client di automazione devono disporre di informazioni sulle proprietà e i metodi degli oggetti server se i client devono modificare gli oggetti dei server. Le proprietà includono tipi di dati; i metodi spesso restituiscono valori e accettano parametri. Il client richiede informazioni sui tipi di dati di tutti questi elementi per eseguire un'associazione statica al tipo di oggetto server.

Queste informazioni sul tipo possono essere rese note in diversi modi. Il metodo consigliato consiste nel creare una libreria dei tipi.

Per informazioni su [MkTypLib](/windows/win32/Midl/differences-between-midl-and-mktyplib), vedere la Windows SDK.

Visual C++ possibile leggere un file della libreria dei tipi e creare una classe dispatch derivata da [COleDispatchDriver](reference/coledispatchdriver-class.md). Un oggetto di tale classe dispone di proprietà e operazioni che duplicano quelle dell'oggetto server. L'applicazione chiama le proprietà e le operazioni di questo oggetto e la funzionalità ereditata da `COleDispatchDriver` instrada queste chiamate al sistema OLE, che a sua volta le instrada all'oggetto server.

Visual C++ gestisce automaticamente il file della libreria dei tipi se si è scelto di includere l'automazione al momento della creazione del progetto. Come parte di ogni compilazione, il file con estensione tlb verrà compilato con MkTypLib.

### <a name="to-create-a-dispatch-class-from-a-type-library-tlb-file"></a>Per creare una classe dispatch da un file di libreria dei tipi (con estensione tlb)

1. In Visualizzazione classi o Esplora soluzioni fare clic con il pulsante destro del mouse sul progetto e scegliere **Aggiungi** , quindi fare clic su **Aggiungi classe** nel menu di scelta rapida.

1. Nella finestra di dialogo **Aggiungi classe** selezionare la cartella **Visual C++/MFC** nel riquadro sinistro. Selezionare la **classe MFC dall'icona TypeLib** nel riquadro destro e fare clic su **Apri**.

1. Nella finestra di dialogo **Aggiunta guidata classe da libreria** dei tipi selezionare una libreria dei tipi dall'elenco a discesa **librerie dei tipi disponibili** . Nella casella **interfacce** vengono visualizzate le interfacce disponibili per la libreria dei tipi selezionata.

    > [!NOTE]
    >  È possibile selezionare interfacce da più di una libreria dei tipi.

   Per selezionare le interfacce, fare doppio clic su di esse oppure fare clic sul pulsante **Aggiungi** . Quando si esegue questa operazione, i nomi delle classi dispatch verranno visualizzati nella casella **classi generate** . È possibile modificare i nomi delle classi nella `Class` casella.

   Nella casella **file** viene visualizzato il file in cui verrà dichiarata la classe. (è possibile modificare anche questo nome di file). È anche possibile usare il pulsante Sfoglia per selezionare altri file, se si preferisce che le informazioni di intestazione e di implementazione siano scritte in file esistenti o in una directory diversa dalla directory del progetto.

    > [!NOTE]
    >  Tutte le classi dispatch per le interfacce selezionate verranno inserite nel file specificato qui. Se si desidera che le interfacce vengano dichiarate in intestazioni separate, è necessario eseguire questa procedura guidata per ogni file di intestazione che si desidera creare.

    > [!NOTE]
    >  Alcune informazioni sulla libreria dei tipi possono essere archiviate in file con. DLL,. OCX o. Estensioni di file OLB.

1. Fare clic su **Fine**.

   La procedura guidata scriverà quindi il codice per le classi dispatch usando la classe e i nomi di file specificati.

## <a name="see-also"></a>Vedi anche

[Client di automazione](automation-clients.md)
