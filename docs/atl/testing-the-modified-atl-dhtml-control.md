---
title: Test del controllo DHTML ATL modificato | Documenti Microsoft
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
- DHTML controls, testing
ms.assetid: 42316118-9433-410f-9d8a-0efcc1eff824
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b140788cd409aa5a11f93689e96fa40c1a167dfe
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="testing-the-modified-atl-dhtml-control"></a>Test del controllo DHTML ATL modificato
Provare il nuovo controllo per vedere come funziona ora.  
  
#### <a name="to-build-and-test-the-modified-control"></a>Per compilare e testare il controllo modificato  
  
1.  Ricompilare il progetto e aprirlo in Test Container. Vedere [test di proprietà ed eventi con Test Container](../mfc/testing-properties-and-events-with-test-container.md) per informazioni su come accedere Test Container.  
  
     Ridimensionare il controllo per visualizzare tutti i pulsanti aggiunti.  
  
2.  Esaminare i due pulsanti inseriti modificando il codice HTML. Ogni pulsante contiene l'etichetta è identificato in [la modifica del controllo DHTML ATL](../atl/modifying-the-atl-dhtml-control.md): **aggiornamento** e **HelloHTML**.  
  
3.  Due nuovi pulsanti per verificarne il funzionamento di test.  
  
 Ora di testare i metodi che non fanno parte dell'interfaccia utente.  
  
1.  Evidenziare il controllo, in modo da attivare il bordo.  
  
2.  Nel **controllo** menu, fare clic su **richiama metodi**.  
  
 I metodi nell'elenco con l'etichetta **nome del metodo** i metodi che è possibile chiamare il contenitore: `MethodInvoked` e `GoToURL`. Tutti gli altri metodi sono controllati dall'interfaccia utente.  
  
1.  Selezionare un metodo da richiamare e fare clic su `Invoke` per visualizzare la finestra di messaggio del metodo o per passare a www.microsoft.com.  
  
2.  Nel **richiama metodi** la finestra di dialogo, fare clic su **Chiudi**.  
  
 Per ulteriori informazioni sui vari elementi e i file che compongono un controllo DHTML ATL, vedere [identificazione degli elementi del progetto controllo DHTML](../atl/identifying-the-elements-of-the-dhtml-control-project.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto per controlli DHTML](../atl/atl-support-for-dhtml-controls.md)

