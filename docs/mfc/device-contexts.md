---
title: "Contesti di dispositivo | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
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
  - "BeginPaint (metodo), CPaintDC"
  - "CClientDC (classe), e metodo GetDC"
  - "CClientDC (classe), e metodo ReleaseDC"
  - "CDC (classe), oggetti"
  - "aree client"
  - "aree client, e contesto di dispositivo"
  - "CMetaFileDC (classe), e metodo OnPrepareDC"
  - "CPaintDC (classe), contesto di dispositivo per il disegno"
  - "contesti di dispositivo [C++]"
  - "contesti di dispositivo [C++], informazioni sui contesti di dispositivo"
  - "contesti di dispositivo [C++], CDC (classe)"
  - "disegno indipendente dal dispositivo"
  - "disegno, contesto di dispositivo"
  - "disegno, direttamente nelle finestre"
  - "disegno, in contesti di dispositivo e di mouse"
  - "EndPaint (metodo)"
  - "finestre cornice [C++], contesti di dispositivo"
  - "GDI (oggetti) [C++], contesti di dispositivo"
  - "GetDC (metodo) e CClientDC (classe)"
  - "oggetti grafici, contesti di dispositivo"
  - "metafile e contesti di dispositivo"
  - "mouse [C++], disegno e contesti di dispositivo"
  - "OnPrepareDC (metodo)"
  - "disegno e contesto di dispositivo"
  - "stampanti [C++], contesti di dispositivo"
  - "ReleaseDC (metodo)"
  - "interfaccia utente [C++], contesti di dispositivo"
  - "finestre [C++], e contesto di dispositivo"
  - "finestre [C++], disegno diretto in"
ms.assetid: d0cd51f1-f778-4c7e-bf50-d738d10433c7
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Contesti di dispositivo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un contesto di dispositivo è una struttura di dati windows contenente informazioni sugli attributi di disegno di un dispositivo come una visualizzazione o una stampante.  Tutte le chiamate di disegno vengono effettuate tramite un oggetto di contesto di dispositivo, che incapsula API Windows per tracciare linee, forme e testo.  I contesti di periferica consente le finestre disegnare indipendenti dal dispositivo.  I contesti di periferica possono essere utilizzati per disegnare sullo schermo, la stampante, o a un metafile.  
  
 gli oggetti di[CPaintDC](../mfc/reference/cpaintdc-class.md) incapsulano il linguaggio comune di windows, chiamando la funzione di `BeginPaint`, quindi assorbente il contesto di dispositivo, quindi chiamando la funzione di `EndPaint`.  Il costruttore di `CPaintDC` chiama `BeginPaint` per l'utente e il distruttore viene chiamato `EndPaint`.  Il processo è semplice di creare l'oggetto di [CDC](../mfc/reference/cdc-class.md), disegna quindi elimina l'oggetto di `CDC`.  Nel framework, è possibile di questo processo è automatizzato.  In particolare, la funzione di `OnDraw` viene passata a `CPaintDC` già pronti \(tramite `OnPrepareDC`\) e lo si trascina semplicemente.  Viene eliminato dal framework e il contesto di dispositivo sottostante viene rilasciato finestre sopra dopo la chiamata alla funzione di `OnDraw`.  
  
 gli oggetti di[CClientDC](../mfc/reference/cclientdc-class.md) incapsulano l'utilizzo di un contesto di dispositivo che rappresenta solo l'area client di una finestra.  Il costruttore di `CClientDC` chiama la funzione di `GetDC` e le chiamate del distruttore la funzione di `ReleaseDC`.  gli oggetti di[CWindowDC](../mfc/reference/cwindowdc-class.md) incapsulano un contesto di dispositivo che rappresenta l'intera finestra, incluso il relativo frame.  
  
 gli oggetti di[CMetaFileDC](../mfc/reference/cmetafiledc-class.md) incapsulano trascinare metafile Windows.  A differenza di `CPaintDC` passato a `OnDraw`, è necessario in questo caso chiamare [OnPrepareDC](../Topic/CView::OnPrepareDC.md) manualmente.  
  
## Disegno del mouse  
 La maggior parte di disegnare di un quadro \- programma e così la maggior parte delle operazioni di contesto di dispositivo \- avviene nella funzione membro di `OnDraw` della visualizzazione.  Tuttavia, è comunque possibile utilizzare gli oggetti di contesto di dispositivo per altri scopi.  Ad esempio, per fornire feedback di rilevamento per il movimento del mouse su una visualizzazione, è necessario disegnare direttamente nella visualizzazione senza attendere `OnDraw` da chiamare.  
  
 In questo caso, è possibile utilizzare un oggetto di contesto di dispositivo di [CClientDC](../mfc/reference/cclientdc-class.md) per disegnare direttamente nella visualizzazione.  
  
### Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [\<caps:sentence id\="tgt22" sentenceid\="a12b51e88715aef1e34dc9b8f4447117" class\="tgtSentence"\>Contesti di periferica \(definizione\)\<\/caps:sentence\>](http://msdn.microsoft.com/library/windows/desktop/dd183553)  
  
-   [Disegnare una visualizzazione](../mfc/drawing-in-a-view.md)  
  
-   [Interpretazione di input con una visualizzazione](../mfc/interpreting-user-input-through-a-view.md)  
  
-   [\<caps:sentence id\="tgt25" sentenceid\="f3dbb554cb14503827bf0ebda53953d7" class\="tgtSentence"\>Linee e curve\<\/caps:sentence\>](http://msdn.microsoft.com/library/windows/desktop/dd145028)  
  
-   [\<caps:sentence id\="tgt26" sentenceid\="365f749101c5eabc8b3be48de1dc3d6b" class\="tgtSentence"\>Forme soddisfatte\<\/caps:sentence\>](http://msdn.microsoft.com/library/windows/desktop/dd162714)  
  
-   [\<caps:sentence id\="tgt27" sentenceid\="dc86a6302992c2d9f64d0fc6a8cfef75" class\="tgtSentence"\>Caratteri e testo\<\/caps:sentence\>](http://msdn.microsoft.com/library/windows/desktop/dd144819)  
  
-   [\<caps:sentence id\="tgt28" sentenceid\="62848e3ce5804aa985513a7922ff87b2" class\="tgtSentence"\>Colori\<\/caps:sentence\>](http://msdn.microsoft.com/library/windows/desktop/dd183450)  
  
-   [\<caps:sentence id\="tgt29" sentenceid\="ee85800dfcba9a5bdf11f101e1bbadeb" class\="tgtSentence"\>Spazi di coordinate e trasformazioni\<\/caps:sentence\>](http://msdn.microsoft.com/library/windows/desktop/dd183475)  
  
## Vedere anche  
 [Oggetti finestra](../mfc/window-objects.md)