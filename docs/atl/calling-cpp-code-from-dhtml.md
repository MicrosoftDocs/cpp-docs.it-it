---
title: Chiamata di codice C++ da DHTML | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- DHTML, calling C++ code from
ms.assetid: 37329acd-4c22-40ca-a85a-b7480748f75f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f9e369396c68a041dc5fe027802859c6071e50e8
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32355461"
---
# <a name="calling-c-code-from-dhtml"></a>Chiamata di codice C++ da DHTML
Un controllo DHTML può essere ospitato in un contenitore, ad esempio Test Container o in Internet Explorer. Vedere [test di proprietà ed eventi con Test Container](../mfc/testing-properties-and-events-with-test-container.md) per informazioni su come accedere Test Container.  
  
 Il contenitore che ospita il controllo comunica con il controllo tramite le interfacce di controllo normale. DHTML utilizza l'interfaccia dispatch che termina con "UI" per comunicare con il codice C++ e la risorsa HTML. In [la modifica del controllo DHTML ATL](../atl/modifying-the-atl-dhtml-control.md), sarà possibile applicare l'aggiunta di metodi da chiamare da queste interfacce diverse.  
  
 Per visualizzare un esempio di chiamata di codice C++ da DHTML, [creare un controllo DHTML](../atl/creating-an-atl-dhtml-control.md) utilizzando la creazione guidata controllo ATL ed esaminare il codice nel file di intestazione e nel file HTML.  
  
## <a name="declaring-webbrowser-methods-in-the-header-file"></a>Dichiarazione dei metodi WebBrowser nel File di intestazione  
 Per richiamare metodi C++ dalla UI DHTML, è necessario aggiungere metodi all'interfaccia utente del controllo. Ad esempio, il file di intestazione creato dalla creazione guidata controllo ATL contiene il metodo C++ `OnClick`, che è un membro dell'interfaccia utente del controllo generato dalla procedura guidata.  
  
 Esaminare `OnClick` nel file con estensione h del controllo:  
  
 [!code-cpp[NVC_ATL_COM#4](../atl/codesnippet/cpp/calling-cpp-code-from-dhtml_1.h)]  
  
 Il primo parametro, `pdispBody`, è un puntatore a interfaccia dispatch il corpo dell'oggetto. Il secondo parametro, `varColor`, identifica il colore da applicare al controllo.  
  
## <a name="calling-c-code-in-the-html-file"></a>Chiamata di codice C++ nel File HTML  
 Dopo aver dichiarato i metodi WebBrowser nel file di intestazione, è possibile richiamare i metodi dal file HTML. Si noti che la creazione guidata controllo ATL inserisce tre metodi di distribuzione Windows nel file HTML: tre `OnClick` metodi che inviano messaggi per modificare il colore di sfondo del controllo.  
  
 Esaminare uno dei metodi nel file HTML:  
  
 `<BUTTON onclick='window.external.OnClick(theBody, "red");'>Red</BUTTON>`  
  
 Nel codice HTML di sopra, il metodo esterno della finestra, `OnClick`, viene chiamata come parte del tag del pulsante. Il metodo presenta due parametri: `theBody`, che fa riferimento il corpo del documento HTML, e `"red"`, che indica che il colore di sfondo del controllo verrà modificato e impostato su rosso quando si fa clic sul pulsante. Il `Red` dopo il tag è l'etichetta del pulsante.  
  
 Vedere [la modifica del controllo DHTML ATL](../atl/modifying-the-atl-dhtml-control.md) per ulteriori informazioni su come fornire i propri metodi. Vedere [identificazione degli elementi del progetto controllo DHTML](../atl/identifying-the-elements-of-the-dhtml-control-project.md) per ulteriori informazioni sul file HTML.  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto per controlli DHTML](../atl/atl-support-for-dhtml-controls.md)

