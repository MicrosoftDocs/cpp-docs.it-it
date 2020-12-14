---
description: 'Altre informazioni su: mapping dei messaggi di Windows alla classe'
title: Mapping di messaggi Windows a classi
ms.date: 09/06/2019
helpviewer_keywords:
- MFC dialog boxes [MFC], Windows messages
- message maps [MFC], in dialog class
- Windows messages [MFC], mapping in dialog classes
- messages to dialog class [MFC]
- mappings [MFC], messages to dialog class [MFC]
- message maps [MFC], mapping Windows messages to classes
- messages to dialog class [MFC], mapping
- Class Wizard [MFC]
ms.assetid: a4c6fd1f-1d33-47c9-baa0-001755746d6d
ms.openlocfilehash: cca13c4b262c6373fa3d968438331d5e0ce5f7d3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97280781"
---
# <a name="mapping-windows-messages-to-your-class"></a>Mapping di messaggi Windows a classi

Se è necessaria la finestra di dialogo per gestire i messaggi di Windows, eseguire l'override delle funzioni del gestore appropriate. A tale scopo, scegliere la scheda **Visualizzazione classi** **Esplora soluzioni**, fare clic con il pulsante destro del mouse sulla classe che rappresenta la finestra di dialogo e scegliere [creazione guidata classe](reference/mfc-class-wizard.md). Utilizzare la procedura guidata per eseguire il [mapping dei messaggi](reference/mapping-messages-to-functions.md) alla classe della finestra di dialogo. In questo modo viene scritta una voce della mappa messaggi per ogni messaggio e vengono aggiunte le funzioni membro del gestore di messaggi alla classe. Utilizzare l'editor di codice per scrivere codice nei gestori di messaggi.

È anche possibile eseguire l'override delle funzioni membro di [CDialog](reference/cdialog-class.md) e delle relative classi di base, in particolare [CWnd](reference/cwnd-class.md).

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Gestione e mapping dei messaggi](message-handling-and-mapping.md)

- [Funzioni membro comunemente sottoposte a override](commonly-overridden-member-functions.md)

- [Funzioni membro comunemente aggiunte](commonly-added-member-functions.md)

## <a name="see-also"></a>Vedi anche

[Finestre di dialogo](dialog-boxes.md)<br/>
[Utilizzo delle finestre di dialogo in MFC](life-cycle-of-a-dialog-box.md)
