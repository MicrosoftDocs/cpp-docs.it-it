---
title: "Stampa | Microsoft Docs"
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
  - "documenti, stampa"
  - "stampa [MFC]"
  - "stampa [MFC], da framework"
  - "classi visualizzazione, operazioni di stampa"
ms.assetid: be465e8d-b0c9-4fc5-9fa8-d10486064f76
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Stampa
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Visualizzazione indipendente dal dispositivo di risorse di Microsoft Windows.  In MFC, significa che le stesse chiamate di disegno, nella funzione membro di `OnDraw` della classe di visualizzazione, sono responsabili di disegnare sulla visualizzazione e di altri dispositivi, come stampanti.  Per l'anteprima di stampa, il dispositivo di destinazione è un output simulato della stampante alla visualizzazione.  
  
##  <a name="_core_your_role_in_printing_vs.._the_framework.92.s_role"></a> Il ruolo di stampa sul ruolo del Framework  
 La classe visualizzazioni sono responsabili di quanto segue:  
  
-   Notifica al framework di pagine sono nel documento.  
  
-   Quando viene chiesto di stampare una pagina specificata, disegnare parte del documento.  
  
-   Allocare e rilasciare tutte i tipi o di altre risorse \(GDI\) di Graphics Device Interface\) necessarie per la stampa.  
  
-   Se necessario, inviare tutti i codici di escape necessari per modificare la modalità della stampante prima della stampa una pagina specifica, ad esempio, per modificare l'orientamento di stampa nella pagina.  
  
 Le responsabilità del framework sono le seguenti:  
  
-   Visualizzare la finestra di dialogo **Stampa**.  
  
-   Creare un oggetto di [CDC](../mfc/reference/cdc-class.md) per la stampante.  
  
-   Chiamare le funzioni membro di [EndDoc](../Topic/CDC::EndDoc.md) e di [StartDoc](../Topic/CDC::StartDoc.md) dell'oggetto di `CDC`.  
  
-   Chiamare ripetutamente la funzione membro di [StartPage](../Topic/CDC::StartPage.md) dell'oggetto di `CDC`, notificano alla classe di visualizzazione quale la pagina deve essere stampati e chiamare la funzione membro di [EndPage](../Topic/CDC::EndPage.md) dell'oggetto di `CDC`.  
  
-   Chiamare le funzioni sottoponibili a override nella visualizzazione al momento opportuno.  
  
 Gli articoli seguenti illustrano il framework supporta la stampa e anteprima di stampa:  
  
### Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Come default la stampa viene effettuata](../mfc/how-default-printing-is-done.md)  
  
-   [Documenti a più pagine](../mfc/multipage-documents.md)  
  
-   [Intestazioni e piè di pagina](../mfc/headers-and-footers.md)  
  
-   [Allocare risorse GDI per stampare](../mfc/allocating-gdi-resources.md)  
  
-   [Anteprima di stampa](../mfc/print-preview-architecture.md)  
  
## Vedere anche  
 [Stampa e anteprima di stampa](../mfc/printing-and-print-preview.md)