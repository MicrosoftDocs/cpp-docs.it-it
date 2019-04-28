---
title: Test del controllo modificato DHTML ATL
ms.date: 11/06/2018
helpviewer_keywords:
- HTML controls, testing
- testing controls
- DHTML controls, testing
ms.assetid: 42316118-9433-410f-9d8a-0efcc1eff824
ms.openlocfilehash: 55cdaba64ccb95ee5695c082a5e146b1e7dc2cf3
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62196574"
---
# <a name="testing-the-modified-atl-dhtml-control"></a>Test del controllo modificato DHTML ATL

Prova il nuovo controllo per verificarne il funzionamento adesso.

## <a name="to-build-and-test-the-modified-control"></a>Per compilare e testare il controllo modificato

1. Ricompilare il progetto e aprirlo in **Test Container**. Visualizzare [test di proprietà ed eventi con Test Container](../mfc/testing-properties-and-events-with-test-container.md) per informazioni su come accedere **Test Container**.

   Ridimensionare il controllo per visualizzare tutti i pulsanti che è stato aggiunto.

1. Esaminare i due pulsanti che è stato inserito modificando il codice HTML. Ogni pulsante assuma l'etichetta è stata identificata nel [la modifica del controllo DHTML ATL](../atl/modifying-the-atl-dhtml-control.md): **Aggiornare** e **HelloHTML**.

1. Testare i due nuovi pulsanti per verificarne il funzionamento.

Ora testare i metodi che non fanno parte dell'interfaccia utente.

1. Evidenziare il controllo, in modo che il bordo è attivato.

1. Nel **controllo** menu, scegliere **richiama metodi**.

   I metodi nell'elenco con l'etichetta **nome del metodo** rappresentano i metodi che è possibile chiamare il contenitore: `MethodInvoked` e `GoToURL`. Tutti gli altri metodi sono controllate dall'interfaccia utente.

1. Selezionare un metodo da richiamare e scegliere **Invoke** per visualizzare la finestra di messaggio del metodo o a cui passare `www.microsoft.com`.

1. Nel **richiamare i metodi** finestra di dialogo, scegliere **Chiudi**.

Per altre informazioni sui vari elementi e i file che costituiscono un controllo DHTML ATL, vedere [identificazione degli elementi del progetto controllo DHTML](../atl/identifying-the-elements-of-the-dhtml-control-project.md).

## <a name="see-also"></a>Vedere anche

[Supporto per controlli DHTML](../atl/atl-support-for-dhtml-controls.md)
