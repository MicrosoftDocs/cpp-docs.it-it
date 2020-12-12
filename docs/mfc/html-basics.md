---
description: 'Altre informazioni su: Nozioni fondamentali su HTML'
title: Nozioni fondamentali su HTML
ms.date: 11/04/2016
helpviewer_keywords:
- HTML [MFC], about HTML
ms.assetid: aab8ea9f-12d4-4bdd-a585-ac3124081a2a
ms.openlocfilehash: f32926beb9152441169320bf3553b0066f78fa7c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97290245"
---
# <a name="html-basics"></a>Nozioni fondamentali su HTML

La maggior parte dei browser è in grado di esaminare l'origine HTML delle pagine visualizzate. Quando si visualizza l'origine, viene visualizzato un numero di tag HTML (Hypertext Markup Language) racchiusi tra parentesi angolari (<>), intervallati dal testo.

La procedura seguente usa i tag HTML per creare una semplice pagina Web. In questi passaggi si digitano testo normale in un file nel blocco note, si apportano alcune modifiche, si salva il file e si ricarica la pagina nel browser per visualizzare le modifiche.

#### <a name="to-create-an-html-file"></a>Per creare un file HTML

1. Aprire il blocco note o qualsiasi editor di testo normale.

1. Scegliere **nuovo** dal menu **file** .

1. Digitare le righe seguenti:

    ```html
    <HTML>
    <HEAD>
    <TITLE>Top HTML Tags</TITLE>
    </HEAD>
    </HTML>
    ```

1. Scegliere **Salva** dal menu **file** e salvare il file come c:\webpages\First.htm. Lasciare aperto il file nell'editor.

1. Passare al browser e scegliere **Apri** dal menu **File** o digitare *file://C:/webpages/first.htm* nella casella di modifica URL del browser. Verrà visualizzata una pagina vuota con la didascalia della finestra "Top HTML Tags".

   Si noti che i tag sono abbinati e sono inclusi tra parentesi angolari. I tag non fanno distinzione tra maiuscole e minuscole, ma la maiuscola viene spesso usata per far emergere i tag.

   Il tag \<HTML> Avvia il documento e il tag lo \</HTML> termina. I tag di fine (non sempre necessari) corrispondono al tag di inizio, ma hanno una barra (/) davanti al tag. Non devono essere presenti spazi tra la parentesi uncinata (<) e l'inizio del tag.

1. Tornare al blocco note e, dopo la \</HEAD> riga, digitare:

    ```html
    <BODY>
        HTML is swell.
        Life is good.
    </BODY>
    ```

1. Scegliere **Salva** dal menu **file** .

1. Tornare al browser e aggiornare la pagina.

   Le parole verranno visualizzate nell'area client della finestra del browser. Si noti che il ritorno a capo viene ignorato. Se si desidera avere un'interruzioni di riga, è necessario includere un `<BR>` tag dopo la prima riga.

   Per tutti i passaggi successivi, inserire il testo tra \<BODY> e \</BODY> per aggiungere al corpo del documento.

1. Aggiungere un'intestazione:

    ```html
    <H3>Here's the big picture</H3>
    ```

1. Aggiungere un'immagine, usando un file con estensione gif salvato nella stessa directory della pagina:

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

1. Per numerare invece l'elenco, usare \<OL> \</OL> i tag e associati al posto dei \<UL> \</UL> tag e.

Questo dovrebbe iniziare. Se viene visualizzata un'eccezionale funzionalità in una pagina Web, è possibile scoprire come è stata creata esaminando l'origine HTML. Gli editor HTML, ad esempio Microsoft Front Page, possono essere usati per creare pagine semplici e avanzate.

Di seguito è illustrata l'intera origine HTML per il file che si sta compilando:

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

Per una descrizione completa di tag, attributi ed estensioni, vedere la specifica Hypertext Markup Language (HTML):

[Ultima versione pubblicata del codice HTML](https://www.w3.org/TR/html/) in W3C.org.

## <a name="see-also"></a>Vedi anche

[Nozioni fondamentali sulla programmazione Internet MFC](mfc-internet-programming-basics.md)
