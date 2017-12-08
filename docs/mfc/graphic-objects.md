---
title: Oggetti grafici | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- HRGN
- HFONT
- HBITMAP
dev_langs: C++
helpviewer_keywords:
- CRgn class [MFC], HRGN handle type
- HPEN [MFC]
- objects [MFC], graphic
- palettes [MFC], creating in device context
- pens [MFC], creating in device context
- bitmaps [MFC], creating in device contexts
- palette objects [MFC]
- memory [MFC], display contexts
- MFC, graphic objects
- regions [MFC], creating in device context
- CPen class [MFC], HPEN handle type
- GDI objects [MFC]
- HRGN [MFC]
- graphic objects [MFC]
- GDI objects [MFC], graphic-object classes
- CFont class [MFC], HFONT handle type
- HFONT and class CFont [MFC]
- HBITMAP and class CBitmap [MFC]
- fonts [MFC], creating in device context
- images [MFC], graphic objects [MFC]
- CBitmap class [MFC], HBITMAP handle type
- HPALETTE and class CPalette [MFC]
- CBrush class [MFC], HBRUSH handle type
- objects [MFC], graphic objects
- drawing [MFC], in device contexts
- device contexts [MFC], graphic objects [MFC]
- brushes [MFC], creating in device context
- region objects [MFC]
- pen objects [MFC]
- GDI [MFC], graphic-object classes
- graphic objects [MFC], creating in device context
- HBRUSH and class CBrush [MFC]
- painting and device context [MFC]
- CPalette class [MFC], HPALETTE handle type
ms.assetid: 41963b25-34b7-4343-8446-34ba516b83ca
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 29bc2b807cfbe83772eec1982d6fa391f22ce78b
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="graphic-objects"></a>Oggetti grafici
Windows offre un'ampia gamma di strumenti di disegno da usare in contesti di dispositivo, tra cui penne per tracciare linee, pennelli per riempire le aree interne e tipi di carattere per aggiungere testo. MFC offre classi di oggetti grafici equivalenti agli strumenti di disegno di Windows. La tabella seguente mostra le classi disponibili e i tipi di handle Graphics Device Interface (GDI) di Windows equivalenti.  
  
> [!NOTE]
>  GDI+ è incluso in Windows XP ed è disponibile come componente ridistribuibile per Windows NT 4.0 SP6, Windows 2000, Windows 98 e Windows Me. Per scaricare l'ultimo file ridistribuibile, vedere [http://www.microsoft.com/msdownload/platformsdk/sdkupdate/psdkredist.htm](http://www.microsoft.com/msdownload/platformsdk/sdkupdate/psdkredist.htm). Per ulteriori informazioni, vedere la documentazione di GDI+ SDK all'indirizzo: [http://msdn.microsoft.com/library/default.aspurl=/library/gdicpp/GDIPlus/GDIPlus.asp](http://msdn.microsoft.com/library/default.aspurl=/library/gdicpp/gdiplus/gdiplus.asp).  
  
 Questo articolo descrive l'uso di queste classi di oggetti grafici:  
  
### <a name="classes-for-windows-gdi-objects"></a>Classi per oggetti GDI di Windows  
  
|Classe|Tipo di handle di Windows|  
|-----------|-------------------------|  
|[CPen](../mfc/reference/cpen-class.md)|`HPEN`|  
|[CBrush](../mfc/reference/cbrush-class.md)|`HBRUSH`|  
|[CFont](../mfc/reference/cfont-class.md)|**HFONT**|  
|[CBitmap](../mfc/reference/cbitmap-class.md)|`HBITMAP`|  
|[CPalette](../mfc/reference/cpalette-class.md)|`HPALETTE`|  
|[CRgn](../mfc/reference/crgn-class.md)|**HRGN**|  
  
> [!NOTE]
>  La classe [CImage](../atl-mfc-shared/reference/cimage-class.md) offre supporto avanzato per le bitmap.  
  
 Ogni classe di oggetti grafici nella libreria di classi ha un costruttore che permette di creare oggetti grafici di tale classe, che è quindi necessario inizializzare con la funzione di creazione appropriata, ad esempio `CreatePen`.  
  
 Ogni classe di oggetti grafici nella libreria di classi include un operatore di cast che eseguirà il cast di un oggetto MFC all'handle di Windows associato. L'handle risultante è valido fino a quando l'oggetto associato non lo scollega. Utilizzare l'oggetto **scollegamento** funzione membro per scollegare l'handle.  
  
 Il codice seguente esegue il cast di un oggetto `CPen` a un handle di Windows:  
  
 [!code-cpp[NVC_MFCDocViewSDI#5](../mfc/codesnippet/cpp/graphic-objects_1.cpp)]  
  
#### <a name="to-create-a-graphic-object-in-a-device-context"></a>Per creare un oggetto grafico in un contesto di dispositivo  
  
1.  Definire un oggetto grafico sullo stack frame. Inizializzare l'oggetto con la funzione di creazione specifica del tipo, ad esempio `CreatePen`. In alternativa, inizializzare l'oggetto nel costruttore. Vedere la discussione relativa [la creazione di una fase e in due fasi](../mfc/one-stage-and-two-stage-construction-of-objects.md), che fornisce il codice di esempio.  
  
2.  [Selezionare l'oggetto nel contesto di dispositivo corrente](../mfc/selecting-a-graphic-object-into-a-device-context.md), salvando il vecchio oggetto grafico che è stata selezionata prima.  
  
3.  Al termine delle operazioni sull'oggetto grafico corrente, selezionare di nuovo il vecchio oggetto grafico nel contesto di dispositivo per ripristinarne lo stato.  
  
4.  Consentire l'eliminazione automatica dell'oggetto grafico allocato al frame quando si esce dall'ambito.  
  
> [!NOTE]
>  Se si prevede di usare ripetutamente un oggetto grafico, è possibile allocarlo una volta e selezionarlo in un contesto di dispositivo ogni volta che è necessario. Assicurarsi di eliminare l'oggetto quando non è più necessario.  
  
### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Costruzione di oggetti grafici in una fase e in due fasi](../mfc/one-stage-and-two-stage-construction-of-objects.md)  
  
-   [Esempio di creazione di una penna in una e due fasi](../mfc/one-stage-and-two-stage-construction-of-objects.md)  
  
-   [Selezione di un oggetto grafico in un contesto di dispositivo](../mfc/selecting-a-graphic-object-into-a-device-context.md)  
  
-   [Contesti di dispositivo](../mfc/device-contexts.md)  
  
-   [Limitazioni di CImage con sistemi operativi precedenti](../mfc/cimage-limitations-with-earlier-operating-systems.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Oggetti finestra](../mfc/window-objects.md)
