---
title: Sfondo OLE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- OLE, about OLE
ms.assetid: 5f654eb5-66b1-40c9-9215-bb85356a67f8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 262eee08e1bea410fd8e6d12d9209d35877e4a5f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33355561"
---
# <a name="ole-background"></a>Sfondo OLE
OLE è un meccanismo che consente agli utenti di creare e modificare i documenti che contengono gli elementi o "oggetti" creato da più applicazioni.  
  
> [!NOTE]
>  OLE è stato originariamente l'acronimo di Object Linking and Embedding. Tuttavia, è ora indicato come OLE. Parti di OLE non correlate al collegamento e incorporamento fanno ora parte della tecnologia Active.  
  
 I documenti OLE, denominati documenti composti, integrano di vari tipi di dati o i componenti. Clip audio, fogli di calcolo e bitmap sono esempi tipici di componenti trovati nei documenti OLE. Supporto OLE nell'applicazione consente agli utenti di usare OLE (documenti) senza preoccuparsi di cambio tra le diverse applicazioni. OLE esegue il passaggio per l'utente.  
  
 Utilizzare un'applicazione contenitore per creare documenti composti e un'applicazione server o l'applicazione di componenti per creare gli elementi all'interno del documento contenitore. Le applicazioni che scritte possono essere un contenitore, un server o entrambi.  
  
 OLE incorpora numerosi concetti diversi che tutte le attività verso l'obiettivo di un'agevole interazione tra applicazioni. Queste aree, tra cui:  
  
 Collegamento e incorporamento  
 Collegamento e incorporamento sono i due metodi per l'archiviazione di elementi creati all'interno di un documento OLE che sono stati creati in un'altra applicazione. Per informazioni generali sulle differenze tra i due, vedere l'articolo [sfondo OLE: collegamento e incorporamento](../mfc/ole-background-linking-and-embedding.md). Per ulteriori informazioni, vedere gli articoli [contenitori](../mfc/containers.md) e [server](../mfc/servers.md).  
  
 Attivazione sul posto (modifica visiva)  
 L'attivazione di un elemento incorporato nel contesto del documento contenitore viene chiamato l'attivazione sul posto o modifica visiva. Interfaccia dell'applicazione contenitore cambia per incorporare le funzionalità di applicazione componente che ha creato l'elemento incorporato. Gli elementi collegati non sono mai attivati sul posto in quanto i dati effettivi per l'elemento sono contenuti in un file separato, fuori dal contesto dell'applicazione contenente il collegamento. Per ulteriori informazioni sull'attivazione sul posto, vedere l'articolo [attivazione](../mfc/activation-cpp.md).  
  
> [!NOTE]
>  Collegamento e incorporamento e attivazione sul posto forniscono le funzionalità principali di modifica visiva OLE.  
  
 automazione  
 L'automazione consente a un'applicazione a un'altra applicazione. Applicazione con il controllo è noto come un client di automazione e l'applicazione controllata è noto come server di automazione o un componente di automazione. Per ulteriori informazioni sull'automazione, vedere gli articoli [client di automazione](../mfc/automation-clients.md) e [server di automazione](../mfc/automation-servers.md).  
  
> [!NOTE]
>  Automazione funziona in contesti di tecnologia OLE sia attivo. È possibile automatizzare qualsiasi oggetto basato su COM.  
  
 File compositi  
 File compositi specificando un formato di file standard che semplifica l'archiviazione strutturata di documenti compositi per applicazioni OLE. All'interno di un file composto, le archiviazioni presentano molte funzionalità di directory e flussi presentano molte funzionalità di file. Questa tecnologia è l'acronimo di archiviazione strutturata. Per ulteriori informazioni sui file compositi, vedere l'articolo [contenitori: file compositi](../mfc/containers-compound-files.md).  
  
 Trasferimento dati uniforme  
 Trasferimento di dati uniforme (UDT) è un set di interfacce che consentono di dati essere inviati e ricevuti in modo standard, indipendentemente dal metodo effettivo scelto per il trasferimento dei dati. Form di tipo definito dall'utente che trasferisce la base per i dati tramite trascinamento della selezione. Tipo definito dall'utente viene ora utilizzato come base per il trasferimento di dati esistente di Windows, ad esempio gli Appunti e dinamico dei dati (DDE). Per ulteriori informazioni sul tipo definito dall'utente, vedere l'articolo [oggetti dati e origini dati (OLE)](../mfc/data-objects-and-data-sources-ole.md).  
  
 Trascinamento e rilascio  
 Trascinamento della selezione è una tecnica semplice per utilizzare Modifica diretta per trasferire dati tra applicazioni, tra windows all'interno di un'applicazione, o anche all'interno di un'unica finestra in un'applicazione. I dati da trasferire sono selezionati e trascinati nella destinazione desiderata. Trascinamento della selezione si basa sul trasferimento dati uniforme. Per ulteriori informazioni sul trascinamento della selezione, vedere l'articolo [trascinare e rilasciare](../mfc/drag-and-drop-ole.md).  
  
 Component Object Model  
 Il modello COM (Component Object) fornisce l'infrastruttura utilizzata quando gli oggetti OLE di comunicare tra loro. Le classi OLE MFC semplificano COM per il programmatore. COM è parte della tecnologia Active, poiché gli oggetti COM sottostanti la tecnologia OLE sia attivo. Per ulteriori informazioni su COM, vedere il [Active Template Library (ATL)](../atl/active-template-library-atl-concepts.md) argomenti.  
  
 Alcuni degli argomenti OLE più importanti sono analizzati negli articoli seguenti:  
  
-   [Sfondo OLE: collegamento e incorporamento](../mfc/ole-background-linking-and-embedding.md)  
  
-   [Sfondo OLE: contenitori e server](../mfc/ole-background-containers-and-servers.md)  
  
-   [Sfondo OLE: strategie di implementazione](../mfc/ole-background-implementation-strategies.md)  
  
-   [Sfondo OLE: implementazione MFC](../mfc/ole-background-mfc-implementation.md)  
  
 Per informazioni generali su OLE non disponibili negli articoli sopra, cercare OLE in MSDN.  
  
## <a name="see-also"></a>Vedere anche  
 [OLE](../mfc/ole-in-mfc.md)

