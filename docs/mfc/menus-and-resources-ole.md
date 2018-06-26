---
title: Menu e risorse (OLE) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- OLE visual editing servers [MFC]
- status bars [MFC], OLE document applications
- visual editing [MFC], application menus and resources
- string tables [MFC], visual editing applications
- OLE containers [MFC], menus and resources
- OLE applications [MFC], menus and resources
- OLE server applications [MFC], menus and resources
- toolbars [MFC], OLE document applications
- string editing [MFC], visual editing applications
- server applications [MFC], OLE menus and resources
- applications [OLE], menus and resources
- menus [MFC], OLE document applications
- in-place activation [MFC], OLE menus and resources
- containers [MFC], OLE container applications
- OLE menus and resources [MFC]
ms.assetid: 52bfa086-7d3d-466f-94c7-c7061f3bdb3a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cae180ca71b89732e073b9039483b8b46366a42a
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36929634"
---
# <a name="menus-and-resources-ole"></a>Menu e risorse (OLE)
Questo gruppo di articoli viene illustrato l'utilizzo di menu e risorse nelle applicazioni OLE MFC documento.  
  
 OLE modifica visiva inserisce i requisiti aggiuntivi nel menu e altre risorse fornite da applicazioni documento OLE perché esistono diversi modi contenitore in cui entrambi e possono essere avviate e utilizzate nelle applicazioni server (componente). Ad esempio, un'applicazione server completo può eseguire in una qualsiasi delle tre modalità:  
  
-   Autonoma.  
  
-   Sul posto, per modificare un elemento all'interno del contesto di un contenitore.  
  
-   Aperta per la modifica di un elemento all'esterno del contesto del relativo contenitore, spesso in una finestra separata.  
  
 Questa operazione richiede tre layout di menu separati, uno per ogni modalità possibili dell'applicazione. Le tabelle di tasti di scelta rapida sono inoltre necessari per ogni nuova modalità. Un'applicazione contenitore può o potrebbe non supportare l'attivazione sul posto; In questo caso, richiede una nuova struttura di menu e associati tasti di scelta.  
  
 L'attivazione sul posto richiede che le applicazioni contenitore e server devono negoziare per spazio barra dei menu della barra degli strumenti e lo stato. Tutte le risorse devono essere progettate con questo presente. L'articolo [menu e risorse: unione di Menu](../mfc/menus-and-resources-menu-merging.md) illustra in dettaglio in questo argomento.  
  
 A causa di questi problemi, le applicazioni documento OLE create con la creazione guidata applicazione possono avere fino a quattro menu separati e delle risorse di tabelle di tasti di scelta rapida. Questi vengono utilizzati per i motivi seguenti:  
  
|Nome della risorsa|Usa|  
|-------------------|---------|  
|IDR_MAINFRAME|Utilizzato in un'applicazione MDI se è aperto alcun file o in un'applicazione SDI indipendentemente da file aperti. Si tratta del menu standard usato nelle applicazioni non OLE.|  
|IDR _\<progetto > tipo|Se sono file aperti, utilizzato in un'applicazione MDI. Utilizzato quando è in esecuzione un'applicazione autonoma. Si tratta del menu standard usato nelle applicazioni non OLE.|  
|IDR _\<progetto > TYPE_SRVR_IP|Utilizzato per il server o il contenitore quando si apre un oggetto posto.|  
|IDR _\<progetto > TYPE_SRVR_EMB|Utilizzato da un'applicazione server se un oggetto viene aperto senza utilizzare l'attivazione sul posto.|  
  
 Ognuno di questi nomi di risorse rappresenta un menu di scelta e, in genere, una tabella di tasti di scelta rapida. Uno schema analogo deve essere utilizzato in applicazioni MFC che non vengono create con la creazione guidata applicazione.  
  
 Questa sezione illustra gli argomenti relativi ai contenitori, i server e il menu di unione necessarie per implementare l'attivazione sul posto gli articoli seguenti:  
  
-   [Menu e risorse: aggiunte di contenitori](../mfc/menus-and-resources-container-additions.md)  
  
-   [Menu e risorse: aggiunte di server](../mfc/menus-and-resources-server-additions.md)  
  
-   [Menu e risorse: unione di menu](../mfc/menus-and-resources-menu-merging.md)  
  
## <a name="see-also"></a>Vedere anche  
 [OLE](../mfc/ole-in-mfc.md)

