---
title: La gestione dei dati con variabili dati documento | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- documents [MFC], data storage
- friend classes [MFC]
- classes [MFC], friend
- data [MFC]
- data [MFC], documents
- collection classes [MFC], used by document object
- document data [MFC]
- member variables [MFC], document class [MFC]
ms.assetid: e70b87f4-8c30-49e5-8986-521c2ff91704
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c737557d503ca7e0959d159a0818f1ca78280ea2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="managing-data-with-document-data-variables"></a>Gestione di dati con variabili dati documento
Implementare i dati del documento come variabili membro della classe documento. Ad esempio, il programma Scribble dichiara un membro dati di tipo `CObList` , ovvero un elenco collegato che archivia i puntatori a `CObject` oggetti. Questo elenco viene utilizzato per archiviare le matrici di punti che compongono un disegno a mano libera.  
  
 Modalità di implementazione di dati dei membri del documento dipende dalla natura dell'applicazione. Per facilitare la out, MFC fornisce un gruppo di classi di raccolte di"", ovvero matrici, elenchi e mappe (dizionari), incluse le raccolte basate su modelli C++, insieme a classi che incapsulano i diversi tipi di dati, ad esempio `CString`, `CRect`, `CPoint`, `CSize`, e `CTime`. Per ulteriori informazioni su queste classi, vedere il [Cenni preliminari sulla libreria di classe](../mfc/class-library-overview.md) nel *riferimenti alla libreria MFC*.  
  
 Quando si definiscono i dati dei membri del documento, in genere si aggiungerà funzioni membro alla classe di documento per impostare e ottenere gli elementi di dati ed eseguire altre operazioni utili su di essi.  
  
 Le visualizzazioni accedono all'oggetto documento utilizzando il proprio puntatore al documento, installato nella visualizzazione in fase di creazione. È possibile recuperare l'indicatore di misura nelle funzioni membro di una vista tramite la chiamata di `CView` funzione membro **GetDocument**. Assicurarsi di eseguire il cast di questo puntatore al tipo di documento. È quindi possibile accedere membri pubblici del documento tramite il puntatore del mouse.  
  
 Se il trasferimento dei dati spesso richiede l'accesso diretto o si desidera utilizzare i membri non pubblici della classe di documento, si desidera verificare la visualizzazione di classe friend della classe di documento (in termini di C++).  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di documenti](../mfc/using-documents.md)

