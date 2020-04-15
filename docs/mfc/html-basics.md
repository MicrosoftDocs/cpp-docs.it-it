---
title: Nozioni fondamentali su HTML
ms.date: 11/04/2016
helpviewer_keywords:
- HTML [MFC], about HTML
ms.assetid: aab8ea9f-12d4-4bdd-a585-ac3124081a2a
ms.openlocfilehash: 6d3a692eab47a1309ee0248b51ab8563fb077d5a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81377239"
---
# <a name="html-basics"></a>Nozioni fondamentali su HTML

La maggior parte dei browser ha la capacità di esaminare l'origine HTML delle pagine che si sfogliano. Quando si visualizza l'origine, verranno visualizzati diversi tag HTML (Hypertext markup language), racchiusi tra parentesi angolari (<>), intervallati da testo.

I passaggi seguenti utilizzano i tag HTML per creare una pagina Web semplice. In questa procedura verrà digitato testo normale in un file nel Blocco note, verranno apportate alcune modifiche, verrà salvato il file e ricaricato la pagina nel browser per visualizzare le modifiche.

#### <a name="to-create-an-html-file"></a>Per creare un file HTML

1. Aprire Blocco note o qualsiasi editor di testo normale.

1. Scegliere **Nuovo**dal menu **File** .

1. Digitare le seguenti righe:

    ```html
    <HTML>
    <HEAD>
    <TITLE>Top HTML Tags</TITLE>
    </HEAD>
    </HTML>
    ```

1. Dal menu **File** , scegliere **Salva**e salvare il file con il nome c: Lasciare il file aperto nell'editor.

1. Passare al browser e scegliere **Apri**dal menu **File** oppure digitare *file://C:/webpages/first.htm* nella casella di modifica dell'URL del browser. Dovresti vedere una pagina vuota con la didascalia della finestra "Top HTML Tags".

   Si noti che i tag sono associati e sono inclusi tra parentesi angolari. I tag non fanno distinzione tra maiuscole e minuscole, ma le maiuscole vengono spesso utilizzate per mettere in risalto i tag.

   Il \<tag HTML> avvia il \<documento e il tag /HTML> lo termina. I tag finali (non sempre obbligatori) sono gli stessi del tag iniziale, ma hanno una barra (/) davanti al tag. Non devono essere presenti spazi tra la parentesi angolare (<) e l'inizio del tag.

1. Tornare al Blocco note \<e, dopo la riga /HEAD>, digitare:

    ```html
    <BODY>
        HTML is swell.
        Life is good.
    </BODY>
    ```

1. Scegliere **Salva**dal menu **File** .

1. Tornare al browser e aggiornare la pagina.

   Le parole verranno visualizzate nell'area client della finestra del browser. Si noti che il ritorno a capo viene ignorato. Se si desidera avere un'interruzione di `<BR>` riga, è necessario includere un tag dopo la prima riga.

   Per tutti i passaggi che seguono, inserire il testo in un punto qualsiasi tra \<BODY> e \</BODY> da aggiungere al corpo del documento.

1. Aggiungere un'intestazione:Add a header:

    ```html
    <H3>Here's the big picture</H3>
    ```

1. Aggiungere un'immagine utilizzando un file .gif salvato nella stessa directory della pagina:

    ```html
    <IMG src="yourfile.gif">
    ```

1. Aggiungere un elenco:

    ```html
    <UL>Make me an unordered list.
    <LI>One programmer</LI>
    <LI>Ten SDKs</LI>
    <LI>Great Internet Apps</LI>
    </UL>
    ```

1. Per numerare l'elenco, \<utilizzare \<invece i tag OL \<> \<e /O>L associati al posto dei tag> UL e /UL>.

Questo dovrebbe farti iniziare. Se viene visualizzata una grande funzionalità in una pagina Web, è possibile scoprire come è stata creata esaminando l'origine HTML. Gli editor HTML come Microsoft Front Page possono essere utilizzati per creare pagine semplici e avanzate.

Ecco l'intera origine HTML per il file che hai costruito:

```html
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

Per una descrizione completa di tag, attributi ed estensioni, vedere la specifica HTML (Hypertext Markup Language):

[Ultima versione pubblicata di HTML](https://www.w3.org/TR/html/) a W3C.org.

## <a name="see-also"></a>Vedere anche

[Nozioni di base sulla programmazione Internet MFC](../mfc/mfc-internet-programming-basics.md)
