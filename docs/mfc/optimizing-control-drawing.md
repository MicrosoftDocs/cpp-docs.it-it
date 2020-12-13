---
description: 'Altre informazioni su: ottimizzazione del disegno dei controlli'
title: Ottimizzazione del disegno dei controlli
ms.date: 11/04/2016
helpviewer_keywords:
- MFC ActiveX controls [MFC], optimizing
ms.assetid: 29ff985d-9bf5-4678-b62d-aad12def75fb
ms.openlocfilehash: 93e948d4a572f4e02c8676b2af1b6f8943004f26
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331814"
---
# <a name="optimizing-control-drawing"></a>Ottimizzazione del disegno dei controlli

Quando viene richiesto a un controllo di disegnarsi in un contesto di dispositivo fornito dal contenitore, il controllo in genere seleziona gli oggetti GDI (come penne, pennelli e tipi di carattere) nel contesto di dispositivo, esegue le operazioni di disegno e ripristina gli oggetti GDI precedenti. Se il contenitore ha più controlli che devono essere disegnati nello stesso contesto di dispositivo e ogni controllo seleziona gli oggetti GDI necessari, è possibile risparmiare tempo se i controlli non ripristinano individualmente gli oggetti precedentemente selezionati. Una volta che tutti i controlli sono stati disegnati, il contenitore può automaticamente ripristinare gli oggetti originali.

Per rilevare se un contenitore supporta questa tecnica, un controllo può chiamare la funzione membro [COleControl:: IsOptimizedDraw](reference/colecontrol-class.md#isoptimizeddraw) . Se questa funzione restituisce **true**, il controllo può ignorare il passaggio normale di ripristino degli oggetti selezionati in precedenza.

Si consideri un controllo con la seguente funzione `OnDraw` (non ottimizzata):

[!code-cpp[NVC_MFC_AxOpt#15](codesnippet/cpp/optimizing-control-drawing_1.cpp)]

La penna e il pennello in questo esempio sono variabili locali e pertanto i relativi distruttori verranno chiamati quando escono dall'ambito (quando termina la funzione `OnDraw`). I distruttori cercheranno di eliminare gli oggetti GDI corrispondenti. Ma non devono essere eliminati se si intende lasciarli selezionati nel contesto di dispositivo restituito da `OnDraw`.

Per impedire che gli oggetti [CPen](reference/cpen-class.md) e [CBrush](reference/cbrush-class.md) vengano eliminati definitivamente al `OnDraw` termine, archiviarli in variabili membro anziché in variabili locali. Nella dichiarazione della classe del controllo, aggiungere le dichiarazioni per due nuove variabili membro:

[!code-cpp[NVC_MFC_AxOpt#16](codesnippet/cpp/optimizing-control-drawing_2.h)]
[!code-cpp[NVC_MFC_AxOpt#17](codesnippet/cpp/optimizing-control-drawing_3.h)]

È quindi possibile riscrivere la funzione `OnDraw` come segue:

[!code-cpp[NVC_MFC_AxOpt#18](codesnippet/cpp/optimizing-control-drawing_4.cpp)]

In questo modo si evita la creazione della penna e del pennello ogni volta che viene chiamata la funzione `OnDraw`. Il miglioramento nella velocità avviene a costo di mantenere dati aggiuntivi dell'istanza.

Se la proprietà ForeColor o BackColor cambia, la penna o il pennello devono essere ricreati. A tale scopo, eseguire l'override delle funzioni membro [OnForeColorChanged](reference/colecontrol-class.md#onforecolorchanged) e [OnBackColorChanged](reference/colecontrol-class.md#onbackcolorchanged) :

[!code-cpp[NVC_MFC_AxOpt#19](codesnippet/cpp/optimizing-control-drawing_5.cpp)]

Infine, eliminare le chiamate di `SelectObject` non necessarie e modificare `OnDraw` come segue:

[!code-cpp[NVC_MFC_AxOpt#20](codesnippet/cpp/optimizing-control-drawing_6.cpp)]

## <a name="see-also"></a>Vedi anche

[Controlli ActiveX MFC: ottimizzazione](mfc-activex-controls-optimization.md)<br/>
[COleControl (classe)](reference/colecontrol-class.md)<br/>
[Controlli ActiveX MFC](mfc-activex-controls.md)<br/>
[Creazione guidata controllo ActiveX MFC](reference/mfc-activex-control-wizard.md)<br/>
[Controlli ActiveX MFC: disegno di un controllo ActiveX](mfc-activex-controls-painting-an-activex-control.md)
