---
title: 'Client di automazione: Utilizzo delle librerie dei tipi | Microsoft Docs'
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
ms.openlocfilehash: 001dfb29a5ac0f6d93b0715bd2b86ccd60e91259
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50054605"
---
# <a name="automation-clients-using-type-libraries"></a>Client di automazione: utilizzo delle librerie dei tipi

I client di automazione devono avere informazioni sui metodi e proprietà degli oggetti server se i client sono modificare oggetti dei server. Le proprietà hanno tipi di dati. metodi spesso valori restituiscono e accettano parametri. Il client richiede informazioni sui tipi di dati di tutti questi elementi per associare in modo statico al tipo di oggetto server.

Questo tipo di informazioni può essere resa nota in diversi modi. Il modo consigliato consiste nel creare una libreria dei tipi.

Per informazioni sul [MkTypLib](/windows/desktop/Midl/differences-between-midl-and-mktyplib), vedi il Windows SDK.

Visual C++ può leggere un file di libreria dei tipi e creare una classe di invio derivata da [COleDispatchDriver](../mfc/reference/coledispatchdriver-class.md). Un oggetto di tale classe dispone di proprietà e operazioni che duplicano quelli dell'oggetto server. L'applicazione chiama operazioni e proprietà di questo oggetto e funzionalità ereditata da `COleDispatchDriver` instrada le chiamate al sistema OLE, che a sua volta li invia all'oggetto server.

Se si sceglie di includere l'automazione durante la creazione del progetto, Visual C++ gestisce automaticamente questo file di libreria dei tipi per l'utente. Come parte di ogni compilazione, il file con estensione tlb verrà essere compilato con MkTypLib.

### <a name="to-create-a-dispatch-class-from-a-type-library-tlb-file"></a>Per creare una classe di invio da un file di libreria dei tipi (tlb)

1. In visualizzazione classi o Esplora soluzioni, fare clic sul progetto e fare clic su **Add** e quindi fare clic su **Aggiungi classe** menu di scelta rapida.

1. Nel **Aggiungi classe** finestra di dialogo, seleziona la **di Visual c++ /Visual c++ /CLI MFC** cartella nel riquadro sinistro. Selezionare il **MFC classe da libreria dei tipi** icona dal riquadro destro, quindi fare clic su **Open**.

1. Nel **Aggiunta guidata classe da libreria dei tipi** finestra di dialogo, selezionare una libreria dei tipi dalle **librerie dei tipi disponibili** elenco a discesa. Il **interfacce** le interfacce disponibili per la libreria dei tipi selezionata viene visualizzata la finestra.

    > [!NOTE]
    >  È possibile selezionare le interfacce da più di una libreria dei tipi.

   Per selezionare le interfacce, fare doppio clic su essi oppure scegliere il **Add** pulsante. Quando si esegue questa operazione, i nomi per le classi di recapito verranno visualizzati nei **le classi generate** casella. È possibile modificare i nomi delle classi nel `Class` casella.

   Il **File** casella viene visualizzato il file in cui viene dichiarata la classe. (è possibile modificare anche il nome del file). È anche possibile usare il pulsante Sfoglia per selezionare altri file, se si preferisce che le informazioni di intestazione e di implementazione scritte nei file esistenti o in una directory diversa dalla directory del progetto.

    > [!NOTE]
    >  Tutte le classi di distribuzione per le interfacce selezionate verranno inserite nel file specificato qui. Se si desidera che le interfacce per essere dichiarata in intestazioni separate, è necessario eseguire questa procedura guidata per ogni file di intestazione da creare.

    > [!NOTE]
    >  Alcune informazioni di tipo libreria possono essere archiviati nei file con. DLL. OCX, o. Estensioni di file OLB.

1. Scegliere **Fine**.

   La procedura guidata verrà quindi scrivere il codice delle classi di invio utilizzando i nomi di file e la classe specificata.

## <a name="see-also"></a>Vedere anche

[Automation Clients](../mfc/automation-clients.md)

