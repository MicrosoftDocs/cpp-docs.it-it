---
title: 'Contenitori: Implementazione di un contenitore | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- applications [OLE], OLE container
- OLE containers [MFC], implementing
ms.assetid: af1e2079-619a-4eac-9327-985ad875823a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d3693cb7d52a048045f4745b69b45cacc4defc75
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="containers-implementing-a-container"></a>Contenitori: implementazione di un contenitore
In questo articolo viene descritta la procedura per l'implementazione di un contenitore e si fa riferimento ad altri articoli che forniscono che ulteriori spiegazioni sull'implementazione di contenitori. Vengono anche elencate alcune funzionalità facoltative OLE, che si consiglia di implementare e gli articoli che descrivono queste funzionalità.  
  
#### <a name="to-prepare-your-cwinapp-derived-class"></a>Per preparare la classe derivata da CWinApp  
  
1.  Inizializzare le librerie OLE chiamando **AfxOleInit** nel `InitInstance` funzione membro.  
  
2.  Chiamare `CDocTemplate::SetContainerInfo` in `InitInstance` per assegnare il menu e tasti di scelta rapida risorse usate quando un elemento incorporato viene attivato sul posto. Per ulteriori informazioni su questo argomento, vedere [attivazione](../mfc/activation-cpp.md).  
  
 Queste funzionalità sono fornite automaticamente quando si utilizza la creazione guidata applicazione MFC per creare un'applicazione contenitore. Vedere [la creazione di un programma EXE MFC](../mfc/reference/mfc-application-wizard.md).  
  
#### <a name="to-prepare-your-view-class"></a>Per preparare la classe di visualizzazione  
  
1.  Tenere traccia degli elementi selezionati tramite la gestione di un puntatore o un elenco di puntatori, se si supporta selezioni multiple, per gli elementi selezionati. Il `OnDraw` funzione deve disegnare tutti gli elementi OLE.  
  
2.  Eseguire l'override `IsSelected` per verificare se l'elemento passato è attualmente selezionato.  
  
3.  Implementare un **OnInsertObject** gestore di messaggi per visualizzare il **Inserisci oggetto** la finestra di dialogo.  
  
4.  Implementare un `OnSetFocus` messaggio gestore per trasferire OLE sul posto attivo lo stato attivo dalla visualizzazione elemento incorporato.  
  
5.  Implementare un `OnSize` gestore messaggio per informare OLE elemento incorporato che è necessario modificare il rettangolo per riflettere la modifica delle dimensioni di visualizzazione che lo contiene.  
  
 Poiché l'implementazione di queste funzionalità varia notevolmente da un'applicazione al successivo, la creazione guidata applicazione fornisce un'implementazione di base. Probabilmente è necessario personalizzare queste funzioni per l'applicazione funzioni correttamente. Per un esempio, vedere il [contenitore](../visual-cpp-samples.md) esempio.  
  
#### <a name="to-handle-embedded-and-linked-items"></a>Per gestire gli elementi collegati e incorporati  
  
1.  Derivare una classe da [COleClientItem](../mfc/reference/coleclientitem-class.md). Gli oggetti di questa classe rappresentano gli elementi incorporati in o collegati al documento OLE.  
  
2.  Eseguire l'override **OnChange**, `OnChangeItemPosition`, e `OnGetItemPosition`. Queste funzioni handle di ridimensionamento, posizionamento e modifica di elementi incorporati e collegati.  
  
 La creazione guidata applicazione verrà derivare la classe per l'utente, ma sarà probabilmente necessario eseguire l'override **OnChange** e le altre funzioni elencate nel passaggio 2 della procedura precedente. Le implementazioni di base devono essere personalizzati per la maggior parte delle applicazioni, poiché queste funzioni vengono implementate in modo diverso da un'applicazione al successivo. Per esempi di questo tipo, vedere gli esempi MFC [DRAWCLI](../visual-cpp-samples.md) e [contenitore](../visual-cpp-samples.md).  
  
 È necessario aggiungere un numero di elementi alla struttura di menu dell'applicazione contenitore per il supporto OLE. Per ulteriori informazioni, vedere [menu e risorse: aggiunte di contenitori](../mfc/menus-and-resources-container-additions.md).  
  
 È inoltre necessario supportare alcune delle seguenti funzionalità dell'applicazione contenitore:  
  
-   Attivazione sul posto, quando si modifica un elemento incorporato.  
  
     Per ulteriori informazioni, vedere [attivazione](../mfc/activation-cpp.md).  
  
-   Creazione di elementi OLE trascinando e rilasciando una selezione da un'applicazione server.  
  
     Per ulteriori informazioni, vedere [trascinamento della selezione (OLE)](../mfc/drag-and-drop-ole.md).  
  
-   Collegamenti a oggetti incorporati o applicazioni contenitore/server di combinazione.  
  
     Per ulteriori informazioni, vedere [contenitori: funzionalità avanzate](../mfc/containers-advanced-features.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Contenitori](../mfc/containers.md)   
 [Contenitori: elementi client](../mfc/containers-client-items.md)

