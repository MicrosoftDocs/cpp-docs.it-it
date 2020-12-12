---
description: 'Altre informazioni su: disegno di immagini da un elenco di immagini'
title: Disegno di immagini da un elenco di immagini
ms.date: 11/04/2016
helpviewer_keywords:
- CImageList class [MFC], drawing images from
- drawing [MFC], images from image lists
- image lists [MFC], drawing images from
- images [MFC], drawing
ms.assetid: 2f6063fb-1c28-45f8-a333-008c064db11c
ms.openlocfilehash: 2c413092e1e7568488a091acd2b0db175d03dab9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97283459"
---
# <a name="drawing-images-from-an-image-list"></a>Disegno di immagini da un elenco di immagini

Per creare un'immagine, usare la funzione membro [CImageList::D RAW](reference/cimagelist-class.md#draw) . Si specificherà un puntatore a un oggetto di contesto di dispositivo, l'indice dell'immagine da disegnare, la posizione nel contesto di dispositivo su cui disegnare l'immagine e un set di flag per indicare lo stile del disegno.

Quando si specifica lo stile **ILD_TRANSPARENT** , `Draw` in viene utilizzato un processo in due passaggi per creare un'immagine mascherata. Innanzitutto, esegue un'operazione AND logica sui bit dell'immagine e sui bit della maschera. Esegue un'operazione XOR logica sui risultati della prima operazione e sui bit di sfondo del contesto del dispositivo di destinazione. Questo processo consente di creare aree trasparenti nell'immagine risultante; ovvero ogni bit bianco nella maschera rende trasparente il bit corrispondente nell'immagine.

Prima di disegnare un'immagine mascherata su uno sfondo a tinta unita, è necessario usare la funzione membro [SetBkColor](reference/cimagelist-class.md#setbkcolor) per impostare il colore di sfondo dell'elenco di immagini sullo stesso colore della destinazione. L'impostazione del colore Elimina la necessità di creare aree trasparenti nell'immagine e consente `Draw` a di copiare semplicemente l'immagine nel contesto di dispositivo di destinazione, causando un aumento significativo delle prestazioni. Per creare l'immagine, specificare lo stile **ILD_NORMAL** quando si chiama `Draw` .

È possibile impostare il colore di sfondo per un elenco di immagini mascherate ([CImageList](reference/cimagelist-class.md)) in qualsiasi momento, in modo che venga disegnato correttamente in uno sfondo a tinta unita. Se si imposta il colore di sfondo su **CLR_NONE** , per impostazione predefinita le immagini vengono disegnate in modo trasparente. Per recuperare il colore di sfondo di un elenco di immagini, usare la funzione membro [GetBkColor](reference/cimagelist-class.md#getbkcolor) .

Gli stili **ILD_BLEND25** e **ILD_BLEND50** dithering l'immagine con il colore di evidenziazione del sistema. Questi stili sono utili se si utilizza un'immagine mascherata per rappresentare un oggetto che l'utente può selezionare. Ad esempio, è possibile usare lo stile **ILD_BLEND50** per creare l'immagine quando l'utente la seleziona.

Un'immagine non mascherata viene copiata nel contesto di dispositivo di destinazione tramite l' `SRCCOPY` operazione raster. I colori dell'immagine hanno lo stesso aspetto indipendentemente dal colore di sfondo del contesto del dispositivo. Gli stili di disegno specificati in `Draw` non hanno effetto anche sull'aspetto di un'immagine non mascherata.

Oltre alla funzione membro di disegnare, un'altra funzione, [DrawIndirect](reference/cimagelist-class.md#drawindirect), estende la possibilità di eseguire il rendering di un'immagine. `DrawIndirect` accetta come parametro una struttura [IMAGELISTDRAWPARAMS](/windows/win32/api/commctrl/ns-commctrl-imagelistdrawparams) . Questa struttura può essere utilizzata per personalizzare il rendering dell'immagine corrente, incluso l'utilizzo dei codici di operazione raster (ROP). Per altre informazioni sui codici por, vedere [codici operativi raster](/windows/win32/gdi/raster-operation-codes) e [bitmap come pennelli](/windows/win32/gdi/bitmaps-as-brushes) nella Windows SDK.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CImageList](using-cimagelist.md)<br/>
[Controlli](controls-mfc.md)
