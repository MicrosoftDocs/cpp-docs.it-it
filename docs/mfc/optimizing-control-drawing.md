---
title: Ottimizzazione del disegno controllo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC ActiveX controls [MFC], optimizing
ms.assetid: 29ff985d-9bf5-4678-b62d-aad12def75fb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8103e1e342756f9b715c1a0959ed256403e130bf
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="optimizing-control-drawing"></a>Ottimizzazione del disegno dei controlli
Quando viene richiesto a un controllo di disegnarsi in un contesto di dispositivo fornito dal contenitore, il controllo in genere seleziona gli oggetti GDI (come penne, pennelli e tipi di carattere) nel contesto di dispositivo, esegue le operazioni di disegno e ripristina gli oggetti GDI precedenti. Se il contenitore ha più controlli che devono essere disegnati nello stesso contesto di dispositivo e ogni controllo seleziona gli oggetti GDI necessari, è possibile risparmiare tempo se i controlli non ripristinano individualmente gli oggetti precedentemente selezionati. Una volta che tutti i controlli sono stati disegnati, il contenitore può automaticamente ripristinare gli oggetti originali.  
  
 Per rilevare se un contenitore supporta questa tecnica, è possibile chiamare un controllo di [COleControl:: IsOptimizedDraw](../mfc/reference/colecontrol-class.md#isoptimizeddraw) funzione membro. Se la funzione restituisce **TRUE**, il controllo può ignorare il passaggio di ripristino degli oggetti precedentemente selezionati.  
  
 Si consideri un controllo con la seguente funzione `OnDraw` (non ottimizzata):  
  
 [!code-cpp[NVC_MFC_AxOpt#15](../mfc/codesnippet/cpp/optimizing-control-drawing_1.cpp)]  
  
 La penna e il pennello in questo esempio sono variabili locali e pertanto i relativi distruttori verranno chiamati quando escono dall'ambito (quando termina la funzione `OnDraw`). I distruttori cercheranno di eliminare gli oggetti GDI corrispondenti. Ma non devono essere eliminati se si intende lasciarli selezionati nel contesto di dispositivo restituito da `OnDraw`.  
  
 Per evitare il [CPen](../mfc/reference/cpen-class.md) e [CBrush](../mfc/reference/cbrush-class.md) oggetti vengano eliminati definitivamente quando `OnDraw` al termine, memorizzarli in variabili membro anziché in variabili locali. Nella dichiarazione della classe del controllo, aggiungere le dichiarazioni per due nuove variabili membro:  
  
 [!code-cpp[NVC_MFC_AxOpt#16](../mfc/codesnippet/cpp/optimizing-control-drawing_2.h)]  
[!code-cpp[NVC_MFC_AxOpt#17](../mfc/codesnippet/cpp/optimizing-control-drawing_3.h)]  
  
 È quindi possibile riscrivere la funzione `OnDraw` come segue:  
  
 [!code-cpp[NVC_MFC_AxOpt#18](../mfc/codesnippet/cpp/optimizing-control-drawing_4.cpp)]  
  
 In questo modo si evita la creazione della penna e del pennello ogni volta che viene chiamata la funzione `OnDraw`. Il miglioramento nella velocità avviene a costo di mantenere dati aggiuntivi dell'istanza.  
  
 Se la proprietà ForeColor o BackColor cambia, la penna o il pennello devono essere ricreati. A tale scopo, eseguire l'override di [OnForeColorChanged](../mfc/reference/colecontrol-class.md#onforecolorchanged) e [OnBackColorChanged](../mfc/reference/colecontrol-class.md#onbackcolorchanged) funzioni membro:  
  
 [!code-cpp[NVC_MFC_AxOpt#19](../mfc/codesnippet/cpp/optimizing-control-drawing_5.cpp)]  
  
 Infine, eliminare le chiamate di `SelectObject` non necessarie e modificare `OnDraw` come segue:  
  
 [!code-cpp[NVC_MFC_AxOpt#20](../mfc/codesnippet/cpp/optimizing-control-drawing_6.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC: ottimizzazione](../mfc/mfc-activex-controls-optimization.md)   
 [COleControl (classe)](../mfc/reference/colecontrol-class.md)   
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Creazione guidata controllo ActiveX MFC](../mfc/reference/mfc-activex-control-wizard.md)   
 [Controlli ActiveX MFC: disegno di un controllo ActiveX](../mfc/mfc-activex-controls-painting-an-activex-control.md)

