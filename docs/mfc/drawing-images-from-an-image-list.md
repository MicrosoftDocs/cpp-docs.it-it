---
title: "Disegno di immagini da un elenco di immagini | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CImageList (classe), disegno di immagini da"
  - "disegno, immagini da elenchi immagini"
  - "elenchi di immagini [C++], disegno di immagini da"
  - "immagini [C++], disegno"
ms.assetid: 2f6063fb-1c28-45f8-a333-008c064db11c
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Disegno di immagini da un elenco di immagini
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per disegnare un'immagine, utilizzare la funzione membro [CImageList::Draw](../Topic/CImageList::Draw.md).  Si specificherà un puntatore a un oggetto di contesto di dispositivo, l'indice dell'immagine da disegnare, la posizione nel contesto di dispositivo su cui disegnare l'immagine e un set di flag per indicare lo stile del disegno.  
  
 Quando si specifica lo stile `ILD_TRANSPARENT`, **Disegna** utilizza un processo in due fasi per disegnare un'immagine mascherata.  Innanzitutto, esegue un And logico sui bit dell'immagine e sui bit della maschera.  Esegue un'operazione XOR logica nei risultati della prima operazione e nei bit di background del contesto del dispositivo di destinazione.  Questo processo consente di creare aree trasparenti nell'immagine risultante; ovvero ogni bit bianco nella maschera rende trasparente il bit corrispondente nell'immagine.  
  
 Prima di disegnare un'immagine mascherata su uno sfondo a tinta unita, è necessario utilizzare la funzione membro [SetBkColor](../Topic/CImageList::SetBkColor.md) per impostare il colore di sfondo dell'elenco di immagini sullo stesso colore della destinazione.  Impostare il colore evita di dover creare aree trasparenti nell'immagine e consente a **Disegna** di copiare semplicemente l'immagine al contesto di dispositivo di destinazione, con una conseguente e rilevante crescita delle prestazioni.  Per disegnare l'immagine, specificare lo stile `ILD_NORMAL` quando si chiama **Disegna**.  
  
 È possibile impostare il colore di sfondo per un elenco di immagini mascherato \([CImageList](../mfc/reference/cimagelist-class.md)\) in qualsiasi momento in modo che lo disegni correttamente su uno sfondo a tinta unita.  Impostare il colore di sfondo a `CLR_NONE` disegna le immagini trasparenti per impostazione predefinita.  Per recuperare il colore di sfondo di un elenco di immagini, utilizzare la funzione membro [GetBkColor](../Topic/CImageList::GetBkColor.md).  
  
 Gli stili `ILD_BLEND50` e `ILD_BLEND25` colorano l'immagine con il colore evidenziatore di sistema.  Questi stili sono utili se si utilizza un'immagine mascherata per rappresentare un oggetto che l'utente può selezionare.  Ad esempio, è possibile utilizzare lo stile `ILD_BLEND50` per disegnare l'immagine quando l'utente la seleziona.  
  
 Un'immagine non mascherata viene copiata nel contesto di dispositivo di destinazione tramite l'operazione raster di **SRCCOPY**.  I colori dell'immagine hanno lo stesso aspetto indipendentemente dal colore di sfondo del contesto di dispositivo.  Inoltre, gli stili di disegno specificati in **Disegna** non hanno effetto sull'aspetto di un'immagine non mascherata.  
  
 Oltre alla funzione membro Draw, un altra funzione, [DrawIndirect](../Topic/CImageList::DrawIndirect.md), estende la possibilità di eseguire il rendering di un'immagine.  `DrawIndirect`, accetta come parametro, una struttura [IMAGELISTDRAWPARAMS](http://msdn.microsoft.com/library/windows/desktop/bb761395).  Questa struttura può essere utilizzata per personalizzare il rendering dell'immagine corrente, inclusi l'utilizzo dei codici di operazione raster \(ROP\).  Per ulteriori informazioni sui codici ROP, vedere [Codici di Operazione Raster](http://msdn.microsoft.com/library/windows/desktop/dd162892) e [Bitmap come Brushes](http://msdn.microsoft.com/library/windows/desktop/dd183378) in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
## Vedere anche  
 [Utilizzo di CImageList](../mfc/using-cimagelist.md)   
 [Controlli](../mfc/controls-mfc.md)