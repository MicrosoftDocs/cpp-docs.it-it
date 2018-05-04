---
title: Hosting di controlli ActiveX mediante AXHost ATL | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CAxWindow2T class
- Calendar control (ActiveX), hosting with ATL AXHost
- Calendar control (ActiveX)
- ActiveX controls [C++], hosting
- hosting ActiveX controls
- AXHost method
ms.assetid: 2c1200ec-effb-4814-820a-509519699468
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5057a077e8e778fa3d943b736d51d19af8f60fc6
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="hosting-activex-controls-using-atl-axhost"></a>Hosting di controlli ActiveX mediante AXHost ATL
L'esempio in questo argomento viene illustrato come creare AXHost e come ospitare un controllo ActiveX utilizzando varie funzioni ATL. Viene inoltre illustrato come accedere agli eventi di controllo e il sink (utilizzando [IDispEventImpl](../atl/reference/idispeventimpl-class.md)) dal controllo ospitato. Nell'esempio viene ospitato il controllo di calendario in una finestra principale o in una finestra figlio.  
  
 Si noti la definizione del `USE_METHOD` simbolo. È possibile modificare il valore di questo simbolo deve essere compreso tra 1 e 8. Il valore del simbolo determina come verrà creato il controllo:  
  
-   Per i valori dispari di `USE_METHOD`, la chiamata per creare una finestra di sottoclassi di host e lo converte in un host di controllo. Per i valori dispari, il codice crea una finestra figlio che funge da host.  
  
-   Per i valori di `USE_METHOD` compreso tra 1 e 4, accedere al controllo e il sink di eventi vengono eseguite nella chiamata che crea l'host. I valori compresi tra 5 e 8 host per le interfacce di query e collegare il sink.  
  
 Di seguito è disponibile un riepilogo:  
  
|USE_METHOD|Host|Controllare l'accesso e i sink di eventi|Funzione dimostrata|  
|-----------------|----------|--------------------------------------|---------------------------|  
|1|Finestra figlio|Un passaggio|CreateControlLicEx|  
|2|Finestra principale|Un passaggio|AtlAxCreateControlLicEx|  
|3|Finestra figlio|Un passaggio|CreateControlEx|  
|4|Finestra principale|Un passaggio|AtlAxCreateControlEx|  
|5|Finestra figlio|Più passaggi|CreateControlLic|  
|6|Finestra principale|Più passaggi|AtlAxCreateControlLic|  
|7|Finestra figlio|Più passaggi|CreateControl|  
|8|Finestra principale|Più passaggi|AtlAxCreateControl|  
  
 [!code-cpp[NVC_ATL_AxHost#1](../atl/codesnippet/cpp/hosting-activex-controls-using-atl-axhost_1.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Domande frequenti sul contenimento di controllo](../atl/atl-control-containment-faq.md)   
 [AtlAxCreateControl](reference/composite-control-global-functions.md#atlaxcreatecontrol)   
 [AtlAxCreateControlEx](reference/composite-control-global-functions.md#atlaxcreatecontrolex)   
 [AtlAxCreateControlLic](reference/composite-control-global-functions.md#atlaxcreatecontrollic)   
 [AtlAxCreateControlLicEx](reference/composite-control-global-functions.md#atlaxcreatecontrolex)   
 [Classe CAxWindow2T](../atl/reference/caxwindow2t-class.md)   
 [Interfaccia IAxWinHostWindowLic](../atl/reference/iaxwinhostwindowlic-interface.md)

