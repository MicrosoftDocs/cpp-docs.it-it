---
title: Nozioni fondamentali su HTML | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- HTML [MFC], about HTML
ms.assetid: aab8ea9f-12d4-4bdd-a585-ac3124081a2a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8c59004f27e0f3a1c629daae621df831fe82cd7a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33347217"
---
# <a name="html-basics"></a>Nozioni fondamentali su HTML
La maggior parte dei browser hanno la possibilità di esaminare l'origine HTML delle pagine, che è esplorare. Quando si visualizza l'origine verrà visualizzato un numero di HTML (Hypertext markup) tag, racchiuso tra parentesi acute (<>), frammisti con testo.  
  
 La procedura seguente usa i tag HTML per compilare una semplice pagina Web. In questa procedura, sarà di testo normale in un file in blocco note, apportare alcune modifiche, salvare il file e ricaricare la pagina nel browser per visualizzare le modifiche.  
  
#### <a name="to-create-an-html-file"></a>Per creare un file HTML  
  
1.  Aprire Blocco note o qualsiasi editor di testo normale.  
  
2.  Dal **File** menu, scegliere `New`.  
  
3.  Digitare le righe seguenti:  
  
 ```  
 <HTML>  
 <HEAD>  
 <TITLE>Top HTML Tags</TITLE>  
 </HEAD>  
 </HTML>  
 ```  
  
4.  Dal **File** menu, scegliere **salvare**e salvare il file come c:\webpages\First.htm. Lasciare il file è aperto nell'editor.  
  
5.  Commutatore nel browser e dal **File** menu, scegliere **aprire**, o tipo `file://C:/webpages/first.htm` nella casella di modifica URL del browser. Si noterà una pagina vuota con la didascalia della finestra "Top HTML Tags".  
  
     Nota: i tag vengono abbinati e sono inclusi tra parentesi quadre. Non fanno distinzione tra i tag, ma l'uso delle maiuscole viene spesso utilizzato per mettere in risalto i tag.  
  
     Il tag \<HTML > consente di avviare il documento e il tag \</HTML > lo termina. Tag di fine (non è sempre obbligatorio) sono uguali ai tag di inizio, ma dispone di una barra (/) prima del tag. Non deve esistere spazi tra la parentesi angolare di (<) e l'inizio del tag.  
  
6.  Commutatore al blocco note e dopo il  \< /HEAD >, digitare:  
  
 ```  
 <BODY>  
    HTML is swell.  
    Life is good.  
 </BODY>  
 ```  
  
7.  Dal **File** menu, scegliere **salvare**.  
  
8.  Tornare al browser e aggiornare la pagina.  
  
     Le parole verranno visualizzati nell'area client della finestra del browser. Si noti che il ritorno a capo viene ignorato. Se si desidera disporre di un'interruzione di riga, è necessario includere un `<BR>` tag dopo la prima riga.  
  
     Per tutti i passaggi che seguono, inserire il testo in un punto qualsiasi tra \<corpo > e  \< /BODY > per aggiungere al corpo del documento.  
  
9. Aggiungere un'intestazione di:  
  
 ```  
 <H3>Here's the big picture</H3>  
 ```  
  
10. Aggiungere un'immagine utilizzando un file con estensione gif salvato nella stessa directory della pagina:  
  
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
  
12. Per numerare l'elenco, utilizzare abbinato \<OL > e \</OL > tag al posto di \<UL > e  \< /ul > tag.  
  
 Che deve iniziare. Se viene visualizzato una grande funzionalità in una pagina Web, è possibile scoprire come è stato creato mediante l'esame dell'origine HTML. Editor HTML, ad esempio Microsoft Front Page può essere utilizzato per creare pagine semplici e complesse.  
  
 Ecco l'intera origine HTML per il file che creato è la:  
  
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
  
 Per una descrizione completa dei tag, gli attributi e le estensioni, vedere la specifica Hypertext Markup Language (HTML):  
  
 [http://www.w3.org/pub/WWW/MarkUp/](http://www.w3.org/pub/www/markup/)  
  
## <a name="see-also"></a>Vedere anche  
 [Nozioni di base sulla programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)

