---
title: Test del controllo modificato DHTML ATL
ms.date: 11/04/2016
helpviewer_keywords:
- HTML controls, testing
- testing controls
- DHTML controls, testing
ms.assetid: 42316118-9433-410f-9d8a-0efcc1eff824
ms.openlocfilehash: f0fec3e2430fd5956e3cc48cd64532efee30926d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50501673"
---
# <a name="testing-the-modified-atl-dhtml-control"></a>Test del controllo modificato DHTML ATL

Prova il nuovo controllo per verificarne il funzionamento adesso.

## <a name="to-build-and-test-the-modified-control"></a>Per compilare e testare il controllo modificato

1. Ricompilare il progetto e aprirlo in **Test Container**. Visualizzare [test di proprietà ed eventi con Test Container](../mfc/testing-properties-and-events-with-test-container.md) per informazioni su come accedere **Test Container**.

   Ridimensionare il controllo per visualizzare tutti i pulsanti che è stato aggiunto.

1. Esaminare i due pulsanti che è stato inserito modificando il codice HTML. Ogni pulsante assuma l'etichetta è stata identificata nel [la modifica del controllo DHTML ATL](../atl/modifying-the-atl-dhtml-control.md): **aggiornare** e **HelloHTML**.

1. Testare i due nuovi pulsanti per verificarne il funzionamento.

Ora testare i metodi che non fanno parte dell'interfaccia utente.

1. Evidenziare il controllo, in modo che il bordo è attivato.

1. Nel **controllo** menu, fare clic su **richiama metodi**.

I metodi nell'elenco con l'etichetta **nome del metodo** rappresentano i metodi che è possibile chiamare il contenitore: `MethodInvoked` e `GoToURL`. Tutti gli altri metodi sono controllate dall'interfaccia utente.

1. Selezionare un metodo da richiamare e fare clic su `Invoke` per visualizzare la finestra di messaggio del metodo oppure passare a www.microsoft.com.

1. Nel **richiamare i metodi** finestra di dialogo, fare clic su **Chiudi**.

Per altre informazioni sui vari elementi e i file che costituiscono un controllo DHTML ATL, vedere [identificazione degli elementi del progetto controllo DHTML](../atl/identifying-the-elements-of-the-dhtml-control-project.md).

## <a name="see-also"></a>Vedere anche

[Supporto per controlli DHTML](../atl/atl-support-for-dhtml-controls.md)
