---
title: "Nozioni fondamentali su HTML | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "HTML, informazioni su HTML"
ms.assetid: aab8ea9f-12d4-4bdd-a585-ac3124081a2a
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Nozioni fondamentali su HTML
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La maggior parte dei browser di funzionalità di analisi dell'origine HTML le pagine a cui passare.  Quando si visualizza origine che verrà visualizzata una serie di tag HTML \(markup language\), racchiusi tra parentesi angolari \(\<\>\), sparpagliate con il testo.  
  
 Di seguito i tag HTML di utilizzo per compilare una pagina Web semplice.  In questi passaggi, digiterete testo normale in un file in Blocco Note, verranno apportate modifiche, salvare il file e ricaricherete la pagina nel browser per visualizzare le modifiche.  
  
#### Per creare un file HTML  
  
1.  Aprire Blocco Note o qualsiasi editore di testo normale.  
  
2.  Dal menu di **File** , scegliere `New`.  
  
3.  Digitare le righe riportate di seguito:  
  
    ```  
    <HTML>  
    <HEAD>  
    <TITLE>Top HTML Tags</TITLE>  
    </HEAD>  
    </HTML>  
    ```  
  
4.  Dal menu di **File** , scegliere **Salva** e salvare il file come c:\\webpages\\First.htm.  Lasciare il file aperto nell'editor.  
  
5.  Passare al browser e dal menu di **File** , scegliere **Apri**, i tipi `file://C:/webpages/first.htm` nella casella di modifica dell'URL del browser.  Verrà visualizzata una pagina vuota con la finestra "caption i tag HTML superiori."  
  
     Si noti che i tag vengono associati e sono inclusi tra parentesi acute.  I tag non viene fatta distinzione tra maiuscole e minuscole, ma l'utilizzo di maiuscole e minuscole viene spesso utilizzato per eseguire i tag è off.  
  
     Il tag \<HTML\> inizia il documento, e il tag \<\/HTML\> termina.  I tag terminare \(obbligatorio\) non sempre sono gli stessi del tag iniziale, ma con una barra \(\/\) prima del tag.  Non dovrebbero essere presenti spazi tra parentesi angolari \(\<\) e l'inizio del tag.  
  
6.  Tornare al Blocco Note e dopo \<la riga\> di \/HEAD, digitare:  
  
    ```  
    <BODY>  
    HTML is swell.  
    Life is good.  
    </BODY>  
    ```  
  
7.  Dal menu di **File**, scegliere **Salva**.  
  
8.  Passare al browser e aggiorna la pagina.  
  
     Le parole verranno visualizzati nell'area client della finestra del browser.  Si noti che il ritorno a capo viene ignorato.  Se si desidera aggiungere un'interruzione di riga, è necessario includere un tag di `<BR>` dopo la prima riga.  
  
     Per tutti i passaggi successivi, inserire il testo ovunque tra \<BODY\> e \<\/BODY\> per aggiungere il corpo del documento.  
  
9. Aggiungere un'intestazione:  
  
    ```  
    <H3>Here's the big picture</H3>  
    ```  
  
10. Aggiungere un'immagine, utilizzando un file .gif salvato nella stessa directory della pagina:  
  
    ```  
    <IMG src="yourfile.gif">  
    ```  
  
11. Aggiungere un elenco:  
  
    ```  
    <UL>Make me an unordered list.  
    <LI>One programmer</LI>  
    <LI>Ten SDKs</LI>  
    <LI>Great Internet Apps</LI>  
    </UL>  
    ```  
  
12. In numeri l'elenco al contrario, utilizzare tag \<OL\> e \<\/OL\> anziché tag \<UL\> e \<\/UL\>.  
  
 Che dovrebbe cominciare a.  Se viene visualizzata una grande funzionalità in una pagina Web, è possibile verificare come è stata creata esaminando l'origine HTML.  Gli editor HTML come Microsoft frontpage possono essere utilizzati per creare pagine semplici che avanzate.  
  
 Di seguito è riportato l'intero l'origine HTML per il file in corso di compilazione:  
  
```  
<HTML>  
<HEAD>  
<TITLE>Top HTML Tags</TITLE>  
</HEAD>  
<BODY>  
HTML is swell.<BR>  
Life is good.  
<H3>Here's the big picture</H3>  
<IMG src="yourfile.gif">  
<UL>Make me an unordered list.  
<LI>One programmer</LI>  
<LI>Ten SDKs</LI>  
<LI>Great Internet Apps</LI>  
</UL>  
</BODY>  
</HTML>  
```  
  
 Per una descrizione completa dei tag, gli attributi e le estensioni, vedere la specifica di markup language \(HTML\):  
  
 [http:\/\/www.w3.org\/pub\/WWW\/MarkUp\/](http://www.w3.org/pub/WWW/MarkUp/)  
  
## Vedere anche  
 [Concetti di base della programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)