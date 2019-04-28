---
title: Nozioni fondamentali su HTML
ms.date: 11/04/2016
helpviewer_keywords:
- HTML [MFC], about HTML
ms.assetid: aab8ea9f-12d4-4bdd-a585-ac3124081a2a
ms.openlocfilehash: 63a866786abc3b1eaa87a06492b43b1c9e354882
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62262996"
---
# <a name="html-basics"></a>Nozioni fondamentali su HTML

La maggior parte dei browser sono in grado di esaminare l'origine HTML delle pagine che è esplorare. Quando si visualizza l'origine verrà visualizzato un numero HTML (Hypertext markup) di tag di lingua, racchiuso tra parentesi angolari (<>), frammisti con il testo.

La procedura seguente usa i tag HTML per compilare una semplice pagina Web. In questi passaggi, si sarà digitare testo normale in un file nel blocco note, apportare alcune modifiche, salvare il file e ricaricare la pagina nel browser per visualizzare le modifiche.

#### <a name="to-create-an-html-file"></a>Per creare un file HTML

1. Aprire Blocco note o qualsiasi editor di testo normale.

1. Dal **File** menu, scegliere **New**.

1. Digitare le righe seguenti:

```
<HTML>
<HEAD>
<TITLE>Top HTML Tags</TITLE>
</HEAD>
</HTML>
```

1. Dal **File** menu, scegliere **salvare**e salvare il file come c:\webpages\First.htm. Lasciare il file aperto nell'editor.

1. Commutatore al browser e dal **File** menu, scegliere **Open**, o un tipo *file://C:/webpages/first.htm* nella casella di modifica URL del browser. Si verrà visualizzata una pagina vuota con la didascalia della finestra "Tag HTML superiore".

   Si noti che i tag vengono abbinati e sono incluse in parentesi acute. I tag non sono tra maiuscole e minuscole, ma l'uso delle maiuscole viene spesso usato per mettere in risalto i tag.

   Il tag \<HTML > inizia il documento e il tag \</HTML > lo termina. I tag di fine (non è sempre obbligatorio) sono gli stessi tag di inizio, ma dispone di una barra (/) davanti al tag. Non devono essere presenti spazi tra la parentesi angolare di (<) e l'inizio del tag.

1. Passare al blocco note e dopo il  \< /HEAD >, digitare:

```
<BODY>
    HTML is swell.
    Life is good.
</BODY>
```

1. Dal **File** menu, scegliere **salvare**.

1. Tornare al browser e aggiornare la pagina.

   Le parole verranno visualizzati nell'area client della finestra del browser. Si noti che il ritorno a capo viene ignorato. Se si desidera disporre di un'interruzione di riga, è necessario includere un `<BR>` tag dopo la prima riga.

   Per tutti i passaggi che seguono, inserire il testo in un punto qualsiasi compreso tra \<BODY > e  \< /BODY > per aggiungere al corpo del documento.

9. Aggiungere un'intestazione:

```
<H3>Here's the big picture</H3>
```

10. Aggiungere un'immagine, usando un file con estensione gif salvato nella stessa directory nella pagina:

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

12. Per numerare l'elenco, usare abbinate \<OL > e \</OL > tag al posto delle \<UL > e  \< /ul > i tag.

Che dovrebbe iniziare a usare. Se viene visualizzata un'ottima funzionalità in una pagina Web, è possibile scoprire come è stato creato, esaminare l'origine HTML. Editor HTML, ad esempio Microsoft Front Page è utilizzabile per creare pagine semplici e avanzate.

Ecco l'intera origine HTML per il file che stai creando:

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

Per una descrizione completa dei tag, attributi e le estensioni, vedere la specifica del linguaggio HTML (Hypertext Markup):

[Versione pubblicata più recente del codice HTML](https://www.w3.org/TR/html/) in W3C.org.

## <a name="see-also"></a>Vedere anche

[Nozioni di base sulla programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)
