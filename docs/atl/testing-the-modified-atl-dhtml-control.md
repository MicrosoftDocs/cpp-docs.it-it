---
description: 'Altre informazioni su: test del controllo DHTML ATL modificato'
title: Test del controllo DHTML ATL modificato
ms.date: 11/06/2018
helpviewer_keywords:
- HTML controls, testing
- testing controls
- DHTML controls, testing
ms.assetid: 42316118-9433-410f-9d8a-0efcc1eff824
ms.openlocfilehash: a797eab308ad7fb8c5c7b72566ec3d57a169370b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97138333"
---
# <a name="testing-the-modified-atl-dhtml-control"></a>Test del controllo DHTML ATL modificato

Provare il nuovo controllo per verificarne il funzionamento.

## <a name="to-build-and-test-the-modified-control"></a>Per compilare e testare il controllo modificato

1. Ricompilare il progetto e aprirlo in **test container**. Per informazioni su come accedere a **test container**, vedere test di [proprietà ed eventi con test container](../mfc/testing-properties-and-events-with-test-container.md) .

   Ridimensionare il controllo in modo da visualizzare tutti i pulsanti aggiunti.

1. Esaminare i due pulsanti inseriti modificando il codice HTML. Ogni pulsante presenta l'etichetta identificata in [modifica del controllo DHTML ATL](../atl/modifying-the-atl-dhtml-control.md): **Refresh** e **HelloHTML**.

1. Testare i due nuovi pulsanti per verificarne il funzionamento.

A questo punto, testare i metodi che non fanno parte dell'interfaccia utente.

1. Evidenziare il controllo, in modo che il bordo sia attivato.

1. Scegliere **richiama metodi** dal menu **controllo** .

   I metodi nell'elenco **nome metodo** sono i metodi che il contenitore può chiamare: `MethodInvoked` e `GoToURL` . Tutti gli altri metodi sono controllati dall'interfaccia utente.

1. Selezionare un metodo da richiamare e scegliere **richiama** per visualizzare la finestra di messaggio del metodo o per passare a `www.microsoft.com` .

1. Nella finestra di dialogo **richiama metodi** scegliere **Chiudi**.

Per ulteriori informazioni sui vari elementi e file che costituiscono un controllo DHTML ATL, vedere Identificazione degli [elementi del progetto di controllo DHTML](../atl/identifying-the-elements-of-the-dhtml-control-project.md).

## <a name="see-also"></a>Vedi anche

[Supporto per controlli DHTML](../atl/atl-support-for-dhtml-controls.md)
