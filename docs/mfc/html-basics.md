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
ms.openlocfilehash: 9c4ebbc8e792e36461f7c52c17fa23815239e323
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36929090"
---
# <a name="html-basics"></a>Nozioni fondamentali su HTML
La maggior parte dei browser includere la capacità di esaminare l'origine HTML delle pagine che è esplorare. Quando si visualizza l'origine verrà visualizzato un numero di tag HTML (linguaggio di markup Hypertext), racchiuso tra parentesi angolari (<>), frammisti con il testo.  
  
 I passaggi seguenti usano i tag HTML per compilare una semplice pagina Web. In questi passaggi, si sarà digitare il testo normale in un file nel blocco note, apportare alcune modifiche, salvare il file e ricaricare la pagina nel browser per visualizzare le modifiche.  
  
#### <a name="to-create-an-html-file"></a>Per creare un file HTML  
  
1.  Aprire Blocco note o qualsiasi editor di testo normale.  
  
2.  Dal **File** menu, scegliere **New**.  
  
3.  Digitare le righe seguenti:  
  
 ```  
 <HTML>  
 <HEAD>  
 <TITLE>Top HTML Tags</TITLE>  
 </HEAD>  
 </HTML>  
 ```  
  
4.  Dal **File** menu, scegliere **salvare**e salvare il file come c:\webpages\First.htm. Lasciare il file aperto nell'editor.  
  
5.  Commutatore nel browser e dal **File** menu, scegliere **Apri**, o un tipo *file://C:/webpages/first.htm* nella casella di modifica URL del browser. Si dovrebbe essere una pagina vuota con la didascalia della finestra "Tag HTML superiore".  
  
     Nota: i tag sono associati e vengono inclusi parentesi angolari. Non fanno distinzione tra i tag, ma l'uso delle maiuscole viene spesso utilizzato per evidenziare i tag.  
  
     Il tag \<HTML > Avvia il documento e il tag \</HTML > lo termina. Tag di fine (non è sempre obbligatorio) corrispondono a quelle del tag di inizio, ma dispone di una barra (/) prima del tag. Non deve esistere spazi tra la parentesi angolare di (<) e l'inizio del tag.  
  
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
  
10. Aggiungere un'immagine, usando un file con estensione gif salvato nella stessa directory della pagina:  
  
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
  
12. Per numerare l'elenco, utilizzare abbinati \<OL > e \</OL > tag anziché il \<UL > e  \< /ul > tag.  
  
 Che deve iniziare. Se viene visualizzato una grande funzionalità in una pagina Web, può scoprire come è stato creato mediante l'analisi dell'origine HTML. Editor HTML, ad esempio Microsoft Front Page può essere utilizzato per creare pagine semplici e avanzate.  
  
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

