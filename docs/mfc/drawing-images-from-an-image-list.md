---
title: Disegno di immagini da un elenco di immagini | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CImageList class [MFC], drawing images from
- drawing [MFC], images from image lists
- image lists [MFC], drawing images from
- images [MFC], drawing
ms.assetid: 2f6063fb-1c28-45f8-a333-008c064db11c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0ebc05a83eb22d494a75ed474e315112522af3fc
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36932068"
---
# <a name="drawing-images-from-an-image-list"></a>Disegno di immagini da un elenco di immagini
Per disegnare un'immagine, utilizzare il [CImageList:: Draw](../mfc/reference/cimagelist-class.md#draw) funzione membro. Si specificherà un puntatore a un oggetto di contesto di dispositivo, l'indice dell'immagine da disegnare, la posizione nel contesto di dispositivo su cui disegnare l'immagine e un set di flag per indicare lo stile del disegno.  
  
 Quando si specifica il **ILD_TRANSPARENT** stile, `Draw` utilizza un processo in due fasi per disegnare un'immagine mascherata. Innanzitutto, esegue un'operazione AND logica sui bit dell'immagine e sui bit della maschera. Esegue un'operazione XOR logica sui risultati della prima operazione e sui bit di sfondo del contesto del dispositivo di destinazione. Questo processo consente di creare aree trasparenti nell'immagine risultante; ovvero ogni bit bianco nella maschera rende trasparente il bit corrispondente nell'immagine.  
  
 Prima di disegnare un'immagine mascherata su uno sfondo a tinta unita, è consigliabile utilizzare il [SetBkColor](../mfc/reference/cimagelist-class.md#setbkcolor) funzione membro per impostare il colore di sfondo dell'elenco immagini sullo stesso colore come destinazione. Impostazione del colore evita di dover creare aree trasparenti nell'immagine e abilita `Draw` semplicemente copiare l'immagine per il contesto di dispositivo di destinazione, determinando un miglioramento significativo delle prestazioni. Per disegnare l'immagine, specificare il **ILD_NORMAL** stile quando si chiama `Draw`.  
  
 È possibile impostare il colore di sfondo per un elenco di immagini mascherate ([CImageList](../mfc/reference/cimagelist-class.md)) in qualsiasi momento, in modo che venga eseguito il disegno correttamente su un sfondo a tinta unita. Impostare il colore di sfondo **CLR_NONE** fa sì che le immagini vengano disegnate trasparenti per impostazione predefinita. Per recuperare il colore di sfondo di un elenco di immagini, usare il [GetBkColor](../mfc/reference/cimagelist-class.md#getbkcolor) funzione membro.  
  
 Il **ILD_BLEND25** e **ILD_BLEND50** stili retinano l'immagine con il colore di evidenziazione di sistema. Questi stili sono utili se si utilizza un'immagine mascherata per rappresentare un oggetto che l'utente può selezionare. Ad esempio, è possibile utilizzare il **ILD_BLEND50** stile per disegnare l'immagine quando l'utente la seleziona.  
  
 Un'immagine non mascherata viene copiata al contesto di dispositivo destinazione mediante la `SRCCOPY` operazione raster. I colori dell'immagine hanno lo stesso aspetto indipendentemente dal colore di sfondo del contesto del dispositivo. Gli stili di disegno specificati `Draw` anche non hanno alcun effetto sull'aspetto di un'immagine non mascherata.  
  
 Oltre alla funzione membro Draw, un'altra funzione, [DrawIndirect](../mfc/reference/cimagelist-class.md#drawindirect), estende la possibilità di eseguire il rendering di un'immagine. `DrawIndirect` accetta come parametro, un [IMAGELISTDRAWPARAMS](http://msdn.microsoft.com/library/windows/desktop/bb761395) struttura. Questa struttura può essere utilizzata per personalizzare il rendering dell'immagine corrente, incluso l'utilizzo dei codici di operazione raster (ROP). Per ulteriori informazioni sui codici ROP, vedere [codici di operazione Raster](http://msdn.microsoft.com/library/windows/desktop/dd162892) e [bitmap come pennelli](http://msdn.microsoft.com/library/windows/desktop/dd183378) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CImageList](../mfc/using-cimagelist.md)   
 [Controlli](../mfc/controls-mfc.md)

