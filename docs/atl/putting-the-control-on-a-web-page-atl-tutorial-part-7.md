---
title: Inserimento del controllo in una pagina Web (ATL dell'esercitazione, parte 7) | Microsoft Docs
ms.custom: get-started-article
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 50dc4c95-c95b-4006-b88a-9826f7bdb222
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: edc45522aaff12077de6115105b344ecf41e187e
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43762824"
---
# <a name="putting-the-control-on-a-web-page-atl-tutorial-part-7"></a>Inserimento del controllo in una pagina Web (Esercitazione di ATL, parte 7)

Il controllo è stato completato. Per visualizzare il controllo funziona in una situazione reale, inserirlo in una pagina Web. Un file HTML che contiene il controllo è stato creato quando è stato definito il controllo. Aprire il file PolyCtl. htm **Esplora soluzioni**, ed è possibile visualizzare il controllo in una pagina Web.

In questo passaggio verrà creato lo script della pagina Web per rispondere agli eventi. Si modificherà anche il controllo per Internet Explorer di informare che il controllo è sicuro per lo scripting.

## <a name="scripting-the-web-page"></a>Scripting della pagina Web

Il controllo non esegue ancora alcuna operazione, quindi modificare la pagina Web per rispondere agli eventi inviati.

#### <a name="to-script-the-web-page"></a>Eseguire lo script della pagina Web

1. Aprire PolyCtl. htm e selezionare la visualizzazione HTML. Aggiungere le righe seguenti al codice HTML. Devono essere aggiunte dopo `</OBJECT>` ma prima `</BODY>`.

    ```html
    <SCRIPT LANGUAGE="VBScript">
    <!--
        Sub PolyCtl_ClickIn(x, y)
            PolyCtl.Sides = PolyCtl.Sides + 1
        End Sub
        Sub PolyCtl_ClickOut(x, y)
            PolyCtl.Sides = PolyCtl.Sides - 1
        End Sub
    -->
    </SCRIPT>
    ```

2. Salvare il file HTM.

È stato aggiunto codice VBScript che ottiene la proprietà Sides dal controllo e aumenta il numero di lati di uno se si fa clic all'interno del controllo. Se si fa clic all'esterno del controllo, è ridurre il numero di lati da uno.

## <a name="indicating-that-the-control-is-safe-for-scripting"></a>Che indica che il controllo è sicuro per lo Scripting

È possibile visualizzare la pagina Web con il controllo in Internet Explorer o, più agevolmente, utilizzare la vista del browser Web incorporata in Visual C++. Per visualizzare il controllo nella visualizzazione del Web browser, fare doppio clic su PolyCtl. htm e fare clic su **Visualizza nel Browser**.

In base alle impostazioni di sicurezza correnti di Internet Explorer, si potrebbe ricevere un avviso di sicurezza della finestra di dialogo indicante che il controllo potrebbe non essere sicuro eseguire lo script e potrebbe potenzialmente provocare danni. Ad esempio, se si disponeva di un controllo visualizzato un file, ma presenta anche un `Delete` metodo eliminato un file, potrebbe essere sicuro visualizzarlo in una pagina. Potrebbe non essere sicuro eseguire lo script, tuttavia, poiché qualcuno potrebbe chiamare il `Delete` (metodo).

> [!IMPORTANT]
> Per questa esercitazione, è possibile modificare le impostazioni di sicurezza in Internet Explorer per eseguire i controlli ActiveX non contrassegnati come sicuri. Nel Pannello di controllo, fare clic su **proprietà Internet** e fare clic su **sicurezza** per modificare le impostazioni appropriate. Dopo aver completato l'esercitazione, è possibile modificare le impostazioni di sicurezza nello stato originale.

È possibile avvisare a livello di programmazione Internet Explorer che non necessario visualizzare la finestra di dialogo Avviso di sicurezza per questo controllo specifico. È possibile farlo con il `IObjectSafety` interfaccia e ATL fornisce un'implementazione di questa interfaccia nella classe [IObjectSafetyImpl](../atl/reference/iobjectsafetyimpl-class.md). Per aggiungere l'interfaccia al controllo, aggiungere `IObjectSafetyImpl` al proprio elenco di classi ereditate e aggiungere una voce per tale nella mappa COM.

#### <a name="to-add-iobjectsafetyimpl-to-the-control"></a>Per aggiungere IObjectSafetyImpl al controllo

1. Aggiungere la riga seguente alla fine dell'elenco di classi ereditate in PolyCtl. H e aggiungere una virgola alla riga precedente:

[!code-cpp[NVC_ATL_Windowing#62](../atl/codesnippet/cpp/putting-the-control-on-a-web-page-atl-tutorial-part-7_1.h)]

2. Aggiungere la riga seguente alla mappa COM in PolyCtl. H:

[!code-cpp[NVC_ATL_Windowing#63](../atl/codesnippet/cpp/putting-the-control-on-a-web-page-atl-tutorial-part-7_2.h)]

## <a name="building-and-testing-the-control"></a>Compilazione e test del controllo

Compilare il controllo. Al termine della compilazione, aprire PolyCtl. htm nella visualizzazione esplorazione nuovamente. Questa volta, la pagina Web deve essere visualizzata direttamente senza la finestra di dialogo Avviso di sicurezza. Fare clic all'interno del poligono. il numero di lati aumenta di uno. Fare clic all'esterno del poligono per ridurre il numero di lati. Se si prova a ridurre il numero di lati a meno di tre, si verrà visualizzato il messaggio di errore impostato.

[Torna al passaggio 6](../atl/adding-a-property-page-atl-tutorial-part-6.md)

## <a name="next-steps"></a>Passaggi successivi

Questa operazione conclude l'esercitazione ATL. Per collegamenti a ulteriori informazioni su ATL, vedere la [pagina iniziale di ATL](../atl/active-template-library-atl-concepts.md).

## <a name="see-also"></a>Vedere anche

[Esercitazione](../atl/active-template-library-atl-tutorial.md)
