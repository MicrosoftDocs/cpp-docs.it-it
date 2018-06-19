---
title: La modifica del controllo DHTML ATL | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- HTML controls, modifying
- DHTML controls
- DHTML controls, modifying
ms.assetid: c053f35f-8629-4600-9595-721f5956777a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3810236aca4661a6cdcd8399294cdb73e97948fd
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32356495"
---
# <a name="modifying-the-atl-dhtml-control"></a>La modifica del controllo DHTML ATL
Creazione guidata controllo ATL fornisce codice di avvio, pertanto, è possibile compilare ed eseguire il controllo e pertanto è possibile vedere come i metodi vengono scritti nei file di progetto e come DHTML effettua la chiamata a codice C++ del controllo utilizzando i metodi di invio. È possibile aggiungere qualsiasi metodo di spedizione all'interfaccia. Quindi, è possibile chiamare i metodi nella risorsa HTML.  
  
#### <a name="to-modify-the-atl-dhtml-control"></a>Per modificare il controllo DHTML ATL  
  
1.  In visualizzazione classi, espandere il progetto di controllo.  
  
     Si noti che l'interfaccia che termina con "UI" dispone di un metodo, `OnClick`. L'interfaccia che non termina in "UI" non dispone di metodi.  
  
2.  Aggiungere un metodo denominato `MethodInvoked` all'interfaccia che non terminano con "UI".  
  
     Questo metodo verrà aggiunto all'interfaccia che viene utilizzato per interagire con il contenitore, non per l'interfaccia utilizzata da DHTML per interagire con il controllo contenitore del controllo. Solo il contenitore è possibile richiamare questo metodo.  
  
3.  Trovare il metodo sottoposto a stub-out nel file con estensione cpp e aggiungere codice per visualizzare una finestra di messaggio, ad esempio:  
  
 [!code-cpp[NVC_ATL_COM#5](../atl/codesnippet/cpp/modifying-the-atl-dhtml-control_1.cpp)]  
  
4.  Aggiungere un altro metodo chiamato `HelloHTML`, solo questa volta, aggiungerlo all'interfaccia che termina con "UI". Trovare sottoposto a stub la `HelloHTML` metodo di estensione cpp file e aggiungere codice per visualizzare una finestra di messaggio, ad esempio:  
  
 [!code-cpp[NVC_ATL_COM#6](../atl/codesnippet/cpp/modifying-the-atl-dhtml-control_2.cpp)]  
  
5.  Aggiungere un terzo metodo, `GoToURL`, per l'interfaccia che non termina in "UI". Implementare questo metodo chiamando [IWebBrowser2:: Navigate](https://msdn.microsoft.com/library/aa752133.aspx), come segue:  
  
 [!code-cpp[NVC_ATL_COM#7](../atl/codesnippet/cpp/modifying-the-atl-dhtml-control_3.cpp)]  
  
     È possibile utilizzare il **IWebBrowser2** metodi perché ATL fornisce un puntatore a interfaccia per l'utente nel file con estensione h.  
  
 Successivamente, modificare la risorsa HTML per richiamare i metodi che è stato creato. Verranno aggiunti tre pulsanti per richiamare tali metodi.  
  
#### <a name="to-modify-the-html-resource"></a>Per modificare la risorsa HTML  
  
1.  In Esplora soluzioni fare doppio clic sul file con estensione htm per visualizzare la risorsa HTML.  
  
     Esaminare il codice HTML, in particolare le chiamate ai metodi di recapito esterni di Windows. Il codice HTML chiama il progetto `OnClick` (metodo) e i parametri indicano il corpo del controllo (`theBody`) e il colore da assegnare ("`red`"). Il testo che segue la chiamata al metodo è l'etichetta visualizzata nel pulsante.  
  
2.  Aggiungere un altro `OnClick` (metodo), solo modifica il colore. Ad esempio:  
  
 ```  
 <br>  
 <br>  
 <BUTTON onclick='window.external.OnClick(theBody, "white");'>Refresh</BUTTON>  
 ```  
  
     Questo metodo creerà un pulsante **aggiornamento**, che l'utente può fare clic per restituire il controllo per lo sfondo bianco originale.  
  
3.  Aggiungere la chiamata di `HelloHTML` metodo creato. Ad esempio:  
  
 ```  
 <br>  
 <br>  
 <BUTTON onclick='window.external.HelloHTML();'>HelloHTML</BUTTON>  
 ```  
  
     Questo metodo creerà un pulsante **HelloHTML**, che l'utente può fare clic per visualizzare il `HelloHTML` finestra di messaggio.  
  
 È ora possibile compilare e [testare il controllo DHTML modificato](../atl/testing-the-modified-atl-dhtml-control.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto per controlli DHTML](../atl/atl-support-for-dhtml-controls.md)

