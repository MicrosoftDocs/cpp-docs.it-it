---
description: 'Altre informazioni su: contenitori di controlli ActiveX'
title: Contenitori di controlli ActiveX
ms.date: 09/12/2018
helpviewer_keywords:
- ActiveX control containers [MFC]
- OLE controls [MFC], containers
ms.assetid: 0eb1a713-e607-4c79-a0c7-67c5f1fd5fab
ms.openlocfilehash: 6de379cc152ff35e16366c1b5e920bf3548f4cd4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339115"
---
# <a name="activex-control-containers"></a>Contenitori di controlli ActiveX

Un contenitore di controlli ActiveX è un contenitore che supporta in modo completo i controlli ActiveX e può includerli nelle proprie finestre e finestre di dialogo. Un controllo ActiveX rappresenta un elemento di software riutilizzabile che è possibile utilizzare in molti progetti di sviluppo. I controlli consentono all'utente dell'applicazione di accedere ai database, di monitorare i dati e di effettuare varie selezioni all'interno delle applicazioni. Per ulteriori informazioni sui controlli ActiveX, vedere l'articolo [controlli ActiveX MFC](mfc-activex-controls.md).

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere usata per nuove attività di sviluppo. Per ulteriori informazioni, vedere [controlli ActiveX](activex-controls.md).

In genere i contenitori dei controlli possono assumere due forme in un progetto:

- Finestre di dialogo e finestre simili alle finestre di dialogo come le visualizzazioni di form, dove un controllo ActiveX viene utilizzato in qualche punto nella finestra di dialogo.

- Finestre in un'applicazione, dove un controllo ActiveX viene utilizzato in una barra degli strumenti o in un'altra posizione nella finestra dell'utente.

Il contenitore di controlli ActiveX interagisce con il controllo tramite le [Proprietà](mfc-activex-controls-properties.md)e i [Metodi](mfc-activex-controls-methods.md) esposti. A questi metodi e proprietà, accessibili e modificabili dal contenitore dei controlli, è possibile accedere tramite una classe wrapper nel progetto del contenitore dei controlli ActiveX. Il controllo ActiveX incorporato può anche interagire con il contenitore generando (inviando) [eventi](mfc-activex-controls-events.md) per notificare al contenitore che si è verificata un'azione. Il contenitore dei controlli può scegliere di agire o meno in seguito a queste notifiche.

Articoli aggiuntivi in cui vengono illustrati diversi argomenti, dalla creazione di un progetto del contenitore dei controlli ActiveX ai problemi di implementazione di base relativi ai contenitori dei controlli ActiveX creati con Visual C++:

- [Creazione di un contenitore di controlli ActiveX MFC](reference/creating-an-mfc-activex-control-container.md)

- [Contenitori per i controlli ActiveX](containers-for-activex-controls.md)

- [Contenitori di controlli ActiveX: abilitazione manuale del contenimento dei controlli ActiveX](activex-control-containers-manually-enabling-activex-control-containment.md)

- [Contenitori di controlli ActiveX: inserimento di un controllo in un'applicazione contenitore di controlli](inserting-a-control-into-a-control-container-application.md)

- [Contenitori di controlli ActiveX: connessione di un controllo ActiveX a una variabile membro](activex-control-containers-connecting-an-activex-control-to-a-member-variable.md)

- [Contenitori di controlli ActiveX: gestione di eventi da un controllo ActiveX](activex-control-containers-handling-events-from-an-activex-control.md)

- [Contenitori di controlli ActiveX: visualizzazione e modifica delle proprietà dei controlli](activex-control-containers-viewing-and-modifying-control-properties.md)

- [Contenitori di controlli ActiveX: programmazione di controlli ActiveX in un contenitore di controlli ActiveX](programming-activex-controls-in-a-activex-control-container.md)

- [Contenitori di controlli ActiveX: utilizzo di controlli in un contenitore non di finestra di dialogo](activex-control-containers-using-controls-in-a-non-dialog-container.md)

Per ulteriori informazioni sull'utilizzo di controlli ActiveX in una finestra di dialogo, vedere gli argomenti dell' [editor finestre](../windows/dialog-editor.md) .

Per un elenco di articoli in cui vengono illustrati i dettagli sullo sviluppo di controlli ActiveX mediante Visual C++ e le classi di controlli ActiveX MFC, vedere [controlli ActiveX MFC](mfc-activex-controls.md). Gli articoli sono raggruppati per categorie funzionali.

## <a name="see-also"></a>Vedi anche

[Controlli ActiveX MFC](mfc-activex-controls.md)
