---
title: Creazione di un controllo Rebar | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- rebar controls [MFC], creating
- CReBarCtrl class [MFC], creating
ms.assetid: 0a012e08-772b-4f6a-af86-7cb651d11d3e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1deb33adc104775cf9b76daf75d4ee08b6475f0a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33342307"
---
# <a name="creating-a-rebar-control"></a>Creazione di un controllo Rebar
[CReBarCtrl](../mfc/reference/crebarctrl-class.md) oggetti devono essere creati prima l'oggetto padre è visibile. In questo modo si riducono le possibilità che si verifichino problemi di disegno.  
  
 Ad esempio, i controlli Rebar (utilizzati negli oggetti della finestra cornice) vengono comunemente utilizzati come finestre padre per i controlli della barra degli strumenti. Di conseguenza, il padre del controllo Rebar è l'oggetto finestra cornice. Poiché l'oggetto finestra cornice è il padre, la funzione membro `OnCreate` (del padre) è una posizione ideale per creare il controllo Rebar.  
  
 Per utilizzare un oggetto `CReBarCtrl`, in genere vengono effettuate le seguenti operazioni:  
  
### <a name="to-use-a-crebarctrl-object"></a>Per utilizzare un oggetto CReBarCtrl  
  
1.  Costruire il [CReBarCtrl](../mfc/reference/crebarctrl-class.md) oggetto.  
  
2.  Chiamare [crea](../mfc/reference/crebarctrl-class.md#create) per creare il controllo comune rebar di Windows e associarlo al `CReBarCtrl` oggetto, che specifica tutti gli stili desiderati.  
  
3.  Caricare una bitmap, con una chiamata a [LoadBitmap](../mfc/reference/cbitmap-class.md#loadbitmap), da utilizzare come sfondo dell'oggetto controllo rebar.  
  
4.  Creare e inizializzare tutti gli oggetti della finestra figlio (barre degli strumenti, controlli della finestra di dialogo e così via) che saranno contenuti nell'oggetto controllo Rebar.  
  
5.  Inizializzare un **REBARBANDINFO** struttura con le informazioni necessarie per la banda sta essere inserito.  
  
6.  Chiamare [InsertBand](../mfc/reference/crebarctrl-class.md#insertband) per inserire le finestre figlio esistenti (ad esempio `m_wndReToolBar`) nel nuovo controllo rebar. Per ulteriori informazioni sull'inserimento di bande in un controllo rebar esistente, vedere [controlli Rebar e bande](../mfc/rebar-controls-and-bands.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CReBarCtrl](../mfc/using-crebarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

