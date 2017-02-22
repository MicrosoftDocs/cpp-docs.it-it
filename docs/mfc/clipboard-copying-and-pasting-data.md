---
title: "Appunti: copiare e incollare dati | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Appunti, copia di dati"
  - "Appunti, incollare"
ms.assetid: 580e10be-241f-4f9f-94cf-8302edc5beef
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Appunti: copiare e incollare dati
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo argomento descrive il lavoro minimo necessario per implementare la copia e incolla dagli Appunti nell'applicazione OLE.  È consigliabile leggere gli argomenti di [Oggetti dati e origini dati \(OLE\)](../mfc/data-objects-and-data-sources-ole.md) prima di continuare.  
  
 Prima di implementare la copia o incolla, è necessario fornire le funzioni per gestire le opzioni di copia, taglia e incolla del menu Modifica.  
  
##  <a name="_core_copying_or_cutting_data"></a> Copia o rimuovendo i dati  
  
#### Per copiare i dati negli Appunti  
  
1.  Determinare se i dati sono essere copiati dati nativi o sono un incorporato o un elemento collegato.  
  
    -   Se i dati sono incorporati o collegati, ottenere un puntatore all'oggetto di `COleClientItem` selezionato.  
  
    -   Se i dati sono nativi e l'applicazione è un server, creare un nuovo oggetto derivato da `COleServerItem` contenente i dati selezionati.  In caso contrario, creare un oggetto di `COleDataSource` per i dati.  
  
2.  Chiamare la funzione membro di `CopyToClipboard` dell'elemento selezionato.  
  
3.  Se l'utente ha scelto un'operazione taglia anziché un'operazione di copia, eliminare i dati selezionati dall'applicazione.  
  
 Per visualizzare un esempio di questa sequenza, vedere funzioni di **OnEditCopy** e di **OnEditCut** in programmi di esempio [OCLIENT](../top/visual-cpp-samples.md) e [HIERSVR](../top/visual-cpp-samples.md) oLE MFC.  Notare che questi esempi viene gestito un puntatore ai dati attualmente selezionato, pertanto il passaggio 1 è già completa.  
  
##  <a name="_core_pasting_data"></a> Inserire dati  
 Inserire dati è più complesso di copiandolo in quanto è necessario scegliere il formato da utilizzare nell'inserire dati nell'applicazione.  
  
#### Ai dati incolla dagli Appunti  
  
1.  Nella classe di visualizzazione, implementare **OnEditPaste** per gestire gli utenti che scelgono l'opzione incolla dal menu Modifica.  
  
2.  Nella funzione di **OnEditPaste**, creare un oggetto di `COleDataObject` e chiamare la funzione membro di `AttachClipboard` per correlare questo oggetto ai dati negli Appunti.  
  
3.  Chiamare `COleDataObject::IsDataAvailable` per verificare se un determinato formato è disponibile.  
  
     In alternativa, è possibile utilizzare `COleDataObject::BeginEnumFormats` per individuare altri formati fino a trovare uno più appropriato all'applicazione.  
  
4.  Eseguire l'inserimento di formato.  
  
 Per un esempio del funzionamento, vedere l'implementazione delle funzioni membro di **OnEditPaste** nelle classi visualizzazioni definite nei programmi di esempio [OCLIENT](../top/visual-cpp-samples.md) e [HIERSVR](../top/visual-cpp-samples.md) oLE MFC.  
  
> [!TIP]
>  Il vantaggio principale di separazione dell'operazione Incolla nella propria funzione è dello stesso codice dell'inserimento può essere utilizzato quando i dati vengono rilasciati nell'applicazione durante un'operazione di trascinamento della selezione.  Come in OCLIENT e in HIERSVR, la funzione di `OnDrop` può inoltre chiamare **DoPasteItem**, riutilizzante il codice scritto alle operazioni e Incolla di implementazione.  
  
 Per gestire l'opzione edit paste special il menu Modifica, vedere l'argomento [Finestre di dialogo in OLE](../mfc/dialog-boxes-in-ole.md).  
  
### Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Aggiunta di altri formati](../mfc/clipboard-adding-other-formats.md)  
  
-   [Oggetti dati e origini dati OLE e trasferimento dei dati uniforme](../mfc/data-objects-and-data-sources-ole.md)  
  
-   [Funzionalità di trascinamento della selezione OLE](../mfc/drag-and-drop-ole.md)  
  
-   [OLE](../mfc/ole-background.md)  
  
## Vedere anche  
 [Appunti: utilizzo del meccanismo degli Appunti OLE](../mfc/clipboard-using-the-ole-clipboard-mechanism.md)