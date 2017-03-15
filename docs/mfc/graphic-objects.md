---
title: "Oggetti grafici | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "HRGN"
  - "HFONT"
  - "HBITMAP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bitmap [C++], creazione in contesti di dispositivo"
  - "pennelli, creazione in contesto di dispositivo"
  - "CBitmap (classe), HBITMAP (tipo di handle)"
  - "CBrush (classe), HBRUSH (tipo di handle)"
  - "CFont (class), HFONT (tipo di handle)"
  - "CPalette (classe), HPALETTE (tipo di handle)"
  - "CPen (classe), HPEN (tipo di handle)"
  - "CRgn (classe), HRGN (tipo di handle)"
  - "contesti di dispositivo, oggetti grafici"
  - "disegno, in contesti di dispositivo"
  - "tipi di carattere [C++], creazione in contesto di dispositivo"
  - "GDI [C++], classi di oggetti grafici"
  - "GDI (oggetti) [C++]"
  - "GDI (oggetti) [C++], classi di oggetti grafici"
  - "oggetti grafici"
  - "oggetti grafici, creazione in contesto di dispositivo"
  - "HBITMAP e classe CBitmap"
  - "HBRUSH e classe CBrush"
  - "HFONT e classe CFont"
  - "HPALETTE e classe CPalette"
  - "HPEN"
  - "HRGN"
  - "immagini [C++], oggetti grafici"
  - "memoria [C++], contesti di visualizzazione"
  - "MFC, oggetti grafici"
  - "oggetti [C++], grafici"
  - "oggetti [C++], oggetti grafici"
  - "disegno e contesto di dispositivo"
  - "oggetti tavolozza"
  - "tavolozze, creazione in contesto di dispositivo"
  - "oggetti penna"
  - "penne, creazione in contesto di dispositivo"
  - "oggetti area"
  - "aree, creazione in contesto di dispositivo"
ms.assetid: 41963b25-34b7-4343-8446-34ba516b83ca
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Oggetti grafici
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Windows offre un'ampia gamma di strumenti di disegno da usare in contesti di dispositivo,  tra cui penne per tracciare linee, pennelli per riempire le aree interne e tipi di carattere per aggiungere testo.  MFC offre classi di oggetti grafici equivalenti agli strumenti di disegno di Windows.  La tabella seguente mostra le classi disponibili e i tipi di handle Graphics Device Interface \(GDI\) di Windows equivalenti.  
  
> [!NOTE]
>  GDI\+ è incluso in Windows XP ed è disponibile come componente ridistribuibile per Windows NT 4.0 SP6, Windows 2000, Windows 98 e Windows Me.  Per scaricare la versione più recente del componente ridistribuibile, vedere [http:\/\/www.microsoft.com\/msdownload\/platformsdk\/sdkupdate\/psdkredist.htm](http://www.microsoft.com/msdownload/platformsdk/sdkupdate/psdkredist.htm).  Per altre informazioni, vedere la documentazione di GDI\+ SDK in MSDN: [http:\/\/msdn.microsoft.com\/library\/default.asp?url\=\/library\/gdicpp\/GDIPlus\/GDIPlus.asp](http://msdn.microsoft.com/library/default.asp?url=/library/gdicpp/GDIPlus/GDIPlus.asp).  
  
 Questo articolo descrive l'uso di queste classi di oggetti grafici:  
  
### Classi per oggetti GDI di Windows  
  
|Classe|Tipo di handle di Windows|  
|------------|-------------------------------|  
|[CPen](../mfc/reference/cpen-class.md)|`HPEN`|  
|[CBrush](../mfc/reference/cbrush-class.md)|`HBRUSH`|  
|[CFont](../mfc/reference/cfont-class.md)|**HFONT**|  
|[CBitmap](../mfc/reference/cbitmap-class.md)|`HBITMAP`|  
|[CPalette](../mfc/reference/cpalette-class.md)|`HPALETTE`|  
|[CRgn](../mfc/reference/crgn-class.md)|**HRGN**|  
  
> [!NOTE]
>  La classe [CImage](../atl-mfc-shared/reference/cimage-class.md) fornisce il supporto avanzato per le bitmap.  
  
 Ogni classe di oggetti grafici nella libreria di classi ha un costruttore che permette di creare oggetti grafici di tale classe, che è quindi necessario inizializzare con la funzione di creazione appropriata, ad esempio `CreatePen`.  
  
 Ogni classe di oggetti grafici nella libreria di classi include un operatore di cast che eseguirà il cast di un oggetto MFC all'handle di Windows associato.  L'handle risultante è valido fino a quando l'oggetto associato non lo scollega.  Usare la funzione membro **Detach** dell'oggetto per scollegare l'handle.  
  
 Il codice seguente esegue il cast di un oggetto `CPen` a un handle di Windows:  
  
 [!code-cpp[NVC_MFCDocViewSDI#5](../mfc/codesnippet/CPP/graphic-objects_1.cpp)]  
  
#### Per creare un oggetto grafico in un contesto di dispositivo  
  
1.  Definire un oggetto grafico sullo stack frame.  Inizializzare l'oggetto con la funzione di creazione specifica del tipo, ad esempio `CreatePen`.  In alternativa, inizializzare l'oggetto nel costruttore.  Vedere la discussione relativa alla [creazione in una fase e in due fasi](../mfc/one-stage-and-two-stage-construction-of-objects.md), che include il codice di esempio.  
  
2.  [Selezionare l'oggetto nel contesto di dispositivo corrente](../mfc/selecting-a-graphic-object-into-a-device-context.md), salvando il vecchio oggetto grafico selezionato prima.  
  
3.  Al termine delle operazioni sull'oggetto grafico corrente, selezionare di nuovo il vecchio oggetto grafico nel contesto di dispositivo per ripristinarne lo stato.  
  
4.  Consentire l'eliminazione automatica dell'oggetto grafico allocato al frame quando si esce dall'ambito.  
  
> [!NOTE]
>  Se si prevede di usare ripetutamente un oggetto grafico, è possibile allocarlo una volta e selezionarlo in un contesto di dispositivo ogni volta che è necessario.  Assicurarsi di eliminare l'oggetto quando non è più necessario.  
  
### Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Costruzione di oggetti grafici in una fase e in due fasi](../mfc/one-stage-and-two-stage-construction-of-objects.md)  
  
-   [Esempio di costruzione di una penna in una fase e in due fasi](../mfc/one-stage-and-two-stage-construction-of-objects.md)  
  
-   [Selezione di un oggetto grafico in un contesto di dispositivo](../mfc/selecting-a-graphic-object-into-a-device-context.md)  
  
-   [Contesti di dispositivo](../mfc/device-contexts.md)  
  
-   [Limitazioni di CImage con sistemi operativi precedenti](../mfc/cimage-limitations-with-earlier-operating-systems.md)  
  
## Vedere anche  
 [Oggetti finestra](../mfc/window-objects.md)