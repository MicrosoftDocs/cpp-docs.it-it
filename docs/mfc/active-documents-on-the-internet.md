---
title: Documenti attivi su Internet | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- active documents [MFC], creating
- application wizards [MFC], active documents
- active documents [MFC], programming steps
- application wizards [MFC]
- active documents [MFC], using application wizards
ms.assetid: a46bd8a0-e27a-4116-b1bf-dacdb7ae78d1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a18b84b30445060631589e72f6c158ea9b3626f0
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36930888"
---
# <a name="active-documents-on-the-internet"></a>Documenti attivi su Internet
Documenti attivi forniscono un'estensione a oggetti incorporati tradizionale. Documenti attivi possono essere composti da e vengono visualizzati nell'intera area client. Si eseguire la negoziazione di menu tradizionali e può essere modificati sul posto, nonché una finestra aperta nell'applicazione server. Anziché visualizzare come un piccolo rettangolo circondato da un bordo tratteggiato, documenti attivi vengono frame completo e sempre attiva.  
  
 Documenti attivi possono essere visualizzati in un contenitore come il raccoglitore di Office, che fornisce un modo per creare un documento composito costituito da diversi tipi di documento, ad esempio Excel, Word e il tipo di documento personalizzato, ognuno dei quali può essere modificato frame completo. Documenti attivi possono essere visualizzati anche in un browser, ad esempio Microsoft Internet Explorer, ovvero un contenitore di documenti attivi.  
  
 **Vantaggi di documenti attivi:**  
  
-   I documenti possono essere visualizzati frame completa, nella finestra del client intera.  
  
-   Documenti possono essere aperto in una finestra dell'applicazione separata.  
  
     Per l'apertura del documento, l'applicazione di supporto deve essere presente nel client o essere scaricata separatamente prima di poter eseguire l'applicazione. È possibile scrivere un visualizzatore per fornire funzionalità limitate (Word, PowerPoint ed Excel offrono visualizzatori per i documenti). La versione completa dell'applicazione può fornire supporto modifica completo.  
  
-   Documenti sono sempre attivi sul posto.  
  
-   I comandi di menu viene richiamati dal contenitore possono essere instradati al documento.  
  
-   I documenti possono essere visualizzati in un Web browser. In questo modo l'integrazione tra i documenti e le altre pagine Web.  
  
     Un utente può selezionare una pagina HTML Web, quindi un foglio di calcolo Excel e quindi a un documento che è stata scritta utilizzando MFC il supporto per i documenti attivi. L'utente possa passare tramite l'interfaccia Web comune, come i commutatori browser senza problemi tra i menu e le viste di una pagina HTML, Excel e un documento dell'applicazione.  
  
-   Tutte le applicazioni vengono visualizzate in un frame comune.  
  
## <a name="requirements-for-active-documents"></a>Requisiti per i documenti attivi  
 Le interfacce elencate nella tabella riportata di seguito includono interfacce già richieste per i server incorporati e diverse nuove interfacce specifiche per i documenti attivi. MFC fornisce le implementazioni predefinite per la maggior parte di queste interfacce nel [COleServerDoc](../mfc/reference/coleserverdoc-class.md) classe.  
  
|Un documento che...|Queste interfacce vengono implementate|  
|-------------------------|---------------------------------|  
|Utilizza file composti come relativo meccanismo di archiviazione.|`IPersistStorage`.|  
|Supporta la funzionalità di incorporamento di base di documenti attivi, tra cui creazione da File.|`IPersistFile`, `IOleObject` e `IDataObject`.|  
|Supporta l'attivazione diretta.|`IOleInPlaceObject` e `IOleInPlaceActiveObject` (Usa il contenitore `IOleInPlaceSite` e `IOleInPlaceFrame` interfacce).|  
|Supporta le estensioni di documenti attivi che coinvolgono queste nuove interfacce. Alcune interfacce sono facoltativi.|`IOleDocument`, `IOleDocumentView`, `IOleCommandTarget` e `IPrint`.|  
  
 MFC fornisce supporto per estendere il supporto di server incorporato esistente per i documenti attivi.  
  
## <a name="add-active-document-support-to-a-new-application"></a>Aggiungere il supporto documento attivo in una nuova applicazione  
 Per creare una nuova applicazione con supporto di documenti attivi: nella creazione guidata applicazione MFC, scegliere il **supporto documenti composti** pagina, se viene utilizzato "supporto documenti compositi selezionare" selezionare **server completo** o  **Contenitore/server completo**, selezionare la casella di controllo "Selezionare le opzioni aggiuntive" **server documenti attivi**.  
  
##  <a name="_core_convert_an_existing_mfc_in.2d.process_server_to_an_activex_document_server"></a> Convertire un Server In-Process MFC esistente in un Server di documenti attivi  
 Se l'applicazione è stata creata con una versione di Visual C++ precedenti alla versione 4.2 ed è già un server in-process, è possibile aggiungere il supporto dei documenti attivi apportando modifiche per le classi seguenti:  
  
|Tipo classe|In precedenza derivato da|Modifica da cui derivare|  
|----------------|---------------------------|---------------------------|  
|Cornice sul posto|`COleIPFrameWnd`|`COleDocIPFrameWnd`|  
|Elemento|`COleServerItem`|`CDocObjectServerItem`|  
  
 Verrà inoltre modificare la modalità di immissione delle informazioni nel Registro di sistema e apportare molte altre modifiche. Se l'applicazione non ha attualmente alcun supporto per i componenti COM, è possibile aggiungere il supporto del server eseguendo la procedura guidata applicazione e integrazione il codice specifico del componente COM con l'applicazione esistente.  
  
## <a name="see-also"></a>Vedere anche  
 [Attività di programmazione Internet MFC](../mfc/mfc-internet-programming-tasks.md)   
 [Nozioni di base sulla programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)

