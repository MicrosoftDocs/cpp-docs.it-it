---
title: Test del controllo DHTML ATL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- HTML controls, testing
- testing controls
- DHTML controls
- DHTML controls, testing
ms.assetid: 0e4b4358-80ce-4505-8b06-ef4f30b1d1f0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ea2301a85411cea8d5ffd6121f4fb4f45d3196eb
ms.sourcegitcommit: 997e6b7d336cddb388bb6e9e56527725fcaa0624
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/08/2018
ms.locfileid: "48860849"
---
# <a name="testing-the-atl-dhtml-control"></a>Test del controllo DHTML ATL

Dopo aver creato il progetto, è possibile compilare e testare il controllo di esempio. Prima di procedere, usare **Visualizzazione classi** e **Esplora soluzioni** per esaminare il progetto. Gli elementi del progetto sono descritti più dettagliatamente nelle [identificazione degli elementi del progetto controllo DHTML](../atl/identifying-the-elements-of-the-dhtml-control-project.md).

## <a name="to-build-and-test-the-atl-dhtml-control"></a>Per compilare e testare il controllo DHTML ATL

1. Compilare il progetto. Dal **compilare** menu, fare clic su **Compila soluzione**.

1. Al termine della compilazione, aprire **Test Container**. Visualizzare [test di proprietà ed eventi con Test Container](../mfc/testing-properties-and-events-with-test-container.md) per informazioni su come accedere **Test Container**.

1. Nelle **Test Container**, dal **modificare** dal menu fare clic su **Inserisci nuovo controllo**.

1. Nel **Inserisci controllo** finestra di dialogo, selezionare il controllo dalla casella di riepilogo. Tenere presente che il relativo nome è basato il nome breve è indicato nella creazione guidata controllo ATL. Fare clic su **OK**.

1. Esaminare il controllo. Si noti che disponga di una barra di scorrimento. Utilizzare gli handle del controllo per ridimensionare il controllo per attivare la barra di scorrimento.

1. Testare i pulsanti del controllo. Il colore di sfondo cambia il colore indicato dal pulsante.

1. Chiusura **contenitore di Test**.

Successivamente, provare [la modifica del controllo DHTML](../atl/modifying-the-atl-dhtml-control.md).

## <a name="see-also"></a>Vedere anche

[Supporto per controlli DHTML](../atl/atl-support-for-dhtml-controls.md)
